package network

/*

#include "gen_qnetworkcookiejar.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QNetworkCookieJar struct {
	h          *C.QNetworkCookieJar
	isSubclass bool
	*qt.QObject
}

func (this *QNetworkCookieJar) cPointer() *C.QNetworkCookieJar {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkCookieJar) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNetworkCookieJar constructs the type using only CGO pointers.
func newQNetworkCookieJar(h *C.QNetworkCookieJar) *QNetworkCookieJar {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QNetworkCookieJar_virtbase(h, &outptr_QObject)

	return &QNetworkCookieJar{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQNetworkCookieJar constructs the type using only unsafe pointers.
func UnsafeNewQNetworkCookieJar(h unsafe.Pointer) *QNetworkCookieJar {
	return newQNetworkCookieJar((*C.QNetworkCookieJar)(h))
}

// NewQNetworkCookieJar constructs a new QNetworkCookieJar object.
func NewQNetworkCookieJar() *QNetworkCookieJar {

	ret := newQNetworkCookieJar(C.QNetworkCookieJar_new())
	ret.isSubclass = true
	return ret
}

// NewQNetworkCookieJar2 constructs a new QNetworkCookieJar object.
func NewQNetworkCookieJar2(parent *qt.QObject) *QNetworkCookieJar {

	ret := newQNetworkCookieJar(C.QNetworkCookieJar_new2((*C.QObject)(parent.UnsafePointer())))
	ret.isSubclass = true
	return ret
}

func (this *QNetworkCookieJar) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QNetworkCookieJar_MetaObject(this.h)))
}

func (this *QNetworkCookieJar) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QNetworkCookieJar_Metacast(this.h, param1_Cstring))
}

func QNetworkCookieJar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkCookieJar_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkCookieJar_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkCookieJar_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkCookieJar) CookiesForUrl(url *qt.QUrl) []QNetworkCookie {
	var _ma C.struct_miqt_array = C.QNetworkCookieJar_CookiesForUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
	_ret := make([]QNetworkCookie, int(_ma.len))
	_outCast := (*[0xffff]*C.QNetworkCookie)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQNetworkCookie(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QNetworkCookieJar) SetCookiesFromUrl(cookieList []QNetworkCookie, url *qt.QUrl) bool {
	cookieList_CArray := (*[0xffff]*C.QNetworkCookie)(C.malloc(C.size_t(8 * len(cookieList))))
	defer C.free(unsafe.Pointer(cookieList_CArray))
	for i := range cookieList {
		cookieList_CArray[i] = cookieList[i].cPointer()
	}
	cookieList_ma := C.struct_miqt_array{len: C.size_t(len(cookieList)), data: unsafe.Pointer(cookieList_CArray)}
	return (bool)(C.QNetworkCookieJar_SetCookiesFromUrl(this.h, cookieList_ma, (*C.QUrl)(url.UnsafePointer())))
}

func (this *QNetworkCookieJar) InsertCookie(cookie *QNetworkCookie) bool {
	return (bool)(C.QNetworkCookieJar_InsertCookie(this.h, cookie.cPointer()))
}

func (this *QNetworkCookieJar) UpdateCookie(cookie *QNetworkCookie) bool {
	return (bool)(C.QNetworkCookieJar_UpdateCookie(this.h, cookie.cPointer()))
}

func (this *QNetworkCookieJar) DeleteCookie(cookie *QNetworkCookie) bool {
	return (bool)(C.QNetworkCookieJar_DeleteCookie(this.h, cookie.cPointer()))
}

func QNetworkCookieJar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkCookieJar_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkCookieJar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkCookieJar_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkCookieJar_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkCookieJar_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkCookieJar_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkCookieJar_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkCookieJar) callVirtualBase_CookiesForUrl(url *qt.QUrl) []QNetworkCookie {

	var _ma C.struct_miqt_array = C.QNetworkCookieJar_virtualbase_CookiesForUrl(unsafe.Pointer(this.h), (*C.QUrl)(url.UnsafePointer()))
	_ret := make([]QNetworkCookie, int(_ma.len))
	_outCast := (*[0xffff]*C.QNetworkCookie)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQNetworkCookie(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QNetworkCookieJar) OnCookiesForUrl(slot func(super func(url *qt.QUrl) []QNetworkCookie, url *qt.QUrl) []QNetworkCookie) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkCookieJar_override_virtual_CookiesForUrl(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkCookieJar_CookiesForUrl
func miqt_exec_callback_QNetworkCookieJar_CookiesForUrl(self *C.QNetworkCookieJar, cb C.intptr_t, url *C.QUrl) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(url *qt.QUrl) []QNetworkCookie, url *qt.QUrl) []QNetworkCookie)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQUrl(unsafe.Pointer(url))

	virtualReturn := gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_CookiesForUrl, slotval1)
	virtualReturn_CArray := (*[0xffff]*C.QNetworkCookie)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QNetworkCookieJar) callVirtualBase_SetCookiesFromUrl(cookieList []QNetworkCookie, url *qt.QUrl) bool {
	cookieList_CArray := (*[0xffff]*C.QNetworkCookie)(C.malloc(C.size_t(8 * len(cookieList))))
	defer C.free(unsafe.Pointer(cookieList_CArray))
	for i := range cookieList {
		cookieList_CArray[i] = cookieList[i].cPointer()
	}
	cookieList_ma := C.struct_miqt_array{len: C.size_t(len(cookieList)), data: unsafe.Pointer(cookieList_CArray)}

	return (bool)(C.QNetworkCookieJar_virtualbase_SetCookiesFromUrl(unsafe.Pointer(this.h), cookieList_ma, (*C.QUrl)(url.UnsafePointer())))

}
func (this *QNetworkCookieJar) OnSetCookiesFromUrl(slot func(super func(cookieList []QNetworkCookie, url *qt.QUrl) bool, cookieList []QNetworkCookie, url *qt.QUrl) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkCookieJar_override_virtual_SetCookiesFromUrl(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkCookieJar_SetCookiesFromUrl
func miqt_exec_callback_QNetworkCookieJar_SetCookiesFromUrl(self *C.QNetworkCookieJar, cb C.intptr_t, cookieList C.struct_miqt_array, url *C.QUrl) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cookieList []QNetworkCookie, url *qt.QUrl) bool, cookieList []QNetworkCookie, url *qt.QUrl) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var cookieList_ma C.struct_miqt_array = cookieList
	cookieList_ret := make([]QNetworkCookie, int(cookieList_ma.len))
	cookieList_outCast := (*[0xffff]*C.QNetworkCookie)(unsafe.Pointer(cookieList_ma.data)) // hey ya
	for i := 0; i < int(cookieList_ma.len); i++ {
		cookieList_lv_goptr := newQNetworkCookie(cookieList_outCast[i])
		cookieList_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		cookieList_ret[i] = *cookieList_lv_goptr
	}
	slotval1 := cookieList_ret

	slotval2 := qt.UnsafeNewQUrl(unsafe.Pointer(url))

	virtualReturn := gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_SetCookiesFromUrl, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkCookieJar) callVirtualBase_InsertCookie(cookie *QNetworkCookie) bool {

	return (bool)(C.QNetworkCookieJar_virtualbase_InsertCookie(unsafe.Pointer(this.h), cookie.cPointer()))

}
func (this *QNetworkCookieJar) OnInsertCookie(slot func(super func(cookie *QNetworkCookie) bool, cookie *QNetworkCookie) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkCookieJar_override_virtual_InsertCookie(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkCookieJar_InsertCookie
func miqt_exec_callback_QNetworkCookieJar_InsertCookie(self *C.QNetworkCookieJar, cb C.intptr_t, cookie *C.QNetworkCookie) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cookie *QNetworkCookie) bool, cookie *QNetworkCookie) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkCookie(cookie)

	virtualReturn := gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_InsertCookie, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkCookieJar) callVirtualBase_UpdateCookie(cookie *QNetworkCookie) bool {

	return (bool)(C.QNetworkCookieJar_virtualbase_UpdateCookie(unsafe.Pointer(this.h), cookie.cPointer()))

}
func (this *QNetworkCookieJar) OnUpdateCookie(slot func(super func(cookie *QNetworkCookie) bool, cookie *QNetworkCookie) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkCookieJar_override_virtual_UpdateCookie(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkCookieJar_UpdateCookie
func miqt_exec_callback_QNetworkCookieJar_UpdateCookie(self *C.QNetworkCookieJar, cb C.intptr_t, cookie *C.QNetworkCookie) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cookie *QNetworkCookie) bool, cookie *QNetworkCookie) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkCookie(cookie)

	virtualReturn := gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_UpdateCookie, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkCookieJar) callVirtualBase_DeleteCookie(cookie *QNetworkCookie) bool {

	return (bool)(C.QNetworkCookieJar_virtualbase_DeleteCookie(unsafe.Pointer(this.h), cookie.cPointer()))

}
func (this *QNetworkCookieJar) OnDeleteCookie(slot func(super func(cookie *QNetworkCookie) bool, cookie *QNetworkCookie) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkCookieJar_override_virtual_DeleteCookie(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkCookieJar_DeleteCookie
func miqt_exec_callback_QNetworkCookieJar_DeleteCookie(self *C.QNetworkCookieJar, cb C.intptr_t, cookie *C.QNetworkCookie) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cookie *QNetworkCookie) bool, cookie *QNetworkCookie) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkCookie(cookie)

	virtualReturn := gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_DeleteCookie, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkCookieJar) callVirtualBase_ValidateCookie(cookie *QNetworkCookie, url *qt.QUrl) bool {

	return (bool)(C.QNetworkCookieJar_virtualbase_ValidateCookie(unsafe.Pointer(this.h), cookie.cPointer(), (*C.QUrl)(url.UnsafePointer())))

}
func (this *QNetworkCookieJar) OnValidateCookie(slot func(super func(cookie *QNetworkCookie, url *qt.QUrl) bool, cookie *QNetworkCookie, url *qt.QUrl) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkCookieJar_override_virtual_ValidateCookie(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkCookieJar_ValidateCookie
func miqt_exec_callback_QNetworkCookieJar_ValidateCookie(self *C.QNetworkCookieJar, cb C.intptr_t, cookie *C.QNetworkCookie, url *C.QUrl) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cookie *QNetworkCookie, url *qt.QUrl) bool, cookie *QNetworkCookie, url *qt.QUrl) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkCookie(cookie)

	slotval2 := qt.UnsafeNewQUrl(unsafe.Pointer(url))

	virtualReturn := gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_ValidateCookie, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkCookieJar) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QNetworkCookieJar_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QNetworkCookieJar) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkCookieJar_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkCookieJar_Event
func miqt_exec_callback_QNetworkCookieJar_Event(self *C.QNetworkCookieJar, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkCookieJar) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QNetworkCookieJar_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QNetworkCookieJar) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkCookieJar_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkCookieJar_EventFilter
func miqt_exec_callback_QNetworkCookieJar_EventFilter(self *C.QNetworkCookieJar, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkCookieJar) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QNetworkCookieJar_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QNetworkCookieJar) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkCookieJar_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkCookieJar_TimerEvent
func miqt_exec_callback_QNetworkCookieJar_TimerEvent(self *C.QNetworkCookieJar, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QNetworkCookieJar) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QNetworkCookieJar_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QNetworkCookieJar) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkCookieJar_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkCookieJar_ChildEvent
func miqt_exec_callback_QNetworkCookieJar_ChildEvent(self *C.QNetworkCookieJar, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QNetworkCookieJar) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QNetworkCookieJar_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QNetworkCookieJar) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkCookieJar_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkCookieJar_CustomEvent
func miqt_exec_callback_QNetworkCookieJar_CustomEvent(self *C.QNetworkCookieJar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QNetworkCookieJar) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QNetworkCookieJar_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QNetworkCookieJar) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkCookieJar_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkCookieJar_ConnectNotify
func miqt_exec_callback_QNetworkCookieJar_ConnectNotify(self *C.QNetworkCookieJar, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QNetworkCookieJar) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QNetworkCookieJar_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QNetworkCookieJar) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkCookieJar_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkCookieJar_DisconnectNotify
func miqt_exec_callback_QNetworkCookieJar_DisconnectNotify(self *C.QNetworkCookieJar, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QNetworkCookieJar) Delete() {
	C.QNetworkCookieJar_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkCookieJar) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkCookieJar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
