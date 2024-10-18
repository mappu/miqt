package qt

/*

#include "gen_qsettings.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
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

func newQSettings(h *C.QSettings) *QSettings {
	if h == nil {
		return nil
	}
	return &QSettings{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQSettings(h unsafe.Pointer) *QSettings {
	return newQSettings((*C.QSettings)(h))
}

// NewQSettings constructs a new QSettings object.
func NewQSettings(organization string) *QSettings {
	organization_ms := C.struct_miqt_string{}
	organization_ms.data = C.CString(organization)
	organization_ms.len = C.size_t(len(organization))
	defer C.free(unsafe.Pointer(organization_ms.data))
	ret := C.QSettings_new(organization_ms)
	return newQSettings(ret)
}

// NewQSettings2 constructs a new QSettings object.
func NewQSettings2(scope QSettings__Scope, organization string) *QSettings {
	organization_ms := C.struct_miqt_string{}
	organization_ms.data = C.CString(organization)
	organization_ms.len = C.size_t(len(organization))
	defer C.free(unsafe.Pointer(organization_ms.data))
	ret := C.QSettings_new2((C.int)(scope), organization_ms)
	return newQSettings(ret)
}

// NewQSettings3 constructs a new QSettings object.
func NewQSettings3(format QSettings__Format, scope QSettings__Scope, organization string) *QSettings {
	organization_ms := C.struct_miqt_string{}
	organization_ms.data = C.CString(organization)
	organization_ms.len = C.size_t(len(organization))
	defer C.free(unsafe.Pointer(organization_ms.data))
	ret := C.QSettings_new3((C.int)(format), (C.int)(scope), organization_ms)
	return newQSettings(ret)
}

// NewQSettings4 constructs a new QSettings object.
func NewQSettings4(fileName string, format QSettings__Format) *QSettings {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	ret := C.QSettings_new4(fileName_ms, (C.int)(format))
	return newQSettings(ret)
}

// NewQSettings5 constructs a new QSettings object.
func NewQSettings5() *QSettings {
	ret := C.QSettings_new5()
	return newQSettings(ret)
}

// NewQSettings6 constructs a new QSettings object.
func NewQSettings6(scope QSettings__Scope) *QSettings {
	ret := C.QSettings_new6((C.int)(scope))
	return newQSettings(ret)
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
	ret := C.QSettings_new7(organization_ms, application_ms)
	return newQSettings(ret)
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
	ret := C.QSettings_new8(organization_ms, application_ms, parent.cPointer())
	return newQSettings(ret)
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
	ret := C.QSettings_new9((C.int)(scope), organization_ms, application_ms)
	return newQSettings(ret)
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
	ret := C.QSettings_new10((C.int)(scope), organization_ms, application_ms, parent.cPointer())
	return newQSettings(ret)
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
	ret := C.QSettings_new11((C.int)(format), (C.int)(scope), organization_ms, application_ms)
	return newQSettings(ret)
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
	ret := C.QSettings_new12((C.int)(format), (C.int)(scope), organization_ms, application_ms, parent.cPointer())
	return newQSettings(ret)
}

// NewQSettings13 constructs a new QSettings object.
func NewQSettings13(fileName string, format QSettings__Format, parent *QObject) *QSettings {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	ret := C.QSettings_new13(fileName_ms, (C.int)(format), parent.cPointer())
	return newQSettings(ret)
}

// NewQSettings14 constructs a new QSettings object.
func NewQSettings14(parent *QObject) *QSettings {
	ret := C.QSettings_new14(parent.cPointer())
	return newQSettings(ret)
}

// NewQSettings15 constructs a new QSettings object.
func NewQSettings15(scope QSettings__Scope, parent *QObject) *QSettings {
	ret := C.QSettings_new15((C.int)(scope), parent.cPointer())
	return newQSettings(ret)
}

func (this *QSettings) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QSettings_MetaObject(this.h)))
}

func (this *QSettings) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSettings_Metacast(this.h, param1_Cstring))
}

func QSettings_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSettings_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSettings_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSettings_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSettings) Clear() {
	C.QSettings_Clear(this.h)
}

func (this *QSettings) Sync() {
	C.QSettings_Sync(this.h)
}

func (this *QSettings) Status() QSettings__Status {
	return (QSettings__Status)(C.QSettings_Status(this.h))
}

func (this *QSettings) IsAtomicSyncRequired() bool {
	return (bool)(C.QSettings_IsAtomicSyncRequired(this.h))
}

func (this *QSettings) SetAtomicSyncRequired(enable bool) {
	C.QSettings_SetAtomicSyncRequired(this.h, (C.bool)(enable))
}

func (this *QSettings) BeginGroup(prefix string) {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	C.QSettings_BeginGroup(this.h, prefix_ms)
}

func (this *QSettings) EndGroup() {
	C.QSettings_EndGroup(this.h)
}

func (this *QSettings) Group() string {
	var _ms C.struct_miqt_string = C.QSettings_Group(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSettings) BeginReadArray(prefix string) int {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	return (int)(C.QSettings_BeginReadArray(this.h, prefix_ms))
}

func (this *QSettings) BeginWriteArray(prefix string) {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	C.QSettings_BeginWriteArray(this.h, prefix_ms)
}

func (this *QSettings) EndArray() {
	C.QSettings_EndArray(this.h)
}

func (this *QSettings) SetArrayIndex(i int) {
	C.QSettings_SetArrayIndex(this.h, (C.int)(i))
}

func (this *QSettings) AllKeys() []string {
	var _ma *C.struct_miqt_array = C.QSettings_AllKeys(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QSettings) ChildKeys() []string {
	var _ma *C.struct_miqt_array = C.QSettings_ChildKeys(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QSettings) ChildGroups() []string {
	var _ma *C.struct_miqt_array = C.QSettings_ChildGroups(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QSettings) IsWritable() bool {
	return (bool)(C.QSettings_IsWritable(this.h))
}

func (this *QSettings) SetValue(key string, value *QVariant) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QSettings_SetValue(this.h, key_ms, value.cPointer())
}

func (this *QSettings) Value(key string) *QVariant {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_ret := C.QSettings_Value(this.h, key_ms)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSettings) Remove(key string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QSettings_Remove(this.h, key_ms)
}

func (this *QSettings) Contains(key string) bool {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return (bool)(C.QSettings_Contains(this.h, key_ms))
}

func (this *QSettings) SetFallbacksEnabled(b bool) {
	C.QSettings_SetFallbacksEnabled(this.h, (C.bool)(b))
}

func (this *QSettings) FallbacksEnabled() bool {
	return (bool)(C.QSettings_FallbacksEnabled(this.h))
}

func (this *QSettings) FileName() string {
	var _ms C.struct_miqt_string = C.QSettings_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSettings) Format() QSettings__Format {
	return (QSettings__Format)(C.QSettings_Format(this.h))
}

func (this *QSettings) Scope() QSettings__Scope {
	return (QSettings__Scope)(C.QSettings_Scope(this.h))
}

func (this *QSettings) OrganizationName() string {
	var _ms C.struct_miqt_string = C.QSettings_OrganizationName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSettings) ApplicationName() string {
	var _ms C.struct_miqt_string = C.QSettings_ApplicationName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
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
	return UnsafeNewQTextCodec(unsafe.Pointer(C.QSettings_IniCodec(this.h)))
}

func QSettings_SetDefaultFormat(format QSettings__Format) {
	C.QSettings_SetDefaultFormat((C.int)(format))
}

func QSettings_DefaultFormat() QSettings__Format {
	return (QSettings__Format)(C.QSettings_DefaultFormat())
}

func QSettings_SetSystemIniPath(dir string) {
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	C.QSettings_SetSystemIniPath(dir_ms)
}

func QSettings_SetUserIniPath(dir string) {
	dir_ms := C.struct_miqt_string{}
	dir_ms.data = C.CString(dir)
	dir_ms.len = C.size_t(len(dir))
	defer C.free(unsafe.Pointer(dir_ms.data))
	C.QSettings_SetUserIniPath(dir_ms)
}

func QSettings_SetPath(format QSettings__Format, scope QSettings__Scope, path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QSettings_SetPath((C.int)(format), (C.int)(scope), path_ms)
}

func QSettings_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSettings_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSettings_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSettings_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSettings_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSettings_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSettings_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSettings_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSettings) BeginWriteArray2(prefix string, size int) {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	C.QSettings_BeginWriteArray2(this.h, prefix_ms, (C.int)(size))
}

func (this *QSettings) Value2(key string, defaultValue *QVariant) *QVariant {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_ret := C.QSettings_Value2(this.h, key_ms, defaultValue.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QSettings) Delete() {
	C.QSettings_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSettings) GoGC() {
	runtime.SetFinalizer(this, func(this *QSettings) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
