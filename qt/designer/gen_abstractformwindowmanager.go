package designer

/*

#include "gen_abstractformwindowmanager.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerFormWindowManagerInterface__Action int

const (
	QDesignerFormWindowManagerInterface__CutAction                      QDesignerFormWindowManagerInterface__Action = 100
	QDesignerFormWindowManagerInterface__CopyAction                     QDesignerFormWindowManagerInterface__Action = 101
	QDesignerFormWindowManagerInterface__PasteAction                    QDesignerFormWindowManagerInterface__Action = 102
	QDesignerFormWindowManagerInterface__DeleteAction                   QDesignerFormWindowManagerInterface__Action = 103
	QDesignerFormWindowManagerInterface__SelectAllAction                QDesignerFormWindowManagerInterface__Action = 104
	QDesignerFormWindowManagerInterface__LowerAction                    QDesignerFormWindowManagerInterface__Action = 200
	QDesignerFormWindowManagerInterface__RaiseAction                    QDesignerFormWindowManagerInterface__Action = 201
	QDesignerFormWindowManagerInterface__UndoAction                     QDesignerFormWindowManagerInterface__Action = 300
	QDesignerFormWindowManagerInterface__RedoAction                     QDesignerFormWindowManagerInterface__Action = 301
	QDesignerFormWindowManagerInterface__HorizontalLayoutAction         QDesignerFormWindowManagerInterface__Action = 400
	QDesignerFormWindowManagerInterface__VerticalLayoutAction           QDesignerFormWindowManagerInterface__Action = 401
	QDesignerFormWindowManagerInterface__SplitHorizontalAction          QDesignerFormWindowManagerInterface__Action = 402
	QDesignerFormWindowManagerInterface__SplitVerticalAction            QDesignerFormWindowManagerInterface__Action = 403
	QDesignerFormWindowManagerInterface__GridLayoutAction               QDesignerFormWindowManagerInterface__Action = 404
	QDesignerFormWindowManagerInterface__FormLayoutAction               QDesignerFormWindowManagerInterface__Action = 405
	QDesignerFormWindowManagerInterface__BreakLayoutAction              QDesignerFormWindowManagerInterface__Action = 406
	QDesignerFormWindowManagerInterface__AdjustSizeAction               QDesignerFormWindowManagerInterface__Action = 407
	QDesignerFormWindowManagerInterface__SimplifyLayoutAction           QDesignerFormWindowManagerInterface__Action = 408
	QDesignerFormWindowManagerInterface__DefaultPreviewAction           QDesignerFormWindowManagerInterface__Action = 500
	QDesignerFormWindowManagerInterface__FormWindowSettingsDialogAction QDesignerFormWindowManagerInterface__Action = 600
)

type QDesignerFormWindowManagerInterface__ActionGroup int

const (
	QDesignerFormWindowManagerInterface__StyledPreviewActionGroup QDesignerFormWindowManagerInterface__ActionGroup = 100
)

type QDesignerFormWindowManagerInterface struct {
	h *C.QDesignerFormWindowManagerInterface
	*qt.QObject
}

func (this *QDesignerFormWindowManagerInterface) cPointer() *C.QDesignerFormWindowManagerInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerFormWindowManagerInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerFormWindowManagerInterface constructs the type using only CGO pointers.
func newQDesignerFormWindowManagerInterface(h *C.QDesignerFormWindowManagerInterface) *QDesignerFormWindowManagerInterface {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QDesignerFormWindowManagerInterface_virtbase(h, &outptr_QObject)

	return &QDesignerFormWindowManagerInterface{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQDesignerFormWindowManagerInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerFormWindowManagerInterface(h unsafe.Pointer) *QDesignerFormWindowManagerInterface {
	return newQDesignerFormWindowManagerInterface((*C.QDesignerFormWindowManagerInterface)(h))
}

// NewQDesignerFormWindowManagerInterface constructs a new QDesignerFormWindowManagerInterface object.
func NewQDesignerFormWindowManagerInterface() *QDesignerFormWindowManagerInterface {

	return newQDesignerFormWindowManagerInterface(C.QDesignerFormWindowManagerInterface_new())
}

// NewQDesignerFormWindowManagerInterface2 constructs a new QDesignerFormWindowManagerInterface object.
func NewQDesignerFormWindowManagerInterface2(parent *qt.QObject) *QDesignerFormWindowManagerInterface {

	return newQDesignerFormWindowManagerInterface(C.QDesignerFormWindowManagerInterface_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QDesignerFormWindowManagerInterface) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_metaObject(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDesignerFormWindowManagerInterface_metacast(this.h, param1_Cstring))
}

func QDesignerFormWindowManagerInterface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerFormWindowManagerInterface_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerFormWindowManagerInterface_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerFormWindowManagerInterface_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerFormWindowManagerInterface) Action(action QDesignerFormWindowManagerInterface__Action) *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_action(this.h, (C.int)(action))))
}

func (this *QDesignerFormWindowManagerInterface) ActionGroup(actionGroup QDesignerFormWindowManagerInterface__ActionGroup) *qt.QActionGroup {
	return qt.UnsafeNewQActionGroup(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionGroup(this.h, (C.int)(actionGroup))))
}

func (this *QDesignerFormWindowManagerInterface) ActionCut() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionCut(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) ActionCopy() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionCopy(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) ActionPaste() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionPaste(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) ActionDelete() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionDelete(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) ActionSelectAll() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionSelectAll(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) ActionLower() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionLower(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) ActionRaise() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionRaise(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) ActionUndo() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionUndo(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) ActionRedo() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionRedo(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) ActionHorizontalLayout() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionHorizontalLayout(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) ActionVerticalLayout() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionVerticalLayout(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) ActionSplitHorizontal() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionSplitHorizontal(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) ActionSplitVertical() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionSplitVertical(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) ActionGridLayout() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionGridLayout(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) ActionFormLayout() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionFormLayout(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) ActionBreakLayout() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionBreakLayout(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) ActionAdjustSize() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionAdjustSize(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) ActionSimplifyLayout() *qt.QAction {
	return qt.UnsafeNewQAction(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_actionSimplifyLayout(this.h)))
}

func (this *QDesignerFormWindowManagerInterface) ActiveFormWindow() *QDesignerFormWindowInterface {
	return newQDesignerFormWindowInterface(C.QDesignerFormWindowManagerInterface_activeFormWindow(this.h))
}

func (this *QDesignerFormWindowManagerInterface) FormWindowCount() int {
	return (int)(C.QDesignerFormWindowManagerInterface_formWindowCount(this.h))
}

func (this *QDesignerFormWindowManagerInterface) FormWindow(index int) *QDesignerFormWindowInterface {
	return newQDesignerFormWindowInterface(C.QDesignerFormWindowManagerInterface_formWindow(this.h, (C.int)(index)))
}

func (this *QDesignerFormWindowManagerInterface) CreateFormWindow(parentWidget *qt.QWidget, flags qt.WindowType) *QDesignerFormWindowInterface {
	return newQDesignerFormWindowInterface(C.QDesignerFormWindowManagerInterface_createFormWindow(this.h, (*C.QWidget)(parentWidget.UnsafePointer()), (C.int)(flags)))
}

func (this *QDesignerFormWindowManagerInterface) Core() *QDesignerFormEditorInterface {
	return newQDesignerFormEditorInterface(C.QDesignerFormWindowManagerInterface_core(this.h))
}

func (this *QDesignerFormWindowManagerInterface) DragItems(item_list []*QDesignerDnDItemInterface) {
	item_list_CArray := (*[0xffff]*C.QDesignerDnDItemInterface)(C.malloc(C.size_t(8 * len(item_list))))
	defer C.free(unsafe.Pointer(item_list_CArray))
	for i := range item_list {
		item_list_CArray[i] = item_list[i].cPointer()
	}
	item_list_ma := C.struct_miqt_array{len: C.size_t(len(item_list)), data: unsafe.Pointer(item_list_CArray)}
	C.QDesignerFormWindowManagerInterface_dragItems(this.h, item_list_ma)
}

func (this *QDesignerFormWindowManagerInterface) CreatePreviewPixmap() *qt.QPixmap {
	_goptr := qt.UnsafeNewQPixmap(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_createPreviewPixmap(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerFormWindowManagerInterface) FormWindowAdded(formWindow *QDesignerFormWindowInterface) {
	C.QDesignerFormWindowManagerInterface_formWindowAdded(this.h, formWindow.cPointer())
}
func (this *QDesignerFormWindowManagerInterface) OnFormWindowAdded(slot func(formWindow *QDesignerFormWindowInterface)) {
	C.QDesignerFormWindowManagerInterface_connect_formWindowAdded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindowAdded
func miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindowAdded(cb C.intptr_t, formWindow *C.QDesignerFormWindowInterface) {
	gofunc, ok := cgo.Handle(cb).Value().(func(formWindow *QDesignerFormWindowInterface))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDesignerFormWindowInterface(formWindow)

	gofunc(slotval1)
}

func (this *QDesignerFormWindowManagerInterface) FormWindowRemoved(formWindow *QDesignerFormWindowInterface) {
	C.QDesignerFormWindowManagerInterface_formWindowRemoved(this.h, formWindow.cPointer())
}
func (this *QDesignerFormWindowManagerInterface) OnFormWindowRemoved(slot func(formWindow *QDesignerFormWindowInterface)) {
	C.QDesignerFormWindowManagerInterface_connect_formWindowRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindowRemoved
func miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindowRemoved(cb C.intptr_t, formWindow *C.QDesignerFormWindowInterface) {
	gofunc, ok := cgo.Handle(cb).Value().(func(formWindow *QDesignerFormWindowInterface))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDesignerFormWindowInterface(formWindow)

	gofunc(slotval1)
}

func (this *QDesignerFormWindowManagerInterface) ActiveFormWindowChanged(formWindow *QDesignerFormWindowInterface) {
	C.QDesignerFormWindowManagerInterface_activeFormWindowChanged(this.h, formWindow.cPointer())
}
func (this *QDesignerFormWindowManagerInterface) OnActiveFormWindowChanged(slot func(formWindow *QDesignerFormWindowInterface)) {
	C.QDesignerFormWindowManagerInterface_connect_activeFormWindowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_activeFormWindowChanged
func miqt_exec_callback_QDesignerFormWindowManagerInterface_activeFormWindowChanged(cb C.intptr_t, formWindow *C.QDesignerFormWindowInterface) {
	gofunc, ok := cgo.Handle(cb).Value().(func(formWindow *QDesignerFormWindowInterface))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDesignerFormWindowInterface(formWindow)

	gofunc(slotval1)
}

func (this *QDesignerFormWindowManagerInterface) FormWindowSettingsChanged(fw *QDesignerFormWindowInterface) {
	C.QDesignerFormWindowManagerInterface_formWindowSettingsChanged(this.h, fw.cPointer())
}
func (this *QDesignerFormWindowManagerInterface) OnFormWindowSettingsChanged(slot func(fw *QDesignerFormWindowInterface)) {
	C.QDesignerFormWindowManagerInterface_connect_formWindowSettingsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindowSettingsChanged
func miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindowSettingsChanged(cb C.intptr_t, fw *C.QDesignerFormWindowInterface) {
	gofunc, ok := cgo.Handle(cb).Value().(func(fw *QDesignerFormWindowInterface))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDesignerFormWindowInterface(fw)

	gofunc(slotval1)
}

func (this *QDesignerFormWindowManagerInterface) AddFormWindow(formWindow *QDesignerFormWindowInterface) {
	C.QDesignerFormWindowManagerInterface_addFormWindow(this.h, formWindow.cPointer())
}

func (this *QDesignerFormWindowManagerInterface) RemoveFormWindow(formWindow *QDesignerFormWindowInterface) {
	C.QDesignerFormWindowManagerInterface_removeFormWindow(this.h, formWindow.cPointer())
}

func (this *QDesignerFormWindowManagerInterface) SetActiveFormWindow(formWindow *QDesignerFormWindowInterface) {
	C.QDesignerFormWindowManagerInterface_setActiveFormWindow(this.h, formWindow.cPointer())
}

func (this *QDesignerFormWindowManagerInterface) ShowPreview() {
	C.QDesignerFormWindowManagerInterface_showPreview(this.h)
}

func (this *QDesignerFormWindowManagerInterface) CloseAllPreviews() {
	C.QDesignerFormWindowManagerInterface_closeAllPreviews(this.h)
}

func (this *QDesignerFormWindowManagerInterface) ShowPluginDialog() {
	C.QDesignerFormWindowManagerInterface_showPluginDialog(this.h)
}

func QDesignerFormWindowManagerInterface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerFormWindowManagerInterface_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerFormWindowManagerInterface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerFormWindowManagerInterface_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerFormWindowManagerInterface_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerFormWindowManagerInterface_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerFormWindowManagerInterface_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerFormWindowManagerInterface_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QDesignerFormWindowManagerInterface that was directly constructed.
func (this *QDesignerFormWindowManagerInterface) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QDesignerFormWindowManagerInterface_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDesignerFormWindowManagerInterface that was directly constructed.
func (this *QDesignerFormWindowManagerInterface) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerFormWindowManagerInterface_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDesignerFormWindowManagerInterface that was directly constructed.
func (this *QDesignerFormWindowManagerInterface) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerFormWindowManagerInterface_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDesignerFormWindowManagerInterface that was directly constructed.
func (this *QDesignerFormWindowManagerInterface) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerFormWindowManagerInterface_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QDesignerFormWindowManagerInterface) OnAction(slot func(action QDesignerFormWindowManagerInterface__Action) *qt.QAction) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_action(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_action
func miqt_exec_callback_QDesignerFormWindowManagerInterface_action(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t, action C.int) *C.QAction {
	gofunc, ok := cgo.Handle(cb).Value().(func(action QDesignerFormWindowManagerInterface__Action) *qt.QAction)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QDesignerFormWindowManagerInterface__Action)(action)

	virtualReturn := gofunc(slotval1)

	return (*C.QAction)(virtualReturn.UnsafePointer())

}
func (this *QDesignerFormWindowManagerInterface) OnActionGroup(slot func(actionGroup QDesignerFormWindowManagerInterface__ActionGroup) *qt.QActionGroup) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_actionGroup(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_actionGroup
func miqt_exec_callback_QDesignerFormWindowManagerInterface_actionGroup(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t, actionGroup C.int) *C.QActionGroup {
	gofunc, ok := cgo.Handle(cb).Value().(func(actionGroup QDesignerFormWindowManagerInterface__ActionGroup) *qt.QActionGroup)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QDesignerFormWindowManagerInterface__ActionGroup)(actionGroup)

	virtualReturn := gofunc(slotval1)

	return (*C.QActionGroup)(virtualReturn.UnsafePointer())

}
func (this *QDesignerFormWindowManagerInterface) OnActiveFormWindow(slot func() *QDesignerFormWindowInterface) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_activeFormWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_activeFormWindow
func miqt_exec_callback_QDesignerFormWindowManagerInterface_activeFormWindow(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t) *C.QDesignerFormWindowInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QDesignerFormWindowInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}
func (this *QDesignerFormWindowManagerInterface) OnFormWindowCount(slot func() int) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_formWindowCount(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindowCount
func miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindowCount(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QDesignerFormWindowManagerInterface) OnFormWindow(slot func(index int) *QDesignerFormWindowInterface) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_formWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindow
func miqt_exec_callback_QDesignerFormWindowManagerInterface_formWindow(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t, index C.int) *C.QDesignerFormWindowInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) *QDesignerFormWindowInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}
func (this *QDesignerFormWindowManagerInterface) OnCreateFormWindow(slot func(parentWidget *qt.QWidget, flags qt.WindowType) *QDesignerFormWindowInterface) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_createFormWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_createFormWindow
func miqt_exec_callback_QDesignerFormWindowManagerInterface_createFormWindow(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t, parentWidget *C.QWidget, flags C.int) *C.QDesignerFormWindowInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(parentWidget *qt.QWidget, flags qt.WindowType) *QDesignerFormWindowInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWidget(unsafe.Pointer(parentWidget))

	slotval2 := (qt.WindowType)(flags)

	virtualReturn := gofunc(slotval1, slotval2)

	return virtualReturn.cPointer()

}
func (this *QDesignerFormWindowManagerInterface) OnCore(slot func() *QDesignerFormEditorInterface) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_core(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_core
func miqt_exec_callback_QDesignerFormWindowManagerInterface_core(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t) *C.QDesignerFormEditorInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QDesignerFormEditorInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}
func (this *QDesignerFormWindowManagerInterface) OnDragItems(slot func(item_list []*QDesignerDnDItemInterface)) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_dragItems(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_dragItems
func miqt_exec_callback_QDesignerFormWindowManagerInterface_dragItems(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t, item_list C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item_list []*QDesignerDnDItemInterface))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var item_list_ma C.struct_miqt_array = item_list
	item_list_ret := make([]*QDesignerDnDItemInterface, int(item_list_ma.len))
	item_list_outCast := (*[0xffff]*C.QDesignerDnDItemInterface)(unsafe.Pointer(item_list_ma.data)) // hey ya
	for i := 0; i < int(item_list_ma.len); i++ {
		item_list_ret[i] = newQDesignerDnDItemInterface(item_list_outCast[i])
	}
	slotval1 := item_list_ret

	gofunc(slotval1)

}
func (this *QDesignerFormWindowManagerInterface) OnCreatePreviewPixmap(slot func() *qt.QPixmap) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_createPreviewPixmap(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_createPreviewPixmap
func miqt_exec_callback_QDesignerFormWindowManagerInterface_createPreviewPixmap(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t) *C.QPixmap {
	gofunc, ok := cgo.Handle(cb).Value().(func() *qt.QPixmap)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (*C.QPixmap)(virtualReturn.UnsafePointer())

}
func (this *QDesignerFormWindowManagerInterface) OnAddFormWindow(slot func(formWindow *QDesignerFormWindowInterface)) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_addFormWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_addFormWindow
func miqt_exec_callback_QDesignerFormWindowManagerInterface_addFormWindow(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t, formWindow *C.QDesignerFormWindowInterface) {
	gofunc, ok := cgo.Handle(cb).Value().(func(formWindow *QDesignerFormWindowInterface))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDesignerFormWindowInterface(formWindow)

	gofunc(slotval1)

}
func (this *QDesignerFormWindowManagerInterface) OnRemoveFormWindow(slot func(formWindow *QDesignerFormWindowInterface)) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_removeFormWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_removeFormWindow
func miqt_exec_callback_QDesignerFormWindowManagerInterface_removeFormWindow(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t, formWindow *C.QDesignerFormWindowInterface) {
	gofunc, ok := cgo.Handle(cb).Value().(func(formWindow *QDesignerFormWindowInterface))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDesignerFormWindowInterface(formWindow)

	gofunc(slotval1)

}
func (this *QDesignerFormWindowManagerInterface) OnSetActiveFormWindow(slot func(formWindow *QDesignerFormWindowInterface)) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_setActiveFormWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_setActiveFormWindow
func miqt_exec_callback_QDesignerFormWindowManagerInterface_setActiveFormWindow(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t, formWindow *C.QDesignerFormWindowInterface) {
	gofunc, ok := cgo.Handle(cb).Value().(func(formWindow *QDesignerFormWindowInterface))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDesignerFormWindowInterface(formWindow)

	gofunc(slotval1)

}
func (this *QDesignerFormWindowManagerInterface) OnShowPreview(slot func()) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_showPreview(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_showPreview
func miqt_exec_callback_QDesignerFormWindowManagerInterface_showPreview(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *QDesignerFormWindowManagerInterface) OnCloseAllPreviews(slot func()) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_closeAllPreviews(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_closeAllPreviews
func miqt_exec_callback_QDesignerFormWindowManagerInterface_closeAllPreviews(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *QDesignerFormWindowManagerInterface) OnShowPluginDialog(slot func()) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_showPluginDialog(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_showPluginDialog
func miqt_exec_callback_QDesignerFormWindowManagerInterface_showPluginDialog(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}

func (this *QDesignerFormWindowManagerInterface) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QDesignerFormWindowManagerInterface_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerFormWindowManagerInterface) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_event
func miqt_exec_callback_QDesignerFormWindowManagerInterface_event(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerFormWindowManagerInterface{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerFormWindowManagerInterface) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QDesignerFormWindowManagerInterface_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerFormWindowManagerInterface) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_eventFilter
func miqt_exec_callback_QDesignerFormWindowManagerInterface_eventFilter(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerFormWindowManagerInterface{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerFormWindowManagerInterface) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QDesignerFormWindowManagerInterface_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDesignerFormWindowManagerInterface) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_timerEvent
func miqt_exec_callback_QDesignerFormWindowManagerInterface_timerEvent(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDesignerFormWindowManagerInterface{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDesignerFormWindowManagerInterface) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QDesignerFormWindowManagerInterface_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDesignerFormWindowManagerInterface) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_childEvent
func miqt_exec_callback_QDesignerFormWindowManagerInterface_childEvent(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDesignerFormWindowManagerInterface{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDesignerFormWindowManagerInterface) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QDesignerFormWindowManagerInterface_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDesignerFormWindowManagerInterface) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_customEvent
func miqt_exec_callback_QDesignerFormWindowManagerInterface_customEvent(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesignerFormWindowManagerInterface{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDesignerFormWindowManagerInterface) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QDesignerFormWindowManagerInterface_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerFormWindowManagerInterface) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_connectNotify
func miqt_exec_callback_QDesignerFormWindowManagerInterface_connectNotify(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerFormWindowManagerInterface{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDesignerFormWindowManagerInterface) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QDesignerFormWindowManagerInterface_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerFormWindowManagerInterface) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QDesignerFormWindowManagerInterface_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerFormWindowManagerInterface_disconnectNotify
func miqt_exec_callback_QDesignerFormWindowManagerInterface_disconnectNotify(self *C.QDesignerFormWindowManagerInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerFormWindowManagerInterface{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDesignerFormWindowManagerInterface) Delete() {
	C.QDesignerFormWindowManagerInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerFormWindowManagerInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerFormWindowManagerInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
