package multimedia

/*

#include "gen_qradiotuner.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QRadioTuner__State int

const (
	QRadioTuner__ActiveState  QRadioTuner__State = 0
	QRadioTuner__StoppedState QRadioTuner__State = 1
)

type QRadioTuner__Band int

const (
	QRadioTuner__AM  QRadioTuner__Band = 0
	QRadioTuner__FM  QRadioTuner__Band = 1
	QRadioTuner__SW  QRadioTuner__Band = 2
	QRadioTuner__LW  QRadioTuner__Band = 3
	QRadioTuner__FM2 QRadioTuner__Band = 4
)

type QRadioTuner__Error int

const (
	QRadioTuner__NoError         QRadioTuner__Error = 0
	QRadioTuner__ResourceError   QRadioTuner__Error = 1
	QRadioTuner__OpenError       QRadioTuner__Error = 2
	QRadioTuner__OutOfRangeError QRadioTuner__Error = 3
)

type QRadioTuner__StereoMode int

const (
	QRadioTuner__ForceStereo QRadioTuner__StereoMode = 0
	QRadioTuner__ForceMono   QRadioTuner__StereoMode = 1
	QRadioTuner__Auto        QRadioTuner__StereoMode = 2
)

type QRadioTuner__SearchMode int

const (
	QRadioTuner__SearchFast         QRadioTuner__SearchMode = 0
	QRadioTuner__SearchGetStationId QRadioTuner__SearchMode = 1
)

type QRadioTuner struct {
	h *C.QRadioTuner
	*QMediaObject
}

func (this *QRadioTuner) cPointer() *C.QRadioTuner {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRadioTuner) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQRadioTuner(h *C.QRadioTuner) *QRadioTuner {
	if h == nil {
		return nil
	}
	return &QRadioTuner{h: h, QMediaObject: UnsafeNewQMediaObject(unsafe.Pointer(h))}
}

func UnsafeNewQRadioTuner(h unsafe.Pointer) *QRadioTuner {
	return newQRadioTuner((*C.QRadioTuner)(h))
}

// NewQRadioTuner constructs a new QRadioTuner object.
func NewQRadioTuner() *QRadioTuner {
	ret := C.QRadioTuner_new()
	return newQRadioTuner(ret)
}

// NewQRadioTuner2 constructs a new QRadioTuner object.
func NewQRadioTuner2(parent *qt.QObject) *QRadioTuner {
	ret := C.QRadioTuner_new2((*C.QObject)(parent.UnsafePointer()))
	return newQRadioTuner(ret)
}

func (this *QRadioTuner) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QRadioTuner_MetaObject(this.h)))
}

func (this *QRadioTuner) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QRadioTuner_Metacast(this.h, param1_Cstring))
}

func QRadioTuner_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRadioTuner_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioTuner_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRadioTuner_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioTuner) Availability() QMultimedia__AvailabilityStatus {
	return (QMultimedia__AvailabilityStatus)(C.QRadioTuner_Availability(this.h))
}

func (this *QRadioTuner) State() QRadioTuner__State {
	return (QRadioTuner__State)(C.QRadioTuner_State(this.h))
}

func (this *QRadioTuner) Band() QRadioTuner__Band {
	return (QRadioTuner__Band)(C.QRadioTuner_Band(this.h))
}

func (this *QRadioTuner) IsBandSupported(b QRadioTuner__Band) bool {
	return (bool)(C.QRadioTuner_IsBandSupported(this.h, (C.int)(b)))
}

func (this *QRadioTuner) Frequency() int {
	return (int)(C.QRadioTuner_Frequency(this.h))
}

func (this *QRadioTuner) FrequencyStep(band QRadioTuner__Band) int {
	return (int)(C.QRadioTuner_FrequencyStep(this.h, (C.int)(band)))
}

func (this *QRadioTuner) FrequencyRange(band QRadioTuner__Band) struct {
	First  int
	Second int
} {
	var _mm C.struct_miqt_map = C.QRadioTuner_FrequencyRange(this.h, (C.int)(band))
	_First_CArray := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Second_CArray := (*[0xffff]C.int)(unsafe.Pointer(_mm.values))
	_entry_First := (int)(_First_CArray[0])

	_entry_Second := (int)(_Second_CArray[0])

	return struct {
		First  int
		Second int
	}{First: _entry_First, Second: _entry_Second}
}

func (this *QRadioTuner) IsStereo() bool {
	return (bool)(C.QRadioTuner_IsStereo(this.h))
}

func (this *QRadioTuner) SetStereoMode(mode QRadioTuner__StereoMode) {
	C.QRadioTuner_SetStereoMode(this.h, (C.int)(mode))
}

func (this *QRadioTuner) StereoMode() QRadioTuner__StereoMode {
	return (QRadioTuner__StereoMode)(C.QRadioTuner_StereoMode(this.h))
}

func (this *QRadioTuner) SignalStrength() int {
	return (int)(C.QRadioTuner_SignalStrength(this.h))
}

func (this *QRadioTuner) Volume() int {
	return (int)(C.QRadioTuner_Volume(this.h))
}

func (this *QRadioTuner) IsMuted() bool {
	return (bool)(C.QRadioTuner_IsMuted(this.h))
}

func (this *QRadioTuner) IsSearching() bool {
	return (bool)(C.QRadioTuner_IsSearching(this.h))
}

func (this *QRadioTuner) IsAntennaConnected() bool {
	return (bool)(C.QRadioTuner_IsAntennaConnected(this.h))
}

func (this *QRadioTuner) Error() QRadioTuner__Error {
	return (QRadioTuner__Error)(C.QRadioTuner_Error(this.h))
}

func (this *QRadioTuner) ErrorString() string {
	var _ms C.struct_miqt_string = C.QRadioTuner_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioTuner) RadioData() *QRadioData {
	return UnsafeNewQRadioData(unsafe.Pointer(C.QRadioTuner_RadioData(this.h)))
}

func (this *QRadioTuner) SearchForward() {
	C.QRadioTuner_SearchForward(this.h)
}

func (this *QRadioTuner) SearchBackward() {
	C.QRadioTuner_SearchBackward(this.h)
}

func (this *QRadioTuner) SearchAllStations() {
	C.QRadioTuner_SearchAllStations(this.h)
}

func (this *QRadioTuner) CancelSearch() {
	C.QRadioTuner_CancelSearch(this.h)
}

func (this *QRadioTuner) SetBand(band QRadioTuner__Band) {
	C.QRadioTuner_SetBand(this.h, (C.int)(band))
}

func (this *QRadioTuner) SetFrequency(frequency int) {
	C.QRadioTuner_SetFrequency(this.h, (C.int)(frequency))
}

func (this *QRadioTuner) SetVolume(volume int) {
	C.QRadioTuner_SetVolume(this.h, (C.int)(volume))
}

func (this *QRadioTuner) SetMuted(muted bool) {
	C.QRadioTuner_SetMuted(this.h, (C.bool)(muted))
}

func (this *QRadioTuner) Start() {
	C.QRadioTuner_Start(this.h)
}

func (this *QRadioTuner) Stop() {
	C.QRadioTuner_Stop(this.h)
}

func (this *QRadioTuner) StateChanged(state QRadioTuner__State) {
	C.QRadioTuner_StateChanged(this.h, (C.int)(state))
}
func (this *QRadioTuner) OnStateChanged(slot func(state QRadioTuner__State)) {
	C.QRadioTuner_connect_StateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_StateChanged
func miqt_exec_callback_QRadioTuner_StateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QRadioTuner__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QRadioTuner__State)(state)

	gofunc(slotval1)
}

func (this *QRadioTuner) BandChanged(band QRadioTuner__Band) {
	C.QRadioTuner_BandChanged(this.h, (C.int)(band))
}
func (this *QRadioTuner) OnBandChanged(slot func(band QRadioTuner__Band)) {
	C.QRadioTuner_connect_BandChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_BandChanged
func miqt_exec_callback_QRadioTuner_BandChanged(cb C.intptr_t, band C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(band QRadioTuner__Band))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QRadioTuner__Band)(band)

	gofunc(slotval1)
}

func (this *QRadioTuner) FrequencyChanged(frequency int) {
	C.QRadioTuner_FrequencyChanged(this.h, (C.int)(frequency))
}
func (this *QRadioTuner) OnFrequencyChanged(slot func(frequency int)) {
	C.QRadioTuner_connect_FrequencyChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_FrequencyChanged
func miqt_exec_callback_QRadioTuner_FrequencyChanged(cb C.intptr_t, frequency C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frequency int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(frequency)

	gofunc(slotval1)
}

func (this *QRadioTuner) StereoStatusChanged(stereo bool) {
	C.QRadioTuner_StereoStatusChanged(this.h, (C.bool)(stereo))
}
func (this *QRadioTuner) OnStereoStatusChanged(slot func(stereo bool)) {
	C.QRadioTuner_connect_StereoStatusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_StereoStatusChanged
func miqt_exec_callback_QRadioTuner_StereoStatusChanged(cb C.intptr_t, stereo C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(stereo bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(stereo)

	gofunc(slotval1)
}

func (this *QRadioTuner) SearchingChanged(searching bool) {
	C.QRadioTuner_SearchingChanged(this.h, (C.bool)(searching))
}
func (this *QRadioTuner) OnSearchingChanged(slot func(searching bool)) {
	C.QRadioTuner_connect_SearchingChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_SearchingChanged
func miqt_exec_callback_QRadioTuner_SearchingChanged(cb C.intptr_t, searching C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(searching bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(searching)

	gofunc(slotval1)
}

func (this *QRadioTuner) SignalStrengthChanged(signalStrength int) {
	C.QRadioTuner_SignalStrengthChanged(this.h, (C.int)(signalStrength))
}
func (this *QRadioTuner) OnSignalStrengthChanged(slot func(signalStrength int)) {
	C.QRadioTuner_connect_SignalStrengthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_SignalStrengthChanged
func miqt_exec_callback_QRadioTuner_SignalStrengthChanged(cb C.intptr_t, signalStrength C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(signalStrength int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(signalStrength)

	gofunc(slotval1)
}

func (this *QRadioTuner) VolumeChanged(volume int) {
	C.QRadioTuner_VolumeChanged(this.h, (C.int)(volume))
}
func (this *QRadioTuner) OnVolumeChanged(slot func(volume int)) {
	C.QRadioTuner_connect_VolumeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_VolumeChanged
func miqt_exec_callback_QRadioTuner_VolumeChanged(cb C.intptr_t, volume C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(volume int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(volume)

	gofunc(slotval1)
}

func (this *QRadioTuner) MutedChanged(muted bool) {
	C.QRadioTuner_MutedChanged(this.h, (C.bool)(muted))
}
func (this *QRadioTuner) OnMutedChanged(slot func(muted bool)) {
	C.QRadioTuner_connect_MutedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_MutedChanged
func miqt_exec_callback_QRadioTuner_MutedChanged(cb C.intptr_t, muted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(muted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(muted)

	gofunc(slotval1)
}

func (this *QRadioTuner) StationFound(frequency int, stationId string) {
	stationId_ms := C.struct_miqt_string{}
	stationId_ms.data = C.CString(stationId)
	stationId_ms.len = C.size_t(len(stationId))
	defer C.free(unsafe.Pointer(stationId_ms.data))
	C.QRadioTuner_StationFound(this.h, (C.int)(frequency), stationId_ms)
}
func (this *QRadioTuner) OnStationFound(slot func(frequency int, stationId string)) {
	C.QRadioTuner_connect_StationFound(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_StationFound
func miqt_exec_callback_QRadioTuner_StationFound(cb C.intptr_t, frequency C.int, stationId C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frequency int, stationId string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(frequency)

	var stationId_ms C.struct_miqt_string = stationId
	stationId_ret := C.GoStringN(stationId_ms.data, C.int(int64(stationId_ms.len)))
	C.free(unsafe.Pointer(stationId_ms.data))
	slotval2 := stationId_ret

	gofunc(slotval1, slotval2)
}

func (this *QRadioTuner) AntennaConnectedChanged(connectionStatus bool) {
	C.QRadioTuner_AntennaConnectedChanged(this.h, (C.bool)(connectionStatus))
}
func (this *QRadioTuner) OnAntennaConnectedChanged(slot func(connectionStatus bool)) {
	C.QRadioTuner_connect_AntennaConnectedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_AntennaConnectedChanged
func miqt_exec_callback_QRadioTuner_AntennaConnectedChanged(cb C.intptr_t, connectionStatus C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(connectionStatus bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(connectionStatus)

	gofunc(slotval1)
}

func (this *QRadioTuner) ErrorWithError(error QRadioTuner__Error) {
	C.QRadioTuner_ErrorWithError(this.h, (C.int)(error))
}
func (this *QRadioTuner) OnErrorWithError(slot func(error QRadioTuner__Error)) {
	C.QRadioTuner_connect_ErrorWithError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_ErrorWithError
func miqt_exec_callback_QRadioTuner_ErrorWithError(cb C.intptr_t, error C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error QRadioTuner__Error))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QRadioTuner__Error)(error)

	gofunc(slotval1)
}

func QRadioTuner_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioTuner_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioTuner_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioTuner_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioTuner_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioTuner_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioTuner_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioTuner_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioTuner) SearchAllStations1(searchMode QRadioTuner__SearchMode) {
	C.QRadioTuner_SearchAllStations1(this.h, (C.int)(searchMode))
}

// Delete this object from C++ memory.
func (this *QRadioTuner) Delete() {
	C.QRadioTuner_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRadioTuner) GoGC() {
	runtime.SetFinalizer(this, func(this *QRadioTuner) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
