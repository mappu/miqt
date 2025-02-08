package qt

/*

#include "gen_qsettings.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSettings__Status int

const (
	QSettings__NoError     QSettings__Status = 0
	QSettings__AccessError QSettings__Status = 1
	QSettings__FormatError QSettings__Status = 2
)

type QSettings__Format int

const (
	QSettings__NativeFormat   QSettings__Format = 0
	QSettings__IniFormat      QSettings__Format = 1
	QSettings__InvalidFormat  QSettings__Format = 16
	QSettings__CustomFormat1  QSettings__Format = 17
	QSettings__CustomFormat2  QSettings__Format = 18
	QSettings__CustomFormat3  QSettings__Format = 19
	QSettings__CustomFormat4  QSettings__Format = 20
	QSettings__CustomFormat5  QSettings__Format = 21
	QSettings__CustomFormat6  QSettings__Format = 22
	QSettings__CustomFormat7  QSettings__Format = 23
	QSettings__CustomFormat8  QSettings__Format = 24
	QSettings__CustomFormat9  QSettings__Format = 25
	QSettings__CustomFormat10 QSettings__Format = 26
	QSettings__CustomFormat11 QSettings__Format = 27
	QSettings__CustomFormat12 QSettings__Format = 28
	QSettings__CustomFormat13 QSettings__Format = 29
	QSettings__CustomFormat14 QSettings__Format = 30
	QSettings__CustomFormat15 QSettings__Format = 31
	QSettings__CustomFormat16 QSettings__Format = 32
)

type QSettings__Scope int

const (
	QSettings__UserScope   QSettings__Scope = 0
	QSettings__SystemScope QSettings__Scope = 1
)

type QSettings struct {
	h *C.QSettings
	*QObject
}

func (this *QSettings) cPointer() *C.QSettings {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSettings) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSettings constructs the type using only CGO pointers.
func newQSettings(h *C.QSettings) *QSettings {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QSettings_virtbase(h, &outptr_QObject)

	return &QSettings{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQSettings constructs the type using only unsafe pointers.
func UnsafeNewQSettings(h unsafe.Pointer) *QSettings {
	return newQSettings((*C.QSettings)(h))
}

// NewQSettings constructs a new QSettings object.
func NewQSettings(organization string) *QSettings {
	organization_ms := C.struct_miqt_string{}
	organization_ms.data = C.CString(organization)
	organization_ms.len = C.size_t(len(organization))
	defer C.free(unsafe.Pointer(organization_ms.data))

	return newQSettings(C.QSettings_new(organization_ms))
}

// NewQSettings2 constructs a new QSettings object.
func NewQSettings2(scope QSettings__Scope, organization string) *QSettings {
	organization_ms := C.struct_miqt_string{}
	organization_ms.data = C.CString(organization)
	organization_ms.len = C.size_t(len(organization))
	defer C.free(unsafe.Pointer(organization_ms.data))

	return newQSettings(C.QSettings_new2((C.int)(scope), organization_ms))
}

// NewQSettings3 constructs a new QSettings object.
func NewQSettings3(format QSettings__Format, scope QSettings__Scope, organization string) *QSettings {
	organization_ms := C.struct_miqt_string{}
	organization_ms.data = C.CString(organization)
	organization_ms.len = C.size_t(len(organization))
	defer C.free(unsafe.Pointer(organization_ms.data))

	return newQSettings(C.QSettings_new3((C.int)(format), (C.int)(scope), organization_ms))
}

// NewQSettings4 constructs a new QSettings object.
func NewQSettings4(fileName string, format QSettings__Format) *QSettings {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	return newQSettings(C.QSettings_new4(fileName_ms, (C.int)(format)))
}

// NewQSettings5 constructs a new QSettings object.
func NewQSettings5() *QSettings {

	return newQSettings(C.QSettings_new5())
}

// NewQSettings6 constructs a new QSettings object.
func NewQSettings6(scope QSettings__Scope) *QSettings {

	return newQSettings(C.QSettings_new6((C.int)(scope)))
}

// NewQSettings7 constructs a new QSettings object.
func NewQSettings7(organization string, application string) *QSettings {
	organization_ms := C.struct_miqt_string{}
	organization_ms.data = C.CString(organization)
	organization_ms.len = C.size_t(len(organization))
	defer C.free(unsafe.Pointer(organization_ms.data))
	application_ms := C.struct_miqt_string{}
	application_ms.data = C.CString(application)
	application_ms.len = C.size_t(len(application))
	defer C.free(unsafe.Pointer(application_ms.data))

	return newQSettings(C.QSettings_new7(organization_ms, application_ms))
}

// NewQSettings8 constructs a new QSettings object.
func NewQSettings8(organization string, application string, parent *QObject) *QSettings {
	organization_ms := C.struct_miqt_string{}
	organization_ms.data = C.CString(organization)
	organization_ms.len = C.size_t(len(organization))
	defer C.free(unsafe.Pointer(organization_ms.data))
	application_ms := C.struct_miqt_string{}
	application_ms.data = C.CString(application)
	application_ms.len = C.size_t(len(application))
	defer C.free(unsafe.Pointer(application_ms.data))

	return newQSettings(C.QSettings_new8(organization_ms, application_ms, parent.cPointer()))
}

// NewQSettings9 constructs a new QSettings object.
func NewQSettings9(scope QSettings__Scope, organization string, application string) *QSettings {
	organization_ms := C.struct_miqt_string{}
	organization_ms.data = C.CString(organization)
	organization_ms.len = C.size_t(len(organization))
	defer C.free(unsafe.Pointer(organization_ms.data))
	application_ms := C.struct_miqt_string{}
	application_ms.data = C.CString(application)
	application_ms.len = C.size_t(len(application))
	defer C.free(unsafe.Pointer(application_ms.data))

	return newQSettings(C.QSettings_new9((C.int)(scope), organization_ms, application_ms))
}

// NewQSettings10 constructs a new QSettings object.
func NewQSettings10(scope QSettings__Scope, organization string, application string, parent *QObject) *QSettings {
	organization_ms := C.struct_miqt_string{}
	organization_ms.data = C.CString(organization)
	organization_ms.len = C.size_t(len(organization))
	defer C.free(unsafe.Pointer(organization_ms.data))
	application_ms := C.struct_miqt_string{}
	application_ms.data = C.CString(application)
	application_ms.len = C.size_t(len(application))
	defer C.free(unsafe.Pointer(application_ms.data))

	return newQSettings(C.QSettings_new10((C.int)(scope), organization_ms, application_ms, parent.cPointer()))
}

// NewQSettings11 constructs a new QSettings object.
func NewQSettings11(format QSettings__Format, scope QSettings__Scope, organization string, application string) *QSettings {
	organization_ms := C.struct_miqt_string{}
	organization_ms.data = C.CString(organization)
	organization_ms.len = C.size_t(len(organization))
	defer C.free(unsafe.Pointer(organization_ms.data))
	application_ms := C.struct_miqt_string{}
	application_ms.data = C.CString(application)
	application_ms.len = C.size_t(len(application))
	defer C.free(unsafe.Pointer(application_ms.data))

	return newQSettings(C.QSettings_new11((C.int)(format), (C.int)(scope), organization_ms, application_ms))
}

// NewQSettings12 constructs a new QSettings object.
func NewQSettings12(format QSettings__Format, scope QSettings__Scope, organization string, application string, parent *QObject) *QSettings {
	organization_ms := C.struct_miqt_string{}
	organization_ms.data = C.CString(organization)
	organization_ms.len = C.size_t(len(organization))
	defer C.free(unsafe.Pointer(organization_ms.data))
	application_ms := C.struct_miqt_string{}
	application_ms.data = C.CString(application)
	application_ms.len = C.size_t(len(application))
	defer C.free(unsafe.Pointer(application_ms.data))

	return newQSettings(C.QSettings_new12((C.int)(format), (C.int)(scope), organization_ms, application_ms, parent.cPointer()))
}

// NewQSettings13 constructs a new QSettings object.
func NewQSettings13(fileName string, format QSettings__Format, parent *QObject) *QSettings {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	return newQSettings(C.QSettings_new13(fileName_ms, (C.int)(format), parent.cPointer()))
}

// NewQSettings14 constructs a new QSettings object.
func NewQSettings14(parent *QObject) *QSettings {

	return newQSettings(C.QSettings_new14(parent.cPointer()))
}

// NewQSettings15 constructs a new QSettings object.
func NewQSettings15(scope QSettings__Scope, parent *QObject) *QSettings {

	return newQSettings(C.QSettings_new15((C.int)(scope), parent.cPointer()))
}

func (this *QSettings) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSettings_metaObject(this.h))
}

func (this *QSettings) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSettings_metacast(this.h, param1_Cstring))
}

func QSettings_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSettings_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSettings_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSettings_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSettings) Clear() {
	C.QSettings_clear(this.h)
}

func (this *QSettings) Sync() {
	C.QSettings_sync(this.h)
}

func (this *QSettings) Status() QSettings__Status {
	return (QSettings__Status)(C.QSettings_status(this.h))
}

func (this *QSettings) IsAtomicSyncRequired() bool {
	return (bool)(C.QSettings_isAtomicSyncRequired(this.h))
}

func (this *QSettings) SetAtomicSyncRequired(enable bool) {
	C.QSettings_setAtomicSyncRequired(this.h, (C.bool)(enable))
}

func (this *QSettings) BeginGroup(prefix string) {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	C.QSettings_beginGroup(this.h, prefix_ms)
}

func (this *QSettings) EndGroup() {
	C.QSettings_endGroup(this.h)
}

func (this *QSettings) Group() string {
	var _ms C.struct_miqt_string = C.QSettings_group(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSettings) BeginReadArray(prefix string) int {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	return (int)(C.QSettings_beginReadArray(this.h, prefix_ms))
}

func (this *QSettings) BeginWriteArray(prefix string) {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	C.QSettings_beginWriteArray(this.h, prefix_ms)
}

func (this *QSettings) EndArray() {
	C.QSettings_endArray(this.h)
}

func (this *QSettings) SetArrayIndex(i int) {
	C.QSettings_setArrayIndex(this.h, (C.int)(i))
}

func (this *QSettings) AllKeys() []string {
	var _ma C.struct_miqt_array = C.QSettings_allKeys(this.h)
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

func (this *QSettings) ChildKeys() []string {
	var _ma C.struct_miqt_array = C.QSettings_childKeys(this.h)
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

func (this *QSettings) ChildGroups() []string {
	var _ma C.struct_miqt_array = C.QSettings_childGroups(this.h)
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

func (this *QSettings) IsWritable() bool {
	return (bool)(C.QSettings_isWritable(this.h))
}

func (this *QSettings) SetValue(key string, value *QVariant) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QSettings_setValue(this.h, key_ms, value.cPointer())
}

func (this *QSettings) Value(key string) *QVariant {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQVariant(C.QSettings_value(this.h, key_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSettings) Remove(key string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QSettings_remove(this.h, key_ms)
}

func (this *QSettings) Contains(key string) bool {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return (bool)(C.QSettings_contains(this.h, key_ms))
}

func (this *QSettings) SetFallbacksEnabled(b bool) {
	C.QSettings_setFallbacksEnabled(this.h, (C.bool)(b))
}

func (this *QSettings) FallbacksEnabled() bool {
	return (bool)(C.QSettings_fallbacksEnabled(this.h))
}

func (this *QSettings) FileName() string {
	var _ms C.struct_miqt_string = C.QSettings_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSettings) Format() QSettings__Format {
	return (QSettings__Format)(C.QSettings_format(this.h))
}

func (this *QSettings) Scope() QSettings__Scope {
	return (QSettings__Scope)(C.QSettings_scope(this.h))
}

func (this *QSettings) OrganizationName() string {
	var _ms C.struct_miqt_string = C.QSettings_organizationName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSettings) ApplicationName() string {
	var _ms C.struct_miqt_string = C.QSettings_applicationName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSettings) SetIniCodec(codec *QTextCodec) {
	C.QSettings_setIniCodec(this.h, codec.cPointer())
}

func (this *QSettings) SetIniCodecWithCodecName(codecName string) {
	codecName_Cstring := C.CString(codecName)
	defer C.free(unsafe.Pointer(codecName_Cstring))
	C.QSettings_setIniCodecWithCodecName(this.h, codecName_Cstring)
}

func (this *QSettings) IniCodec() *QTextCodec {
	return newQTextCodec(C.QSettings_iniCodec(this.h))
}

func QSettings_SetDefaultFormat(format QSettings__Format) {
	C.QSettings_setDefaultFormat((C.int)(format))
}

func QSettings_DefaultFormat() QSettings__Format {
	return (QSettings__Format)(C.QSettings_defaultFormat())
}

func QSettings_SetSystemIniPath(dir string) {
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	C.QSettings_setSystemIniPath(dir_ms)
}

func QSettings_SetUserIniPath(dir string) {
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	C.QSettings_setUserIniPath(dir_ms)
}

func QSettings_SetPath(format QSettings__Format, scope QSettings__Scope, path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QSettings_setPath((C.int)(format), (C.int)(scope), path_ms)
}

func QSettings_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSettings_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSettings_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSettings_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSettings_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSettings_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSettings_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSettings_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSettings) BeginWriteArray2(prefix string, size int) {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	C.QSettings_beginWriteArray2(this.h, prefix_ms, (C.int)(size))
}

func (this *QSettings) Value2(key string, defaultValue *QVariant) *QVariant {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQVariant(C.QSettings_value2(this.h, key_ms, defaultValue.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Sender can only be called from a QSettings that was directly constructed.
func (this *QSettings) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QSettings_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QSettings that was directly constructed.
func (this *QSettings) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSettings_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QSettings that was directly constructed.
func (this *QSettings) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSettings_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QSettings that was directly constructed.
func (this *QSettings) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSettings_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QSettings) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QSettings_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSettings) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QSettings_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSettings_event
func miqt_exec_callback_QSettings_event(self *C.QSettings, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QSettings{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSettings) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSettings_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSettings) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSettings_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSettings_eventFilter
func miqt_exec_callback_QSettings_eventFilter(self *C.QSettings, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSettings{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSettings) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSettings_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSettings) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSettings_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSettings_timerEvent
func miqt_exec_callback_QSettings_timerEvent(self *C.QSettings, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSettings{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSettings) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSettings_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSettings) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSettings_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSettings_childEvent
func miqt_exec_callback_QSettings_childEvent(self *C.QSettings, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSettings{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSettings) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSettings_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSettings) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSettings_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSettings_customEvent
func miqt_exec_callback_QSettings_customEvent(self *C.QSettings, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSettings{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSettings) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSettings_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSettings) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSettings_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSettings_connectNotify
func miqt_exec_callback_QSettings_connectNotify(self *C.QSettings, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSettings{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSettings) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSettings_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSettings) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSettings_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSettings_disconnectNotify
func miqt_exec_callback_QSettings_disconnectNotify(self *C.QSettings, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSettings{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSettings) Delete() {
	C.QSettings_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSettings) GoGC() {
	runtime.SetFinalizer(this, func(this *QSettings) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
