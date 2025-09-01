package sql

/*

#include "gen_qsqldriver.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSqlDriver__DriverFeature int

const (
	QSqlDriver__Transactions           QSqlDriver__DriverFeature = 0
	QSqlDriver__QuerySize              QSqlDriver__DriverFeature = 1
	QSqlDriver__BLOB                   QSqlDriver__DriverFeature = 2
	QSqlDriver__Unicode                QSqlDriver__DriverFeature = 3
	QSqlDriver__PreparedQueries        QSqlDriver__DriverFeature = 4
	QSqlDriver__NamedPlaceholders      QSqlDriver__DriverFeature = 5
	QSqlDriver__PositionalPlaceholders QSqlDriver__DriverFeature = 6
	QSqlDriver__LastInsertId           QSqlDriver__DriverFeature = 7
	QSqlDriver__BatchOperations        QSqlDriver__DriverFeature = 8
	QSqlDriver__SimpleLocking          QSqlDriver__DriverFeature = 9
	QSqlDriver__LowPrecisionNumbers    QSqlDriver__DriverFeature = 10
	QSqlDriver__EventNotifications     QSqlDriver__DriverFeature = 11
	QSqlDriver__FinishQuery            QSqlDriver__DriverFeature = 12
	QSqlDriver__MultipleResultSets     QSqlDriver__DriverFeature = 13
	QSqlDriver__CancelQuery            QSqlDriver__DriverFeature = 14
)

type QSqlDriver__StatementType int

const (
	QSqlDriver__WhereStatement  QSqlDriver__StatementType = 0
	QSqlDriver__SelectStatement QSqlDriver__StatementType = 1
	QSqlDriver__UpdateStatement QSqlDriver__StatementType = 2
	QSqlDriver__InsertStatement QSqlDriver__StatementType = 3
	QSqlDriver__DeleteStatement QSqlDriver__StatementType = 4
)

type QSqlDriver__IdentifierType int

const (
	QSqlDriver__FieldName QSqlDriver__IdentifierType = 0
	QSqlDriver__TableName QSqlDriver__IdentifierType = 1
)

type QSqlDriver__NotificationSource int

const (
	QSqlDriver__UnknownSource QSqlDriver__NotificationSource = 0
	QSqlDriver__SelfSource    QSqlDriver__NotificationSource = 1
	QSqlDriver__OtherSource   QSqlDriver__NotificationSource = 2
)

type QSqlDriver__DbmsType int

const (
	QSqlDriver__UnknownDbms QSqlDriver__DbmsType = 0
	QSqlDriver__MSSqlServer QSqlDriver__DbmsType = 1
	QSqlDriver__MySqlServer QSqlDriver__DbmsType = 2
	QSqlDriver__PostgreSQL  QSqlDriver__DbmsType = 3
	QSqlDriver__Oracle      QSqlDriver__DbmsType = 4
	QSqlDriver__Sybase      QSqlDriver__DbmsType = 5
	QSqlDriver__SQLite      QSqlDriver__DbmsType = 6
	QSqlDriver__Interbase   QSqlDriver__DbmsType = 7
	QSqlDriver__DB2         QSqlDriver__DbmsType = 8
)

type QSqlDriver struct {
	h *C.QSqlDriver
	*qt.QObject
}

func (this *QSqlDriver) cPointer() *C.QSqlDriver {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSqlDriver) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSqlDriver constructs the type using only CGO pointers.
func newQSqlDriver(h *C.QSqlDriver) *QSqlDriver {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QSqlDriver_virtbase(h, &outptr_QObject)

	return &QSqlDriver{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQSqlDriver constructs the type using only unsafe pointers.
func UnsafeNewQSqlDriver(h unsafe.Pointer) *QSqlDriver {
	return newQSqlDriver((*C.QSqlDriver)(h))
}

// NewQSqlDriver constructs a new QSqlDriver object.
func NewQSqlDriver() *QSqlDriver {

	return newQSqlDriver(C.QSqlDriver_new())
}

// NewQSqlDriver2 constructs a new QSqlDriver object.
func NewQSqlDriver2(parent *qt.QObject) *QSqlDriver {

	return newQSqlDriver(C.QSqlDriver_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QSqlDriver) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QSqlDriver_metaObject(this.h)))
}

func (this *QSqlDriver) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSqlDriver_metacast(this.h, param1_Cstring))
}

func QSqlDriver_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSqlDriver_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSqlDriver_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSqlDriver_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlDriver) IsOpen() bool {
	return (bool)(C.QSqlDriver_isOpen(this.h))
}

func (this *QSqlDriver) IsOpenError() bool {
	return (bool)(C.QSqlDriver_isOpenError(this.h))
}

func (this *QSqlDriver) BeginTransaction() bool {
	return (bool)(C.QSqlDriver_beginTransaction(this.h))
}

func (this *QSqlDriver) CommitTransaction() bool {
	return (bool)(C.QSqlDriver_commitTransaction(this.h))
}

func (this *QSqlDriver) RollbackTransaction() bool {
	return (bool)(C.QSqlDriver_rollbackTransaction(this.h))
}

func (this *QSqlDriver) Tables(tableType QSql__TableType) []string {
	var _ma C.struct_miqt_array = C.QSqlDriver_tables(this.h, (C.int)(tableType))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QSqlDriver) PrimaryIndex(tableName string) *QSqlIndex {
	tableName_ms := C.struct_miqt_string{}
	tableName_ms.data = C.CString(tableName)
	tableName_ms.len = C.size_t(len(tableName))
	defer C.free(unsafe.Pointer(tableName_ms.data))
	_goptr := newQSqlIndex(C.QSqlDriver_primaryIndex(this.h, tableName_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlDriver) Record(tableName string) *QSqlRecord {
	tableName_ms := C.struct_miqt_string{}
	tableName_ms.data = C.CString(tableName)
	tableName_ms.len = C.size_t(len(tableName))
	defer C.free(unsafe.Pointer(tableName_ms.data))
	_goptr := newQSqlRecord(C.QSqlDriver_record(this.h, tableName_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlDriver) FormatValue(field *QSqlField, trimStrings bool) string {
	var _ms C.struct_miqt_string = C.QSqlDriver_formatValue(this.h, field.cPointer(), (C.bool)(trimStrings))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlDriver) EscapeIdentifier(identifier string, typeVal QSqlDriver__IdentifierType) string {
	identifier_ms := C.struct_miqt_string{}
	identifier_ms.data = C.CString(identifier)
	identifier_ms.len = C.size_t(len(identifier))
	defer C.free(unsafe.Pointer(identifier_ms.data))
	var _ms C.struct_miqt_string = C.QSqlDriver_escapeIdentifier(this.h, identifier_ms, (C.int)(typeVal))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlDriver) SqlStatement(typeVal QSqlDriver__StatementType, tableName string, rec *QSqlRecord, preparedStatement bool) string {
	tableName_ms := C.struct_miqt_string{}
	tableName_ms.data = C.CString(tableName)
	tableName_ms.len = C.size_t(len(tableName))
	defer C.free(unsafe.Pointer(tableName_ms.data))
	var _ms C.struct_miqt_string = C.QSqlDriver_sqlStatement(this.h, (C.int)(typeVal), tableName_ms, rec.cPointer(), (C.bool)(preparedStatement))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlDriver) LastError() *QSqlError {
	_goptr := newQSqlError(C.QSqlDriver_lastError(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlDriver) Handle() *qt.QVariant {
	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QSqlDriver_handle(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlDriver) HasFeature(f QSqlDriver__DriverFeature) bool {
	return (bool)(C.QSqlDriver_hasFeature(this.h, (C.int)(f)))
}

func (this *QSqlDriver) Close() {
	C.QSqlDriver_close(this.h)
}

func (this *QSqlDriver) CreateResult() *QSqlResult {
	return newQSqlResult(C.QSqlDriver_createResult(this.h))
}

func (this *QSqlDriver) Open(db string, user string, password string, host string, port int, connOpts string) bool {
	db_ms := C.struct_miqt_string{}
	db_ms.data = C.CString(db)
	db_ms.len = C.size_t(len(db))
	defer C.free(unsafe.Pointer(db_ms.data))
	user_ms := C.struct_miqt_string{}
	user_ms.data = C.CString(user)
	user_ms.len = C.size_t(len(user))
	defer C.free(unsafe.Pointer(user_ms.data))
	password_ms := C.struct_miqt_string{}
	password_ms.data = C.CString(password)
	password_ms.len = C.size_t(len(password))
	defer C.free(unsafe.Pointer(password_ms.data))
	host_ms := C.struct_miqt_string{}
	host_ms.data = C.CString(host)
	host_ms.len = C.size_t(len(host))
	defer C.free(unsafe.Pointer(host_ms.data))
	connOpts_ms := C.struct_miqt_string{}
	connOpts_ms.data = C.CString(connOpts)
	connOpts_ms.len = C.size_t(len(connOpts))
	defer C.free(unsafe.Pointer(connOpts_ms.data))
	return (bool)(C.QSqlDriver_open(this.h, db_ms, user_ms, password_ms, host_ms, (C.int)(port), connOpts_ms))
}

func (this *QSqlDriver) SubscribeToNotification(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QSqlDriver_subscribeToNotification(this.h, name_ms))
}

func (this *QSqlDriver) UnsubscribeFromNotification(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QSqlDriver_unsubscribeFromNotification(this.h, name_ms))
}

func (this *QSqlDriver) SubscribedToNotifications() []string {
	var _ma C.struct_miqt_array = C.QSqlDriver_subscribedToNotifications(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QSqlDriver) IsIdentifierEscaped(identifier string, typeVal QSqlDriver__IdentifierType) bool {
	identifier_ms := C.struct_miqt_string{}
	identifier_ms.data = C.CString(identifier)
	identifier_ms.len = C.size_t(len(identifier))
	defer C.free(unsafe.Pointer(identifier_ms.data))
	return (bool)(C.QSqlDriver_isIdentifierEscaped(this.h, identifier_ms, (C.int)(typeVal)))
}

func (this *QSqlDriver) StripDelimiters(identifier string, typeVal QSqlDriver__IdentifierType) string {
	identifier_ms := C.struct_miqt_string{}
	identifier_ms.data = C.CString(identifier)
	identifier_ms.len = C.size_t(len(identifier))
	defer C.free(unsafe.Pointer(identifier_ms.data))
	var _ms C.struct_miqt_string = C.QSqlDriver_stripDelimiters(this.h, identifier_ms, (C.int)(typeVal))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlDriver) SetNumericalPrecisionPolicy(precisionPolicy QSql__NumericalPrecisionPolicy) {
	C.QSqlDriver_setNumericalPrecisionPolicy(this.h, (C.int)(precisionPolicy))
}

func (this *QSqlDriver) NumericalPrecisionPolicy() QSql__NumericalPrecisionPolicy {
	return (QSql__NumericalPrecisionPolicy)(C.QSqlDriver_numericalPrecisionPolicy(this.h))
}

func (this *QSqlDriver) DbmsType() QSqlDriver__DbmsType {
	return (QSqlDriver__DbmsType)(C.QSqlDriver_dbmsType(this.h))
}

func (this *QSqlDriver) CancelQuery() bool {
	return (bool)(C.QSqlDriver_cancelQuery(this.h))
}

func (this *QSqlDriver) Notification(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QSqlDriver_notification(this.h, name_ms)
}
func (this *QSqlDriver) OnNotification(slot func(name string)) {
	C.QSqlDriver_connect_notification(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSqlDriver_notification
func miqt_exec_callback_QSqlDriver_notification(cb C.intptr_t, name C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	gofunc(slotval1)
}

func (this *QSqlDriver) Notification2(name string, source QSqlDriver__NotificationSource, payload *qt.QVariant) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QSqlDriver_notification2(this.h, name_ms, (C.int)(source), (*C.QVariant)(payload.UnsafePointer()))
}
func (this *QSqlDriver) OnNotification2(slot func(name string, source QSqlDriver__NotificationSource, payload *qt.QVariant)) {
	C.QSqlDriver_connect_notification2(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSqlDriver_notification2
func miqt_exec_callback_QSqlDriver_notification2(cb C.intptr_t, name C.struct_miqt_string, source C.int, payload *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string, source QSqlDriver__NotificationSource, payload *qt.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret
	slotval2 := (QSqlDriver__NotificationSource)(source)

	slotval3 := qt.UnsafeNewQVariant(unsafe.Pointer(payload))

	gofunc(slotval1, slotval2, slotval3)
}

func QSqlDriver_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSqlDriver_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSqlDriver_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSqlDriver_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSqlDriver_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSqlDriver_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSqlDriver_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSqlDriver_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QSqlDriver that was directly constructed.
func (this *QSqlDriver) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QSqlDriver_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QSqlDriver that was directly constructed.
func (this *QSqlDriver) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSqlDriver_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QSqlDriver that was directly constructed.
func (this *QSqlDriver) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSqlDriver_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QSqlDriver that was directly constructed.
func (this *QSqlDriver) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSqlDriver_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QSqlDriver) callVirtualBase_IsOpen() bool {

	return (bool)(C.QSqlDriver_virtualbase_isOpen(unsafe.Pointer(this.h)))

}
func (this *QSqlDriver) OnIsOpen(slot func(super func() bool) bool) {
	ok := C.QSqlDriver_override_virtual_isOpen(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_isOpen
func miqt_exec_callback_QSqlDriver_isOpen(self *C.QSqlDriver, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_IsOpen)

	return (C.bool)(virtualReturn)

}

func (this *QSqlDriver) callVirtualBase_BeginTransaction() bool {

	return (bool)(C.QSqlDriver_virtualbase_beginTransaction(unsafe.Pointer(this.h)))

}
func (this *QSqlDriver) OnBeginTransaction(slot func(super func() bool) bool) {
	ok := C.QSqlDriver_override_virtual_beginTransaction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_beginTransaction
func miqt_exec_callback_QSqlDriver_beginTransaction(self *C.QSqlDriver, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_BeginTransaction)

	return (C.bool)(virtualReturn)

}

func (this *QSqlDriver) callVirtualBase_CommitTransaction() bool {

	return (bool)(C.QSqlDriver_virtualbase_commitTransaction(unsafe.Pointer(this.h)))

}
func (this *QSqlDriver) OnCommitTransaction(slot func(super func() bool) bool) {
	ok := C.QSqlDriver_override_virtual_commitTransaction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_commitTransaction
func miqt_exec_callback_QSqlDriver_commitTransaction(self *C.QSqlDriver, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_CommitTransaction)

	return (C.bool)(virtualReturn)

}

func (this *QSqlDriver) callVirtualBase_RollbackTransaction() bool {

	return (bool)(C.QSqlDriver_virtualbase_rollbackTransaction(unsafe.Pointer(this.h)))

}
func (this *QSqlDriver) OnRollbackTransaction(slot func(super func() bool) bool) {
	ok := C.QSqlDriver_override_virtual_rollbackTransaction(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_rollbackTransaction
func miqt_exec_callback_QSqlDriver_rollbackTransaction(self *C.QSqlDriver, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_RollbackTransaction)

	return (C.bool)(virtualReturn)

}

func (this *QSqlDriver) callVirtualBase_Tables(tableType QSql__TableType) []string {

	var _ma C.struct_miqt_array = C.QSqlDriver_virtualbase_tables(unsafe.Pointer(this.h), (C.int)(tableType))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret

}
func (this *QSqlDriver) OnTables(slot func(super func(tableType QSql__TableType) []string, tableType QSql__TableType) []string) {
	ok := C.QSqlDriver_override_virtual_tables(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_tables
func miqt_exec_callback_QSqlDriver_tables(self *C.QSqlDriver, cb C.intptr_t, tableType C.int) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(tableType QSql__TableType) []string, tableType QSql__TableType) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QSql__TableType)(tableType)

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_Tables, slotval1)
	virtualReturn_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_i_ms := C.struct_miqt_string{}
		virtualReturn_i_ms.data = C.CString(virtualReturn[i])
		virtualReturn_i_ms.len = C.size_t(len(virtualReturn[i]))
		defer C.free(unsafe.Pointer(virtualReturn_i_ms.data))
		virtualReturn_CArray[i] = virtualReturn_i_ms
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QSqlDriver) callVirtualBase_PrimaryIndex(tableName string) *QSqlIndex {
	tableName_ms := C.struct_miqt_string{}
	tableName_ms.data = C.CString(tableName)
	tableName_ms.len = C.size_t(len(tableName))
	defer C.free(unsafe.Pointer(tableName_ms.data))

	_goptr := newQSqlIndex(C.QSqlDriver_virtualbase_primaryIndex(unsafe.Pointer(this.h), tableName_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlDriver) OnPrimaryIndex(slot func(super func(tableName string) *QSqlIndex, tableName string) *QSqlIndex) {
	ok := C.QSqlDriver_override_virtual_primaryIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_primaryIndex
func miqt_exec_callback_QSqlDriver_primaryIndex(self *C.QSqlDriver, cb C.intptr_t, tableName C.struct_miqt_string) *C.QSqlIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(tableName string) *QSqlIndex, tableName string) *QSqlIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var tableName_ms C.struct_miqt_string = tableName
	tableName_ret := C.GoStringN(tableName_ms.data, C.int(int64(tableName_ms.len)))
	C.free(unsafe.Pointer(tableName_ms.data))
	slotval1 := tableName_ret

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_PrimaryIndex, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSqlDriver) callVirtualBase_Record(tableName string) *QSqlRecord {
	tableName_ms := C.struct_miqt_string{}
	tableName_ms.data = C.CString(tableName)
	tableName_ms.len = C.size_t(len(tableName))
	defer C.free(unsafe.Pointer(tableName_ms.data))

	_goptr := newQSqlRecord(C.QSqlDriver_virtualbase_record(unsafe.Pointer(this.h), tableName_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlDriver) OnRecord(slot func(super func(tableName string) *QSqlRecord, tableName string) *QSqlRecord) {
	ok := C.QSqlDriver_override_virtual_record(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_record
func miqt_exec_callback_QSqlDriver_record(self *C.QSqlDriver, cb C.intptr_t, tableName C.struct_miqt_string) *C.QSqlRecord {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(tableName string) *QSqlRecord, tableName string) *QSqlRecord)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var tableName_ms C.struct_miqt_string = tableName
	tableName_ret := C.GoStringN(tableName_ms.data, C.int(int64(tableName_ms.len)))
	C.free(unsafe.Pointer(tableName_ms.data))
	slotval1 := tableName_ret

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_Record, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSqlDriver) callVirtualBase_FormatValue(field *QSqlField, trimStrings bool) string {

	var _ms C.struct_miqt_string = C.QSqlDriver_virtualbase_formatValue(unsafe.Pointer(this.h), field.cPointer(), (C.bool)(trimStrings))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QSqlDriver) OnFormatValue(slot func(super func(field *QSqlField, trimStrings bool) string, field *QSqlField, trimStrings bool) string) {
	ok := C.QSqlDriver_override_virtual_formatValue(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_formatValue
func miqt_exec_callback_QSqlDriver_formatValue(self *C.QSqlDriver, cb C.intptr_t, field *C.QSqlField, trimStrings C.bool) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(field *QSqlField, trimStrings bool) string, field *QSqlField, trimStrings bool) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSqlField(field)

	slotval2 := (bool)(trimStrings)

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_FormatValue, slotval1, slotval2)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QSqlDriver) callVirtualBase_EscapeIdentifier(identifier string, typeVal QSqlDriver__IdentifierType) string {
	identifier_ms := C.struct_miqt_string{}
	identifier_ms.data = C.CString(identifier)
	identifier_ms.len = C.size_t(len(identifier))
	defer C.free(unsafe.Pointer(identifier_ms.data))

	var _ms C.struct_miqt_string = C.QSqlDriver_virtualbase_escapeIdentifier(unsafe.Pointer(this.h), identifier_ms, (C.int)(typeVal))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QSqlDriver) OnEscapeIdentifier(slot func(super func(identifier string, typeVal QSqlDriver__IdentifierType) string, identifier string, typeVal QSqlDriver__IdentifierType) string) {
	ok := C.QSqlDriver_override_virtual_escapeIdentifier(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_escapeIdentifier
func miqt_exec_callback_QSqlDriver_escapeIdentifier(self *C.QSqlDriver, cb C.intptr_t, identifier C.struct_miqt_string, typeVal C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(identifier string, typeVal QSqlDriver__IdentifierType) string, identifier string, typeVal QSqlDriver__IdentifierType) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var identifier_ms C.struct_miqt_string = identifier
	identifier_ret := C.GoStringN(identifier_ms.data, C.int(int64(identifier_ms.len)))
	C.free(unsafe.Pointer(identifier_ms.data))
	slotval1 := identifier_ret
	slotval2 := (QSqlDriver__IdentifierType)(typeVal)

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_EscapeIdentifier, slotval1, slotval2)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QSqlDriver) callVirtualBase_SqlStatement(typeVal QSqlDriver__StatementType, tableName string, rec *QSqlRecord, preparedStatement bool) string {
	tableName_ms := C.struct_miqt_string{}
	tableName_ms.data = C.CString(tableName)
	tableName_ms.len = C.size_t(len(tableName))
	defer C.free(unsafe.Pointer(tableName_ms.data))

	var _ms C.struct_miqt_string = C.QSqlDriver_virtualbase_sqlStatement(unsafe.Pointer(this.h), (C.int)(typeVal), tableName_ms, rec.cPointer(), (C.bool)(preparedStatement))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QSqlDriver) OnSqlStatement(slot func(super func(typeVal QSqlDriver__StatementType, tableName string, rec *QSqlRecord, preparedStatement bool) string, typeVal QSqlDriver__StatementType, tableName string, rec *QSqlRecord, preparedStatement bool) string) {
	ok := C.QSqlDriver_override_virtual_sqlStatement(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_sqlStatement
func miqt_exec_callback_QSqlDriver_sqlStatement(self *C.QSqlDriver, cb C.intptr_t, typeVal C.int, tableName C.struct_miqt_string, rec *C.QSqlRecord, preparedStatement C.bool) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(typeVal QSqlDriver__StatementType, tableName string, rec *QSqlRecord, preparedStatement bool) string, typeVal QSqlDriver__StatementType, tableName string, rec *QSqlRecord, preparedStatement bool) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QSqlDriver__StatementType)(typeVal)

	var tableName_ms C.struct_miqt_string = tableName
	tableName_ret := C.GoStringN(tableName_ms.data, C.int(int64(tableName_ms.len)))
	C.free(unsafe.Pointer(tableName_ms.data))
	slotval2 := tableName_ret
	slotval3 := newQSqlRecord(rec)

	slotval4 := (bool)(preparedStatement)

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_SqlStatement, slotval1, slotval2, slotval3, slotval4)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QSqlDriver) callVirtualBase_Handle() *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QSqlDriver_virtualbase_handle(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSqlDriver) OnHandle(slot func(super func() *qt.QVariant) *qt.QVariant) {
	ok := C.QSqlDriver_override_virtual_handle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_handle
func miqt_exec_callback_QSqlDriver_handle(self *C.QSqlDriver, cb C.intptr_t) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QVariant) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_Handle)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}
func (this *QSqlDriver) OnHasFeature(slot func(f QSqlDriver__DriverFeature) bool) {
	ok := C.QSqlDriver_override_virtual_hasFeature(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_hasFeature
func miqt_exec_callback_QSqlDriver_hasFeature(self *C.QSqlDriver, cb C.intptr_t, f C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(f QSqlDriver__DriverFeature) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QSqlDriver__DriverFeature)(f)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QSqlDriver) OnClose(slot func()) {
	ok := C.QSqlDriver_override_virtual_close(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_close
func miqt_exec_callback_QSqlDriver_close(self *C.QSqlDriver, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *QSqlDriver) OnCreateResult(slot func() *QSqlResult) {
	ok := C.QSqlDriver_override_virtual_createResult(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_createResult
func miqt_exec_callback_QSqlDriver_createResult(self *C.QSqlDriver, cb C.intptr_t) *C.QSqlResult {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QSqlResult)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}
func (this *QSqlDriver) OnOpen(slot func(db string, user string, password string, host string, port int, connOpts string) bool) {
	ok := C.QSqlDriver_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_open
func miqt_exec_callback_QSqlDriver_open(self *C.QSqlDriver, cb C.intptr_t, db C.struct_miqt_string, user C.struct_miqt_string, password C.struct_miqt_string, host C.struct_miqt_string, port C.int, connOpts C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(db string, user string, password string, host string, port int, connOpts string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var db_ms C.struct_miqt_string = db
	db_ret := C.GoStringN(db_ms.data, C.int(int64(db_ms.len)))
	C.free(unsafe.Pointer(db_ms.data))
	slotval1 := db_ret
	var user_ms C.struct_miqt_string = user
	user_ret := C.GoStringN(user_ms.data, C.int(int64(user_ms.len)))
	C.free(unsafe.Pointer(user_ms.data))
	slotval2 := user_ret
	var password_ms C.struct_miqt_string = password
	password_ret := C.GoStringN(password_ms.data, C.int(int64(password_ms.len)))
	C.free(unsafe.Pointer(password_ms.data))
	slotval3 := password_ret
	var host_ms C.struct_miqt_string = host
	host_ret := C.GoStringN(host_ms.data, C.int(int64(host_ms.len)))
	C.free(unsafe.Pointer(host_ms.data))
	slotval4 := host_ret
	slotval5 := (int)(port)

	var connOpts_ms C.struct_miqt_string = connOpts
	connOpts_ret := C.GoStringN(connOpts_ms.data, C.int(int64(connOpts_ms.len)))
	C.free(unsafe.Pointer(connOpts_ms.data))
	slotval6 := connOpts_ret

	virtualReturn := gofunc(slotval1, slotval2, slotval3, slotval4, slotval5, slotval6)

	return (C.bool)(virtualReturn)

}

func (this *QSqlDriver) callVirtualBase_SubscribeToNotification(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return (bool)(C.QSqlDriver_virtualbase_subscribeToNotification(unsafe.Pointer(this.h), name_ms))

}
func (this *QSqlDriver) OnSubscribeToNotification(slot func(super func(name string) bool, name string) bool) {
	ok := C.QSqlDriver_override_virtual_subscribeToNotification(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_subscribeToNotification
func miqt_exec_callback_QSqlDriver_subscribeToNotification(self *C.QSqlDriver, cb C.intptr_t, name C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(name string) bool, name string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_SubscribeToNotification, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSqlDriver) callVirtualBase_UnsubscribeFromNotification(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return (bool)(C.QSqlDriver_virtualbase_unsubscribeFromNotification(unsafe.Pointer(this.h), name_ms))

}
func (this *QSqlDriver) OnUnsubscribeFromNotification(slot func(super func(name string) bool, name string) bool) {
	ok := C.QSqlDriver_override_virtual_unsubscribeFromNotification(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_unsubscribeFromNotification
func miqt_exec_callback_QSqlDriver_unsubscribeFromNotification(self *C.QSqlDriver, cb C.intptr_t, name C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(name string) bool, name string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_UnsubscribeFromNotification, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSqlDriver) callVirtualBase_SubscribedToNotifications() []string {

	var _ma C.struct_miqt_array = C.QSqlDriver_virtualbase_subscribedToNotifications(unsafe.Pointer(this.h))
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret

}
func (this *QSqlDriver) OnSubscribedToNotifications(slot func(super func() []string) []string) {
	ok := C.QSqlDriver_override_virtual_subscribedToNotifications(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_subscribedToNotifications
func miqt_exec_callback_QSqlDriver_subscribedToNotifications(self *C.QSqlDriver, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_SubscribedToNotifications)
	virtualReturn_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_i_ms := C.struct_miqt_string{}
		virtualReturn_i_ms.data = C.CString(virtualReturn[i])
		virtualReturn_i_ms.len = C.size_t(len(virtualReturn[i]))
		defer C.free(unsafe.Pointer(virtualReturn_i_ms.data))
		virtualReturn_CArray[i] = virtualReturn_i_ms
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QSqlDriver) callVirtualBase_IsIdentifierEscaped(identifier string, typeVal QSqlDriver__IdentifierType) bool {
	identifier_ms := C.struct_miqt_string{}
	identifier_ms.data = C.CString(identifier)
	identifier_ms.len = C.size_t(len(identifier))
	defer C.free(unsafe.Pointer(identifier_ms.data))

	return (bool)(C.QSqlDriver_virtualbase_isIdentifierEscaped(unsafe.Pointer(this.h), identifier_ms, (C.int)(typeVal)))

}
func (this *QSqlDriver) OnIsIdentifierEscaped(slot func(super func(identifier string, typeVal QSqlDriver__IdentifierType) bool, identifier string, typeVal QSqlDriver__IdentifierType) bool) {
	ok := C.QSqlDriver_override_virtual_isIdentifierEscaped(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_isIdentifierEscaped
func miqt_exec_callback_QSqlDriver_isIdentifierEscaped(self *C.QSqlDriver, cb C.intptr_t, identifier C.struct_miqt_string, typeVal C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(identifier string, typeVal QSqlDriver__IdentifierType) bool, identifier string, typeVal QSqlDriver__IdentifierType) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var identifier_ms C.struct_miqt_string = identifier
	identifier_ret := C.GoStringN(identifier_ms.data, C.int(int64(identifier_ms.len)))
	C.free(unsafe.Pointer(identifier_ms.data))
	slotval1 := identifier_ret
	slotval2 := (QSqlDriver__IdentifierType)(typeVal)

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_IsIdentifierEscaped, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSqlDriver) callVirtualBase_StripDelimiters(identifier string, typeVal QSqlDriver__IdentifierType) string {
	identifier_ms := C.struct_miqt_string{}
	identifier_ms.data = C.CString(identifier)
	identifier_ms.len = C.size_t(len(identifier))
	defer C.free(unsafe.Pointer(identifier_ms.data))

	var _ms C.struct_miqt_string = C.QSqlDriver_virtualbase_stripDelimiters(unsafe.Pointer(this.h), identifier_ms, (C.int)(typeVal))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QSqlDriver) OnStripDelimiters(slot func(super func(identifier string, typeVal QSqlDriver__IdentifierType) string, identifier string, typeVal QSqlDriver__IdentifierType) string) {
	ok := C.QSqlDriver_override_virtual_stripDelimiters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_stripDelimiters
func miqt_exec_callback_QSqlDriver_stripDelimiters(self *C.QSqlDriver, cb C.intptr_t, identifier C.struct_miqt_string, typeVal C.int) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(identifier string, typeVal QSqlDriver__IdentifierType) string, identifier string, typeVal QSqlDriver__IdentifierType) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var identifier_ms C.struct_miqt_string = identifier
	identifier_ret := C.GoStringN(identifier_ms.data, C.int(int64(identifier_ms.len)))
	C.free(unsafe.Pointer(identifier_ms.data))
	slotval1 := identifier_ret
	slotval2 := (QSqlDriver__IdentifierType)(typeVal)

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_StripDelimiters, slotval1, slotval2)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QSqlDriver) callVirtualBase_CancelQuery() bool {

	return (bool)(C.QSqlDriver_virtualbase_cancelQuery(unsafe.Pointer(this.h)))

}
func (this *QSqlDriver) OnCancelQuery(slot func(super func() bool) bool) {
	ok := C.QSqlDriver_override_virtual_cancelQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_cancelQuery
func miqt_exec_callback_QSqlDriver_cancelQuery(self *C.QSqlDriver, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_CancelQuery)

	return (C.bool)(virtualReturn)

}

func (this *QSqlDriver) callVirtualBase_SetOpen(o bool) {

	C.QSqlDriver_virtualbase_setOpen(unsafe.Pointer(this.h), (C.bool)(o))

}
func (this *QSqlDriver) OnSetOpen(slot func(super func(o bool), o bool)) {
	ok := C.QSqlDriver_override_virtual_setOpen(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_setOpen
func miqt_exec_callback_QSqlDriver_setOpen(self *C.QSqlDriver, cb C.intptr_t, o C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(o bool), o bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(o)

	gofunc((&QSqlDriver{h: self}).callVirtualBase_SetOpen, slotval1)

}

func (this *QSqlDriver) callVirtualBase_SetOpenError(e bool) {

	C.QSqlDriver_virtualbase_setOpenError(unsafe.Pointer(this.h), (C.bool)(e))

}
func (this *QSqlDriver) OnSetOpenError(slot func(super func(e bool), e bool)) {
	ok := C.QSqlDriver_override_virtual_setOpenError(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_setOpenError
func miqt_exec_callback_QSqlDriver_setOpenError(self *C.QSqlDriver, cb C.intptr_t, e C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e bool), e bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(e)

	gofunc((&QSqlDriver{h: self}).callVirtualBase_SetOpenError, slotval1)

}

func (this *QSqlDriver) callVirtualBase_SetLastError(e *QSqlError) {

	C.QSqlDriver_virtualbase_setLastError(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QSqlDriver) OnSetLastError(slot func(super func(e *QSqlError), e *QSqlError)) {
	ok := C.QSqlDriver_override_virtual_setLastError(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_setLastError
func miqt_exec_callback_QSqlDriver_setLastError(self *C.QSqlDriver, cb C.intptr_t, e *C.QSqlError) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QSqlError), e *QSqlError))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQSqlError(e)

	gofunc((&QSqlDriver{h: self}).callVirtualBase_SetLastError, slotval1)

}

func (this *QSqlDriver) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QSqlDriver_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSqlDriver) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QSqlDriver_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_event
func miqt_exec_callback_QSqlDriver_event(self *C.QSqlDriver, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSqlDriver) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QSqlDriver_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QSqlDriver) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QSqlDriver_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_eventFilter
func miqt_exec_callback_QSqlDriver_eventFilter(self *C.QSqlDriver, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QSqlDriver{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSqlDriver) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QSqlDriver_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QSqlDriver) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QSqlDriver_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_timerEvent
func miqt_exec_callback_QSqlDriver_timerEvent(self *C.QSqlDriver, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QSqlDriver{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSqlDriver) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QSqlDriver_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QSqlDriver) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QSqlDriver_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_childEvent
func miqt_exec_callback_QSqlDriver_childEvent(self *C.QSqlDriver, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QSqlDriver{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSqlDriver) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QSqlDriver_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QSqlDriver) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QSqlDriver_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_customEvent
func miqt_exec_callback_QSqlDriver_customEvent(self *C.QSqlDriver, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QSqlDriver{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSqlDriver) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QSqlDriver_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSqlDriver) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QSqlDriver_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_connectNotify
func miqt_exec_callback_QSqlDriver_connectNotify(self *C.QSqlDriver, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSqlDriver{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSqlDriver) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QSqlDriver_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QSqlDriver) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QSqlDriver_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSqlDriver_disconnectNotify
func miqt_exec_callback_QSqlDriver_disconnectNotify(self *C.QSqlDriver, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QSqlDriver{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSqlDriver) Delete() {
	C.QSqlDriver_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSqlDriver) GoGC() {
	runtime.SetFinalizer(this, func(this *QSqlDriver) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
