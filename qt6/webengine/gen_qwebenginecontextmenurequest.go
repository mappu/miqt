package webengine

/*

#include "gen_qwebenginecontextmenurequest.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QtWebEngineCore__ReferrerPolicy int

const (
	QtWebEngineCore__Always                                       QtWebEngineCore__ReferrerPolicy = 0
	QtWebEngineCore__Default                                      QtWebEngineCore__ReferrerPolicy = 1
	QtWebEngineCore__NoReferrerWhenDowngrade                      QtWebEngineCore__ReferrerPolicy = 2
	QtWebEngineCore__Never                                        QtWebEngineCore__ReferrerPolicy = 3
	QtWebEngineCore__Origin                                       QtWebEngineCore__ReferrerPolicy = 4
	QtWebEngineCore__OriginWhenCrossOrigin                        QtWebEngineCore__ReferrerPolicy = 5
	QtWebEngineCore__NoReferrerWhenDowngradeOriginWhenCrossOrigin QtWebEngineCore__ReferrerPolicy = 6
	QtWebEngineCore__SameOrigin                                   QtWebEngineCore__ReferrerPolicy = 7
	QtWebEngineCore__StrictOrigin                                 QtWebEngineCore__ReferrerPolicy = 8
	QtWebEngineCore__Last                                         QtWebEngineCore__ReferrerPolicy = 8
)

type QWebEngineContextMenuRequest__MediaType int

const (
	QWebEngineContextMenuRequest__MediaTypeNone   QWebEngineContextMenuRequest__MediaType = 0
	QWebEngineContextMenuRequest__MediaTypeImage  QWebEngineContextMenuRequest__MediaType = 1
	QWebEngineContextMenuRequest__MediaTypeVideo  QWebEngineContextMenuRequest__MediaType = 2
	QWebEngineContextMenuRequest__MediaTypeAudio  QWebEngineContextMenuRequest__MediaType = 3
	QWebEngineContextMenuRequest__MediaTypeCanvas QWebEngineContextMenuRequest__MediaType = 4
	QWebEngineContextMenuRequest__MediaTypeFile   QWebEngineContextMenuRequest__MediaType = 5
	QWebEngineContextMenuRequest__MediaTypePlugin QWebEngineContextMenuRequest__MediaType = 6
)

type QWebEngineContextMenuRequest__MediaFlag int

const (
	QWebEngineContextMenuRequest__MediaInError           QWebEngineContextMenuRequest__MediaFlag = 1
	QWebEngineContextMenuRequest__MediaPaused            QWebEngineContextMenuRequest__MediaFlag = 2
	QWebEngineContextMenuRequest__MediaMuted             QWebEngineContextMenuRequest__MediaFlag = 4
	QWebEngineContextMenuRequest__MediaLoop              QWebEngineContextMenuRequest__MediaFlag = 8
	QWebEngineContextMenuRequest__MediaCanSave           QWebEngineContextMenuRequest__MediaFlag = 16
	QWebEngineContextMenuRequest__MediaHasAudio          QWebEngineContextMenuRequest__MediaFlag = 32
	QWebEngineContextMenuRequest__MediaCanToggleControls QWebEngineContextMenuRequest__MediaFlag = 64
	QWebEngineContextMenuRequest__MediaControls          QWebEngineContextMenuRequest__MediaFlag = 128
	QWebEngineContextMenuRequest__MediaCanPrint          QWebEngineContextMenuRequest__MediaFlag = 256
	QWebEngineContextMenuRequest__MediaCanRotate         QWebEngineContextMenuRequest__MediaFlag = 512
)

type QWebEngineContextMenuRequest__EditFlag int

const (
	QWebEngineContextMenuRequest__CanUndo       QWebEngineContextMenuRequest__EditFlag = 1
	QWebEngineContextMenuRequest__CanRedo       QWebEngineContextMenuRequest__EditFlag = 2
	QWebEngineContextMenuRequest__CanCut        QWebEngineContextMenuRequest__EditFlag = 4
	QWebEngineContextMenuRequest__CanCopy       QWebEngineContextMenuRequest__EditFlag = 8
	QWebEngineContextMenuRequest__CanPaste      QWebEngineContextMenuRequest__EditFlag = 16
	QWebEngineContextMenuRequest__CanDelete     QWebEngineContextMenuRequest__EditFlag = 32
	QWebEngineContextMenuRequest__CanSelectAll  QWebEngineContextMenuRequest__EditFlag = 64
	QWebEngineContextMenuRequest__CanTranslate  QWebEngineContextMenuRequest__EditFlag = 128
	QWebEngineContextMenuRequest__CanEditRichly QWebEngineContextMenuRequest__EditFlag = 256
)

type QWebEngineContextMenuRequest struct {
	h *C.QWebEngineContextMenuRequest
	*qt6.QObject
}

func (this *QWebEngineContextMenuRequest) cPointer() *C.QWebEngineContextMenuRequest {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineContextMenuRequest) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineContextMenuRequest constructs the type using only CGO pointers.
func newQWebEngineContextMenuRequest(h *C.QWebEngineContextMenuRequest) *QWebEngineContextMenuRequest {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebEngineContextMenuRequest_virtbase(h, &outptr_QObject)

	return &QWebEngineContextMenuRequest{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebEngineContextMenuRequest constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineContextMenuRequest(h unsafe.Pointer) *QWebEngineContextMenuRequest {
	return newQWebEngineContextMenuRequest((*C.QWebEngineContextMenuRequest)(h))
}

func (this *QWebEngineContextMenuRequest) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebEngineContextMenuRequest_metaObject(this.h)))
}

func (this *QWebEngineContextMenuRequest) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebEngineContextMenuRequest_metacast(this.h, param1_Cstring))
}

func QWebEngineContextMenuRequest_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineContextMenuRequest_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineContextMenuRequest) Position() *qt6.QPoint {
	_goptr := qt6.UnsafeNewQPoint(unsafe.Pointer(C.QWebEngineContextMenuRequest_position(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineContextMenuRequest) SelectedText() string {
	var _ms C.struct_miqt_string = C.QWebEngineContextMenuRequest_selectedText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineContextMenuRequest) LinkText() string {
	var _ms C.struct_miqt_string = C.QWebEngineContextMenuRequest_linkText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineContextMenuRequest) LinkUrl() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineContextMenuRequest_linkUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineContextMenuRequest) MediaUrl() *qt6.QUrl {
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineContextMenuRequest_mediaUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineContextMenuRequest) MediaType() QWebEngineContextMenuRequest__MediaType {
	return (QWebEngineContextMenuRequest__MediaType)(C.QWebEngineContextMenuRequest_mediaType(this.h))
}

func (this *QWebEngineContextMenuRequest) IsContentEditable() bool {
	return (bool)(C.QWebEngineContextMenuRequest_isContentEditable(this.h))
}

func (this *QWebEngineContextMenuRequest) MisspelledWord() string {
	var _ms C.struct_miqt_string = C.QWebEngineContextMenuRequest_misspelledWord(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineContextMenuRequest) SpellCheckerSuggestions() []string {
	var _ma C.struct_miqt_array = C.QWebEngineContextMenuRequest_spellCheckerSuggestions(this.h)
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

func (this *QWebEngineContextMenuRequest) IsAccepted() bool {
	return (bool)(C.QWebEngineContextMenuRequest_isAccepted(this.h))
}

func (this *QWebEngineContextMenuRequest) SetAccepted(accepted bool) {
	C.QWebEngineContextMenuRequest_setAccepted(this.h, (C.bool)(accepted))
}

func (this *QWebEngineContextMenuRequest) MediaFlags() QWebEngineContextMenuRequest__MediaFlag {
	return (QWebEngineContextMenuRequest__MediaFlag)(C.QWebEngineContextMenuRequest_mediaFlags(this.h))
}

func (this *QWebEngineContextMenuRequest) EditFlags() QWebEngineContextMenuRequest__EditFlag {
	return (QWebEngineContextMenuRequest__EditFlag)(C.QWebEngineContextMenuRequest_editFlags(this.h))
}

func QWebEngineContextMenuRequest_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineContextMenuRequest_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebEngineContextMenuRequest_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebEngineContextMenuRequest_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QWebEngineContextMenuRequest) Delete() {
	C.QWebEngineContextMenuRequest_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineContextMenuRequest) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineContextMenuRequest) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
