package network

/*

#include "gen_qnetworkcookiejar.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QNetworkCookieJar struct {
	h *C.QNetworkCookieJar
	*qt6.QObject
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
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQNetworkCookieJar constructs the type using only unsafe pointers.
func UnsafeNewQNetworkCookieJar(h unsafe.Pointer) *QNetworkCookieJar {
	return newQNetworkCookieJar((*C.QNetworkCookieJar)(h))
}

// NewQNetworkCookieJar constructs a new QNetworkCookieJar object.
func NewQNetworkCookieJar() *QNetworkCookieJar {

	return newQNetworkCookieJar(C.QNetworkCookieJar_new())
}

// NewQNetworkCookieJar2 constructs a new QNetworkCookieJar object.
func NewQNetworkCookieJar2(parent *qt6.QObject) *QNetworkCookieJar {

	return newQNetworkCookieJar(C.QNetworkCookieJar_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QNetworkCookieJar) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QNetworkCookieJar_metaObject(this.h)))
}

func (this *QNetworkCookieJar) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QNetworkCookieJar_metacast(this.h, param1_Cstring))
}

func QNetworkCookieJar_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkCookieJar_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkCookieJar) CookiesForUrl(url *qt6.QUrl) []QNetworkCookie {
	var _ma C.struct_miqt_array = C.QNetworkCookieJar_cookiesForUrl(this.h, (*C.QUrl)(url.UnsafePointer()))
	_ret := make([]QNetworkCookie, int(_ma.len))
	_outCast := (*[0xffff]*C.QNetworkCookie)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQNetworkCookie(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QNetworkCookieJar) SetCookiesFromUrl(cookieList []QNetworkCookie, url *qt6.QUrl) bool {
	cookieList_CArray := (*[0xffff]*C.QNetworkCookie)(C.malloc(C.size_t(8 * len(cookieList))))
	defer C.free(unsafe.Pointer(cookieList_CArray))
	for i := range cookieList {
		cookieList_CArray[i] = cookieList[i].cPointer()
	}
	cookieList_ma := C.struct_miqt_array{len: C.size_t(len(cookieList)), data: unsafe.Pointer(cookieList_CArray)}
	return (bool)(C.QNetworkCookieJar_setCookiesFromUrl(this.h, cookieList_ma, (*C.QUrl)(url.UnsafePointer())))
}

func (this *QNetworkCookieJar) InsertCookie(cookie *QNetworkCookie) bool {
	return (bool)(C.QNetworkCookieJar_insertCookie(this.h, cookie.cPointer()))
}

func (this *QNetworkCookieJar) UpdateCookie(cookie *QNetworkCookie) bool {
	return (bool)(C.QNetworkCookieJar_updateCookie(this.h, cookie.cPointer()))
}

func (this *QNetworkCookieJar) DeleteCookie(cookie *QNetworkCookie) bool {
	return (bool)(C.QNetworkCookieJar_deleteCookie(this.h, cookie.cPointer()))
}

func QNetworkCookieJar_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkCookieJar_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkCookieJar_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkCookieJar_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkCookieJar) callVirtualBase_CookiesForUrl(url *qt6.QUrl) []QNetworkCookie {

	var _ma C.struct_miqt_array = C.QNetworkCookieJar_virtualbase_cookiesForUrl(unsafe.Pointer(this.h), (*C.QUrl)(url.UnsafePointer()))
	_ret := make([]QNetworkCookie, int(_ma.len))
	_outCast := (*[0xffff]*C.QNetworkCookie)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQNetworkCookie(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QNetworkCookieJar) OnCookiesForUrl(slot func(super func(url *qt6.QUrl) []QNetworkCookie, url *qt6.QUrl) []QNetworkCookie) {
	ok := C.QNetworkCookieJar_override_virtual_cookiesForUrl(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkCookieJar_cookiesForUrl
func miqt_exec_callback_QNetworkCookieJar_cookiesForUrl(self *C.QNetworkCookieJar, cb C.intptr_t, url *C.QUrl) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(url *qt6.QUrl) []QNetworkCookie, url *qt6.QUrl) []QNetworkCookie)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(url))

	virtualReturn := gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_CookiesForUrl, slotval1)
	virtualReturn_CArray := (*[0xffff]*C.QNetworkCookie)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QNetworkCookieJar) callVirtualBase_SetCookiesFromUrl(cookieList []QNetworkCookie, url *qt6.QUrl) bool {
	cookieList_CArray := (*[0xffff]*C.QNetworkCookie)(C.malloc(C.size_t(8 * len(cookieList))))
	defer C.free(unsafe.Pointer(cookieList_CArray))
	for i := range cookieList {
		cookieList_CArray[i] = cookieList[i].cPointer()
	}
	cookieList_ma := C.struct_miqt_array{len: C.size_t(len(cookieList)), data: unsafe.Pointer(cookieList_CArray)}

	return (bool)(C.QNetworkCookieJar_virtualbase_setCookiesFromUrl(unsafe.Pointer(this.h), cookieList_ma, (*C.QUrl)(url.UnsafePointer())))

}
func (this *QNetworkCookieJar) OnSetCookiesFromUrl(slot func(super func(cookieList []QNetworkCookie, url *qt6.QUrl) bool, cookieList []QNetworkCookie, url *qt6.QUrl) bool) {
	ok := C.QNetworkCookieJar_override_virtual_setCookiesFromUrl(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkCookieJar_setCookiesFromUrl
func miqt_exec_callback_QNetworkCookieJar_setCookiesFromUrl(self *C.QNetworkCookieJar, cb C.intptr_t, cookieList C.struct_miqt_array, url *C.QUrl) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cookieList []QNetworkCookie, url *qt6.QUrl) bool, cookieList []QNetworkCookie, url *qt6.QUrl) bool)
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

	slotval2 := qt6.UnsafeNewQUrl(unsafe.Pointer(url))

	virtualReturn := gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_SetCookiesFromUrl, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkCookieJar) callVirtualBase_InsertCookie(cookie *QNetworkCookie) bool {

	return (bool)(C.QNetworkCookieJar_virtualbase_insertCookie(unsafe.Pointer(this.h), cookie.cPointer()))

}
func (this *QNetworkCookieJar) OnInsertCookie(slot func(super func(cookie *QNetworkCookie) bool, cookie *QNetworkCookie) bool) {
	ok := C.QNetworkCookieJar_override_virtual_insertCookie(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkCookieJar_insertCookie
func miqt_exec_callback_QNetworkCookieJar_insertCookie(self *C.QNetworkCookieJar, cb C.intptr_t, cookie *C.QNetworkCookie) C.bool {
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

	return (bool)(C.QNetworkCookieJar_virtualbase_updateCookie(unsafe.Pointer(this.h), cookie.cPointer()))

}
func (this *QNetworkCookieJar) OnUpdateCookie(slot func(super func(cookie *QNetworkCookie) bool, cookie *QNetworkCookie) bool) {
	ok := C.QNetworkCookieJar_override_virtual_updateCookie(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkCookieJar_updateCookie
func miqt_exec_callback_QNetworkCookieJar_updateCookie(self *C.QNetworkCookieJar, cb C.intptr_t, cookie *C.QNetworkCookie) C.bool {
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

	return (bool)(C.QNetworkCookieJar_virtualbase_deleteCookie(unsafe.Pointer(this.h), cookie.cPointer()))

}
func (this *QNetworkCookieJar) OnDeleteCookie(slot func(super func(cookie *QNetworkCookie) bool, cookie *QNetworkCookie) bool) {
	ok := C.QNetworkCookieJar_override_virtual_deleteCookie(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkCookieJar_deleteCookie
func miqt_exec_callback_QNetworkCookieJar_deleteCookie(self *C.QNetworkCookieJar, cb C.intptr_t, cookie *C.QNetworkCookie) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cookie *QNetworkCookie) bool, cookie *QNetworkCookie) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkCookie(cookie)

	virtualReturn := gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_DeleteCookie, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkCookieJar) callVirtualBase_ValidateCookie(cookie *QNetworkCookie, url *qt6.QUrl) bool {

	return (bool)(C.QNetworkCookieJar_virtualbase_validateCookie(unsafe.Pointer(this.h), cookie.cPointer(), (*C.QUrl)(url.UnsafePointer())))

}
func (this *QNetworkCookieJar) OnValidateCookie(slot func(super func(cookie *QNetworkCookie, url *qt6.QUrl) bool, cookie *QNetworkCookie, url *qt6.QUrl) bool) {
	ok := C.QNetworkCookieJar_override_virtual_validateCookie(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkCookieJar_validateCookie
func miqt_exec_callback_QNetworkCookieJar_validateCookie(self *C.QNetworkCookieJar, cb C.intptr_t, cookie *C.QNetworkCookie, url *C.QUrl) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cookie *QNetworkCookie, url *qt6.QUrl) bool, cookie *QNetworkCookie, url *qt6.QUrl) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkCookie(cookie)

	slotval2 := qt6.UnsafeNewQUrl(unsafe.Pointer(url))

	virtualReturn := gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_ValidateCookie, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkCookieJar) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QNetworkCookieJar_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QNetworkCookieJar) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QNetworkCookieJar_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkCookieJar_event
func miqt_exec_callback_QNetworkCookieJar_event(self *C.QNetworkCookieJar, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkCookieJar) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QNetworkCookieJar_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QNetworkCookieJar) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QNetworkCookieJar_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkCookieJar_eventFilter
func miqt_exec_callback_QNetworkCookieJar_eventFilter(self *C.QNetworkCookieJar, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkCookieJar) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QNetworkCookieJar_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QNetworkCookieJar) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QNetworkCookieJar_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkCookieJar_timerEvent
func miqt_exec_callback_QNetworkCookieJar_timerEvent(self *C.QNetworkCookieJar, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QNetworkCookieJar) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QNetworkCookieJar_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QNetworkCookieJar) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QNetworkCookieJar_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkCookieJar_childEvent
func miqt_exec_callback_QNetworkCookieJar_childEvent(self *C.QNetworkCookieJar, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QNetworkCookieJar) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QNetworkCookieJar_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QNetworkCookieJar) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QNetworkCookieJar_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkCookieJar_customEvent
func miqt_exec_callback_QNetworkCookieJar_customEvent(self *C.QNetworkCookieJar, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QNetworkCookieJar) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QNetworkCookieJar_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QNetworkCookieJar) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QNetworkCookieJar_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkCookieJar_connectNotify
func miqt_exec_callback_QNetworkCookieJar_connectNotify(self *C.QNetworkCookieJar, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QNetworkCookieJar) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QNetworkCookieJar_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QNetworkCookieJar) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QNetworkCookieJar_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkCookieJar_disconnectNotify
func miqt_exec_callback_QNetworkCookieJar_disconnectNotify(self *C.QNetworkCookieJar, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QNetworkCookieJar{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QNetworkCookieJar) Delete() {
	C.QNetworkCookieJar_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkCookieJar) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkCookieJar) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
