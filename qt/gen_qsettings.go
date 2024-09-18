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
	QSettings__Status__NoError     QSettings__Status = 0
	QSettings__Status__AccessError QSettings__Status = 1
	QSettings__Status__FormatError QSettings__Status = 2
)

type QSettings__Format int

const (
	QSettings__Format__NativeFormat   QSettings__Format = 0
	QSettings__Format__IniFormat      QSettings__Format = 1
	QSettings__Format__InvalidFormat  QSettings__Format = 16
	QSettings__Format__CustomFormat1  QSettings__Format = 17
	QSettings__Format__CustomFormat2  QSettings__Format = 18
	QSettings__Format__CustomFormat3  QSettings__Format = 19
	QSettings__Format__CustomFormat4  QSettings__Format = 20
	QSettings__Format__CustomFormat5  QSettings__Format = 21
	QSettings__Format__CustomFormat6  QSettings__Format = 22
	QSettings__Format__CustomFormat7  QSettings__Format = 23
	QSettings__Format__CustomFormat8  QSettings__Format = 24
	QSettings__Format__CustomFormat9  QSettings__Format = 25
	QSettings__Format__CustomFormat10 QSettings__Format = 26
	QSettings__Format__CustomFormat11 QSettings__Format = 27
	QSettings__Format__CustomFormat12 QSettings__Format = 28
	QSettings__Format__CustomFormat13 QSettings__Format = 29
	QSettings__Format__CustomFormat14 QSettings__Format = 30
	QSettings__Format__CustomFormat15 QSettings__Format = 31
	QSettings__Format__CustomFormat16 QSettings__Format = 32
)

type QSettings__Scope int

