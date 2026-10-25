package sql

/*

#include "gen_qsqldatabase.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSqlDriverCreatorBase struct {
	h  *C.QSqlDriverCreatorBase
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QSqlDriverCreatorBase) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QSqlDriverCreatorBase) cPointer() *C.QSqlDriverCreatorBase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSqlDriverCreatorBase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSqlDriverCreatorBase constructs the type using only CGO pointers.
func newQSqlDriverCreatorBase(h *C.QSqlDriverCreatorBase) *QSqlDriverCreatorBase {
	if h == nil {
		return nil
	}

	return &QSqlDriverCreatorBase{h: h}
}

// UnsafeNewQSqlDriverCreatorBase constructs the type using only unsafe pointers.
func UnsafeNewQSqlDriverCreatorBase(h unsafe.Pointer) *QSqlDriverCreatorBase {
	return newQSqlDriverCreatorBase((*C.QSqlDriverCreatorBase)(h))
}

func (this *QSqlDriverCreatorBase) CreateObject() *QSqlDriver {
	defer runtime.KeepAlive(this)
	return newQSqlDriver(C.QSqlDriverCreatorBase_createObject(this.h))
}

func (this *QSqlDriverCreatorBase) OperatorAssign(param1 *QSqlDriverCreatorBase) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QSqlDriverCreatorBase_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QSqlDriverCreatorBase) Delete() {
	C.QSqlDriverCreatorBase_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QSqlDriverCreatorBase) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QSqlDriverCreatorBase_delete((*C.QSqlDriverCreatorBase)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QSqlDatabase struct {
	h  *C.QSqlDatabase
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QSqlDatabase) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QSqlDatabase) cPointer() *C.QSqlDatabase {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSqlDatabase) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSqlDatabase constructs the type using only CGO pointers.
func newQSqlDatabase(h *C.QSqlDatabase) *QSqlDatabase {
	if h == nil {
		return nil
	}

	return &QSqlDatabase{h: h}
}

// UnsafeNewQSqlDatabase constructs the type using only unsafe pointers.
func UnsafeNewQSqlDatabase(h unsafe.Pointer) *QSqlDatabase {
	return newQSqlDatabase((*C.QSqlDatabase)(h))
}

// NewQSqlDatabase constructs a new QSqlDatabase object.
func NewQSqlDatabase() *QSqlDatabase {

	return newQSqlDatabase(C.QSqlDatabase_new())
}

// NewQSqlDatabase2 constructs a new QSqlDatabase object.
func NewQSqlDatabase2(other *QSqlDatabase) *QSqlDatabase {
	defer runtime.KeepAlive(other)

	return newQSqlDatabase(C.QSqlDatabase_new2(other.cPointer()))
}

func (this *QSqlDatabase) OperatorAssign(other *QSqlDatabase) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QSqlDatabase_operatorAssign(this.h, other.cPointer())
}

func (this *QSqlDatabase) Open() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlDatabase_open(this.h))
}

func (this *QSqlDatabase) Open2(user string, password string) bool {
	defer runtime.KeepAlive(this)
	user_ms := C.struct_miqt_string{}
	user_ms.data = C.CString(user)
	user_ms.len = C.size_t(len(user))
	defer C.free(unsafe.Pointer(user_ms.data))
	password_ms := C.struct_miqt_string{}
	password_ms.data = C.CString(password)
	password_ms.len = C.size_t(len(password))
	defer C.free(unsafe.Pointer(password_ms.data))
	return (bool)(C.QSqlDatabase_open2(this.h, user_ms, password_ms))
}

func (this *QSqlDatabase) Close() {
	defer runtime.KeepAlive(this)
	C.QSqlDatabase_close(this.h)
}

func (this *QSqlDatabase) IsOpen() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlDatabase_isOpen(this.h))
}

func (this *QSqlDatabase) IsOpenError() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlDatabase_isOpenError(this.h))
}

func (this *QSqlDatabase) Tables() []string {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QSqlDatabase_tables(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QSqlDatabase) PrimaryIndex(tablename string) *QSqlIndex {
	defer runtime.KeepAlive(this)
	tablename_ms := C.struct_miqt_string{}
	tablename_ms.data = C.CString(tablename)
	tablename_ms.len = C.size_t(len(tablename))
	defer C.free(unsafe.Pointer(tablename_ms.data))
	_goptr := newQSqlIndex(C.QSqlDatabase_primaryIndex(this.h, tablename_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlDatabase) Record(tablename string) *QSqlRecord {
	defer runtime.KeepAlive(this)
	tablename_ms := C.struct_miqt_string{}
	tablename_ms.data = C.CString(tablename)
	tablename_ms.len = C.size_t(len(tablename))
	defer C.free(unsafe.Pointer(tablename_ms.data))
	_goptr := newQSqlRecord(C.QSqlDatabase_record(this.h, tablename_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlDatabase) Exec() *QSqlQuery {
	defer runtime.KeepAlive(this)
	_goptr := newQSqlQuery(C.QSqlDatabase_exec(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlDatabase) LastError() *QSqlError {
	defer runtime.KeepAlive(this)
	_goptr := newQSqlError(C.QSqlDatabase_lastError(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlDatabase) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlDatabase_isValid(this.h))
}

func (this *QSqlDatabase) Transaction() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlDatabase_transaction(this.h))
}

func (this *QSqlDatabase) Commit() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlDatabase_commit(this.h))
}

func (this *QSqlDatabase) Rollback() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QSqlDatabase_rollback(this.h))
}

func (this *QSqlDatabase) SetDatabaseName(name string) {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QSqlDatabase_setDatabaseName(this.h, name_ms)
}

func (this *QSqlDatabase) SetUserName(name string) {
	defer runtime.KeepAlive(this)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QSqlDatabase_setUserName(this.h, name_ms)
}

func (this *QSqlDatabase) SetPassword(password string) {
	defer runtime.KeepAlive(this)
	password_ms := C.struct_miqt_string{}
	password_ms.data = C.CString(password)
	password_ms.len = C.size_t(len(password))
	defer C.free(unsafe.Pointer(password_ms.data))
	C.QSqlDatabase_setPassword(this.h, password_ms)
}

func (this *QSqlDatabase) SetHostName(host string) {
	defer runtime.KeepAlive(this)
	host_ms := C.struct_miqt_string{}
	host_ms.data = C.CString(host)
	host_ms.len = C.size_t(len(host))
	defer C.free(unsafe.Pointer(host_ms.data))
	C.QSqlDatabase_setHostName(this.h, host_ms)
}

func (this *QSqlDatabase) SetPort(p int) {
	defer runtime.KeepAlive(this)
	C.QSqlDatabase_setPort(this.h, (C.int)(p))
}

func (this *QSqlDatabase) SetConnectOptions() {
	defer runtime.KeepAlive(this)
	C.QSqlDatabase_setConnectOptions(this.h)
}

func (this *QSqlDatabase) DatabaseName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSqlDatabase_databaseName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlDatabase) UserName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSqlDatabase_userName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlDatabase) Password() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSqlDatabase_password(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlDatabase) HostName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSqlDatabase_hostName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlDatabase) DriverName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSqlDatabase_driverName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlDatabase) Port() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QSqlDatabase_port(this.h))
}

func (this *QSqlDatabase) ConnectOptions() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSqlDatabase_connectOptions(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlDatabase) ConnectionName() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QSqlDatabase_connectionName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSqlDatabase) SetNumericalPrecisionPolicy(precisionPolicy QSql__NumericalPrecisionPolicy) {
	defer runtime.KeepAlive(this)
	C.QSqlDatabase_setNumericalPrecisionPolicy(this.h, (C.int)(precisionPolicy))
}

func (this *QSqlDatabase) NumericalPrecisionPolicy() QSql__NumericalPrecisionPolicy {
	defer runtime.KeepAlive(this)
	return (QSql__NumericalPrecisionPolicy)(C.QSqlDatabase_numericalPrecisionPolicy(this.h))
}

func (this *QSqlDatabase) Driver() *QSqlDriver {
	defer runtime.KeepAlive(this)
	return newQSqlDriver(C.QSqlDatabase_driver(this.h))
}

func QSqlDatabase_AddDatabase(typeVal string) *QSqlDatabase {
	typeVal_ms := C.struct_miqt_string{}
	typeVal_ms.data = C.CString(typeVal)
	typeVal_ms.len = C.size_t(len(typeVal))
	defer C.free(unsafe.Pointer(typeVal_ms.data))
	_goptr := newQSqlDatabase(C.QSqlDatabase_addDatabase(typeVal_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSqlDatabase_AddDatabaseWithDriver(driver *QSqlDriver) *QSqlDatabase {
	defer runtime.KeepAlive(driver)
	_goptr := newQSqlDatabase(C.QSqlDatabase_addDatabaseWithDriver(driver.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSqlDatabase_CloneDatabase(other *QSqlDatabase, connectionName string) *QSqlDatabase {
	defer runtime.KeepAlive(other)
	connectionName_ms := C.struct_miqt_string{}
	connectionName_ms.data = C.CString(connectionName)
	connectionName_ms.len = C.size_t(len(connectionName))
	defer C.free(unsafe.Pointer(connectionName_ms.data))
	_goptr := newQSqlDatabase(C.QSqlDatabase_cloneDatabase(other.cPointer(), connectionName_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSqlDatabase_CloneDatabase2(other string, connectionName string) *QSqlDatabase {
	other_ms := C.struct_miqt_string{}
	other_ms.data = C.CString(other)
	other_ms.len = C.size_t(len(other))
	defer C.free(unsafe.Pointer(other_ms.data))
	connectionName_ms := C.struct_miqt_string{}
	connectionName_ms.data = C.CString(connectionName)
	connectionName_ms.len = C.size_t(len(connectionName))
	defer C.free(unsafe.Pointer(connectionName_ms.data))
	_goptr := newQSqlDatabase(C.QSqlDatabase_cloneDatabase2(other_ms, connectionName_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSqlDatabase_Database() *QSqlDatabase {
	_goptr := newQSqlDatabase(C.QSqlDatabase_database())
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSqlDatabase_RemoveDatabase(connectionName string) {
	connectionName_ms := C.struct_miqt_string{}
	connectionName_ms.data = C.CString(connectionName)
	connectionName_ms.len = C.size_t(len(connectionName))
	defer C.free(unsafe.Pointer(connectionName_ms.data))
	C.QSqlDatabase_removeDatabase(connectionName_ms)
}

func QSqlDatabase_Contains() bool {
	return (bool)(C.QSqlDatabase_contains())
}

func QSqlDatabase_Drivers() []string {
	var _ma C.struct_miqt_array = C.QSqlDatabase_drivers()
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QSqlDatabase_ConnectionNames() []string {
	var _ma C.struct_miqt_array = C.QSqlDatabase_connectionNames()
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QSqlDatabase_RegisterSqlDriver(name string, creator *QSqlDriverCreatorBase) {
	defer runtime.KeepAlive(creator)
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QSqlDatabase_registerSqlDriver(name_ms, creator.cPointer())
}

func QSqlDatabase_IsDriverAvailable(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QSqlDatabase_isDriverAvailable(name_ms))
}

func (this *QSqlDatabase) TablesWithType(typeVal QSql__TableType) []string {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QSqlDatabase_tablesWithType(this.h, (C.int)(typeVal))
	_ret := make([]string, int(_ma.len))
	_outCast := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QSqlDatabase) ExecWithQuery(query string) *QSqlQuery {
	defer runtime.KeepAlive(this)
	query_ms := C.struct_miqt_string{}
	query_ms.data = C.CString(query)
	query_ms.len = C.size_t(len(query))
	defer C.free(unsafe.Pointer(query_ms.data))
	_goptr := newQSqlQuery(C.QSqlDatabase_execWithQuery(this.h, query_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSqlDatabase) SetConnectOptionsWithOptions(options string) {
	defer runtime.KeepAlive(this)
	options_ms := C.struct_miqt_string{}
	options_ms.data = C.CString(options)
	options_ms.len = C.size_t(len(options))
	defer C.free(unsafe.Pointer(options_ms.data))
	C.QSqlDatabase_setConnectOptionsWithOptions(this.h, options_ms)
}

func QSqlDatabase_AddDatabase2(typeVal string, connectionName string) *QSqlDatabase {
	typeVal_ms := C.struct_miqt_string{}
	typeVal_ms.data = C.CString(typeVal)
	typeVal_ms.len = C.size_t(len(typeVal))
	defer C.free(unsafe.Pointer(typeVal_ms.data))
	connectionName_ms := C.struct_miqt_string{}
	connectionName_ms.data = C.CString(connectionName)
	connectionName_ms.len = C.size_t(len(connectionName))
	defer C.free(unsafe.Pointer(connectionName_ms.data))
	_goptr := newQSqlDatabase(C.QSqlDatabase_addDatabase2(typeVal_ms, connectionName_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSqlDatabase_AddDatabase3(driver *QSqlDriver, connectionName string) *QSqlDatabase {
	defer runtime.KeepAlive(driver)
	connectionName_ms := C.struct_miqt_string{}
	connectionName_ms.data = C.CString(connectionName)
	connectionName_ms.len = C.size_t(len(connectionName))
	defer C.free(unsafe.Pointer(connectionName_ms.data))
	_goptr := newQSqlDatabase(C.QSqlDatabase_addDatabase3(driver.cPointer(), connectionName_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSqlDatabase_DatabaseWithConnectionName(connectionName string) *QSqlDatabase {
	connectionName_ms := C.struct_miqt_string{}
	connectionName_ms.data = C.CString(connectionName)
	connectionName_ms.len = C.size_t(len(connectionName))
	defer C.free(unsafe.Pointer(connectionName_ms.data))
	_goptr := newQSqlDatabase(C.QSqlDatabase_databaseWithConnectionName(connectionName_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSqlDatabase_Database2(connectionName string, open bool) *QSqlDatabase {
	connectionName_ms := C.struct_miqt_string{}
	connectionName_ms.data = C.CString(connectionName)
	connectionName_ms.len = C.size_t(len(connectionName))
	defer C.free(unsafe.Pointer(connectionName_ms.data))
	_goptr := newQSqlDatabase(C.QSqlDatabase_database2(connectionName_ms, (C.bool)(open)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSqlDatabase_ContainsWithConnectionName(connectionName string) bool {
	connectionName_ms := C.struct_miqt_string{}
	connectionName_ms.data = C.CString(connectionName)
	connectionName_ms.len = C.size_t(len(connectionName))
	defer C.free(unsafe.Pointer(connectionName_ms.data))
	return (bool)(C.QSqlDatabase_containsWithConnectionName(connectionName_ms))
}

// Delete this object from C++ memory.
func (this *QSqlDatabase) Delete() {
	C.QSqlDatabase_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QSqlDatabase) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QSqlDatabase_delete((*C.QSqlDatabase)(gc[0]))
	})
	this.miqtSetGC(gc)
}
