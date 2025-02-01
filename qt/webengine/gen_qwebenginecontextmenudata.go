package webengine

/*

#include "gen_qwebenginecontextmenudata.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type QWebEngineContextMenuData__MediaType int

const (
	QWebEngineContextMenuData__MediaTypeNone   QWebEngineContextMenuData__MediaType = 0
	QWebEngineContextMenuData__MediaTypeImage  QWebEngineContextMenuData__MediaType = 1
	QWebEngineContextMenuData__MediaTypeVideo  QWebEngineContextMenuData__MediaType = 2
	QWebEngineContextMenuData__MediaTypeAudio  QWebEngineContextMenuData__MediaType = 3
	QWebEngineContextMenuData__MediaTypeCanvas QWebEngineContextMenuData__MediaType = 4
	QWebEngineContextMenuData__MediaTypeFile   QWebEngineContextMenuData__MediaType = 5
	QWebEngineContextMenuData__MediaTypePlugin QWebEngineContextMenuData__MediaType = 6
)

type QWebEngineContextMenuData__MediaFlag int

const (
	QWebEngineContextMenuData__MediaInError           QWebEngineContextMenuData__MediaFlag = 1
	QWebEngineContextMenuData__MediaPaused            QWebEngineContextMenuData__MediaFlag = 2
	QWebEngineContextMenuData__MediaMuted             QWebEngineContextMenuData__MediaFlag = 4
	QWebEngineContextMenuData__MediaLoop              QWebEngineContextMenuData__MediaFlag = 8
	QWebEngineContextMenuData__MediaCanSave           QWebEngineContextMenuData__MediaFlag = 16
	QWebEngineContextMenuData__MediaHasAudio          QWebEngineContextMenuData__MediaFlag = 32
	QWebEngineContextMenuData__MediaCanToggleControls QWebEngineContextMenuData__MediaFlag = 64
	QWebEngineContextMenuData__MediaControls          QWebEngineContextMenuData__MediaFlag = 128
	QWebEngineContextMenuData__MediaCanPrint          QWebEngineContextMenuData__MediaFlag = 256
	QWebEngineContextMenuData__MediaCanRotate         QWebEngineContextMenuData__MediaFlag = 512
)

type QWebEngineContextMenuData__EditFlag int

const (
	QWebEngineContextMenuData__CanUndo       QWebEngineContextMenuData__EditFlag = 1
	QWebEngineContextMenuData__CanRedo       QWebEngineContextMenuData__EditFlag = 2
	QWebEngineContextMenuData__CanCut        QWebEngineContextMenuData__EditFlag = 4
	QWebEngineContextMenuData__CanCopy       QWebEngineContextMenuData__EditFlag = 8
	QWebEngineContextMenuData__CanPaste      QWebEngineContextMenuData__EditFlag = 16
	QWebEngineContextMenuData__CanDelete     QWebEngineContextMenuData__EditFlag = 32
	QWebEngineContextMenuData__CanSelectAll  QWebEngineContextMenuData__EditFlag = 64
	QWebEngineContextMenuData__CanTranslate  QWebEngineContextMenuData__EditFlag = 128
	QWebEngineContextMenuData__CanEditRichly QWebEngineContextMenuData__EditFlag = 256
)

type QWebEngineContextMenuData struct {
	h *C.QWebEngineContextMenuData
}

func (this *QWebEngineContextMenuData) cPointer() *C.QWebEngineContextMenuData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineContextMenuData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineContextMenuData constructs the type using only CGO pointers.
func newQWebEngineContextMenuData(h *C.QWebEngineContextMenuData) *QWebEngineContextMenuData {
	if h == nil {
		return nil
	}

	return &QWebEngineContextMenuData{h: h}
}

// UnsafeNewQWebEngineContextMenuData constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineContextMenuData(h unsafe.Pointer) *QWebEngineContextMenuData {
	return newQWebEngineContextMenuData((*C.QWebEngineContextMenuData)(h))
}

// NewQWebEngineContextMenuData constructs a new QWebEngineContextMenuData object.
func NewQWebEngineContextMenuData() *QWebEngineContextMenuData {

	return newQWebEngineContextMenuData(C.QWebEngineContextMenuData_new())
}

// NewQWebEngineContextMenuData2 constructs a new QWebEngineContextMenuData object.
func NewQWebEngineContextMenuData2(other *QWebEngineContextMenuData) *QWebEngineContextMenuData {

	return newQWebEngineContextMenuData(C.QWebEngineContextMenuData_new2(other.cPointer()))
}

func (this *QWebEngineContextMenuData) OperatorAssign(other *QWebEngineContextMenuData) {
	C.QWebEngineContextMenuData_operatorAssign(this.h, other.cPointer())
}

func (this *QWebEngineContextMenuData) IsValid() bool {
	return (bool)(C.QWebEngineContextMenuData_isValid(this.h))
}

func (this *QWebEngineContextMenuData) Position() *qt.QPoint {
	_goptr := qt.UnsafeNewQPoint(unsafe.Pointer(C.QWebEngineContextMenuData_position(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineContextMenuData) SelectedText() string {
	var _ms C.struct_miqt_string = C.QWebEngineContextMenuData_selectedText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineContextMenuData) LinkText() string {
	var _ms C.struct_miqt_string = C.QWebEngineContextMenuData_linkText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineContextMenuData) LinkUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineContextMenuData_linkUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineContextMenuData) MediaUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebEngineContextMenuData_mediaUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineContextMenuData) MediaType() QWebEngineContextMenuData__MediaType {
	return (QWebEngineContextMenuData__MediaType)(C.QWebEngineContextMenuData_mediaType(this.h))
}

func (this *QWebEngineContextMenuData) IsContentEditable() bool {
	return (bool)(C.QWebEngineContextMenuData_isContentEditable(this.h))
}

func (this *QWebEngineContextMenuData) MisspelledWord() string {
	var _ms C.struct_miqt_string = C.QWebEngineContextMenuData_misspelledWord(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineContextMenuData) SpellCheckerSuggestions() []string {
	var _ma C.struct_miqt_array = C.QWebEngineContextMenuData_spellCheckerSuggestions(this.h)
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

func (this *QWebEngineContextMenuData) MediaFlags() QWebEngineContextMenuData__MediaFlag {
	return (QWebEngineContextMenuData__MediaFlag)(C.QWebEngineContextMenuData_mediaFlags(this.h))
}

func (this *QWebEngineContextMenuData) EditFlags() QWebEngineContextMenuData__EditFlag {
	return (QWebEngineContextMenuData__EditFlag)(C.QWebEngineContextMenuData_editFlags(this.h))
}

// Delete this object from C++ memory.
func (this *QWebEngineContextMenuData) Delete() {
	C.QWebEngineContextMenuData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineContextMenuData) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineContextMenuData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
