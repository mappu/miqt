package qt6

/*

#include "gen_qmimedata.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMimeData struct {
	h          *C.QMimeData
	isSubclass bool
	*QObject
}

func (this *QMimeData) cPointer() *C.QMimeData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMimeData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMimeData constructs the type using only CGO pointers.
func newQMimeData(h *C.QMimeData) *QMimeData {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QMimeData_virtbase(h, &outptr_QObject)

	return &QMimeData{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQMimeData constructs the type using only unsafe pointers.
func UnsafeNewQMimeData(h unsafe.Pointer) *QMimeData {
	return newQMimeData((*C.QMimeData)(h))
}

// NewQMimeData constructs a new QMimeData object.
func NewQMimeData() *QMimeData {

	ret := newQMimeData(C.QMimeData_new())
	ret.isSubclass = true
	return ret
}

func (this *QMimeData) MetaObject() *QMetaObject {
	return newQMetaObject(C.QMimeData_MetaObject(this.h))
}

func (this *QMimeData) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMimeData_Metacast(this.h, param1_Cstring))
}

func QMimeData_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMimeData_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMimeData) Urls() []QUrl {
	var _ma C.struct_miqt_array = C.QMimeData_Urls(this.h)
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQUrl(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QMimeData) SetUrls(urls []QUrl) {
	urls_CArray := (*[0xffff]*C.QUrl)(C.malloc(C.size_t(8 * len(urls))))
	defer C.free(unsafe.Pointer(urls_CArray))
	for i := range urls {
		urls_CArray[i] = urls[i].cPointer()
	}
	urls_ma := C.struct_miqt_array{len: C.size_t(len(urls)), data: unsafe.Pointer(urls_CArray)}
	C.QMimeData_SetUrls(this.h, urls_ma)
}

func (this *QMimeData) HasUrls() bool {
	return (bool)(C.QMimeData_HasUrls(this.h))
}

func (this *QMimeData) Text() string {
	var _ms C.struct_miqt_string = C.QMimeData_Text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMimeData) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QMimeData_SetText(this.h, text_ms)
}

func (this *QMimeData) HasText() bool {
	return (bool)(C.QMimeData_HasText(this.h))
}

func (this *QMimeData) Html() string {
	var _ms C.struct_miqt_string = C.QMimeData_Html(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMimeData) SetHtml(html string) {
	html_ms := C.struct_miqt_string{}
	html_ms.data = C.CString(html)
	html_ms.len = C.size_t(len(html))
	defer C.free(unsafe.Pointer(html_ms.data))
	C.QMimeData_SetHtml(this.h, html_ms)
}

func (this *QMimeData) HasHtml() bool {
	return (bool)(C.QMimeData_HasHtml(this.h))
}

func (this *QMimeData) ImageData() *QVariant {
	_goptr := newQVariant(C.QMimeData_ImageData(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeData) SetImageData(image *QVariant) {
	C.QMimeData_SetImageData(this.h, image.cPointer())
}

func (this *QMimeData) HasImage() bool {
	return (bool)(C.QMimeData_HasImage(this.h))
}

func (this *QMimeData) ColorData() *QVariant {
	_goptr := newQVariant(C.QMimeData_ColorData(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMimeData) SetColorData(color *QVariant) {
	C.QMimeData_SetColorData(this.h, color.cPointer())
}

func (this *QMimeData) HasColor() bool {
	return (bool)(C.QMimeData_HasColor(this.h))
}

func (this *QMimeData) Data(mimetype string) []byte {
	mimetype_ms := C.struct_miqt_string{}
	mimetype_ms.data = C.CString(mimetype)
	mimetype_ms.len = C.size_t(len(mimetype))
	defer C.free(unsafe.Pointer(mimetype_ms.data))
	var _bytearray C.struct_miqt_string = C.QMimeData_Data(this.h, mimetype_ms)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QMimeData) SetData(mimetype string, data []byte) {
	mimetype_ms := C.struct_miqt_string{}
	mimetype_ms.data = C.CString(mimetype)
	mimetype_ms.len = C.size_t(len(mimetype))
	defer C.free(unsafe.Pointer(mimetype_ms.data))
	data_alias := C.struct_miqt_string{}
	data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	data_alias.len = C.size_t(len(data))
	C.QMimeData_SetData(this.h, mimetype_ms, data_alias)
}

func (this *QMimeData) RemoveFormat(mimetype string) {
	mimetype_ms := C.struct_miqt_string{}
	mimetype_ms.data = C.CString(mimetype)
	mimetype_ms.len = C.size_t(len(mimetype))
	defer C.free(unsafe.Pointer(mimetype_ms.data))
	C.QMimeData_RemoveFormat(this.h, mimetype_ms)
}

func (this *QMimeData) HasFormat(mimetype string) bool {
	mimetype_ms := C.struct_miqt_string{}
	mimetype_ms.data = C.CString(mimetype)
	mimetype_ms.len = C.size_t(len(mimetype))
	defer C.free(unsafe.Pointer(mimetype_ms.data))
	return (bool)(C.QMimeData_HasFormat(this.h, mimetype_ms))
}

func (this *QMimeData) Formats() []string {
	var _ma C.struct_miqt_array = C.QMimeData_Formats(this.h)
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

func (this *QMimeData) Clear() {
	C.QMimeData_Clear(this.h)
}

func QMimeData_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMimeData_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMimeData_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMimeData_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMimeData) callVirtualBase_HasFormat(mimetype string) bool {
	mimetype_ms := C.struct_miqt_string{}
	mimetype_ms.data = C.CString(mimetype)
	mimetype_ms.len = C.size_t(len(mimetype))
	defer C.free(unsafe.Pointer(mimetype_ms.data))

	return (bool)(C.QMimeData_virtualbase_HasFormat(unsafe.Pointer(this.h), mimetype_ms))

}
func (this *QMimeData) OnHasFormat(slot func(super func(mimetype string) bool, mimetype string) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMimeData_override_virtual_HasFormat(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMimeData_HasFormat
func miqt_exec_callback_QMimeData_HasFormat(self *C.QMimeData, cb C.intptr_t, mimetype C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mimetype string) bool, mimetype string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var mimetype_ms C.struct_miqt_string = mimetype
	mimetype_ret := C.GoStringN(mimetype_ms.data, C.int(int64(mimetype_ms.len)))
	C.free(unsafe.Pointer(mimetype_ms.data))
	slotval1 := mimetype_ret

	virtualReturn := gofunc((&QMimeData{h: self}).callVirtualBase_HasFormat, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMimeData) callVirtualBase_Formats() []string {

	var _ma C.struct_miqt_array = C.QMimeData_virtualbase_Formats(unsafe.Pointer(this.h))
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
func (this *QMimeData) OnFormats(slot func(super func() []string) []string) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMimeData_override_virtual_Formats(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMimeData_Formats
func miqt_exec_callback_QMimeData_Formats(self *C.QMimeData, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []string) []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QMimeData{h: self}).callVirtualBase_Formats)
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

func (this *QMimeData) callVirtualBase_RetrieveData(mimetype string, preferredType QMetaType) *QVariant {
	mimetype_ms := C.struct_miqt_string{}
	mimetype_ms.data = C.CString(mimetype)
	mimetype_ms.len = C.size_t(len(mimetype))
	defer C.free(unsafe.Pointer(mimetype_ms.data))

	_goptr := newQVariant(C.QMimeData_virtualbase_RetrieveData(unsafe.Pointer(this.h), mimetype_ms, preferredType.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QMimeData) OnRetrieveData(slot func(super func(mimetype string, preferredType QMetaType) *QVariant, mimetype string, preferredType QMetaType) *QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMimeData_override_virtual_RetrieveData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMimeData_RetrieveData
func miqt_exec_callback_QMimeData_RetrieveData(self *C.QMimeData, cb C.intptr_t, mimetype C.struct_miqt_string, preferredType *C.QMetaType) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mimetype string, preferredType QMetaType) *QVariant, mimetype string, preferredType QMetaType) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var mimetype_ms C.struct_miqt_string = mimetype
	mimetype_ret := C.GoStringN(mimetype_ms.data, C.int(int64(mimetype_ms.len)))
	C.free(unsafe.Pointer(mimetype_ms.data))
	slotval1 := mimetype_ret
	preferredType_goptr := newQMetaType(preferredType)
	preferredType_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *preferredType_goptr

	virtualReturn := gofunc((&QMimeData{h: self}).callVirtualBase_RetrieveData, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QMimeData) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QMimeData_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QMimeData) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMimeData_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMimeData_Event
func miqt_exec_callback_QMimeData_Event(self *C.QMimeData, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QMimeData{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QMimeData) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QMimeData_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QMimeData) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMimeData_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMimeData_EventFilter
func miqt_exec_callback_QMimeData_EventFilter(self *C.QMimeData, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QMimeData{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QMimeData) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QMimeData_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMimeData) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMimeData_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMimeData_TimerEvent
func miqt_exec_callback_QMimeData_TimerEvent(self *C.QMimeData, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QMimeData{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QMimeData) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QMimeData_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMimeData) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMimeData_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMimeData_ChildEvent
func miqt_exec_callback_QMimeData_ChildEvent(self *C.QMimeData, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QMimeData{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QMimeData) callVirtualBase_CustomEvent(event *QEvent) {

	C.QMimeData_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QMimeData) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMimeData_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMimeData_CustomEvent
func miqt_exec_callback_QMimeData_CustomEvent(self *C.QMimeData, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QMimeData{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QMimeData) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QMimeData_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMimeData) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMimeData_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMimeData_ConnectNotify
func miqt_exec_callback_QMimeData_ConnectNotify(self *C.QMimeData, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QMimeData{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QMimeData) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QMimeData_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QMimeData) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QMimeData_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMimeData_DisconnectNotify
func miqt_exec_callback_QMimeData_DisconnectNotify(self *C.QMimeData, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QMimeData{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QMimeData) Delete() {
	C.QMimeData_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMimeData) GoGC() {
	runtime.SetFinalizer(this, func(this *QMimeData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
