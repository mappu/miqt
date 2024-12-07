package webengine

/*

#include "gen_qwebengineurlscheme.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QWebEngineUrlScheme__Syntax int

const (
	QWebEngineUrlScheme__HostPortAndUserInformation QWebEngineUrlScheme__Syntax = 0
	QWebEngineUrlScheme__HostAndPort                QWebEngineUrlScheme__Syntax = 1
	QWebEngineUrlScheme__Host                       QWebEngineUrlScheme__Syntax = 2
	QWebEngineUrlScheme__Path                       QWebEngineUrlScheme__Syntax = 3
)

type QWebEngineUrlScheme__SpecialPort int

const (
	QWebEngineUrlScheme__PortUnspecified QWebEngineUrlScheme__SpecialPort = -1
)

type QWebEngineUrlScheme__Flag int

const (
	QWebEngineUrlScheme__SecureScheme                 QWebEngineUrlScheme__Flag = 1
	QWebEngineUrlScheme__LocalScheme                  QWebEngineUrlScheme__Flag = 2
	QWebEngineUrlScheme__LocalAccessAllowed           QWebEngineUrlScheme__Flag = 4
	QWebEngineUrlScheme__NoAccessAllowed              QWebEngineUrlScheme__Flag = 8
	QWebEngineUrlScheme__ServiceWorkersAllowed        QWebEngineUrlScheme__Flag = 16
	QWebEngineUrlScheme__ViewSourceAllowed            QWebEngineUrlScheme__Flag = 32
	QWebEngineUrlScheme__ContentSecurityPolicyIgnored QWebEngineUrlScheme__Flag = 64
	QWebEngineUrlScheme__CorsEnabled                  QWebEngineUrlScheme__Flag = 128
)

type QWebEngineUrlScheme struct {
	h          *C.QWebEngineUrlScheme
	isSubclass bool
}

func (this *QWebEngineUrlScheme) cPointer() *C.QWebEngineUrlScheme {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineUrlScheme) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineUrlScheme constructs the type using only CGO pointers.
func newQWebEngineUrlScheme(h *C.QWebEngineUrlScheme) *QWebEngineUrlScheme {
	if h == nil {
		return nil
	}
	return &QWebEngineUrlScheme{h: h}
}

// UnsafeNewQWebEngineUrlScheme constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineUrlScheme(h unsafe.Pointer) *QWebEngineUrlScheme {
	if h == nil {
		return nil
	}

	return &QWebEngineUrlScheme{h: (*C.QWebEngineUrlScheme)(h)}
}

// NewQWebEngineUrlScheme constructs a new QWebEngineUrlScheme object.
func NewQWebEngineUrlScheme() *QWebEngineUrlScheme {
	var outptr_QWebEngineUrlScheme *C.QWebEngineUrlScheme = nil

	C.QWebEngineUrlScheme_new(&outptr_QWebEngineUrlScheme)
	ret := newQWebEngineUrlScheme(outptr_QWebEngineUrlScheme)
	ret.isSubclass = true
	return ret
}

// NewQWebEngineUrlScheme2 constructs a new QWebEngineUrlScheme object.
func NewQWebEngineUrlScheme2(name []byte) *QWebEngineUrlScheme {
	name_alias := C.struct_miqt_string{}
	name_alias.data = (*C.char)(unsafe.Pointer(&name[0]))
	name_alias.len = C.size_t(len(name))
	var outptr_QWebEngineUrlScheme *C.QWebEngineUrlScheme = nil

	C.QWebEngineUrlScheme_new2(name_alias, &outptr_QWebEngineUrlScheme)
	ret := newQWebEngineUrlScheme(outptr_QWebEngineUrlScheme)
	ret.isSubclass = true
	return ret
}

// NewQWebEngineUrlScheme3 constructs a new QWebEngineUrlScheme object.
func NewQWebEngineUrlScheme3(that *QWebEngineUrlScheme) *QWebEngineUrlScheme {
	var outptr_QWebEngineUrlScheme *C.QWebEngineUrlScheme = nil

	C.QWebEngineUrlScheme_new3(that.cPointer(), &outptr_QWebEngineUrlScheme)
	ret := newQWebEngineUrlScheme(outptr_QWebEngineUrlScheme)
	ret.isSubclass = true
	return ret
}

func (this *QWebEngineUrlScheme) OperatorAssign(that *QWebEngineUrlScheme) {
	C.QWebEngineUrlScheme_OperatorAssign(this.h, that.cPointer())
}

func (this *QWebEngineUrlScheme) OperatorEqual(that *QWebEngineUrlScheme) bool {
	return (bool)(C.QWebEngineUrlScheme_OperatorEqual(this.h, that.cPointer()))
}

func (this *QWebEngineUrlScheme) OperatorNotEqual(that *QWebEngineUrlScheme) bool {
	return (bool)(C.QWebEngineUrlScheme_OperatorNotEqual(this.h, that.cPointer()))
}

func (this *QWebEngineUrlScheme) Name() []byte {
	var _bytearray C.struct_miqt_string = C.QWebEngineUrlScheme_Name(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QWebEngineUrlScheme) SetName(newValue []byte) {
	newValue_alias := C.struct_miqt_string{}
	newValue_alias.data = (*C.char)(unsafe.Pointer(&newValue[0]))
	newValue_alias.len = C.size_t(len(newValue))
	C.QWebEngineUrlScheme_SetName(this.h, newValue_alias)
}

func (this *QWebEngineUrlScheme) Syntax() QWebEngineUrlScheme__Syntax {
	return (QWebEngineUrlScheme__Syntax)(C.QWebEngineUrlScheme_Syntax(this.h))
}

func (this *QWebEngineUrlScheme) SetSyntax(newValue QWebEngineUrlScheme__Syntax) {
	C.QWebEngineUrlScheme_SetSyntax(this.h, (C.int)(newValue))
}

func (this *QWebEngineUrlScheme) DefaultPort() int {
	return (int)(C.QWebEngineUrlScheme_DefaultPort(this.h))
}

func (this *QWebEngineUrlScheme) SetDefaultPort(newValue int) {
	C.QWebEngineUrlScheme_SetDefaultPort(this.h, (C.int)(newValue))
}

func (this *QWebEngineUrlScheme) Flags() QWebEngineUrlScheme__Flag {
	return (QWebEngineUrlScheme__Flag)(C.QWebEngineUrlScheme_Flags(this.h))
}

func (this *QWebEngineUrlScheme) SetFlags(newValue QWebEngineUrlScheme__Flag) {
	C.QWebEngineUrlScheme_SetFlags(this.h, (C.int)(newValue))
}

func QWebEngineUrlScheme_RegisterScheme(scheme *QWebEngineUrlScheme) {
	C.QWebEngineUrlScheme_RegisterScheme(scheme.cPointer())
}

func QWebEngineUrlScheme_SchemeByName(name []byte) *QWebEngineUrlScheme {
	name_alias := C.struct_miqt_string{}
	name_alias.data = (*C.char)(unsafe.Pointer(&name[0]))
	name_alias.len = C.size_t(len(name))
	_goptr := newQWebEngineUrlScheme(C.QWebEngineUrlScheme_SchemeByName(name_alias))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QWebEngineUrlScheme) Delete() {
	C.QWebEngineUrlScheme_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineUrlScheme) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineUrlScheme) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
