package designer

/*

#include "gen_abstractformwindow.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesignerFormWindowInterface__FeatureFlag int

const (
	QDesignerFormWindowInterface__EditFeature     QDesignerFormWindowInterface__FeatureFlag = 1
	QDesignerFormWindowInterface__GridFeature     QDesignerFormWindowInterface__FeatureFlag = 2
	QDesignerFormWindowInterface__TabOrderFeature QDesignerFormWindowInterface__FeatureFlag = 4
	QDesignerFormWindowInterface__DefaultFeature  QDesignerFormWindowInterface__FeatureFlag = 3
)

type QDesignerFormWindowInterface__ResourceFileSaveMode int

const (
	QDesignerFormWindowInterface__SaveAllResourceFiles      QDesignerFormWindowInterface__ResourceFileSaveMode = 0
	QDesignerFormWindowInterface__SaveOnlyUsedResourceFiles QDesignerFormWindowInterface__ResourceFileSaveMode = 1
	QDesignerFormWindowInterface__DontSaveResourceFiles     QDesignerFormWindowInterface__ResourceFileSaveMode = 2
)

type QDesignerFormWindowInterface struct {
	h *C.QDesignerFormWindowInterface
	*qt6.QWidget
}

func (this *QDesignerFormWindowInterface) cPointer() *C.QDesignerFormWindowInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerFormWindowInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerFormWindowInterface constructs the type using only CGO pointers.
func newQDesignerFormWindowInterface(h *C.QDesignerFormWindowInterface) *QDesignerFormWindowInterface {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QDesignerFormWindowInterface_virtbase(h, &outptr_QWidget)

	return &QDesignerFormWindowInterface{h: h,
		QWidget: qt6.UnsafeNewQWidget(unsafe.Pointer(outptr_QWidget))}
}

// UnsafeNewQDesignerFormWindowInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerFormWindowInterface(h unsafe.Pointer) *QDesignerFormWindowInterface {
	return newQDesignerFormWindowInterface((*C.QDesignerFormWindowInterface)(h))
}

func (this *QDesignerFormWindowInterface) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QDesignerFormWindowInterface_metaObject(this.h)))
}

func (this *QDesignerFormWindowInterface) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDesignerFormWindowInterface_metacast(this.h, param1_Cstring))
}

func QDesignerFormWindowInterface_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerFormWindowInterface_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerFormWindowInterface) FileName() string {
	var _ms C.struct_miqt_string = C.QDesignerFormWindowInterface_fileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerFormWindowInterface) AbsoluteDir() *qt6.QDir {
	_goptr := qt6.UnsafeNewQDir(unsafe.Pointer(C.QDesignerFormWindowInterface_absoluteDir(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerFormWindowInterface) Contents() string {
	var _ms C.struct_miqt_string = C.QDesignerFormWindowInterface_contents(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerFormWindowInterface) CheckContents() []string {
	var _ma C.struct_miqt_array = C.QDesignerFormWindowInterface_checkContents(this.h)
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

func (this *QDesignerFormWindowInterface) Features() QDesignerFormWindowInterface__FeatureFlag {
	return (QDesignerFormWindowInterface__FeatureFlag)(C.QDesignerFormWindowInterface_features(this.h))
}

func (this *QDesignerFormWindowInterface) HasFeature(f QDesignerFormWindowInterface__FeatureFlag) bool {
	return (bool)(C.QDesignerFormWindowInterface_hasFeature(this.h, (C.int)(f)))
}

func (this *QDesignerFormWindowInterface) Author() string {
	var _ms C.struct_miqt_string = C.QDesignerFormWindowInterface_author(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerFormWindowInterface) SetAuthor(author string) {
	author_ms := C.struct_miqt_string{}
	author_ms.data = C.CString(author)
	author_ms.len = C.size_t(len(author))
	defer C.free(unsafe.Pointer(author_ms.data))
	C.QDesignerFormWindowInterface_setAuthor(this.h, author_ms)
}

func (this *QDesignerFormWindowInterface) Comment() string {
	var _ms C.struct_miqt_string = C.QDesignerFormWindowInterface_comment(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerFormWindowInterface) SetComment(comment string) {
	comment_ms := C.struct_miqt_string{}
	comment_ms.data = C.CString(comment)
	comment_ms.len = C.size_t(len(comment))
	defer C.free(unsafe.Pointer(comment_ms.data))
	C.QDesignerFormWindowInterface_setComment(this.h, comment_ms)
}

func (this *QDesignerFormWindowInterface) LayoutDefault(margin *int, spacing *int) {
	C.QDesignerFormWindowInterface_layoutDefault(this.h, (*C.int)(unsafe.Pointer(margin)), (*C.int)(unsafe.Pointer(spacing)))
}

func (this *QDesignerFormWindowInterface) SetLayoutDefault(margin int, spacing int) {
	C.QDesignerFormWindowInterface_setLayoutDefault(this.h, (C.int)(margin), (C.int)(spacing))
}

func (this *QDesignerFormWindowInterface) SetLayoutFunction(margin string, spacing string) {
	margin_ms := C.struct_miqt_string{}
	margin_ms.data = C.CString(margin)
	margin_ms.len = C.size_t(len(margin))
	defer C.free(unsafe.Pointer(margin_ms.data))
	spacing_ms := C.struct_miqt_string{}
	spacing_ms.data = C.CString(spacing)
	spacing_ms.len = C.size_t(len(spacing))
	defer C.free(unsafe.Pointer(spacing_ms.data))
	C.QDesignerFormWindowInterface_setLayoutFunction(this.h, margin_ms, spacing_ms)
}

func (this *QDesignerFormWindowInterface) PixmapFunction() string {
	var _ms C.struct_miqt_string = C.QDesignerFormWindowInterface_pixmapFunction(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerFormWindowInterface) SetPixmapFunction(pixmapFunction string) {
	pixmapFunction_ms := C.struct_miqt_string{}
	pixmapFunction_ms.data = C.CString(pixmapFunction)
	pixmapFunction_ms.len = C.size_t(len(pixmapFunction))
	defer C.free(unsafe.Pointer(pixmapFunction_ms.data))
	C.QDesignerFormWindowInterface_setPixmapFunction(this.h, pixmapFunction_ms)
}

func (this *QDesignerFormWindowInterface) ExportMacro() string {
	var _ms C.struct_miqt_string = C.QDesignerFormWindowInterface_exportMacro(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerFormWindowInterface) SetExportMacro(exportMacro string) {
	exportMacro_ms := C.struct_miqt_string{}
	exportMacro_ms.data = C.CString(exportMacro)
	exportMacro_ms.len = C.size_t(len(exportMacro))
	defer C.free(unsafe.Pointer(exportMacro_ms.data))
	C.QDesignerFormWindowInterface_setExportMacro(this.h, exportMacro_ms)
}

func (this *QDesignerFormWindowInterface) IncludeHints() []string {
	var _ma C.struct_miqt_array = C.QDesignerFormWindowInterface_includeHints(this.h)
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

func (this *QDesignerFormWindowInterface) SetIncludeHints(includeHints []string) {
	includeHints_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(includeHints))))
	defer C.free(unsafe.Pointer(includeHints_CArray))
	for i := range includeHints {
		includeHints_i_ms := C.struct_miqt_string{}
		includeHints_i_ms.data = C.CString(includeHints[i])
		includeHints_i_ms.len = C.size_t(len(includeHints[i]))
		defer C.free(unsafe.Pointer(includeHints_i_ms.data))
		includeHints_CArray[i] = includeHints_i_ms
	}
	includeHints_ma := C.struct_miqt_array{len: C.size_t(len(includeHints)), data: unsafe.Pointer(includeHints_CArray)}
	C.QDesignerFormWindowInterface_setIncludeHints(this.h, includeHints_ma)
}

func (this *QDesignerFormWindowInterface) ResourceFileSaveMode() QDesignerFormWindowInterface__ResourceFileSaveMode {
	return (QDesignerFormWindowInterface__ResourceFileSaveMode)(C.QDesignerFormWindowInterface_resourceFileSaveMode(this.h))
}

func (this *QDesignerFormWindowInterface) SetResourceFileSaveMode(behaviour QDesignerFormWindowInterface__ResourceFileSaveMode) {
	C.QDesignerFormWindowInterface_setResourceFileSaveMode(this.h, (C.int)(behaviour))
}

func (this *QDesignerFormWindowInterface) ActiveResourceFilePaths() []string {
	var _ma C.struct_miqt_array = C.QDesignerFormWindowInterface_activeResourceFilePaths(this.h)
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

func (this *QDesignerFormWindowInterface) Core() *QDesignerFormEditorInterface {
	return newQDesignerFormEditorInterface(C.QDesignerFormWindowInterface_core(this.h))
}

func (this *QDesignerFormWindowInterface) Cursor() *QDesignerFormWindowCursorInterface {
	return newQDesignerFormWindowCursorInterface(C.QDesignerFormWindowInterface_cursor(this.h))
}

func (this *QDesignerFormWindowInterface) ToolCount() int {
	return (int)(C.QDesignerFormWindowInterface_toolCount(this.h))
}

func (this *QDesignerFormWindowInterface) CurrentTool() int {
	return (int)(C.QDesignerFormWindowInterface_currentTool(this.h))
}

func (this *QDesignerFormWindowInterface) SetCurrentTool(index int) {
	C.QDesignerFormWindowInterface_setCurrentTool(this.h, (C.int)(index))
}

func (this *QDesignerFormWindowInterface) Tool(index int) *QDesignerFormWindowToolInterface {
	return newQDesignerFormWindowToolInterface(C.QDesignerFormWindowInterface_tool(this.h, (C.int)(index)))
}

func (this *QDesignerFormWindowInterface) RegisterTool(tool *QDesignerFormWindowToolInterface) {
	C.QDesignerFormWindowInterface_registerTool(this.h, tool.cPointer())
}

func (this *QDesignerFormWindowInterface) Grid() *qt6.QPoint {
	_goptr := qt6.UnsafeNewQPoint(unsafe.Pointer(C.QDesignerFormWindowInterface_grid(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerFormWindowInterface) MainContainer() *qt6.QWidget {
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerFormWindowInterface_mainContainer(this.h)))
}

func (this *QDesignerFormWindowInterface) SetMainContainer(mainContainer *qt6.QWidget) {
	C.QDesignerFormWindowInterface_setMainContainer(this.h, (*C.QWidget)(mainContainer.UnsafePointer()))
}

func (this *QDesignerFormWindowInterface) FormContainer() *qt6.QWidget {
	return qt6.UnsafeNewQWidget(unsafe.Pointer(C.QDesignerFormWindowInterface_formContainer(this.h)))
}

func (this *QDesignerFormWindowInterface) IsManaged(widget *qt6.QWidget) bool {
	return (bool)(C.QDesignerFormWindowInterface_isManaged(this.h, (*C.QWidget)(widget.UnsafePointer())))
}

func (this *QDesignerFormWindowInterface) IsDirty() bool {
	return (bool)(C.QDesignerFormWindowInterface_isDirty(this.h))
}

func QDesignerFormWindowInterface_FindFormWindow(w *qt6.QWidget) *QDesignerFormWindowInterface {
	return newQDesignerFormWindowInterface(C.QDesignerFormWindowInterface_findFormWindow((*C.QWidget)(w.UnsafePointer())))
}

func QDesignerFormWindowInterface_FindFormWindowWithObj(obj *qt6.QObject) *QDesignerFormWindowInterface {
	return newQDesignerFormWindowInterface(C.QDesignerFormWindowInterface_findFormWindowWithObj((*C.QObject)(obj.UnsafePointer())))
}

func (this *QDesignerFormWindowInterface) CommandHistory() *qt6.QUndoStack {
	return qt6.UnsafeNewQUndoStack(unsafe.Pointer(C.QDesignerFormWindowInterface_commandHistory(this.h)))
}

func (this *QDesignerFormWindowInterface) BeginCommand(description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.QDesignerFormWindowInterface_beginCommand(this.h, description_ms)
}

func (this *QDesignerFormWindowInterface) EndCommand() {
	C.QDesignerFormWindowInterface_endCommand(this.h)
}

func (this *QDesignerFormWindowInterface) SimplifySelection(widgets []*qt6.QWidget) {
	widgets_CArray := (*[0xffff]*C.QWidget)(C.malloc(C.size_t(8 * len(widgets))))
	defer C.free(unsafe.Pointer(widgets_CArray))
	for i := range widgets {
		widgets_CArray[i] = (*C.QWidget)(widgets[i].UnsafePointer())
	}
	widgets_ma := C.struct_miqt_array{len: C.size_t(len(widgets)), data: unsafe.Pointer(widgets_CArray)}
	C.QDesignerFormWindowInterface_simplifySelection(this.h, widgets_ma)
}

func (this *QDesignerFormWindowInterface) EmitSelectionChanged() {
	C.QDesignerFormWindowInterface_emitSelectionChanged(this.h)
}

func (this *QDesignerFormWindowInterface) ResourceFiles() []string {
	var _ma C.struct_miqt_array = C.QDesignerFormWindowInterface_resourceFiles(this.h)
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

func (this *QDesignerFormWindowInterface) AddResourceFile(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QDesignerFormWindowInterface_addResourceFile(this.h, path_ms)
}

func (this *QDesignerFormWindowInterface) RemoveResourceFile(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QDesignerFormWindowInterface_removeResourceFile(this.h, path_ms)
}

func (this *QDesignerFormWindowInterface) EnsureUniqueObjectName(object *qt6.QObject) {
	C.QDesignerFormWindowInterface_ensureUniqueObjectName(this.h, (*C.QObject)(object.UnsafePointer()))
}

func (this *QDesignerFormWindowInterface) ManageWidget(widget *qt6.QWidget) {
	C.QDesignerFormWindowInterface_manageWidget(this.h, (*C.QWidget)(widget.UnsafePointer()))
}

func (this *QDesignerFormWindowInterface) UnmanageWidget(widget *qt6.QWidget) {
	C.QDesignerFormWindowInterface_unmanageWidget(this.h, (*C.QWidget)(widget.UnsafePointer()))
}

func (this *QDesignerFormWindowInterface) SetFeatures(f QDesignerFormWindowInterface__FeatureFlag) {
	C.QDesignerFormWindowInterface_setFeatures(this.h, (C.int)(f))
}

func (this *QDesignerFormWindowInterface) SetDirty(dirty bool) {
	C.QDesignerFormWindowInterface_setDirty(this.h, (C.bool)(dirty))
}

func (this *QDesignerFormWindowInterface) ClearSelection(changePropertyDisplay bool) {
	C.QDesignerFormWindowInterface_clearSelection(this.h, (C.bool)(changePropertyDisplay))
}

func (this *QDesignerFormWindowInterface) SelectWidget(w *qt6.QWidget, selectVal bool) {
	C.QDesignerFormWindowInterface_selectWidget(this.h, (*C.QWidget)(w.UnsafePointer()), (C.bool)(selectVal))
}

func (this *QDesignerFormWindowInterface) SetGrid(grid *qt6.QPoint) {
	C.QDesignerFormWindowInterface_setGrid(this.h, (*C.QPoint)(grid.UnsafePointer()))
}

func (this *QDesignerFormWindowInterface) SetFileName(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QDesignerFormWindowInterface_setFileName(this.h, fileName_ms)
}

func (this *QDesignerFormWindowInterface) SetContentsWithContents(contents string) bool {
	contents_ms := C.struct_miqt_string{}
	contents_ms.data = C.CString(contents)
	contents_ms.len = C.size_t(len(contents))
	defer C.free(unsafe.Pointer(contents_ms.data))
	return (bool)(C.QDesignerFormWindowInterface_setContentsWithContents(this.h, contents_ms))
}

func (this *QDesignerFormWindowInterface) EditWidgets() {
	C.QDesignerFormWindowInterface_editWidgets(this.h)
}

func (this *QDesignerFormWindowInterface) ActivateResourceFilePaths(paths []string) {
	paths_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	for i := range paths {
		paths_i_ms := C.struct_miqt_string{}
		paths_i_ms.data = C.CString(paths[i])
		paths_i_ms.len = C.size_t(len(paths[i]))
		defer C.free(unsafe.Pointer(paths_i_ms.data))
		paths_CArray[i] = paths_i_ms
	}
	paths_ma := C.struct_miqt_array{len: C.size_t(len(paths)), data: unsafe.Pointer(paths_CArray)}
	C.QDesignerFormWindowInterface_activateResourceFilePaths(this.h, paths_ma)
}

func (this *QDesignerFormWindowInterface) MainContainerChanged(mainContainer *qt6.QWidget) {
	C.QDesignerFormWindowInterface_mainContainerChanged(this.h, (*C.QWidget)(mainContainer.UnsafePointer()))
}
func (this *QDesignerFormWindowInterface) OnMainContainerChanged(slot func(mainContainer *qt6.QWidget)) {
	C.QDesignerFormWindowInterface_connect_mainContainerChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerFormWindowInterface_mainContainerChanged
func miqt_exec_callback_QDesignerFormWindowInterface_mainContainerChanged(cb C.intptr_t, mainContainer *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mainContainer *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(mainContainer))

	gofunc(slotval1)
}

func (this *QDesignerFormWindowInterface) ToolChanged(toolIndex int) {
	C.QDesignerFormWindowInterface_toolChanged(this.h, (C.int)(toolIndex))
}
func (this *QDesignerFormWindowInterface) OnToolChanged(slot func(toolIndex int)) {
	C.QDesignerFormWindowInterface_connect_toolChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerFormWindowInterface_toolChanged
func miqt_exec_callback_QDesignerFormWindowInterface_toolChanged(cb C.intptr_t, toolIndex C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(toolIndex int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(toolIndex)

	gofunc(slotval1)
}

func (this *QDesignerFormWindowInterface) FileNameChanged(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QDesignerFormWindowInterface_fileNameChanged(this.h, fileName_ms)
}
func (this *QDesignerFormWindowInterface) OnFileNameChanged(slot func(fileName string)) {
	C.QDesignerFormWindowInterface_connect_fileNameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerFormWindowInterface_fileNameChanged
func miqt_exec_callback_QDesignerFormWindowInterface_fileNameChanged(cb C.intptr_t, fileName C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(fileName string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var fileName_ms C.struct_miqt_string = fileName
	fileName_ret := C.GoStringN(fileName_ms.data, C.int(int64(fileName_ms.len)))
	C.free(unsafe.Pointer(fileName_ms.data))
	slotval1 := fileName_ret

	gofunc(slotval1)
}

func (this *QDesignerFormWindowInterface) FeatureChanged(f QDesignerFormWindowInterface__FeatureFlag) {
	C.QDesignerFormWindowInterface_featureChanged(this.h, (C.int)(f))
}
func (this *QDesignerFormWindowInterface) OnFeatureChanged(slot func(f QDesignerFormWindowInterface__FeatureFlag)) {
	C.QDesignerFormWindowInterface_connect_featureChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerFormWindowInterface_featureChanged
func miqt_exec_callback_QDesignerFormWindowInterface_featureChanged(cb C.intptr_t, f C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(f QDesignerFormWindowInterface__FeatureFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QDesignerFormWindowInterface__FeatureFlag)(f)

	gofunc(slotval1)
}

func (this *QDesignerFormWindowInterface) SelectionChanged() {
	C.QDesignerFormWindowInterface_selectionChanged(this.h)
}
func (this *QDesignerFormWindowInterface) OnSelectionChanged(slot func()) {
	C.QDesignerFormWindowInterface_connect_selectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerFormWindowInterface_selectionChanged
func miqt_exec_callback_QDesignerFormWindowInterface_selectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QDesignerFormWindowInterface) GeometryChanged() {
	C.QDesignerFormWindowInterface_geometryChanged(this.h)
}
func (this *QDesignerFormWindowInterface) OnGeometryChanged(slot func()) {
	C.QDesignerFormWindowInterface_connect_geometryChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerFormWindowInterface_geometryChanged
func miqt_exec_callback_QDesignerFormWindowInterface_geometryChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QDesignerFormWindowInterface) ResourceFilesChanged() {
	C.QDesignerFormWindowInterface_resourceFilesChanged(this.h)
}
func (this *QDesignerFormWindowInterface) OnResourceFilesChanged(slot func()) {
	C.QDesignerFormWindowInterface_connect_resourceFilesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerFormWindowInterface_resourceFilesChanged
func miqt_exec_callback_QDesignerFormWindowInterface_resourceFilesChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QDesignerFormWindowInterface) WidgetManaged(widget *qt6.QWidget) {
	C.QDesignerFormWindowInterface_widgetManaged(this.h, (*C.QWidget)(widget.UnsafePointer()))
}
func (this *QDesignerFormWindowInterface) OnWidgetManaged(slot func(widget *qt6.QWidget)) {
	C.QDesignerFormWindowInterface_connect_widgetManaged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerFormWindowInterface_widgetManaged
func miqt_exec_callback_QDesignerFormWindowInterface_widgetManaged(cb C.intptr_t, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(widget *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc(slotval1)
}

func (this *QDesignerFormWindowInterface) WidgetUnmanaged(widget *qt6.QWidget) {
	C.QDesignerFormWindowInterface_widgetUnmanaged(this.h, (*C.QWidget)(widget.UnsafePointer()))
}
func (this *QDesignerFormWindowInterface) OnWidgetUnmanaged(slot func(widget *qt6.QWidget)) {
	C.QDesignerFormWindowInterface_connect_widgetUnmanaged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerFormWindowInterface_widgetUnmanaged
func miqt_exec_callback_QDesignerFormWindowInterface_widgetUnmanaged(cb C.intptr_t, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(widget *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc(slotval1)
}

func (this *QDesignerFormWindowInterface) AboutToUnmanageWidget(widget *qt6.QWidget) {
	C.QDesignerFormWindowInterface_aboutToUnmanageWidget(this.h, (*C.QWidget)(widget.UnsafePointer()))
}
func (this *QDesignerFormWindowInterface) OnAboutToUnmanageWidget(slot func(widget *qt6.QWidget)) {
	C.QDesignerFormWindowInterface_connect_aboutToUnmanageWidget(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerFormWindowInterface_aboutToUnmanageWidget
func miqt_exec_callback_QDesignerFormWindowInterface_aboutToUnmanageWidget(cb C.intptr_t, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(widget *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc(slotval1)
}

func (this *QDesignerFormWindowInterface) Activated(widget *qt6.QWidget) {
	C.QDesignerFormWindowInterface_activated(this.h, (*C.QWidget)(widget.UnsafePointer()))
}
func (this *QDesignerFormWindowInterface) OnActivated(slot func(widget *qt6.QWidget)) {
	C.QDesignerFormWindowInterface_connect_activated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerFormWindowInterface_activated
func miqt_exec_callback_QDesignerFormWindowInterface_activated(cb C.intptr_t, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(widget *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc(slotval1)
}

func (this *QDesignerFormWindowInterface) Changed() {
	C.QDesignerFormWindowInterface_changed(this.h)
}
func (this *QDesignerFormWindowInterface) OnChanged(slot func()) {
	C.QDesignerFormWindowInterface_connect_changed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerFormWindowInterface_changed
func miqt_exec_callback_QDesignerFormWindowInterface_changed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QDesignerFormWindowInterface) WidgetRemoved(w *qt6.QWidget) {
	C.QDesignerFormWindowInterface_widgetRemoved(this.h, (*C.QWidget)(w.UnsafePointer()))
}
func (this *QDesignerFormWindowInterface) OnWidgetRemoved(slot func(w *qt6.QWidget)) {
	C.QDesignerFormWindowInterface_connect_widgetRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerFormWindowInterface_widgetRemoved
func miqt_exec_callback_QDesignerFormWindowInterface_widgetRemoved(cb C.intptr_t, w *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(w *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQWidget(unsafe.Pointer(w))

	gofunc(slotval1)
}

func (this *QDesignerFormWindowInterface) ObjectRemoved(o *qt6.QObject) {
	C.QDesignerFormWindowInterface_objectRemoved(this.h, (*C.QObject)(o.UnsafePointer()))
}
func (this *QDesignerFormWindowInterface) OnObjectRemoved(slot func(o *qt6.QObject)) {
	C.QDesignerFormWindowInterface_connect_objectRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesignerFormWindowInterface_objectRemoved
func miqt_exec_callback_QDesignerFormWindowInterface_objectRemoved(cb C.intptr_t, o *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(o *qt6.QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(o))

	gofunc(slotval1)
}

func QDesignerFormWindowInterface_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerFormWindowInterface_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDesignerFormWindowInterface_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDesignerFormWindowInterface_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDesignerFormWindowInterface) ActivateResourceFilePaths2(paths []string, errorCount *int) {
	paths_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(paths))))
	defer C.free(unsafe.Pointer(paths_CArray))
	for i := range paths {
		paths_i_ms := C.struct_miqt_string{}
		paths_i_ms.data = C.CString(paths[i])
		paths_i_ms.len = C.size_t(len(paths[i]))
		defer C.free(unsafe.Pointer(paths_i_ms.data))
		paths_CArray[i] = paths_i_ms
	}
	paths_ma := C.struct_miqt_array{len: C.size_t(len(paths)), data: unsafe.Pointer(paths_CArray)}
	C.QDesignerFormWindowInterface_activateResourceFilePaths2(this.h, paths_ma, (*C.int)(unsafe.Pointer(errorCount)))
}

// Delete this object from C++ memory.
func (this *QDesignerFormWindowInterface) Delete() {
	C.QDesignerFormWindowInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerFormWindowInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerFormWindowInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
