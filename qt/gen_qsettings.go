package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qsettings.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
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

func newQSettings(h *C.QSettings) *QSettings {
	return &QSettings{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQSettings_U(h unsafe.Pointer) *QSettings {
	return newQSettings((*C.QSettings)(h))
}

// NewQSettings constructs a new QSettings object.
func NewQSettings(organization string) *QSettings {
	organization_Cstring := C.CString(organization)
	defer C.free(unsafe.Pointer(organization_Cstring))
	ret := C.QSettings_new(organization_Cstring, C.ulong(len(organization)))
	return newQSettings(ret)
}

// NewQSettings2 constructs a new QSettings object.
func NewQSettings2(scope uintptr, organization string) *QSettings {
	organization_Cstring := C.CString(organization)
	defer C.free(unsafe.Pointer(organization_Cstring))
	ret := C.QSettings_new2((C.uintptr_t)(scope), organization_Cstring, C.ulong(len(organization)))
	return newQSettings(ret)
}

// NewQSettings3 constructs a new QSettings object.
func NewQSettings3(format uintptr, scope uintptr, organization string) *QSettings {
	organization_Cstring := C.CString(organization)
	defer C.free(unsafe.Pointer(organization_Cstring))
	ret := C.QSettings_new3((C.uintptr_t)(format), (C.uintptr_t)(scope), organization_Cstring, C.ulong(len(organization)))
	return newQSettings(ret)
}

// NewQSettings4 constructs a new QSettings object.
func NewQSettings4(fileName string, format uintptr) *QSettings {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QSettings_new4(fileName_Cstring, C.ulong(len(fileName)), (C.uintptr_t)(format))
	return newQSettings(ret)
}

// NewQSettings5 constructs a new QSettings object.
func NewQSettings5() *QSettings {
	ret := C.QSettings_new5()
	return newQSettings(ret)
}

// NewQSettings6 constructs a new QSettings object.
func NewQSettings6(scope uintptr) *QSettings {
	ret := C.QSettings_new6((C.uintptr_t)(scope))
	return newQSettings(ret)
}

// NewQSettings7 constructs a new QSettings object.
func NewQSettings7(organization string, application string) *QSettings {
	organization_Cstring := C.CString(organization)
	defer C.free(unsafe.Pointer(organization_Cstring))
	application_Cstring := C.CString(application)
	defer C.free(unsafe.Pointer(application_Cstring))
	ret := C.QSettings_new7(organization_Cstring, C.ulong(len(organization)), application_Cstring, C.ulong(len(application)))
	return newQSettings(ret)
}

// NewQSettings8 constructs a new QSettings object.
func NewQSettings8(organization string, application string, parent *QObject) *QSettings {
	organization_Cstring := C.CString(organization)
	defer C.free(unsafe.Pointer(organization_Cstring))
	application_Cstring := C.CString(application)
	defer C.free(unsafe.Pointer(application_Cstring))
	ret := C.QSettings_new8(organization_Cstring, C.ulong(len(organization)), application_Cstring, C.ulong(len(application)), parent.cPointer())
	return newQSettings(ret)
}

// NewQSettings9 constructs a new QSettings object.
func NewQSettings9(scope uintptr, organization string, application string) *QSettings {
	organization_Cstring := C.CString(organization)
	defer C.free(unsafe.Pointer(organization_Cstring))
	application_Cstring := C.CString(application)
	defer C.free(unsafe.Pointer(application_Cstring))
	ret := C.QSettings_new9((C.uintptr_t)(scope), organization_Cstring, C.ulong(len(organization)), application_Cstring, C.ulong(len(application)))
	return newQSettings(ret)
}

// NewQSettings10 constructs a new QSettings object.
func NewQSettings10(scope uintptr, organization string, application string, parent *QObject) *QSettings {
	organization_Cstring := C.CString(organization)
	defer C.free(unsafe.Pointer(organization_Cstring))
	application_Cstring := C.CString(application)
	defer C.free(unsafe.Pointer(application_Cstring))
	ret := C.QSettings_new10((C.uintptr_t)(scope), organization_Cstring, C.ulong(len(organization)), application_Cstring, C.ulong(len(application)), parent.cPointer())
	return newQSettings(ret)
}

// NewQSettings11 constructs a new QSettings object.
func NewQSettings11(format uintptr, scope uintptr, organization string, application string) *QSettings {
	organization_Cstring := C.CString(organization)
	defer C.free(unsafe.Pointer(organization_Cstring))
	application_Cstring := C.CString(application)
	defer C.free(unsafe.Pointer(application_Cstring))
	ret := C.QSettings_new11((C.uintptr_t)(format), (C.uintptr_t)(scope), organization_Cstring, C.ulong(len(organization)), application_Cstring, C.ulong(len(application)))
	return newQSettings(ret)
}

// NewQSettings12 constructs a new QSettings object.
func NewQSettings12(format uintptr, scope uintptr, organization string, application string, parent *QObject) *QSettings {
	organization_Cstring := C.CString(organization)
	defer C.free(unsafe.Pointer(organization_Cstring))
	application_Cstring := C.CString(application)
	defer C.free(unsafe.Pointer(application_Cstring))
	ret := C.QSettings_new12((C.uintptr_t)(format), (C.uintptr_t)(scope), organization_Cstring, C.ulong(len(organization)), application_Cstring, C.ulong(len(application)), parent.cPointer())
	return newQSettings(ret)
}

// NewQSettings13 constructs a new QSettings object.
func NewQSettings13(fileName string, format uintptr, parent *QObject) *QSettings {
	fileName_Cstring := C.CString(fileName)
	defer C.free(unsafe.Pointer(fileName_Cstring))
	ret := C.QSettings_new13(fileName_Cstring, C.ulong(len(fileName)), (C.uintptr_t)(format), parent.cPointer())
	return newQSettings(ret)
}

// NewQSettings14 constructs a new QSettings object.
func NewQSettings14(parent *QObject) *QSettings {
	ret := C.QSettings_new14(parent.cPointer())
	return newQSettings(ret)
}

// NewQSettings15 constructs a new QSettings object.
func NewQSettings15(scope uintptr, parent *QObject) *QSettings {
	ret := C.QSettings_new15((C.uintptr_t)(scope), parent.cPointer())
	return newQSettings(ret)
}

func (this *QSettings) MetaObject() *QMetaObject {
	ret := C.QSettings_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QSettings_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSettings_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSettings_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSettings_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSettings) Clear() {
	C.QSettings_Clear(this.h)
}

func (this *QSettings) Sync() {
	C.QSettings_Sync(this.h)
}

func (this *QSettings) Status() uintptr {
	ret := C.QSettings_Status(this.h)
	return (uintptr)(ret)
}

func (this *QSettings) IsAtomicSyncRequired() bool {
	ret := C.QSettings_IsAtomicSyncRequired(this.h)
	return (bool)(ret)
}

func (this *QSettings) SetAtomicSyncRequired(enable bool) {
	C.QSettings_SetAtomicSyncRequired(this.h, (C.bool)(enable))
}

func (this *QSettings) BeginGroup(prefix string) {
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	C.QSettings_BeginGroup(this.h, prefix_Cstring, C.ulong(len(prefix)))
}

func (this *QSettings) EndGroup() {
	C.QSettings_EndGroup(this.h)
}

func (this *QSettings) Group() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSettings_Group(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSettings) BeginReadArray(prefix string) int {
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	ret := C.QSettings_BeginReadArray(this.h, prefix_Cstring, C.ulong(len(prefix)))
	return (int)(ret)
}

func (this *QSettings) BeginWriteArray(prefix string) {
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	C.QSettings_BeginWriteArray(this.h, prefix_Cstring, C.ulong(len(prefix)))
}

func (this *QSettings) EndArray() {
	C.QSettings_EndArray(this.h)
}

func (this *QSettings) SetArrayIndex(i int) {
	C.QSettings_SetArrayIndex(this.h, (C.int)(i))
}

func (this *QSettings) AllKeys() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QSettings_AllKeys(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSettings) ChildKeys() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QSettings_ChildKeys(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSettings) ChildGroups() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QSettings_ChildGroups(this.h, &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSettings) IsWritable() bool {
	ret := C.QSettings_IsWritable(this.h)
	return (bool)(ret)
}

func (this *QSettings) SetValue(key string, value *QVariant) {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	C.QSettings_SetValue(this.h, key_Cstring, C.ulong(len(key)), value.cPointer())
}

func (this *QSettings) Value(key string) *QVariant {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QSettings_Value(this.h, key_Cstring, C.ulong(len(key)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSettings) Remove(key string) {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	C.QSettings_Remove(this.h, key_Cstring, C.ulong(len(key)))
}

func (this *QSettings) Contains(key string) bool {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QSettings_Contains(this.h, key_Cstring, C.ulong(len(key)))
	return (bool)(ret)
}

func (this *QSettings) SetFallbacksEnabled(b bool) {
	C.QSettings_SetFallbacksEnabled(this.h, (C.bool)(b))
}

func (this *QSettings) FallbacksEnabled() bool {
	ret := C.QSettings_FallbacksEnabled(this.h)
	return (bool)(ret)
}

func (this *QSettings) FileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSettings_FileName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSettings) Format() uintptr {
	ret := C.QSettings_Format(this.h)
	return (uintptr)(ret)
}

func (this *QSettings) Scope() uintptr {
	ret := C.QSettings_Scope(this.h)
	return (uintptr)(ret)
}

func (this *QSettings) OrganizationName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSettings_OrganizationName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSettings) ApplicationName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSettings_ApplicationName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSettings) SetIniCodec(codec *QTextCodec) {
	C.QSettings_SetIniCodec(this.h, codec.cPointer())
}

func (this *QSettings) SetIniCodecWithCodecName(codecName string) {
	codecName_Cstring := C.CString(codecName)
	defer C.free(unsafe.Pointer(codecName_Cstring))
	C.QSettings_SetIniCodecWithCodecName(this.h, codecName_Cstring)
}

func (this *QSettings) IniCodec() *QTextCodec {
	ret := C.QSettings_IniCodec(this.h)
	return newQTextCodec_U(unsafe.Pointer(ret))
}

func QSettings_SetDefaultFormat(format uintptr) {
	C.QSettings_SetDefaultFormat((C.uintptr_t)(format))
}

func QSettings_DefaultFormat() uintptr {
	ret := C.QSettings_DefaultFormat()
	return (uintptr)(ret)
}

func QSettings_SetSystemIniPath(dir string) {
	dir_Cstring := C.CString(dir)
	defer C.free(unsafe.Pointer(dir_Cstring))
	C.QSettings_SetSystemIniPath(dir_Cstring, C.ulong(len(dir)))
}

func QSettings_SetUserIniPath(dir string) {
	dir_Cstring := C.CString(dir)
	defer C.free(unsafe.Pointer(dir_Cstring))
	C.QSettings_SetUserIniPath(dir_Cstring, C.ulong(len(dir)))
}

func QSettings_SetPath(format uintptr, scope uintptr, path string) {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	C.QSettings_SetPath((C.uintptr_t)(format), (C.uintptr_t)(scope), path_Cstring, C.ulong(len(path)))
}

func QSettings_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSettings_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSettings_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSettings_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSettings_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSettings_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSettings_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSettings_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSettings) BeginWriteArray2(prefix string, size int) {
	prefix_Cstring := C.CString(prefix)
	defer C.free(unsafe.Pointer(prefix_Cstring))
	C.QSettings_BeginWriteArray2(this.h, prefix_Cstring, C.ulong(len(prefix)), (C.int)(size))
}

func (this *QSettings) Value2(key string, defaultValue *QVariant) *QVariant {
	key_Cstring := C.CString(key)
	defer C.free(unsafe.Pointer(key_Cstring))
	ret := C.QSettings_Value2(this.h, key_Cstring, C.ulong(len(key)), defaultValue.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSettings) Delete() {
	C.QSettings_Delete(this.h)
}
