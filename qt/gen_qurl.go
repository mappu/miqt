package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qurl.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QUrl struct {
	h *C.QUrl
}

func (this *QUrl) cPointer() *C.QUrl {
	if this == nil {
		return nil
	}
	return this.h
}

func newQUrl(h *C.QUrl) *QUrl {
	return &QUrl{h: h}
}

func newQUrl_U(h unsafe.Pointer) *QUrl {
	return newQUrl((*C.QUrl)(h))
}

// NewQUrl constructs a new QUrl object.
func NewQUrl() *QUrl {
	ret := C.QUrl_new()
	return newQUrl(ret)
}

// NewQUrl2 constructs a new QUrl object.
func NewQUrl2(copyVal *QUrl) *QUrl {
	ret := C.QUrl_new2(copyVal.cPointer())
	return newQUrl(ret)
}

func (this *QUrl) OperatorAssign(copyVal *QUrl) {
	C.QUrl_OperatorAssign(this.h, copyVal.cPointer())
}

func (this *QUrl) OperatorAssignWithUrl(url string) {
	url_Cstring := C.CString(url)
	defer C.free(unsafe.Pointer(url_Cstring))
	C.QUrl_OperatorAssignWithUrl(this.h, url_Cstring, C.ulong(len(url)))
}

func (this *QUrl) Swap(other *QUrl) {
	C.QUrl_Swap(this.h, other.cPointer())
}

func QUrl_FromUserInput(userInput string) *QUrl {
	userInput_Cstring := C.CString(userInput)
	defer C.free(unsafe.Pointer(userInput_Cstring))
	ret := C.QUrl_FromUserInput(userInput_Cstring, C.ulong(len(userInput)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QUrl) IsValid() bool {
	ret := C.QUrl_IsValid(this.h)
	return (bool)(ret)
}

func (this *QUrl) ErrorString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_ErrorString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) IsEmpty() bool {
	ret := C.QUrl_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QUrl) Clear() {
	C.QUrl_Clear(this.h)
}

func (this *QUrl) SetScheme(scheme string) {
	scheme_Cstring := C.CString(scheme)
	defer C.free(unsafe.Pointer(scheme_Cstring))
	C.QUrl_SetScheme(this.h, scheme_Cstring, C.ulong(len(scheme)))
}

func (this *QUrl) Scheme() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_Scheme(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) SetPort(port int) {
	C.QUrl_SetPort(this.h, (C.int)(port))
}

func (this *QUrl) Port() int {
	ret := C.QUrl_Port(this.h)
	return (int)(ret)
}

func (this *QUrl) HasQuery() bool {
	ret := C.QUrl_HasQuery(this.h)
	return (bool)(ret)
}

func (this *QUrl) SetQuery(query *QUrlQuery) {
	C.QUrl_SetQuery(this.h, query.cPointer())
}

func (this *QUrl) HasFragment() bool {
	ret := C.QUrl_HasFragment(this.h)
	return (bool)(ret)
}

func (this *QUrl) Resolved(relative *QUrl) *QUrl {
	ret := C.QUrl_Resolved(this.h, relative.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QUrl) IsRelative() bool {
	ret := C.QUrl_IsRelative(this.h)
	return (bool)(ret)
}

func (this *QUrl) IsParentOf(url *QUrl) bool {
	ret := C.QUrl_IsParentOf(this.h, url.cPointer())
	return (bool)(ret)
}

func (this *QUrl) IsLocalFile() bool {
	ret := C.QUrl_IsLocalFile(this.h)
	return (bool)(ret)
}

func QUrl_FromLocalFile(localfile string) *QUrl {
	localfile_Cstring := C.CString(localfile)
	defer C.free(unsafe.Pointer(localfile_Cstring))
	ret := C.QUrl_FromLocalFile(localfile_Cstring, C.ulong(len(localfile)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QUrl) ToLocalFile() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_ToLocalFile(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) Detach() {
	C.QUrl_Detach(this.h)
}

func (this *QUrl) IsDetached() bool {
	ret := C.QUrl_IsDetached(this.h)
	return (bool)(ret)
}

func (this *QUrl) OperatorLesser(url *QUrl) bool {
	ret := C.QUrl_OperatorLesser(this.h, url.cPointer())
	return (bool)(ret)
}

func (this *QUrl) OperatorEqual(url *QUrl) bool {
	ret := C.QUrl_OperatorEqual(this.h, url.cPointer())
	return (bool)(ret)
}

func (this *QUrl) OperatorNotEqual(url *QUrl) bool {
	ret := C.QUrl_OperatorNotEqual(this.h, url.cPointer())
	return (bool)(ret)
}

func QUrl_FromPercentEncoding(param1 *QByteArray) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_FromPercentEncoding(param1.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUrl_ToPercentEncoding(param1 string) *QByteArray {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QUrl_ToPercentEncoding(param1_Cstring, C.ulong(len(param1)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QUrl_FromAce(param1 *QByteArray) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_FromAce(param1.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUrl_ToAce(param1 string) *QByteArray {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QUrl_ToAce(param1_Cstring, C.ulong(len(param1)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QUrl_IdnWhitelist() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QUrl_IdnWhitelist(&_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUrl_SetIdnWhitelist(idnWhitelist []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	idnWhitelist_CArray := (*[0xffff]*C.char)(C.malloc(C.ulong(8 * len(idnWhitelist))))
	idnWhitelist_Lengths := (*[0xffff]C.size_t)(C.malloc(C.ulong(8 * len(idnWhitelist))))
	defer C.free(unsafe.Pointer(idnWhitelist_CArray))
	defer C.free(unsafe.Pointer(idnWhitelist_Lengths))
	for i := range idnWhitelist {
		single_cstring := C.CString(idnWhitelist[i])
		defer C.free(unsafe.Pointer(single_cstring))
		idnWhitelist_CArray[i] = single_cstring
		idnWhitelist_Lengths[i] = (C.size_t)(len(idnWhitelist[i]))
	}
	C.QUrl_SetIdnWhitelist(&idnWhitelist_CArray[0], &idnWhitelist_Lengths[0], C.ulong(len(idnWhitelist)))
}

func (this *QUrl) Port1(defaultPort int) int {
	ret := C.QUrl_Port1(this.h, (C.int)(defaultPort))
	return (int)(ret)
}

func QUrl_ToPercentEncoding2(param1 string, exclude *QByteArray) *QByteArray {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QUrl_ToPercentEncoding2(param1_Cstring, C.ulong(len(param1)), exclude.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QUrl_ToPercentEncoding3(param1 string, exclude *QByteArray, include *QByteArray) *QByteArray {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QUrl_ToPercentEncoding3(param1_Cstring, C.ulong(len(param1)), exclude.cPointer(), include.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QUrl) Delete() {
	C.QUrl_Delete(this.h)
}
