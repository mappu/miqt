package designer

/*

#include "gen_abstractintegration.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerIntegrationInterface__ResourceFileWatcherBehaviour int

const (
	QDesignerIntegrationInterface__NoResourceFileWatcher      QDesignerIntegrationInterface__ResourceFileWatcherBehaviour = 0
	QDesignerIntegrationInterface__ReloadResourceFileSilently QDesignerIntegrationInterface__ResourceFileWatcherBehaviour = 1
	QDesignerIntegrationInterface__PromptToReloadResourceFile QDesignerIntegrationInterface__ResourceFileWatcherBehaviour = 2
)

type QDesignerIntegrationInterface__FeatureFlag int

const (
	QDesignerIntegrationInterface__ResourceEditorFeature      QDesignerIntegrationInterface__FeatureFlag = 1
	QDesignerIntegrationInterface__SlotNavigationFeature      QDesignerIntegrationInterface__FeatureFlag = 2
	QDesignerIntegrationInterface__DefaultWidgetActionFeature QDesignerIntegrationInterface__FeatureFlag = 4
	QDesignerIntegrationInterface__DefaultFeature             QDesignerIntegrationInterface__FeatureFlag = 5
)

type QDesignerIntegrationInterface struct {
	h *C.QDesignerIntegrationInterface
	*qt6.QObject
}

func (this *QDesignerIntegrationInterface) cPointer() *C.QDesignerIntegrationInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerIntegrationInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerIntegrationInterface constructs the type using only CGO pointers.
func newQDesignerIntegrationInterface(h *C.QDesignerIntegrationInterface) *QDesignerIntegrationInterface {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QDesignerIntegrationInterface_virtbase(h, &outptr_QObject)

	return &QDesignerIntegrationInterface{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQDesignerIntegrationInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerIntegrationInterface(h unsafe.Pointer) *QDesignerIntegrationInterface {
	return newQDesignerIntegrationInterface((*C.QDesignerIntegrationInterface)(h))
}

// NewQDesignerIntegrationInterface constructs a new QDesignerIntegrationInterface object.
func NewQDesignerIntegrationInterface(core *QDesignerFormEditorInterface) *QDesignerIntegrationInterface {

	return newQDesignerIntegrationInterface(C.QDesignerIntegrationInterface_new(core.cPointer()))
}

// NewQDesignerIntegrationInterface2 constructs a new QDesignerIntegrationInterface object.
func NewQDesignerIntegrationInterface2(core *QDesignerFormEditorInterface, parent *qt6.QObject) *QDesignerIntegrationInterface {

	return newQDesignerIntegrationInterface(C.QDesignerIntegrationInterface_new2(core.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QDesignerIntegrationInterface) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QDesignerIntegrationInterface_metaObject(this.h)))
}

func (this *QDesignerIntegrationInterface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDesignerIntegrationInterface_metacast(this.h, param1_Cstring))
}

func QDesignerIntegrationInterface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerIntegrationInterface_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerIntegrationInterface) Core() *QDesignerFormEditorInterface {
	return newQDesignerFormEditorInterface(C.QDesignerIntegrationInterface_core(this.h))
}

func (this *QDesignerIntegrationInterface) ContainerWindow(widget *qt6.QWidget) *qt6.QWidget {
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerIntegrationInterface_containerWindow(this.h, (*C.QWidget)(widget.UnsafePointer()))))
}

func (this *QDesignerIntegrationInterface) CreateResourceBrowser(parent *qt6.QWidget) *QDesignerResourceBrowserInterface {
	return newQDesignerResourceBrowserInterface(C.QDesignerIntegrationInterface_createResourceBrowser(this.h, (*C.QWidget)(parent.UnsafePointer())))
}

func (this *QDesignerIntegrationInterface) HeaderSuffix() string {
	var _ms C.struct_miqt_string = C.QDesignerIntegrationInterface_headerSuffix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerIntegrationInterface) SetHeaderSuffix(headerSuffix string) {
	headerSuffix_ms := C.struct_miqt_string{}
	headerSuffix_ms.data = C.CString(headerSuffix)
	headerSuffix_ms.len = C.size_t(len(headerSuffix))
	defer C.free(unsafe.Pointer(headerSuffix_ms.data))
	C.QDesignerIntegrationInterface_setHeaderSuffix(this.h, headerSuffix_ms)
}

func (this *QDesignerIntegrationInterface) IsHeaderLowercase() bool {
	return (bool)(C.QDesignerIntegrationInterface_isHeaderLowercase(this.h))
}

func (this *QDesignerIntegrationInterface) SetHeaderLowercase(headerLowerCase bool) {
	C.QDesignerIntegrationInterface_setHeaderLowercase(this.h, (C.bool)(headerLowerCase))
}

func (this *QDesignerIntegrationInterface) Features() QDesignerIntegrationInterface__FeatureFlag {
	return (QDesignerIntegrationInterface__FeatureFlag)(C.QDesignerIntegrationInterface_features(this.h))
}

func (this *QDesignerIntegrationInterface) HasFeature(f QDesignerIntegrationInterface__FeatureFlag) bool {
	return (bool)(C.QDesignerIntegrationInterface_hasFeature(this.h, (C.int)(f)))
}

func (this *QDesignerIntegrationInterface) ResourceFileWatcherBehaviour() QDesignerIntegrationInterface__ResourceFileWatcherBehaviour {
	return (QDesignerIntegrationInterface__ResourceFileWatcherBehaviour)(C.QDesignerIntegrationInterface_resourceFileWatcherBehaviour(this.h))
}

func (this *QDesignerIntegrationInterface) SetResourceFileWatcherBehaviour(behaviour QDesignerIntegrationInterface__ResourceFileWatcherBehaviour) {
	C.QDesignerIntegrationInterface_setResourceFileWatcherBehaviour(this.h, (C.int)(behaviour))
}

func (this *QDesignerIntegrationInterface) ContextHelpId() string {
	var _ms C.struct_miqt_string = C.QDesignerIntegrationInterface_contextHelpId(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerIntegrationInterface) EmitObjectNameChanged(formWindow *QDesignerFormWindowInterface, object *qt6.QObject, newName string, oldName string) {
	newName_ms := C.struct_miqt_string{}
	newName_ms.data = C.CString(newName)
	newName_ms.len = C.size_t(len(newName))
	defer C.free(unsafe.Pointer(newName_ms.data))
	oldName_ms := C.struct_miqt_string{}
	oldName_ms.data = C.CString(oldName)
	oldName_ms.len = C.size_t(len(oldName))
	defer C.free(unsafe.Pointer(oldName_ms.data))
	C.QDesignerIntegrationInterface_emitObjectNameChanged(this.h, formWindow.cPointer(), (*C.QObject)(object.UnsafePointer()), newName_ms, oldName_ms)
}

func (this *QDesignerIntegrationInterface) EmitNavigateToSlot(objectName string, signalSignature string, parameterNames []string) {
	objectName_ms := C.struct_miqt_string{}
	objectName_ms.data = C.CString(objectName)
	objectName_ms.len = C.size_t(len(objectName))
	defer C.free(unsafe.Pointer(objectName_ms.data))
	signalSignature_ms := C.struct_miqt_string{}
	signalSignature_ms.data = C.CString(signalSignature)
	signalSignature_ms.len = C.size_t(len(signalSignature))
	defer C.free(unsafe.Pointer(signalSignature_ms.data))
	parameterNames_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(parameterNames))))
	defer C.free(unsafe.Pointer(parameterNames_CArray))
	for i := range parameterNames {
		parameterNames_i_ms := C.struct_miqt_string{}
		parameterNames_i_ms.data = C.CString(parameterNames[i])
		parameterNames_i_ms.len = C.size_t(len(parameterNames[i]))
		defer C.free(unsafe.Pointer(parameterNames_i_ms.data))
		parameterNames_CArray[i] = parameterNames_i_ms
	}
	parameterNames_ma := C.struct_miqt_array{len: C.size_t(len(parameterNames)), data: unsafe.Pointer(parameterNames_CArray)}
	C.QDesignerIntegrationInterface_emitNavigateToSlot(this.h, objectName_ms, signalSignature_ms, parameterNames_ma)
}

func (this *QDesignerIntegrationInterface) EmitNavigateToSlotWithSlotSignature(slotSignature string) {
	slotSignature_ms := C.struct_miqt_string{}
	slotSignature_ms.data = C.CString(slotSignature)
	slotSignature_ms.len = C.size_t(len(slotSignature))
	defer C.free(unsafe.Pointer(slotSignature_ms.data))
	C.QDesignerIntegrationInterface_emitNavigateToSlotWithSlotSignature(this.h, slotSignature_ms)
}

func (this *QDesignerIntegrationInterface) EmitHelpRequested(manual string, document string) {
	manual_ms := C.struct_miqt_string{}
	manual_ms.data = C.CString(manual)
	manual_ms.len = C.size_t(len(manual))
	defer C.free(unsafe.Pointer(manual_ms.data))
	document_ms := C.struct_miqt_string{}
	document_ms.data = C.CString(document)
	document_ms.len = C.size_t(len(document))
	defer C.free(unsafe.Pointer(document_ms.data))
	C.QDesignerIntegrationInterface_emitHelpRequested(this.h, manual_ms, document_ms)
}

func (this *QDesignerIntegrationInterface) PropertyChanged(formWindow *QDesignerFormWindowInterface, name string, value *qt6.QVariant) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerIntegrationInterface_propertyChanged(this.h, formWindow.cPointer(), name_ms, (*C.QVariant)(value.UnsafePointer()))
}
func (this *QDesignerIntegrationInterface) OnPropertyChanged(slot func(formWindow *QDesignerFormWindowInterface, name string, value *qt6.QVariant)) {
	C.QDesignerIntegrationInterface_connect_propertyChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerIntegrationInterface_propertyChanged
func miqt_exec_callback_QDesignerIntegrationInterface_propertyChanged(cb C.intptr_t, formWindow *C.QDesignerFormWindowInterface, name C.struct_miqt_string, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(formWindow *QDesignerFormWindowInterface, name string, value *qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDesignerFormWindowInterface(formWindow)

	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval2 := name_ret
	slotval3 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QDesignerIntegrationInterface) ObjectNameChanged(formWindow *QDesignerFormWindowInterface, object *qt6.QObject, newName string, oldName string) {
	newName_ms := C.struct_miqt_string{}
	newName_ms.data = C.CString(newName)
	newName_ms.len = C.size_t(len(newName))
	defer C.free(unsafe.Pointer(newName_ms.data))
	oldName_ms := C.struct_miqt_string{}
	oldName_ms.data = C.CString(oldName)
	oldName_ms.len = C.size_t(len(oldName))
	defer C.free(unsafe.Pointer(oldName_ms.data))
	C.QDesignerIntegrationInterface_objectNameChanged(this.h, formWindow.cPointer(), (*C.QObject)(object.UnsafePointer()), newName_ms, oldName_ms)
}
func (this *QDesignerIntegrationInterface) OnObjectNameChanged(slot func(formWindow *QDesignerFormWindowInterface, object *qt6.QObject, newName string, oldName string)) {
	C.QDesignerIntegrationInterface_connect_objectNameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerIntegrationInterface_objectNameChanged
func miqt_exec_callback_QDesignerIntegrationInterface_objectNameChanged(cb C.intptr_t, formWindow *C.QDesignerFormWindowInterface, object *C.QObject, newName C.struct_miqt_string, oldName C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(formWindow *QDesignerFormWindowInterface, object *qt6.QObject, newName string, oldName string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDesignerFormWindowInterface(formWindow)

	slotval2 := qt6.UnsafeNewQObject(unsafe.Pointer(object))

	var newName_ms C.struct_miqt_string = newName
	newName_ret := C.GoStringN(newName_ms.data, C.int(int64(newName_ms.len)))
	C.free(unsafe.Pointer(newName_ms.data))
	slotval3 := newName_ret
	var oldName_ms C.struct_miqt_string = oldName
	oldName_ret := C.GoStringN(oldName_ms.data, C.int(int64(oldName_ms.len)))
	C.free(unsafe.Pointer(oldName_ms.data))
	slotval4 := oldName_ret

	gofunc(slotval1, slotval2, slotval3, slotval4)
}

func (this *QDesignerIntegrationInterface) HelpRequested(manual string, document string) {
	manual_ms := C.struct_miqt_string{}
	manual_ms.data = C.CString(manual)
	manual_ms.len = C.size_t(len(manual))
	defer C.free(unsafe.Pointer(manual_ms.data))
	document_ms := C.struct_miqt_string{}
	document_ms.data = C.CString(document)
	document_ms.len = C.size_t(len(document))
	defer C.free(unsafe.Pointer(document_ms.data))
	C.QDesignerIntegrationInterface_helpRequested(this.h, manual_ms, document_ms)
}
func (this *QDesignerIntegrationInterface) OnHelpRequested(slot func(manual string, document string)) {
	C.QDesignerIntegrationInterface_connect_helpRequested(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerIntegrationInterface_helpRequested
func miqt_exec_callback_QDesignerIntegrationInterface_helpRequested(cb C.intptr_t, manual C.struct_miqt_string, document C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(manual string, document string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var manual_ms C.struct_miqt_string = manual
	manual_ret := C.GoStringN(manual_ms.data, C.int(int64(manual_ms.len)))
	C.free(unsafe.Pointer(manual_ms.data))
	slotval1 := manual_ret
	var document_ms C.struct_miqt_string = document
	document_ret := C.GoStringN(document_ms.data, C.int(int64(document_ms.len)))
	C.free(unsafe.Pointer(document_ms.data))
	slotval2 := document_ret

	gofunc(slotval1, slotval2)
}

func (this *QDesignerIntegrationInterface) NavigateToSlot(objectName string, signalSignature string, parameterNames []string) {
	objectName_ms := C.struct_miqt_string{}
	objectName_ms.data = C.CString(objectName)
	objectName_ms.len = C.size_t(len(objectName))
	defer C.free(unsafe.Pointer(objectName_ms.data))
	signalSignature_ms := C.struct_miqt_string{}
	signalSignature_ms.data = C.CString(signalSignature)
	signalSignature_ms.len = C.size_t(len(signalSignature))
	defer C.free(unsafe.Pointer(signalSignature_ms.data))
	parameterNames_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(parameterNames))))
	defer C.free(unsafe.Pointer(parameterNames_CArray))
	for i := range parameterNames {
		parameterNames_i_ms := C.struct_miqt_string{}
		parameterNames_i_ms.data = C.CString(parameterNames[i])
		parameterNames_i_ms.len = C.size_t(len(parameterNames[i]))
		defer C.free(unsafe.Pointer(parameterNames_i_ms.data))
		parameterNames_CArray[i] = parameterNames_i_ms
	}
	parameterNames_ma := C.struct_miqt_array{len: C.size_t(len(parameterNames)), data: unsafe.Pointer(parameterNames_CArray)}
	C.QDesignerIntegrationInterface_navigateToSlot(this.h, objectName_ms, signalSignature_ms, parameterNames_ma)
}
func (this *QDesignerIntegrationInterface) OnNavigateToSlot(slot func(objectName string, signalSignature string, parameterNames []string)) {
	C.QDesignerIntegrationInterface_connect_navigateToSlot(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerIntegrationInterface_navigateToSlot
func miqt_exec_callback_QDesignerIntegrationInterface_navigateToSlot(cb C.intptr_t, objectName C.struct_miqt_string, signalSignature C.struct_miqt_string, parameterNames C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(objectName string, signalSignature string, parameterNames []string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var objectName_ms C.struct_miqt_string = objectName
	objectName_ret := C.GoStringN(objectName_ms.data, C.int(int64(objectName_ms.len)))
	C.free(unsafe.Pointer(objectName_ms.data))
	slotval1 := objectName_ret
	var signalSignature_ms C.struct_miqt_string = signalSignature
	signalSignature_ret := C.GoStringN(signalSignature_ms.data, C.int(int64(signalSignature_ms.len)))
	C.free(unsafe.Pointer(signalSignature_ms.data))
	slotval2 := signalSignature_ret
	var parameterNames_ma C.struct_miqt_array = parameterNames
	parameterNames_ret := make([]string, int(parameterNames_ma.len))
	parameterNames_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(parameterNames_ma.data)) // hey ya
	for i := 0; i < int(parameterNames_ma.len); i++ {
		var parameterNames_lv_ms C.struct_miqt_string = parameterNames_outCast[i]
		parameterNames_lv_ret := C.GoStringN(parameterNames_lv_ms.data, C.int(int64(parameterNames_lv_ms.len)))
		C.free(unsafe.Pointer(parameterNames_lv_ms.data))
		parameterNames_ret[i] = parameterNames_lv_ret
	}
	slotval3 := parameterNames_ret

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QDesignerIntegrationInterface) NavigateToSlotWithSlotSignature(slotSignature string) {
	slotSignature_ms := C.struct_miqt_string{}
	slotSignature_ms.data = C.CString(slotSignature)
	slotSignature_ms.len = C.size_t(len(slotSignature))
	defer C.free(unsafe.Pointer(slotSignature_ms.data))
	C.QDesignerIntegrationInterface_navigateToSlotWithSlotSignature(this.h, slotSignature_ms)
}
func (this *QDesignerIntegrationInterface) OnNavigateToSlotWithSlotSignature(slot func(slotSignature string)) {
	C.QDesignerIntegrationInterface_connect_navigateToSlotWithSlotSignature(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerIntegrationInterface_navigateToSlotWithSlotSignature
func miqt_exec_callback_QDesignerIntegrationInterface_navigateToSlotWithSlotSignature(cb C.intptr_t, slotSignature C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(slotSignature string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var slotSignature_ms C.struct_miqt_string = slotSignature
	slotSignature_ret := C.GoStringN(slotSignature_ms.data, C.int(int64(slotSignature_ms.len)))
	C.free(unsafe.Pointer(slotSignature_ms.data))
	slotval1 := slotSignature_ret

	gofunc(slotval1)
}

func (this *QDesignerIntegrationInterface) SetFeatures(f QDesignerIntegrationInterface__FeatureFlag) {
	C.QDesignerIntegrationInterface_setFeatures(this.h, (C.int)(f))
}

func (this *QDesignerIntegrationInterface) UpdateProperty(name string, value *qt6.QVariant, enableSubPropertyHandling bool) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerIntegrationInterface_updateProperty(this.h, name_ms, (*C.QVariant)(value.UnsafePointer()), (C.bool)(enableSubPropertyHandling))
}

func (this *QDesignerIntegrationInterface) UpdateProperty2(name string, value *qt6.QVariant) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerIntegrationInterface_updateProperty2(this.h, name_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QDesignerIntegrationInterface) ResetProperty(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerIntegrationInterface_resetProperty(this.h, name_ms)
}

func (this *QDesignerIntegrationInterface) AddDynamicProperty(name string, value *qt6.QVariant) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerIntegrationInterface_addDynamicProperty(this.h, name_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QDesignerIntegrationInterface) RemoveDynamicProperty(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerIntegrationInterface_removeDynamicProperty(this.h, name_ms)
}

func (this *QDesignerIntegrationInterface) UpdateActiveFormWindow(formWindow *QDesignerFormWindowInterface) {
	C.QDesignerIntegrationInterface_updateActiveFormWindow(this.h, formWindow.cPointer())
}

func (this *QDesignerIntegrationInterface) SetupFormWindow(formWindow *QDesignerFormWindowInterface) {
	C.QDesignerIntegrationInterface_setupFormWindow(this.h, formWindow.cPointer())
}

func (this *QDesignerIntegrationInterface) UpdateSelection() {
	C.QDesignerIntegrationInterface_updateSelection(this.h)
}

func (this *QDesignerIntegrationInterface) UpdateCustomWidgetPlugins() {
	C.QDesignerIntegrationInterface_updateCustomWidgetPlugins(this.h)
}

func QDesignerIntegrationInterface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerIntegrationInterface_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerIntegrationInterface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerIntegrationInterface_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QDesignerIntegrationInterface that was directly constructed.
func (this *QDesignerIntegrationInterface) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QDesignerIntegrationInterface_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDesignerIntegrationInterface that was directly constructed.
func (this *QDesignerIntegrationInterface) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerIntegrationInterface_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDesignerIntegrationInterface that was directly constructed.
func (this *QDesignerIntegrationInterface) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerIntegrationInterface_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDesignerIntegrationInterface that was directly constructed.
func (this *QDesignerIntegrationInterface) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerIntegrationInterface_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QDesignerIntegrationInterface) OnContainerWindow(slot func(widget *qt6.QWidget) *qt6.QWidget) {
	ok := C.QDesignerIntegrationInterface_override_virtual_containerWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_containerWindow
func miqt_exec_callback_QDesignerIntegrationInterface_containerWindow(self *C.QDesignerIntegrationInterface, cb C.intptr_t, widget *C.QWidget) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(widget *qt6.QWidget) *qt6.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	virtualReturn := gofunc(slotval1)

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}
func (this *QDesignerIntegrationInterface) OnCreateResourceBrowser(slot func(parent *qt6.QWidget) *QDesignerResourceBrowserInterface) {
	ok := C.QDesignerIntegrationInterface_override_virtual_createResourceBrowser(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_createResourceBrowser
func miqt_exec_callback_QDesignerIntegrationInterface_createResourceBrowser(self *C.QDesignerIntegrationInterface, cb C.intptr_t, parent *C.QWidget) *C.QDesignerResourceBrowserInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(parent *qt6.QWidget) *QDesignerResourceBrowserInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(parent))

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}
func (this *QDesignerIntegrationInterface) OnHeaderSuffix(slot func() string) {
	ok := C.QDesignerIntegrationInterface_override_virtual_headerSuffix(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_headerSuffix
func miqt_exec_callback_QDesignerIntegrationInterface_headerSuffix(self *C.QDesignerIntegrationInterface, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}
func (this *QDesignerIntegrationInterface) OnSetHeaderSuffix(slot func(headerSuffix string)) {
	ok := C.QDesignerIntegrationInterface_override_virtual_setHeaderSuffix(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_setHeaderSuffix
func miqt_exec_callback_QDesignerIntegrationInterface_setHeaderSuffix(self *C.QDesignerIntegrationInterface, cb C.intptr_t, headerSuffix C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(headerSuffix string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var headerSuffix_ms C.struct_miqt_string = headerSuffix
	headerSuffix_ret := C.GoStringN(headerSuffix_ms.data, C.int(int64(headerSuffix_ms.len)))
	C.free(unsafe.Pointer(headerSuffix_ms.data))
	slotval1 := headerSuffix_ret

	gofunc(slotval1)

}
func (this *QDesignerIntegrationInterface) OnIsHeaderLowercase(slot func() bool) {
	ok := C.QDesignerIntegrationInterface_override_virtual_isHeaderLowercase(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_isHeaderLowercase
func miqt_exec_callback_QDesignerIntegrationInterface_isHeaderLowercase(self *C.QDesignerIntegrationInterface, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}
func (this *QDesignerIntegrationInterface) OnSetHeaderLowercase(slot func(headerLowerCase bool)) {
	ok := C.QDesignerIntegrationInterface_override_virtual_setHeaderLowercase(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_setHeaderLowercase
func miqt_exec_callback_QDesignerIntegrationInterface_setHeaderLowercase(self *C.QDesignerIntegrationInterface, cb C.intptr_t, headerLowerCase C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(headerLowerCase bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(headerLowerCase)

	gofunc(slotval1)

}
func (this *QDesignerIntegrationInterface) OnFeatures(slot func() QDesignerIntegrationInterface__FeatureFlag) {
	ok := C.QDesignerIntegrationInterface_override_virtual_features(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_features
func miqt_exec_callback_QDesignerIntegrationInterface_features(self *C.QDesignerIntegrationInterface, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() QDesignerIntegrationInterface__FeatureFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QDesignerIntegrationInterface) OnResourceFileWatcherBehaviour(slot func() QDesignerIntegrationInterface__ResourceFileWatcherBehaviour) {
	ok := C.QDesignerIntegrationInterface_override_virtual_resourceFileWatcherBehaviour(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_resourceFileWatcherBehaviour
func miqt_exec_callback_QDesignerIntegrationInterface_resourceFileWatcherBehaviour(self *C.QDesignerIntegrationInterface, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() QDesignerIntegrationInterface__ResourceFileWatcherBehaviour)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QDesignerIntegrationInterface) OnSetResourceFileWatcherBehaviour(slot func(behaviour QDesignerIntegrationInterface__ResourceFileWatcherBehaviour)) {
	ok := C.QDesignerIntegrationInterface_override_virtual_setResourceFileWatcherBehaviour(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_setResourceFileWatcherBehaviour
func miqt_exec_callback_QDesignerIntegrationInterface_setResourceFileWatcherBehaviour(self *C.QDesignerIntegrationInterface, cb C.intptr_t, behaviour C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(behaviour QDesignerIntegrationInterface__ResourceFileWatcherBehaviour))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QDesignerIntegrationInterface__ResourceFileWatcherBehaviour)(behaviour)

	gofunc(slotval1)

}
func (this *QDesignerIntegrationInterface) OnContextHelpId(slot func() string) {
	ok := C.QDesignerIntegrationInterface_override_virtual_contextHelpId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_contextHelpId
func miqt_exec_callback_QDesignerIntegrationInterface_contextHelpId(self *C.QDesignerIntegrationInterface, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func() string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}
func (this *QDesignerIntegrationInterface) OnSetFeatures(slot func(f QDesignerIntegrationInterface__FeatureFlag)) {
	ok := C.QDesignerIntegrationInterface_override_virtual_setFeatures(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_setFeatures
func miqt_exec_callback_QDesignerIntegrationInterface_setFeatures(self *C.QDesignerIntegrationInterface, cb C.intptr_t, f C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(f QDesignerIntegrationInterface__FeatureFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QDesignerIntegrationInterface__FeatureFlag)(f)

	gofunc(slotval1)

}
func (this *QDesignerIntegrationInterface) OnUpdateProperty(slot func(name string, value *qt6.QVariant, enableSubPropertyHandling bool)) {
	ok := C.QDesignerIntegrationInterface_override_virtual_updateProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_updateProperty
func miqt_exec_callback_QDesignerIntegrationInterface_updateProperty(self *C.QDesignerIntegrationInterface, cb C.intptr_t, name C.struct_miqt_string, value *C.QVariant, enableSubPropertyHandling C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string, value *qt6.QVariant, enableSubPropertyHandling bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret
	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	slotval3 := (bool)(enableSubPropertyHandling)

	gofunc(slotval1, slotval2, slotval3)

}
func (this *QDesignerIntegrationInterface) OnUpdateProperty2(slot func(name string, value *qt6.QVariant)) {
	ok := C.QDesignerIntegrationInterface_override_virtual_updateProperty2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_updateProperty2
func miqt_exec_callback_QDesignerIntegrationInterface_updateProperty2(self *C.QDesignerIntegrationInterface, cb C.intptr_t, name C.struct_miqt_string, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string, value *qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret
	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc(slotval1, slotval2)

}
func (this *QDesignerIntegrationInterface) OnResetProperty(slot func(name string)) {
	ok := C.QDesignerIntegrationInterface_override_virtual_resetProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_resetProperty
func miqt_exec_callback_QDesignerIntegrationInterface_resetProperty(self *C.QDesignerIntegrationInterface, cb C.intptr_t, name C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	gofunc(slotval1)

}
func (this *QDesignerIntegrationInterface) OnAddDynamicProperty(slot func(name string, value *qt6.QVariant)) {
	ok := C.QDesignerIntegrationInterface_override_virtual_addDynamicProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_addDynamicProperty
func miqt_exec_callback_QDesignerIntegrationInterface_addDynamicProperty(self *C.QDesignerIntegrationInterface, cb C.intptr_t, name C.struct_miqt_string, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string, value *qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret
	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc(slotval1, slotval2)

}
func (this *QDesignerIntegrationInterface) OnRemoveDynamicProperty(slot func(name string)) {
	ok := C.QDesignerIntegrationInterface_override_virtual_removeDynamicProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_removeDynamicProperty
func miqt_exec_callback_QDesignerIntegrationInterface_removeDynamicProperty(self *C.QDesignerIntegrationInterface, cb C.intptr_t, name C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(name string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	gofunc(slotval1)

}
func (this *QDesignerIntegrationInterface) OnUpdateActiveFormWindow(slot func(formWindow *QDesignerFormWindowInterface)) {
	ok := C.QDesignerIntegrationInterface_override_virtual_updateActiveFormWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_updateActiveFormWindow
func miqt_exec_callback_QDesignerIntegrationInterface_updateActiveFormWindow(self *C.QDesignerIntegrationInterface, cb C.intptr_t, formWindow *C.QDesignerFormWindowInterface) {
	gofunc, ok := cgo.Handle(cb).Value().(func(formWindow *QDesignerFormWindowInterface))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDesignerFormWindowInterface(formWindow)

	gofunc(slotval1)

}
func (this *QDesignerIntegrationInterface) OnSetupFormWindow(slot func(formWindow *QDesignerFormWindowInterface)) {
	ok := C.QDesignerIntegrationInterface_override_virtual_setupFormWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_setupFormWindow
func miqt_exec_callback_QDesignerIntegrationInterface_setupFormWindow(self *C.QDesignerIntegrationInterface, cb C.intptr_t, formWindow *C.QDesignerFormWindowInterface) {
	gofunc, ok := cgo.Handle(cb).Value().(func(formWindow *QDesignerFormWindowInterface))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDesignerFormWindowInterface(formWindow)

	gofunc(slotval1)

}
func (this *QDesignerIntegrationInterface) OnUpdateSelection(slot func()) {
	ok := C.QDesignerIntegrationInterface_override_virtual_updateSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_updateSelection
func miqt_exec_callback_QDesignerIntegrationInterface_updateSelection(self *C.QDesignerIntegrationInterface, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *QDesignerIntegrationInterface) OnUpdateCustomWidgetPlugins(slot func()) {
	ok := C.QDesignerIntegrationInterface_override_virtual_updateCustomWidgetPlugins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_updateCustomWidgetPlugins
func miqt_exec_callback_QDesignerIntegrationInterface_updateCustomWidgetPlugins(self *C.QDesignerIntegrationInterface, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}

func (this *QDesignerIntegrationInterface) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QDesignerIntegrationInterface_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerIntegrationInterface) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QDesignerIntegrationInterface_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_event
func miqt_exec_callback_QDesignerIntegrationInterface_event(self *C.QDesignerIntegrationInterface, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerIntegrationInterface{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerIntegrationInterface) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QDesignerIntegrationInterface_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerIntegrationInterface) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QDesignerIntegrationInterface_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_eventFilter
func miqt_exec_callback_QDesignerIntegrationInterface_eventFilter(self *C.QDesignerIntegrationInterface, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerIntegrationInterface{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerIntegrationInterface) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QDesignerIntegrationInterface_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDesignerIntegrationInterface) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QDesignerIntegrationInterface_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_timerEvent
func miqt_exec_callback_QDesignerIntegrationInterface_timerEvent(self *C.QDesignerIntegrationInterface, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDesignerIntegrationInterface{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDesignerIntegrationInterface) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QDesignerIntegrationInterface_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDesignerIntegrationInterface) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QDesignerIntegrationInterface_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_childEvent
func miqt_exec_callback_QDesignerIntegrationInterface_childEvent(self *C.QDesignerIntegrationInterface, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDesignerIntegrationInterface{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDesignerIntegrationInterface) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QDesignerIntegrationInterface_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDesignerIntegrationInterface) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QDesignerIntegrationInterface_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_customEvent
func miqt_exec_callback_QDesignerIntegrationInterface_customEvent(self *C.QDesignerIntegrationInterface, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesignerIntegrationInterface{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDesignerIntegrationInterface) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QDesignerIntegrationInterface_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerIntegrationInterface) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDesignerIntegrationInterface_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_connectNotify
func miqt_exec_callback_QDesignerIntegrationInterface_connectNotify(self *C.QDesignerIntegrationInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerIntegrationInterface{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDesignerIntegrationInterface) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QDesignerIntegrationInterface_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerIntegrationInterface) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDesignerIntegrationInterface_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegrationInterface_disconnectNotify
func miqt_exec_callback_QDesignerIntegrationInterface_disconnectNotify(self *C.QDesignerIntegrationInterface, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerIntegrationInterface{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDesignerIntegrationInterface) Delete() {
	C.QDesignerIntegrationInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerIntegrationInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerIntegrationInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDesignerIntegration struct {
	h *C.QDesignerIntegration
	*QDesignerIntegrationInterface
}

func (this *QDesignerIntegration) cPointer() *C.QDesignerIntegration {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerIntegration) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerIntegration constructs the type using only CGO pointers.
func newQDesignerIntegration(h *C.QDesignerIntegration) *QDesignerIntegration {
	if h == nil {
		return nil
	}
	var outptr_QDesignerIntegrationInterface *C.QDesignerIntegrationInterface = nil
	C.QDesignerIntegration_virtbase(h, &outptr_QDesignerIntegrationInterface)

	return &QDesignerIntegration{h: h,
		QDesignerIntegrationInterface: newQDesignerIntegrationInterface(outptr_QDesignerIntegrationInterface)}
}

// UnsafeNewQDesignerIntegration constructs the type using only unsafe pointers.
func UnsafeNewQDesignerIntegration(h unsafe.Pointer) *QDesignerIntegration {
	return newQDesignerIntegration((*C.QDesignerIntegration)(h))
}

// NewQDesignerIntegration constructs a new QDesignerIntegration object.
func NewQDesignerIntegration(core *QDesignerFormEditorInterface) *QDesignerIntegration {

	return newQDesignerIntegration(C.QDesignerIntegration_new(core.cPointer()))
}

// NewQDesignerIntegration2 constructs a new QDesignerIntegration object.
func NewQDesignerIntegration2(core *QDesignerFormEditorInterface, parent *qt6.QObject) *QDesignerIntegration {

	return newQDesignerIntegration(C.QDesignerIntegration_new2(core.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QDesignerIntegration) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QDesignerIntegration_metaObject(this.h)))
}

func (this *QDesignerIntegration) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDesignerIntegration_metacast(this.h, param1_Cstring))
}

func QDesignerIntegration_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerIntegration_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerIntegration) HeaderSuffix() string {
	var _ms C.struct_miqt_string = C.QDesignerIntegration_headerSuffix(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerIntegration) SetHeaderSuffix(headerSuffix string) {
	headerSuffix_ms := C.struct_miqt_string{}
	headerSuffix_ms.data = C.CString(headerSuffix)
	headerSuffix_ms.len = C.size_t(len(headerSuffix))
	defer C.free(unsafe.Pointer(headerSuffix_ms.data))
	C.QDesignerIntegration_setHeaderSuffix(this.h, headerSuffix_ms)
}

func (this *QDesignerIntegration) IsHeaderLowercase() bool {
	return (bool)(C.QDesignerIntegration_isHeaderLowercase(this.h))
}

func (this *QDesignerIntegration) SetHeaderLowercase(headerLowerCase bool) {
	C.QDesignerIntegration_setHeaderLowercase(this.h, (C.bool)(headerLowerCase))
}

func (this *QDesignerIntegration) Features() QDesignerIntegrationInterface__FeatureFlag {
	return (QDesignerIntegrationInterface__FeatureFlag)(C.QDesignerIntegration_features(this.h))
}

func (this *QDesignerIntegration) SetFeatures(f QDesignerIntegrationInterface__FeatureFlag) {
	C.QDesignerIntegration_setFeatures(this.h, (C.int)(f))
}

func (this *QDesignerIntegration) ResourceFileWatcherBehaviour() QDesignerIntegrationInterface__ResourceFileWatcherBehaviour {
	return (QDesignerIntegrationInterface__ResourceFileWatcherBehaviour)(C.QDesignerIntegration_resourceFileWatcherBehaviour(this.h))
}

func (this *QDesignerIntegration) SetResourceFileWatcherBehaviour(behaviour QDesignerIntegrationInterface__ResourceFileWatcherBehaviour) {
	C.QDesignerIntegration_setResourceFileWatcherBehaviour(this.h, (C.int)(behaviour))
}

func (this *QDesignerIntegration) ContainerWindow(widget *qt6.QWidget) *qt6.QWidget {
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerIntegration_containerWindow(this.h, (*C.QWidget)(widget.UnsafePointer()))))
}

func QDesignerIntegration_InitializePlugins(formEditor *QDesignerFormEditorInterface) {
	C.QDesignerIntegration_initializePlugins(formEditor.cPointer())
}

func (this *QDesignerIntegration) CreateResourceBrowser(parent *qt6.QWidget) *QDesignerResourceBrowserInterface {
	return newQDesignerResourceBrowserInterface(C.QDesignerIntegration_createResourceBrowser(this.h, (*C.QWidget)(parent.UnsafePointer())))
}

func (this *QDesignerIntegration) ContextHelpId() string {
	var _ms C.struct_miqt_string = C.QDesignerIntegration_contextHelpId(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerIntegration) UpdateProperty(name string, value *qt6.QVariant, enableSubPropertyHandling bool) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerIntegration_updateProperty(this.h, name_ms, (*C.QVariant)(value.UnsafePointer()), (C.bool)(enableSubPropertyHandling))
}

func (this *QDesignerIntegration) UpdateProperty2(name string, value *qt6.QVariant) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerIntegration_updateProperty2(this.h, name_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QDesignerIntegration) ResetProperty(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerIntegration_resetProperty(this.h, name_ms)
}

func (this *QDesignerIntegration) AddDynamicProperty(name string, value *qt6.QVariant) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerIntegration_addDynamicProperty(this.h, name_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QDesignerIntegration) RemoveDynamicProperty(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.QDesignerIntegration_removeDynamicProperty(this.h, name_ms)
}

func (this *QDesignerIntegration) UpdateActiveFormWindow(formWindow *QDesignerFormWindowInterface) {
	C.QDesignerIntegration_updateActiveFormWindow(this.h, formWindow.cPointer())
}

func (this *QDesignerIntegration) SetupFormWindow(formWindow *QDesignerFormWindowInterface) {
	C.QDesignerIntegration_setupFormWindow(this.h, formWindow.cPointer())
}

func (this *QDesignerIntegration) UpdateSelection() {
	C.QDesignerIntegration_updateSelection(this.h)
}

func (this *QDesignerIntegration) UpdateCustomWidgetPlugins() {
	C.QDesignerIntegration_updateCustomWidgetPlugins(this.h)
}

func QDesignerIntegration_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerIntegration_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerIntegration_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerIntegration_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QDesignerIntegration that was directly constructed.
func (this *QDesignerIntegration) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QDesignerIntegration_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDesignerIntegration that was directly constructed.
func (this *QDesignerIntegration) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerIntegration_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDesignerIntegration that was directly constructed.
func (this *QDesignerIntegration) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDesignerIntegration_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDesignerIntegration that was directly constructed.
func (this *QDesignerIntegration) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDesignerIntegration_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QDesignerIntegration) callVirtualBase_HeaderSuffix() string {

	var _ms C.struct_miqt_string = C.QDesignerIntegration_virtualbase_headerSuffix(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QDesignerIntegration) OnHeaderSuffix(slot func(super func() string) string) {
	ok := C.QDesignerIntegration_override_virtual_headerSuffix(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_headerSuffix
func miqt_exec_callback_QDesignerIntegration_headerSuffix(self *C.QDesignerIntegration, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerIntegration{h: self}).callVirtualBase_HeaderSuffix)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QDesignerIntegration) callVirtualBase_SetHeaderSuffix(headerSuffix string) {
	headerSuffix_ms := C.struct_miqt_string{}
	headerSuffix_ms.data = C.CString(headerSuffix)
	headerSuffix_ms.len = C.size_t(len(headerSuffix))
	defer C.free(unsafe.Pointer(headerSuffix_ms.data))

	C.QDesignerIntegration_virtualbase_setHeaderSuffix(unsafe.Pointer(this.h), headerSuffix_ms)

}
func (this *QDesignerIntegration) OnSetHeaderSuffix(slot func(super func(headerSuffix string), headerSuffix string)) {
	ok := C.QDesignerIntegration_override_virtual_setHeaderSuffix(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_setHeaderSuffix
func miqt_exec_callback_QDesignerIntegration_setHeaderSuffix(self *C.QDesignerIntegration, cb C.intptr_t, headerSuffix C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(headerSuffix string), headerSuffix string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var headerSuffix_ms C.struct_miqt_string = headerSuffix
	headerSuffix_ret := C.GoStringN(headerSuffix_ms.data, C.int(int64(headerSuffix_ms.len)))
	C.free(unsafe.Pointer(headerSuffix_ms.data))
	slotval1 := headerSuffix_ret

	gofunc((&QDesignerIntegration{h: self}).callVirtualBase_SetHeaderSuffix, slotval1)

}

func (this *QDesignerIntegration) callVirtualBase_IsHeaderLowercase() bool {

	return (bool)(C.QDesignerIntegration_virtualbase_isHeaderLowercase(unsafe.Pointer(this.h)))

}
func (this *QDesignerIntegration) OnIsHeaderLowercase(slot func(super func() bool) bool) {
	ok := C.QDesignerIntegration_override_virtual_isHeaderLowercase(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_isHeaderLowercase
func miqt_exec_callback_QDesignerIntegration_isHeaderLowercase(self *C.QDesignerIntegration, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerIntegration{h: self}).callVirtualBase_IsHeaderLowercase)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerIntegration) callVirtualBase_SetHeaderLowercase(headerLowerCase bool) {

	C.QDesignerIntegration_virtualbase_setHeaderLowercase(unsafe.Pointer(this.h), (C.bool)(headerLowerCase))

}
func (this *QDesignerIntegration) OnSetHeaderLowercase(slot func(super func(headerLowerCase bool), headerLowerCase bool)) {
	ok := C.QDesignerIntegration_override_virtual_setHeaderLowercase(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_setHeaderLowercase
func miqt_exec_callback_QDesignerIntegration_setHeaderLowercase(self *C.QDesignerIntegration, cb C.intptr_t, headerLowerCase C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(headerLowerCase bool), headerLowerCase bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(headerLowerCase)

	gofunc((&QDesignerIntegration{h: self}).callVirtualBase_SetHeaderLowercase, slotval1)

}

func (this *QDesignerIntegration) callVirtualBase_Features() QDesignerIntegrationInterface__FeatureFlag {

	return (QDesignerIntegrationInterface__FeatureFlag)(C.QDesignerIntegration_virtualbase_features(unsafe.Pointer(this.h)))

}
func (this *QDesignerIntegration) OnFeatures(slot func(super func() QDesignerIntegrationInterface__FeatureFlag) QDesignerIntegrationInterface__FeatureFlag) {
	ok := C.QDesignerIntegration_override_virtual_features(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_features
func miqt_exec_callback_QDesignerIntegration_features(self *C.QDesignerIntegration, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QDesignerIntegrationInterface__FeatureFlag) QDesignerIntegrationInterface__FeatureFlag)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerIntegration{h: self}).callVirtualBase_Features)

	return (C.int)(virtualReturn)

}

func (this *QDesignerIntegration) callVirtualBase_SetFeatures(f QDesignerIntegrationInterface__FeatureFlag) {

	C.QDesignerIntegration_virtualbase_setFeatures(unsafe.Pointer(this.h), (C.int)(f))

}
func (this *QDesignerIntegration) OnSetFeatures(slot func(super func(f QDesignerIntegrationInterface__FeatureFlag), f QDesignerIntegrationInterface__FeatureFlag)) {
	ok := C.QDesignerIntegration_override_virtual_setFeatures(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_setFeatures
func miqt_exec_callback_QDesignerIntegration_setFeatures(self *C.QDesignerIntegration, cb C.intptr_t, f C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(f QDesignerIntegrationInterface__FeatureFlag), f QDesignerIntegrationInterface__FeatureFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QDesignerIntegrationInterface__FeatureFlag)(f)

	gofunc((&QDesignerIntegration{h: self}).callVirtualBase_SetFeatures, slotval1)

}

func (this *QDesignerIntegration) callVirtualBase_ResourceFileWatcherBehaviour() QDesignerIntegrationInterface__ResourceFileWatcherBehaviour {

	return (QDesignerIntegrationInterface__ResourceFileWatcherBehaviour)(C.QDesignerIntegration_virtualbase_resourceFileWatcherBehaviour(unsafe.Pointer(this.h)))

}
func (this *QDesignerIntegration) OnResourceFileWatcherBehaviour(slot func(super func() QDesignerIntegrationInterface__ResourceFileWatcherBehaviour) QDesignerIntegrationInterface__ResourceFileWatcherBehaviour) {
	ok := C.QDesignerIntegration_override_virtual_resourceFileWatcherBehaviour(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_resourceFileWatcherBehaviour
func miqt_exec_callback_QDesignerIntegration_resourceFileWatcherBehaviour(self *C.QDesignerIntegration, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QDesignerIntegrationInterface__ResourceFileWatcherBehaviour) QDesignerIntegrationInterface__ResourceFileWatcherBehaviour)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerIntegration{h: self}).callVirtualBase_ResourceFileWatcherBehaviour)

	return (C.int)(virtualReturn)

}

func (this *QDesignerIntegration) callVirtualBase_SetResourceFileWatcherBehaviour(behaviour QDesignerIntegrationInterface__ResourceFileWatcherBehaviour) {

	C.QDesignerIntegration_virtualbase_setResourceFileWatcherBehaviour(unsafe.Pointer(this.h), (C.int)(behaviour))

}
func (this *QDesignerIntegration) OnSetResourceFileWatcherBehaviour(slot func(super func(behaviour QDesignerIntegrationInterface__ResourceFileWatcherBehaviour), behaviour QDesignerIntegrationInterface__ResourceFileWatcherBehaviour)) {
	ok := C.QDesignerIntegration_override_virtual_setResourceFileWatcherBehaviour(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_setResourceFileWatcherBehaviour
func miqt_exec_callback_QDesignerIntegration_setResourceFileWatcherBehaviour(self *C.QDesignerIntegration, cb C.intptr_t, behaviour C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(behaviour QDesignerIntegrationInterface__ResourceFileWatcherBehaviour), behaviour QDesignerIntegrationInterface__ResourceFileWatcherBehaviour))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QDesignerIntegrationInterface__ResourceFileWatcherBehaviour)(behaviour)

	gofunc((&QDesignerIntegration{h: self}).callVirtualBase_SetResourceFileWatcherBehaviour, slotval1)

}

func (this *QDesignerIntegration) callVirtualBase_ContainerWindow(widget *qt6.QWidget) *qt6.QWidget {

	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerIntegration_virtualbase_containerWindow(unsafe.Pointer(this.h), (*C.QWidget)(widget.UnsafePointer()))))

}
func (this *QDesignerIntegration) OnContainerWindow(slot func(super func(widget *qt6.QWidget) *qt6.QWidget, widget *qt6.QWidget) *qt6.QWidget) {
	ok := C.QDesignerIntegration_override_virtual_containerWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_containerWindow
func miqt_exec_callback_QDesignerIntegration_containerWindow(self *C.QDesignerIntegration, cb C.intptr_t, widget *C.QWidget) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(widget *qt6.QWidget) *qt6.QWidget, widget *qt6.QWidget) *qt6.QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	virtualReturn := gofunc((&QDesignerIntegration{h: self}).callVirtualBase_ContainerWindow, slotval1)

	return (*C.QWidget)(virtualReturn.UnsafePointer())

}

func (this *QDesignerIntegration) callVirtualBase_CreateResourceBrowser(parent *qt6.QWidget) *QDesignerResourceBrowserInterface {

	return newQDesignerResourceBrowserInterface(C.QDesignerIntegration_virtualbase_createResourceBrowser(unsafe.Pointer(this.h), (*C.QWidget)(parent.UnsafePointer())))

}
func (this *QDesignerIntegration) OnCreateResourceBrowser(slot func(super func(parent *qt6.QWidget) *QDesignerResourceBrowserInterface, parent *qt6.QWidget) *QDesignerResourceBrowserInterface) {
	ok := C.QDesignerIntegration_override_virtual_createResourceBrowser(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_createResourceBrowser
func miqt_exec_callback_QDesignerIntegration_createResourceBrowser(self *C.QDesignerIntegration, cb C.intptr_t, parent *C.QWidget) *C.QDesignerResourceBrowserInterface {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *qt6.QWidget) *QDesignerResourceBrowserInterface, parent *qt6.QWidget) *QDesignerResourceBrowserInterface)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(parent))

	virtualReturn := gofunc((&QDesignerIntegration{h: self}).callVirtualBase_CreateResourceBrowser, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDesignerIntegration) callVirtualBase_ContextHelpId() string {

	var _ms C.struct_miqt_string = C.QDesignerIntegration_virtualbase_contextHelpId(unsafe.Pointer(this.h))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QDesignerIntegration) OnContextHelpId(slot func(super func() string) string) {
	ok := C.QDesignerIntegration_override_virtual_contextHelpId(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_contextHelpId
func miqt_exec_callback_QDesignerIntegration_contextHelpId(self *C.QDesignerIntegration, cb C.intptr_t) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() string) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDesignerIntegration{h: self}).callVirtualBase_ContextHelpId)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))
	defer C.free(unsafe.Pointer(virtualReturn_ms.data))

	return virtualReturn_ms

}

func (this *QDesignerIntegration) callVirtualBase_UpdateProperty(name string, value *qt6.QVariant, enableSubPropertyHandling bool) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	C.QDesignerIntegration_virtualbase_updateProperty(unsafe.Pointer(this.h), name_ms, (*C.QVariant)(value.UnsafePointer()), (C.bool)(enableSubPropertyHandling))

}
func (this *QDesignerIntegration) OnUpdateProperty(slot func(super func(name string, value *qt6.QVariant, enableSubPropertyHandling bool), name string, value *qt6.QVariant, enableSubPropertyHandling bool)) {
	ok := C.QDesignerIntegration_override_virtual_updateProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_updateProperty
func miqt_exec_callback_QDesignerIntegration_updateProperty(self *C.QDesignerIntegration, cb C.intptr_t, name C.struct_miqt_string, value *C.QVariant, enableSubPropertyHandling C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(name string, value *qt6.QVariant, enableSubPropertyHandling bool), name string, value *qt6.QVariant, enableSubPropertyHandling bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret
	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	slotval3 := (bool)(enableSubPropertyHandling)

	gofunc((&QDesignerIntegration{h: self}).callVirtualBase_UpdateProperty, slotval1, slotval2, slotval3)

}

func (this *QDesignerIntegration) callVirtualBase_UpdateProperty2(name string, value *qt6.QVariant) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	C.QDesignerIntegration_virtualbase_updateProperty2(unsafe.Pointer(this.h), name_ms, (*C.QVariant)(value.UnsafePointer()))

}
func (this *QDesignerIntegration) OnUpdateProperty2(slot func(super func(name string, value *qt6.QVariant), name string, value *qt6.QVariant)) {
	ok := C.QDesignerIntegration_override_virtual_updateProperty2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_updateProperty2
func miqt_exec_callback_QDesignerIntegration_updateProperty2(self *C.QDesignerIntegration, cb C.intptr_t, name C.struct_miqt_string, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(name string, value *qt6.QVariant), name string, value *qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret
	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc((&QDesignerIntegration{h: self}).callVirtualBase_UpdateProperty2, slotval1, slotval2)

}

func (this *QDesignerIntegration) callVirtualBase_ResetProperty(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	C.QDesignerIntegration_virtualbase_resetProperty(unsafe.Pointer(this.h), name_ms)

}
func (this *QDesignerIntegration) OnResetProperty(slot func(super func(name string), name string)) {
	ok := C.QDesignerIntegration_override_virtual_resetProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_resetProperty
func miqt_exec_callback_QDesignerIntegration_resetProperty(self *C.QDesignerIntegration, cb C.intptr_t, name C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(name string), name string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	gofunc((&QDesignerIntegration{h: self}).callVirtualBase_ResetProperty, slotval1)

}

func (this *QDesignerIntegration) callVirtualBase_AddDynamicProperty(name string, value *qt6.QVariant) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	C.QDesignerIntegration_virtualbase_addDynamicProperty(unsafe.Pointer(this.h), name_ms, (*C.QVariant)(value.UnsafePointer()))

}
func (this *QDesignerIntegration) OnAddDynamicProperty(slot func(super func(name string, value *qt6.QVariant), name string, value *qt6.QVariant)) {
	ok := C.QDesignerIntegration_override_virtual_addDynamicProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_addDynamicProperty
func miqt_exec_callback_QDesignerIntegration_addDynamicProperty(self *C.QDesignerIntegration, cb C.intptr_t, name C.struct_miqt_string, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(name string, value *qt6.QVariant), name string, value *qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret
	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc((&QDesignerIntegration{h: self}).callVirtualBase_AddDynamicProperty, slotval1, slotval2)

}

func (this *QDesignerIntegration) callVirtualBase_RemoveDynamicProperty(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	C.QDesignerIntegration_virtualbase_removeDynamicProperty(unsafe.Pointer(this.h), name_ms)

}
func (this *QDesignerIntegration) OnRemoveDynamicProperty(slot func(super func(name string), name string)) {
	ok := C.QDesignerIntegration_override_virtual_removeDynamicProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_removeDynamicProperty
func miqt_exec_callback_QDesignerIntegration_removeDynamicProperty(self *C.QDesignerIntegration, cb C.intptr_t, name C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(name string), name string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	gofunc((&QDesignerIntegration{h: self}).callVirtualBase_RemoveDynamicProperty, slotval1)

}

func (this *QDesignerIntegration) callVirtualBase_UpdateActiveFormWindow(formWindow *QDesignerFormWindowInterface) {

	C.QDesignerIntegration_virtualbase_updateActiveFormWindow(unsafe.Pointer(this.h), formWindow.cPointer())

}
func (this *QDesignerIntegration) OnUpdateActiveFormWindow(slot func(super func(formWindow *QDesignerFormWindowInterface), formWindow *QDesignerFormWindowInterface)) {
	ok := C.QDesignerIntegration_override_virtual_updateActiveFormWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_updateActiveFormWindow
func miqt_exec_callback_QDesignerIntegration_updateActiveFormWindow(self *C.QDesignerIntegration, cb C.intptr_t, formWindow *C.QDesignerFormWindowInterface) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(formWindow *QDesignerFormWindowInterface), formWindow *QDesignerFormWindowInterface))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDesignerFormWindowInterface(formWindow)

	gofunc((&QDesignerIntegration{h: self}).callVirtualBase_UpdateActiveFormWindow, slotval1)

}

func (this *QDesignerIntegration) callVirtualBase_SetupFormWindow(formWindow *QDesignerFormWindowInterface) {

	C.QDesignerIntegration_virtualbase_setupFormWindow(unsafe.Pointer(this.h), formWindow.cPointer())

}
func (this *QDesignerIntegration) OnSetupFormWindow(slot func(super func(formWindow *QDesignerFormWindowInterface), formWindow *QDesignerFormWindowInterface)) {
	ok := C.QDesignerIntegration_override_virtual_setupFormWindow(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_setupFormWindow
func miqt_exec_callback_QDesignerIntegration_setupFormWindow(self *C.QDesignerIntegration, cb C.intptr_t, formWindow *C.QDesignerFormWindowInterface) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(formWindow *QDesignerFormWindowInterface), formWindow *QDesignerFormWindowInterface))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDesignerFormWindowInterface(formWindow)

	gofunc((&QDesignerIntegration{h: self}).callVirtualBase_SetupFormWindow, slotval1)

}

func (this *QDesignerIntegration) callVirtualBase_UpdateSelection() {

	C.QDesignerIntegration_virtualbase_updateSelection(unsafe.Pointer(this.h))

}
func (this *QDesignerIntegration) OnUpdateSelection(slot func(super func())) {
	ok := C.QDesignerIntegration_override_virtual_updateSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_updateSelection
func miqt_exec_callback_QDesignerIntegration_updateSelection(self *C.QDesignerIntegration, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QDesignerIntegration{h: self}).callVirtualBase_UpdateSelection)

}

func (this *QDesignerIntegration) callVirtualBase_UpdateCustomWidgetPlugins() {

	C.QDesignerIntegration_virtualbase_updateCustomWidgetPlugins(unsafe.Pointer(this.h))

}
func (this *QDesignerIntegration) OnUpdateCustomWidgetPlugins(slot func(super func())) {
	ok := C.QDesignerIntegration_override_virtual_updateCustomWidgetPlugins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_updateCustomWidgetPlugins
func miqt_exec_callback_QDesignerIntegration_updateCustomWidgetPlugins(self *C.QDesignerIntegration, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QDesignerIntegration{h: self}).callVirtualBase_UpdateCustomWidgetPlugins)

}

func (this *QDesignerIntegration) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QDesignerIntegration_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerIntegration) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QDesignerIntegration_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_event
func miqt_exec_callback_QDesignerIntegration_event(self *C.QDesignerIntegration, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerIntegration{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerIntegration) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QDesignerIntegration_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QDesignerIntegration) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QDesignerIntegration_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_eventFilter
func miqt_exec_callback_QDesignerIntegration_eventFilter(self *C.QDesignerIntegration, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QDesignerIntegration{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDesignerIntegration) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QDesignerIntegration_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QDesignerIntegration) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QDesignerIntegration_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_timerEvent
func miqt_exec_callback_QDesignerIntegration_timerEvent(self *C.QDesignerIntegration, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QDesignerIntegration{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDesignerIntegration) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QDesignerIntegration_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QDesignerIntegration) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QDesignerIntegration_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_childEvent
func miqt_exec_callback_QDesignerIntegration_childEvent(self *C.QDesignerIntegration, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QDesignerIntegration{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDesignerIntegration) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QDesignerIntegration_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QDesignerIntegration) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QDesignerIntegration_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_customEvent
func miqt_exec_callback_QDesignerIntegration_customEvent(self *C.QDesignerIntegration, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QDesignerIntegration{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDesignerIntegration) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QDesignerIntegration_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerIntegration) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDesignerIntegration_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_connectNotify
func miqt_exec_callback_QDesignerIntegration_connectNotify(self *C.QDesignerIntegration, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerIntegration{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDesignerIntegration) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QDesignerIntegration_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QDesignerIntegration) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QDesignerIntegration_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerIntegration_disconnectNotify
func miqt_exec_callback_QDesignerIntegration_disconnectNotify(self *C.QDesignerIntegration, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QDesignerIntegration{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDesignerIntegration) Delete() {
	C.QDesignerIntegration_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerIntegration) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerIntegration) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