const (
	QSettings__Scope__UserScope   QSettings__Scope = 0
	QSettings__Scope__SystemScope QSettings__Scope = 1
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
	if h == nil {
		return nil
	}
	return &QSettings{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQSettings_U(h unsafe.Pointer) *QSettings {
	return newQSettings((*C.QSettings)(h))
}

// NewQSettings constructs a new QSettings object.
func NewQSettings(organization string) *QSettings {
	organization_ms := miqt_strdupg(organization)
	defer C.free(organization_ms)
	ret := C.QSettings_new((*C.struct_miqt_string)(organization_ms))
	return newQSettings(ret)
}

// NewQSettings2 constructs a new QSettings object.
func NewQSettings2(scope QSettings__Scope, organization string) *QSettings {
	organization_ms := miqt_strdupg(organization)
	defer C.free(organization_ms)
	ret := C.QSettings_new2((C.int)(scope), (*C.struct_miqt_string)(organization_ms))
	return newQSettings(ret)
}

// NewQSettings3 constructs a new QSettings object.
func NewQSettings3(format QSettings__Format, scope QSettings__Scope, organization string) *QSettings {
	organization_ms := miqt_strdupg(organization)
	defer C.free(organization_ms)
	ret := C.QSettings_new3((C.int)(format), (C.int)(scope), (*C.struct_miqt_string)(organization_ms))
	return newQSettings(ret)
}

// NewQSettings4 constructs a new QSettings object.
func NewQSettings4(fileName string, format QSettings__Format) *QSettings {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	ret := C.QSettings_new4((*C.struct_miqt_string)(fileName_ms), (C.int)(format))
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
	organization_ms := miqt_strdupg(organization)
	defer C.free(organization_ms)
	application_ms := miqt_strdupg(application)
	defer C.free(application_ms)
	ret := C.QSettings_new7((*C.struct_miqt_string)(organization_ms), (*C.struct_miqt_string)(application_ms))
	return newQSettings(ret)
}

// NewQSettings8 constructs a new QSettings object.
func NewQSettings8(organization string, application string, parent *QObject) *QSettings {
	organization_ms := miqt_strdupg(organization)
	defer C.free(organization_ms)
	application_ms := miqt_strdupg(application)
	defer C.free(application_ms)
	ret := C.QSettings_new8((*C.struct_miqt_string)(organization_ms), (*C.struct_miqt_string)(application_ms), parent.cPointer())
	return newQSettings(ret)
}

// NewQSettings9 constructs a new QSettings object.
func NewQSettings9(scope QSettings__Scope, organization string, application string) *QSettings {
	organization_ms := miqt_strdupg(organization)
	defer C.free(organization_ms)
	application_ms := miqt_strdupg(application)
	defer C.free(application_ms)
	ret := C.QSettings_new9((C.int)(scope), (*C.struct_miqt_string)(organization_ms), (*C.struct_miqt_string)(application_ms))
	return newQSettings(ret)
}

// NewQSettings10 constructs a new QSettings object.
func NewQSettings10(scope QSettings__Scope, organization string, application string, parent *QObject) *QSettings {
	organization_ms := miqt_strdupg(organization)
	defer C.free(organization_ms)
	application_ms := miqt_strdupg(application)
	defer C.free(application_ms)
	ret := C.QSettings_new10((C.int)(scope), (*C.struct_miqt_string)(organization_ms), (*C.struct_miqt_string)(application_ms), parent.cPointer())
	return newQSettings(ret)
}

// NewQSettings11 constructs a new QSettings object.
func NewQSettings11(format QSettings__Format, scope QSettings__Scope, organization string, application string) *QSettings {
	organization_ms := miqt_strdupg(organization)
	defer C.free(organization_ms)
	application_ms := miqt_strdupg(application)
	defer C.free(application_ms)
	ret := C.QSettings_new11((C.int)(format), (C.int)(scope), (*C.struct_miqt_string)(organization_ms), (*C.struct_miqt_string)(application_ms))
	return newQSettings(ret)
}

// NewQSettings12 constructs a new QSettings object.
func NewQSettings12(format QSettings__Format, scope QSettings__Scope, organization string, application string, parent *QObject) *QSettings {
	organization_ms := miqt_strdupg(organization)
	defer C.free(organization_ms)
	application_ms := miqt_strdupg(application)
	defer C.free(application_ms)
	ret := C.QSettings_new12((C.int)(format), (C.int)(scope), (*C.struct_miqt_string)(organization_ms), (*C.struct_miqt_string)(application_ms), parent.cPointer())
	return newQSettings(ret)
}

// NewQSettings13 constructs a new QSettings object.
func NewQSettings13(fileName string, format QSettings__Format, parent *QObject) *QSettings {
	fileName_ms := miqt_strdupg(fileName)
	defer C.free(fileName_ms)
	ret := C.QSettings_new13((*C.struct_miqt_string)(fileName_ms), (C.int)(format), parent.cPointer())
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
	return newQMetaObject_U(unsafe.Pointer(C.QSettings_MetaObject(this.h)))
}

func QSettings_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSettings_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSettings_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSettings_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	prefix_ms := miqt_strdupg(prefix)
	defer C.free(prefix_ms)
	C.QSettings_BeginGroup(this.h, (*C.struct_miqt_string)(prefix_ms))
}

func (this *QSettings) EndGroup() {
	C.QSettings_EndGroup(this.h)
}

func (this *QSettings) Group() string {
	var _ms *C.struct_miqt_string = C.QSettings_Group(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSettings) BeginReadArray(prefix string) int {
	prefix_ms := miqt_strdupg(prefix)
	defer C.free(prefix_ms)
	return (int)(C.QSettings_BeginReadArray(this.h, (*C.struct_miqt_string)(prefix_ms)))
}

func (this *QSettings) BeginWriteArray(prefix string) {
	prefix_ms := miqt_strdupg(prefix)
	defer C.free(prefix_ms)
	C.QSettings_BeginWriteArray(this.h, (*C.struct_miqt_string)(prefix_ms))
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
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QSettings) ChildKeys() []string {
	var _ma *C.struct_miqt_array = C.QSettings_ChildKeys(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QSettings) ChildGroups() []string {
	var _ma *C.struct_miqt_array = C.QSettings_ChildGroups(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]*C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms *C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(&_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms))
		_ret[i] = _lv_ret
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QSettings) IsWritable() bool {
	return (bool)(C.QSettings_IsWritable(this.h))
}

func (this *QSettings) SetValue(key string, value *QVariant) {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	C.QSettings_SetValue(this.h, (*C.struct_miqt_string)(key_ms), value.cPointer())
}

func (this *QSettings) Value(key string) *QVariant {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	_ret := C.QSettings_Value(this.h, (*C.struct_miqt_string)(key_ms))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSettings) Remove(key string) {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	C.QSettings_Remove(this.h, (*C.struct_miqt_string)(key_ms))
}

func (this *QSettings) Contains(key string) bool {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	return (bool)(C.QSettings_Contains(this.h, (*C.struct_miqt_string)(key_ms)))
}

func (this *QSettings) SetFallbacksEnabled(b bool) {
	C.QSettings_SetFallbacksEnabled(this.h, (C.bool)(b))
}

func (this *QSettings) FallbacksEnabled() bool {
	return (bool)(C.QSettings_FallbacksEnabled(this.h))
}

func (this *QSettings) FileName() string {
	var _ms *C.struct_miqt_string = C.QSettings_FileName(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSettings) Format() QSettings__Format {
	return (QSettings__Format)(C.QSettings_Format(this.h))
}

func (this *QSettings) Scope() QSettings__Scope {
	return (QSettings__Scope)(C.QSettings_Scope(this.h))
}

func (this *QSettings) OrganizationName() string {
	var _ms *C.struct_miqt_string = C.QSettings_OrganizationName(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSettings) ApplicationName() string {
	var _ms *C.struct_miqt_string = C.QSettings_ApplicationName(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	return newQTextCodec_U(unsafe.Pointer(C.QSettings_IniCodec(this.h)))
}

func QSettings_SetDefaultFormat(format QSettings__Format) {
	C.QSettings_SetDefaultFormat((C.int)(format))
}

func QSettings_DefaultFormat() QSettings__Format {
	return (QSettings__Format)(C.QSettings_DefaultFormat())
}

func QSettings_SetSystemIniPath(dir string) {
	dir_ms := miqt_strdupg(dir)
	defer C.free(dir_ms)
	C.QSettings_SetSystemIniPath((*C.struct_miqt_string)(dir_ms))
}

func QSettings_SetUserIniPath(dir string) {
	dir_ms := miqt_strdupg(dir)
	defer C.free(dir_ms)
	C.QSettings_SetUserIniPath((*C.struct_miqt_string)(dir_ms))
}

func QSettings_SetPath(format QSettings__Format, scope QSettings__Scope, path string) {
	path_ms := miqt_strdupg(path)
	defer C.free(path_ms)
	C.QSettings_SetPath((C.int)(format), (C.int)(scope), (*C.struct_miqt_string)(path_ms))
}

func QSettings_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSettings_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSettings_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSettings_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSettings_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSettings_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSettings_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSettings_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSettings) BeginWriteArray2(prefix string, size int) {
	prefix_ms := miqt_strdupg(prefix)
	defer C.free(prefix_ms)
	C.QSettings_BeginWriteArray2(this.h, (*C.struct_miqt_string)(prefix_ms), (C.int)(size))
}

func (this *QSettings) Value2(key string, defaultValue *QVariant) *QVariant {
	key_ms := miqt_strdupg(key)
	defer C.free(key_ms)
	_ret := C.QSettings_Value2(this.h, (*C.struct_miqt_string)(key_ms), defaultValue.cPointer())
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
