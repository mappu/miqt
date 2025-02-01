package multimedia

/*

#include "gen_qradiodata.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QRadioData__Error int

const (
	QRadioData__NoError         QRadioData__Error = 0
	QRadioData__ResourceError   QRadioData__Error = 1
	QRadioData__OpenError       QRadioData__Error = 2
	QRadioData__OutOfRangeError QRadioData__Error = 3
)

type QRadioData__ProgramType int

const (
	QRadioData__Undefined           QRadioData__ProgramType = 0
	QRadioData__News                QRadioData__ProgramType = 1
	QRadioData__CurrentAffairs      QRadioData__ProgramType = 2
	QRadioData__Information         QRadioData__ProgramType = 3
	QRadioData__Sport               QRadioData__ProgramType = 4
	QRadioData__Education           QRadioData__ProgramType = 5
	QRadioData__Drama               QRadioData__ProgramType = 6
	QRadioData__Culture             QRadioData__ProgramType = 7
	QRadioData__Science             QRadioData__ProgramType = 8
	QRadioData__Varied              QRadioData__ProgramType = 9
	QRadioData__PopMusic            QRadioData__ProgramType = 10
	QRadioData__RockMusic           QRadioData__ProgramType = 11
	QRadioData__EasyListening       QRadioData__ProgramType = 12
	QRadioData__LightClassical      QRadioData__ProgramType = 13
	QRadioData__SeriousClassical    QRadioData__ProgramType = 14
	QRadioData__OtherMusic          QRadioData__ProgramType = 15
	QRadioData__Weather             QRadioData__ProgramType = 16
	QRadioData__Finance             QRadioData__ProgramType = 17
	QRadioData__ChildrensProgrammes QRadioData__ProgramType = 18
	QRadioData__SocialAffairs       QRadioData__ProgramType = 19
	QRadioData__Religion            QRadioData__ProgramType = 20
	QRadioData__PhoneIn             QRadioData__ProgramType = 21
	QRadioData__Travel              QRadioData__ProgramType = 22
	QRadioData__Leisure             QRadioData__ProgramType = 23
	QRadioData__JazzMusic           QRadioData__ProgramType = 24
	QRadioData__CountryMusic        QRadioData__ProgramType = 25
	QRadioData__NationalMusic       QRadioData__ProgramType = 26
	QRadioData__OldiesMusic         QRadioData__ProgramType = 27
	QRadioData__FolkMusic           QRadioData__ProgramType = 28
	QRadioData__Documentary         QRadioData__ProgramType = 29
	QRadioData__AlarmTest           QRadioData__ProgramType = 30
	QRadioData__Alarm               QRadioData__ProgramType = 31
	QRadioData__Talk                QRadioData__ProgramType = 32
	QRadioData__ClassicRock         QRadioData__ProgramType = 33
	QRadioData__AdultHits           QRadioData__ProgramType = 34
	QRadioData__SoftRock            QRadioData__ProgramType = 35
	QRadioData__Top40               QRadioData__ProgramType = 36
	QRadioData__Soft                QRadioData__ProgramType = 37
	QRadioData__Nostalgia           QRadioData__ProgramType = 38
	QRadioData__Classical           QRadioData__ProgramType = 39
	QRadioData__RhythmAndBlues      QRadioData__ProgramType = 40
	QRadioData__SoftRhythmAndBlues  QRadioData__ProgramType = 41
	QRadioData__Language            QRadioData__ProgramType = 42
	QRadioData__ReligiousMusic      QRadioData__ProgramType = 43
	QRadioData__ReligiousTalk       QRadioData__ProgramType = 44
	QRadioData__Personality         QRadioData__ProgramType = 45
	QRadioData__Public              QRadioData__ProgramType = 46
	QRadioData__College             QRadioData__ProgramType = 47
)

type QRadioData struct {
	h *C.QRadioData
	*qt.QObject
	*QMediaBindableInterface
}

func (this *QRadioData) cPointer() *C.QRadioData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRadioData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRadioData constructs the type using only CGO pointers.
func newQRadioData(h *C.QRadioData) *QRadioData {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	var outptr_QMediaBindableInterface *C.QMediaBindableInterface = nil
	C.QRadioData_virtbase(h, &outptr_QObject, &outptr_QMediaBindableInterface)

	return &QRadioData{h: h,
		QObject:                 qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject)),
		QMediaBindableInterface: newQMediaBindableInterface(outptr_QMediaBindableInterface)}
}

// UnsafeNewQRadioData constructs the type using only unsafe pointers.
func UnsafeNewQRadioData(h unsafe.Pointer) *QRadioData {
	return newQRadioData((*C.QRadioData)(h))
}

// NewQRadioData constructs a new QRadioData object.
func NewQRadioData(mediaObject *QMediaObject) *QRadioData {

	return newQRadioData(C.QRadioData_new(mediaObject.cPointer()))
}

// NewQRadioData2 constructs a new QRadioData object.
func NewQRadioData2(mediaObject *QMediaObject, parent *qt.QObject) *QRadioData {

	return newQRadioData(C.QRadioData_new2(mediaObject.cPointer(), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QRadioData) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QRadioData_metaObject(this.h)))
}

func (this *QRadioData) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QRadioData_metacast(this.h, param1_Cstring))
}

func QRadioData_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRadioData_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioData_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRadioData_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioData) Availability() QMultimedia__AvailabilityStatus {
	return (QMultimedia__AvailabilityStatus)(C.QRadioData_availability(this.h))
}

func (this *QRadioData) MediaObject() *QMediaObject {
	return newQMediaObject(C.QRadioData_mediaObject(this.h))
}

func (this *QRadioData) StationId() string {
	var _ms C.struct_miqt_string = C.QRadioData_stationId(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioData) ProgramType() QRadioData__ProgramType {
	return (QRadioData__ProgramType)(C.QRadioData_programType(this.h))
}

func (this *QRadioData) ProgramTypeName() string {
	var _ms C.struct_miqt_string = C.QRadioData_programTypeName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioData) StationName() string {
	var _ms C.struct_miqt_string = C.QRadioData_stationName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioData) RadioText() string {
	var _ms C.struct_miqt_string = C.QRadioData_radioText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioData) IsAlternativeFrequenciesEnabled() bool {
	return (bool)(C.QRadioData_isAlternativeFrequenciesEnabled(this.h))
}

func (this *QRadioData) Error() QRadioData__Error {
	return (QRadioData__Error)(C.QRadioData_error(this.h))
}

func (this *QRadioData) ErrorString() string {
	var _ms C.struct_miqt_string = C.QRadioData_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioData) SetAlternativeFrequenciesEnabled(enabled bool) {
	C.QRadioData_setAlternativeFrequenciesEnabled(this.h, (C.bool)(enabled))
}

func (this *QRadioData) StationIdChanged(stationId string) {
	stationId_ms := C.struct_miqt_string{}
	stationId_ms.data = C.CString(stationId)
	stationId_ms.len = C.size_t(len(stationId))
	defer C.free(unsafe.Pointer(stationId_ms.data))
	C.QRadioData_stationIdChanged(this.h, stationId_ms)
}
func (this *QRadioData) OnStationIdChanged(slot func(stationId string)) {
	C.QRadioData_connect_stationIdChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioData_stationIdChanged
func miqt_exec_callback_QRadioData_stationIdChanged(cb C.intptr_t, stationId C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(stationId string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var stationId_ms C.struct_miqt_string = stationId
	stationId_ret := C.GoStringN(stationId_ms.data, C.int(int64(stationId_ms.len)))
	C.free(unsafe.Pointer(stationId_ms.data))
	slotval1 := stationId_ret

	gofunc(slotval1)
}

func (this *QRadioData) ProgramTypeChanged(programType QRadioData__ProgramType) {
	C.QRadioData_programTypeChanged(this.h, (C.int)(programType))
}
func (this *QRadioData) OnProgramTypeChanged(slot func(programType QRadioData__ProgramType)) {
	C.QRadioData_connect_programTypeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioData_programTypeChanged
func miqt_exec_callback_QRadioData_programTypeChanged(cb C.intptr_t, programType C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(programType QRadioData__ProgramType))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QRadioData__ProgramType)(programType)

	gofunc(slotval1)
}

func (this *QRadioData) ProgramTypeNameChanged(programTypeName string) {
	programTypeName_ms := C.struct_miqt_string{}
	programTypeName_ms.data = C.CString(programTypeName)
	programTypeName_ms.len = C.size_t(len(programTypeName))
	defer C.free(unsafe.Pointer(programTypeName_ms.data))
	C.QRadioData_programTypeNameChanged(this.h, programTypeName_ms)
}
func (this *QRadioData) OnProgramTypeNameChanged(slot func(programTypeName string)) {
	C.QRadioData_connect_programTypeNameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioData_programTypeNameChanged
func miqt_exec_callback_QRadioData_programTypeNameChanged(cb C.intptr_t, programTypeName C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(programTypeName string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var programTypeName_ms C.struct_miqt_string = programTypeName
	programTypeName_ret := C.GoStringN(programTypeName_ms.data, C.int(int64(programTypeName_ms.len)))
	C.free(unsafe.Pointer(programTypeName_ms.data))
	slotval1 := programTypeName_ret

	gofunc(slotval1)
}

func (this *QRadioData) StationNameChanged(stationName string) {
	stationName_ms := C.struct_miqt_string{}
	stationName_ms.data = C.CString(stationName)
	stationName_ms.len = C.size_t(len(stationName))
	defer C.free(unsafe.Pointer(stationName_ms.data))
	C.QRadioData_stationNameChanged(this.h, stationName_ms)
}
func (this *QRadioData) OnStationNameChanged(slot func(stationName string)) {
	C.QRadioData_connect_stationNameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioData_stationNameChanged
func miqt_exec_callback_QRadioData_stationNameChanged(cb C.intptr_t, stationName C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(stationName string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var stationName_ms C.struct_miqt_string = stationName
	stationName_ret := C.GoStringN(stationName_ms.data, C.int(int64(stationName_ms.len)))
	C.free(unsafe.Pointer(stationName_ms.data))
	slotval1 := stationName_ret

	gofunc(slotval1)
}

func (this *QRadioData) RadioTextChanged(radioText string) {
	radioText_ms := C.struct_miqt_string{}
	radioText_ms.data = C.CString(radioText)
	radioText_ms.len = C.size_t(len(radioText))
	defer C.free(unsafe.Pointer(radioText_ms.data))
	C.QRadioData_radioTextChanged(this.h, radioText_ms)
}
func (this *QRadioData) OnRadioTextChanged(slot func(radioText string)) {
	C.QRadioData_connect_radioTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioData_radioTextChanged
func miqt_exec_callback_QRadioData_radioTextChanged(cb C.intptr_t, radioText C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(radioText string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var radioText_ms C.struct_miqt_string = radioText
	radioText_ret := C.GoStringN(radioText_ms.data, C.int(int64(radioText_ms.len)))
	C.free(unsafe.Pointer(radioText_ms.data))
	slotval1 := radioText_ret

	gofunc(slotval1)
}

func (this *QRadioData) AlternativeFrequenciesEnabledChanged(enabled bool) {
	C.QRadioData_alternativeFrequenciesEnabledChanged(this.h, (C.bool)(enabled))
}
func (this *QRadioData) OnAlternativeFrequenciesEnabledChanged(slot func(enabled bool)) {
	C.QRadioData_connect_alternativeFrequenciesEnabledChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioData_alternativeFrequenciesEnabledChanged
func miqt_exec_callback_QRadioData_alternativeFrequenciesEnabledChanged(cb C.intptr_t, enabled C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(enabled bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(enabled)

	gofunc(slotval1)
}

func (this *QRadioData) ErrorWithError(error QRadioData__Error) {
	C.QRadioData_errorWithError(this.h, (C.int)(error))
}
func (this *QRadioData) OnErrorWithError(slot func(error QRadioData__Error)) {
	C.QRadioData_connect_errorWithError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioData_errorWithError
func miqt_exec_callback_QRadioData_errorWithError(cb C.intptr_t, error C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error QRadioData__Error))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QRadioData__Error)(error)

	gofunc(slotval1)
}

func QRadioData_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioData_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioData_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioData_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioData_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioData_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioData_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioData_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioData) callVirtualBase_MediaObject() *QMediaObject {

	return newQMediaObject(C.QRadioData_virtualbase_mediaObject(unsafe.Pointer(this.h)))

}
func (this *QRadioData) OnMediaObject(slot func(super func() *QMediaObject) *QMediaObject) {
	ok := C.QRadioData_override_virtual_mediaObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioData_mediaObject
func miqt_exec_callback_QRadioData_mediaObject(self *C.QRadioData, cb C.intptr_t) *C.QMediaObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMediaObject) *QMediaObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRadioData{h: self}).callVirtualBase_MediaObject)

	return virtualReturn.cPointer()

}

func (this *QRadioData) callVirtualBase_SetMediaObject(mediaObject *QMediaObject) bool {

	return (bool)(C.QRadioData_virtualbase_setMediaObject(unsafe.Pointer(this.h), mediaObject.cPointer()))

}
func (this *QRadioData) OnSetMediaObject(slot func(super func(mediaObject *QMediaObject) bool, mediaObject *QMediaObject) bool) {
	ok := C.QRadioData_override_virtual_setMediaObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioData_setMediaObject
func miqt_exec_callback_QRadioData_setMediaObject(self *C.QRadioData, cb C.intptr_t, mediaObject *C.QMediaObject) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(mediaObject *QMediaObject) bool, mediaObject *QMediaObject) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMediaObject(mediaObject)

	virtualReturn := gofunc((&QRadioData{h: self}).callVirtualBase_SetMediaObject, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QRadioData) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QRadioData_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QRadioData) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QRadioData_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioData_event
func miqt_exec_callback_QRadioData_event(self *C.QRadioData, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QRadioData{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QRadioData) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QRadioData_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QRadioData) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QRadioData_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioData_eventFilter
func miqt_exec_callback_QRadioData_eventFilter(self *C.QRadioData, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QRadioData{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QRadioData) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QRadioData_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QRadioData) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QRadioData_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioData_timerEvent
func miqt_exec_callback_QRadioData_timerEvent(self *C.QRadioData, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QRadioData{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QRadioData) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QRadioData_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QRadioData) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QRadioData_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioData_childEvent
func miqt_exec_callback_QRadioData_childEvent(self *C.QRadioData, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QRadioData{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QRadioData) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QRadioData_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QRadioData) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QRadioData_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioData_customEvent
func miqt_exec_callback_QRadioData_customEvent(self *C.QRadioData, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QRadioData{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QRadioData) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QRadioData_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QRadioData) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QRadioData_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioData_connectNotify
func miqt_exec_callback_QRadioData_connectNotify(self *C.QRadioData, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QRadioData{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QRadioData) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QRadioData_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QRadioData) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QRadioData_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioData_disconnectNotify
func miqt_exec_callback_QRadioData_disconnectNotify(self *C.QRadioData, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QRadioData{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QRadioData) Delete() {
	C.QRadioData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRadioData) GoGC() {
	runtime.SetFinalizer(this, func(this *QRadioData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
