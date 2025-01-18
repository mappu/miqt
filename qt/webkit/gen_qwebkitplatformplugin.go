package webkit

/*

#include "gen_qwebkitplatformplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QWebSelectData__ItemType int

const (
	QWebSelectData__Option    QWebSelectData__ItemType = 0
	QWebSelectData__Group     QWebSelectData__ItemType = 1
	QWebSelectData__Separator QWebSelectData__ItemType = 2
)

type QWebHapticFeedbackPlayer__HapticStrength int

const (
	QWebHapticFeedbackPlayer__None   QWebHapticFeedbackPlayer__HapticStrength = 0
	QWebHapticFeedbackPlayer__Weak   QWebHapticFeedbackPlayer__HapticStrength = 1
	QWebHapticFeedbackPlayer__Medium QWebHapticFeedbackPlayer__HapticStrength = 2
	QWebHapticFeedbackPlayer__Strong QWebHapticFeedbackPlayer__HapticStrength = 3
)

type QWebHapticFeedbackPlayer__HapticEvent int

const (
	QWebHapticFeedbackPlayer__Press   QWebHapticFeedbackPlayer__HapticEvent = 0
	QWebHapticFeedbackPlayer__Release QWebHapticFeedbackPlayer__HapticEvent = 1
)

type QWebTouchModifier__PaddingDirection int

const (
	QWebTouchModifier__Up    QWebTouchModifier__PaddingDirection = 0
	QWebTouchModifier__Right QWebTouchModifier__PaddingDirection = 1
	QWebTouchModifier__Down  QWebTouchModifier__PaddingDirection = 2
	QWebTouchModifier__Left  QWebTouchModifier__PaddingDirection = 3
)

type QWebKitPlatformPlugin__Extension int

const (
	QWebKitPlatformPlugin__MultipleSelections    QWebKitPlatformPlugin__Extension = 0
	QWebKitPlatformPlugin__Notifications         QWebKitPlatformPlugin__Extension = 1
	QWebKitPlatformPlugin__Haptics               QWebKitPlatformPlugin__Extension = 2
	QWebKitPlatformPlugin__TouchInteraction      QWebKitPlatformPlugin__Extension = 3
	QWebKitPlatformPlugin__FullScreenVideoPlayer QWebKitPlatformPlugin__Extension = 4
	QWebKitPlatformPlugin__SpellChecker          QWebKitPlatformPlugin__Extension = 5
)

type QWebSelectData struct {
	h          *C.QWebSelectData
	isSubclass bool
}

func (this *QWebSelectData) cPointer() *C.QWebSelectData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebSelectData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebSelectData constructs the type using only CGO pointers.
func newQWebSelectData(h *C.QWebSelectData) *QWebSelectData {
	if h == nil {
		return nil
	}

	return &QWebSelectData{h: h}
}

// UnsafeNewQWebSelectData constructs the type using only unsafe pointers.
func UnsafeNewQWebSelectData(h unsafe.Pointer) *QWebSelectData {
	return newQWebSelectData((*C.QWebSelectData)(h))
}

func (this *QWebSelectData) ItemType(param1 int) QWebSelectData__ItemType {
	return (QWebSelectData__ItemType)(C.QWebSelectData_ItemType(this.h, (C.int)(param1)))
}

func (this *QWebSelectData) ItemText(index int) string {
	var _ms C.struct_miqt_string = C.QWebSelectData_ItemText(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSelectData) ItemToolTip(index int) string {
	var _ms C.struct_miqt_string = C.QWebSelectData_ItemToolTip(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSelectData) ItemIsEnabled(index int) bool {
	return (bool)(C.QWebSelectData_ItemIsEnabled(this.h, (C.int)(index)))
}

func (this *QWebSelectData) ItemIsSelected(index int) bool {
	return (bool)(C.QWebSelectData_ItemIsSelected(this.h, (C.int)(index)))
}

func (this *QWebSelectData) ItemCount() int {
	return (int)(C.QWebSelectData_ItemCount(this.h))
}

func (this *QWebSelectData) Multiple() bool {
	return (bool)(C.QWebSelectData_Multiple(this.h))
}

func (this *QWebSelectData) BackgroundColor() *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QWebSelectData_BackgroundColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebSelectData) ForegroundColor() *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QWebSelectData_ForegroundColor(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebSelectData) ItemBackgroundColor(index int) *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QWebSelectData_ItemBackgroundColor(this.h, (C.int)(index))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebSelectData) ItemForegroundColor(index int) *qt.QColor {
	_goptr := qt.UnsafeNewQColor(unsafe.Pointer(C.QWebSelectData_ItemForegroundColor(this.h, (C.int)(index))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebSelectData) OperatorAssign(param1 *QWebSelectData) {
	C.QWebSelectData_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QWebSelectData) Delete() {
	C.QWebSelectData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebSelectData) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebSelectData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebSelectMethod struct {
	h          *C.QWebSelectMethod
	isSubclass bool
	*qt.QObject
}

func (this *QWebSelectMethod) cPointer() *C.QWebSelectMethod {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebSelectMethod) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebSelectMethod constructs the type using only CGO pointers.
func newQWebSelectMethod(h *C.QWebSelectMethod) *QWebSelectMethod {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebSelectMethod_virtbase(h, &outptr_QObject)

	return &QWebSelectMethod{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebSelectMethod constructs the type using only unsafe pointers.
func UnsafeNewQWebSelectMethod(h unsafe.Pointer) *QWebSelectMethod {
	return newQWebSelectMethod((*C.QWebSelectMethod)(h))
}

func (this *QWebSelectMethod) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebSelectMethod_MetaObject(this.h)))
}

func (this *QWebSelectMethod) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebSelectMethod_Metacast(this.h, param1_Cstring))
}

func QWebSelectMethod_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebSelectMethod_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSelectMethod_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebSelectMethod_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSelectMethod) Show(param1 *QWebSelectData) {
	C.QWebSelectMethod_Show(this.h, param1.cPointer())
}

func (this *QWebSelectMethod) Hide() {
	C.QWebSelectMethod_Hide(this.h)
}

func (this *QWebSelectMethod) SetGeometry(geometry *qt.QRect) {
	C.QWebSelectMethod_SetGeometry(this.h, (*C.QRect)(geometry.UnsafePointer()))
}

func (this *QWebSelectMethod) SetFont(font *qt.QFont) {
	C.QWebSelectMethod_SetFont(this.h, (*C.QFont)(font.UnsafePointer()))
}

func (this *QWebSelectMethod) SelectItem(index int, allowMultiplySelections bool, shift bool) {
	C.QWebSelectMethod_SelectItem(this.h, (C.int)(index), (C.bool)(allowMultiplySelections), (C.bool)(shift))
}
func (this *QWebSelectMethod) OnSelectItem(slot func(index int, allowMultiplySelections bool, shift bool)) {
	C.QWebSelectMethod_connect_SelectItem(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSelectMethod_SelectItem
func miqt_exec_callback_QWebSelectMethod_SelectItem(cb C.intptr_t, index C.int, allowMultiplySelections C.bool, shift C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int, allowMultiplySelections bool, shift bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	slotval2 := (bool)(allowMultiplySelections)

	slotval3 := (bool)(shift)

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QWebSelectMethod) DidHide() {
	C.QWebSelectMethod_DidHide(this.h)
}
func (this *QWebSelectMethod) OnDidHide(slot func()) {
	C.QWebSelectMethod_connect_DidHide(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebSelectMethod_DidHide
func miqt_exec_callback_QWebSelectMethod_DidHide(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QWebSelectMethod_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebSelectMethod_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSelectMethod_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebSelectMethod_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSelectMethod_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebSelectMethod_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSelectMethod_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebSelectMethod_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QWebSelectMethod) Delete() {
	C.QWebSelectMethod_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebSelectMethod) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebSelectMethod) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebNotificationData struct {
	h          *C.QWebNotificationData
	isSubclass bool
}

func (this *QWebNotificationData) cPointer() *C.QWebNotificationData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebNotificationData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebNotificationData constructs the type using only CGO pointers.
func newQWebNotificationData(h *C.QWebNotificationData) *QWebNotificationData {
	if h == nil {
		return nil
	}

	return &QWebNotificationData{h: h}
}

// UnsafeNewQWebNotificationData constructs the type using only unsafe pointers.
func UnsafeNewQWebNotificationData(h unsafe.Pointer) *QWebNotificationData {
	return newQWebNotificationData((*C.QWebNotificationData)(h))
}

func (this *QWebNotificationData) Title() string {
	var _ms C.struct_miqt_string = C.QWebNotificationData_Title(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebNotificationData) Message() string {
	var _ms C.struct_miqt_string = C.QWebNotificationData_Message(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebNotificationData) IconUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebNotificationData_IconUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebNotificationData) OpenerPageUrl() *qt.QUrl {
	_goptr := qt.UnsafeNewQUrl(unsafe.Pointer(C.QWebNotificationData_OpenerPageUrl(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebNotificationData) OperatorAssign(param1 *QWebNotificationData) {
	C.QWebNotificationData_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QWebNotificationData) Delete() {
	C.QWebNotificationData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebNotificationData) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebNotificationData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebNotificationPresenter struct {
	h          *C.QWebNotificationPresenter
	isSubclass bool
	*qt.QObject
}

func (this *QWebNotificationPresenter) cPointer() *C.QWebNotificationPresenter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebNotificationPresenter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebNotificationPresenter constructs the type using only CGO pointers.
func newQWebNotificationPresenter(h *C.QWebNotificationPresenter) *QWebNotificationPresenter {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebNotificationPresenter_virtbase(h, &outptr_QObject)

	return &QWebNotificationPresenter{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebNotificationPresenter constructs the type using only unsafe pointers.
func UnsafeNewQWebNotificationPresenter(h unsafe.Pointer) *QWebNotificationPresenter {
	return newQWebNotificationPresenter((*C.QWebNotificationPresenter)(h))
}

func (this *QWebNotificationPresenter) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebNotificationPresenter_MetaObject(this.h)))
}

func (this *QWebNotificationPresenter) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebNotificationPresenter_Metacast(this.h, param1_Cstring))
}

func QWebNotificationPresenter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebNotificationPresenter_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebNotificationPresenter_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebNotificationPresenter_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebNotificationPresenter) ShowNotification(param1 *QWebNotificationData) {
	C.QWebNotificationPresenter_ShowNotification(this.h, param1.cPointer())
}

func (this *QWebNotificationPresenter) NotificationClosed() {
	C.QWebNotificationPresenter_NotificationClosed(this.h)
}
func (this *QWebNotificationPresenter) OnNotificationClosed(slot func()) {
	C.QWebNotificationPresenter_connect_NotificationClosed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebNotificationPresenter_NotificationClosed
func miqt_exec_callback_QWebNotificationPresenter_NotificationClosed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QWebNotificationPresenter) NotificationClicked() {
	C.QWebNotificationPresenter_NotificationClicked(this.h)
}
func (this *QWebNotificationPresenter) OnNotificationClicked(slot func()) {
	C.QWebNotificationPresenter_connect_NotificationClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QWebNotificationPresenter_NotificationClicked
func miqt_exec_callback_QWebNotificationPresenter_NotificationClicked(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QWebNotificationPresenter_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebNotificationPresenter_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebNotificationPresenter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebNotificationPresenter_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebNotificationPresenter_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebNotificationPresenter_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebNotificationPresenter_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebNotificationPresenter_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QWebNotificationPresenter) Delete() {
	C.QWebNotificationPresenter_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebNotificationPresenter) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebNotificationPresenter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebHapticFeedbackPlayer struct {
	h          *C.QWebHapticFeedbackPlayer
	isSubclass bool
	*qt.QObject
}

func (this *QWebHapticFeedbackPlayer) cPointer() *C.QWebHapticFeedbackPlayer {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebHapticFeedbackPlayer) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebHapticFeedbackPlayer constructs the type using only CGO pointers.
func newQWebHapticFeedbackPlayer(h *C.QWebHapticFeedbackPlayer) *QWebHapticFeedbackPlayer {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebHapticFeedbackPlayer_virtbase(h, &outptr_QObject)

	return &QWebHapticFeedbackPlayer{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebHapticFeedbackPlayer constructs the type using only unsafe pointers.
func UnsafeNewQWebHapticFeedbackPlayer(h unsafe.Pointer) *QWebHapticFeedbackPlayer {
	return newQWebHapticFeedbackPlayer((*C.QWebHapticFeedbackPlayer)(h))
}

func (this *QWebHapticFeedbackPlayer) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebHapticFeedbackPlayer_MetaObject(this.h)))
}

func (this *QWebHapticFeedbackPlayer) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebHapticFeedbackPlayer_Metacast(this.h, param1_Cstring))
}

func QWebHapticFeedbackPlayer_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebHapticFeedbackPlayer_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebHapticFeedbackPlayer_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebHapticFeedbackPlayer_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebHapticFeedbackPlayer) PlayHapticFeedback(param1 QWebHapticFeedbackPlayer__HapticEvent, hapticType string, param3 QWebHapticFeedbackPlayer__HapticStrength) {
	hapticType_ms := C.struct_miqt_string{}
	hapticType_ms.data = C.CString(hapticType)
	hapticType_ms.len = C.size_t(len(hapticType))
	defer C.free(unsafe.Pointer(hapticType_ms.data))
	C.QWebHapticFeedbackPlayer_PlayHapticFeedback(this.h, (C.int)(param1), hapticType_ms, (C.int)(param3))
}

func QWebHapticFeedbackPlayer_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebHapticFeedbackPlayer_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebHapticFeedbackPlayer_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebHapticFeedbackPlayer_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebHapticFeedbackPlayer_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebHapticFeedbackPlayer_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebHapticFeedbackPlayer_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebHapticFeedbackPlayer_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QWebHapticFeedbackPlayer) Delete() {
	C.QWebHapticFeedbackPlayer_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebHapticFeedbackPlayer) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebHapticFeedbackPlayer) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebTouchModifier struct {
	h          *C.QWebTouchModifier
	isSubclass bool
	*qt.QObject
}

func (this *QWebTouchModifier) cPointer() *C.QWebTouchModifier {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebTouchModifier) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebTouchModifier constructs the type using only CGO pointers.
func newQWebTouchModifier(h *C.QWebTouchModifier) *QWebTouchModifier {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebTouchModifier_virtbase(h, &outptr_QObject)

	return &QWebTouchModifier{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebTouchModifier constructs the type using only unsafe pointers.
func UnsafeNewQWebTouchModifier(h unsafe.Pointer) *QWebTouchModifier {
	return newQWebTouchModifier((*C.QWebTouchModifier)(h))
}

func (this *QWebTouchModifier) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebTouchModifier_MetaObject(this.h)))
}

func (this *QWebTouchModifier) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebTouchModifier_Metacast(this.h, param1_Cstring))
}

func QWebTouchModifier_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebTouchModifier_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebTouchModifier_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebTouchModifier_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebTouchModifier) HitTestPaddingForTouch(param1 QWebTouchModifier__PaddingDirection) uint {
	return (uint)(C.QWebTouchModifier_HitTestPaddingForTouch(this.h, (C.int)(param1)))
}

func QWebTouchModifier_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebTouchModifier_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebTouchModifier_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebTouchModifier_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebTouchModifier_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebTouchModifier_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebTouchModifier_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebTouchModifier_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QWebTouchModifier) Delete() {
	C.QWebTouchModifier_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebTouchModifier) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebTouchModifier) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebSpellChecker struct {
	h          *C.QWebSpellChecker
	isSubclass bool
	*qt.QObject
}

func (this *QWebSpellChecker) cPointer() *C.QWebSpellChecker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebSpellChecker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebSpellChecker constructs the type using only CGO pointers.
func newQWebSpellChecker(h *C.QWebSpellChecker) *QWebSpellChecker {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QWebSpellChecker_virtbase(h, &outptr_QObject)

	return &QWebSpellChecker{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQWebSpellChecker constructs the type using only unsafe pointers.
func UnsafeNewQWebSpellChecker(h unsafe.Pointer) *QWebSpellChecker {
	return newQWebSpellChecker((*C.QWebSpellChecker)(h))
}

func (this *QWebSpellChecker) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QWebSpellChecker_MetaObject(this.h)))
}

func (this *QWebSpellChecker) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QWebSpellChecker_Metacast(this.h, param1_Cstring))
}

func QWebSpellChecker_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebSpellChecker_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSpellChecker_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QWebSpellChecker_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSpellChecker) IsContinousSpellCheckingEnabled() bool {
	return (bool)(C.QWebSpellChecker_IsContinousSpellCheckingEnabled(this.h))
}

func (this *QWebSpellChecker) ToggleContinousSpellChecking() {
	C.QWebSpellChecker_ToggleContinousSpellChecking(this.h)
}

func (this *QWebSpellChecker) LearnWord(word string) {
	word_ms := C.struct_miqt_string{}
	word_ms.data = C.CString(word)
	word_ms.len = C.size_t(len(word))
	defer C.free(unsafe.Pointer(word_ms.data))
	C.QWebSpellChecker_LearnWord(this.h, word_ms)
}

func (this *QWebSpellChecker) IgnoreWordInSpellDocument(word string) {
	word_ms := C.struct_miqt_string{}
	word_ms.data = C.CString(word)
	word_ms.len = C.size_t(len(word))
	defer C.free(unsafe.Pointer(word_ms.data))
	C.QWebSpellChecker_IgnoreWordInSpellDocument(this.h, word_ms)
}

func (this *QWebSpellChecker) CheckSpellingOfString(word string, misspellingLocation *int, misspellingLength *int) {
	word_ms := C.struct_miqt_string{}
	word_ms.data = C.CString(word)
	word_ms.len = C.size_t(len(word))
	defer C.free(unsafe.Pointer(word_ms.data))
	C.QWebSpellChecker_CheckSpellingOfString(this.h, word_ms, (*C.int)(unsafe.Pointer(misspellingLocation)), (*C.int)(unsafe.Pointer(misspellingLength)))
}

func (this *QWebSpellChecker) AutoCorrectSuggestionForMisspelledWord(word string) string {
	word_ms := C.struct_miqt_string{}
	word_ms.data = C.CString(word)
	word_ms.len = C.size_t(len(word))
	defer C.free(unsafe.Pointer(word_ms.data))
	var _ms C.struct_miqt_string = C.QWebSpellChecker_AutoCorrectSuggestionForMisspelledWord(this.h, word_ms)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebSpellChecker) GuessesForWord(word string, context string, guesses []string) {
	word_ms := C.struct_miqt_string{}
	word_ms.data = C.CString(word)
	word_ms.len = C.size_t(len(word))
	defer C.free(unsafe.Pointer(word_ms.data))
	context_ms := C.struct_miqt_string{}
	context_ms.data = C.CString(context)
	context_ms.len = C.size_t(len(context))
	defer C.free(unsafe.Pointer(context_ms.data))
	guesses_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(guesses))))
	defer C.free(unsafe.Pointer(guesses_CArray))
	for i := range guesses {
		guesses_i_ms := C.struct_miqt_string{}
		guesses_i_ms.data = C.CString(guesses[i])
		guesses_i_ms.len = C.size_t(len(guesses[i]))
		defer C.free(unsafe.Pointer(guesses_i_ms.data))
		guesses_CArray[i] = guesses_i_ms
	}
	guesses_ma := C.struct_miqt_array{len: C.size_t(len(guesses)), data: unsafe.Pointer(guesses_CArray)}
	C.QWebSpellChecker_GuessesForWord(this.h, word_ms, context_ms, guesses_ma)
}

func (this *QWebSpellChecker) IsGrammarCheckingEnabled() bool {
	return (bool)(C.QWebSpellChecker_IsGrammarCheckingEnabled(this.h))
}

func (this *QWebSpellChecker) ToggleGrammarChecking() {
	C.QWebSpellChecker_ToggleGrammarChecking(this.h)
}

func (this *QWebSpellChecker) CheckGrammarOfString(param1 string, param2 []QWebSpellChecker__GrammarDetail, badGrammarLocation *int, badGrammarLength *int) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	param2_CArray := (*[0xffff]*C.QWebSpellChecker__GrammarDetail)(C.malloc(C.size_t(8 * len(param2))))
	defer C.free(unsafe.Pointer(param2_CArray))
	for i := range param2 {
		param2_CArray[i] = param2[i].cPointer()
	}
	param2_ma := C.struct_miqt_array{len: C.size_t(len(param2)), data: unsafe.Pointer(param2_CArray)}
	C.QWebSpellChecker_CheckGrammarOfString(this.h, param1_ms, param2_ma, (*C.int)(unsafe.Pointer(badGrammarLocation)), (*C.int)(unsafe.Pointer(badGrammarLength)))
}

func QWebSpellChecker_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebSpellChecker_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSpellChecker_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebSpellChecker_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSpellChecker_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebSpellChecker_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebSpellChecker_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QWebSpellChecker_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QWebSpellChecker) Delete() {
	C.QWebSpellChecker_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebSpellChecker) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebSpellChecker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebKitPlatformPlugin struct {
	h          *C.QWebKitPlatformPlugin
	isSubclass bool
}

func (this *QWebKitPlatformPlugin) cPointer() *C.QWebKitPlatformPlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebKitPlatformPlugin) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebKitPlatformPlugin constructs the type using only CGO pointers.
func newQWebKitPlatformPlugin(h *C.QWebKitPlatformPlugin) *QWebKitPlatformPlugin {
	if h == nil {
		return nil
	}

	return &QWebKitPlatformPlugin{h: h}
}

// UnsafeNewQWebKitPlatformPlugin constructs the type using only unsafe pointers.
func UnsafeNewQWebKitPlatformPlugin(h unsafe.Pointer) *QWebKitPlatformPlugin {
	return newQWebKitPlatformPlugin((*C.QWebKitPlatformPlugin)(h))
}

func (this *QWebKitPlatformPlugin) SupportsExtension(param1 QWebKitPlatformPlugin__Extension) bool {
	return (bool)(C.QWebKitPlatformPlugin_SupportsExtension(this.h, (C.int)(param1)))
}

func (this *QWebKitPlatformPlugin) CreateExtension(param1 QWebKitPlatformPlugin__Extension) *qt.QObject {
	return qt.UnsafeNewQObject(unsafe.Pointer(C.QWebKitPlatformPlugin_CreateExtension(this.h, (C.int)(param1))))
}

func (this *QWebKitPlatformPlugin) OperatorAssign(param1 *QWebKitPlatformPlugin) {
	C.QWebKitPlatformPlugin_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QWebKitPlatformPlugin) Delete() {
	C.QWebKitPlatformPlugin_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebKitPlatformPlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebKitPlatformPlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWebSpellChecker__GrammarDetail struct {
	h          *C.QWebSpellChecker__GrammarDetail
	isSubclass bool
}

func (this *QWebSpellChecker__GrammarDetail) cPointer() *C.QWebSpellChecker__GrammarDetail {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebSpellChecker__GrammarDetail) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebSpellChecker__GrammarDetail constructs the type using only CGO pointers.
func newQWebSpellChecker__GrammarDetail(h *C.QWebSpellChecker__GrammarDetail) *QWebSpellChecker__GrammarDetail {
	if h == nil {
		return nil
	}

	return &QWebSpellChecker__GrammarDetail{h: h}
}

// UnsafeNewQWebSpellChecker__GrammarDetail constructs the type using only unsafe pointers.
func UnsafeNewQWebSpellChecker__GrammarDetail(h unsafe.Pointer) *QWebSpellChecker__GrammarDetail {
	return newQWebSpellChecker__GrammarDetail((*C.QWebSpellChecker__GrammarDetail)(h))
}

// NewQWebSpellChecker__GrammarDetail constructs a new QWebSpellChecker::GrammarDetail object.
func NewQWebSpellChecker__GrammarDetail(param1 *QWebSpellChecker__GrammarDetail) *QWebSpellChecker__GrammarDetail {

	ret := newQWebSpellChecker__GrammarDetail(C.QWebSpellChecker__GrammarDetail_new(param1.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QWebSpellChecker__GrammarDetail) OperatorAssign(param1 *QWebSpellChecker__GrammarDetail) {
	C.QWebSpellChecker__GrammarDetail_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QWebSpellChecker__GrammarDetail) Delete() {
	C.QWebSpellChecker__GrammarDetail_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebSpellChecker__GrammarDetail) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebSpellChecker__GrammarDetail) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
