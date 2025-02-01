package multimedia

/*

#include "gen_qradiotunercontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QRadioTunerControl struct {
	h *C.QRadioTunerControl
	*QMediaControl
}

func (this *QRadioTunerControl) cPointer() *C.QRadioTunerControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRadioTunerControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQRadioTunerControl constructs the type using only CGO pointers.
func newQRadioTunerControl(h *C.QRadioTunerControl) *QRadioTunerControl {
	if h == nil {
		return nil
	}
	var outptr_QMediaControl *C.QMediaControl = nil
	C.QRadioTunerControl_virtbase(h, &outptr_QMediaControl)

	return &QRadioTunerControl{h: h,
		QMediaControl: newQMediaControl(outptr_QMediaControl)}
}

// UnsafeNewQRadioTunerControl constructs the type using only unsafe pointers.
func UnsafeNewQRadioTunerControl(h unsafe.Pointer) *QRadioTunerControl {
	return newQRadioTunerControl((*C.QRadioTunerControl)(h))
}

func (this *QRadioTunerControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QRadioTunerControl_metaObject(this.h)))
}

func (this *QRadioTunerControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QRadioTunerControl_metacast(this.h, param1_Cstring))
}

func QRadioTunerControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRadioTunerControl_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioTunerControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRadioTunerControl_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioTunerControl) State() QRadioTuner__State {
	return (QRadioTuner__State)(C.QRadioTunerControl_state(this.h))
}

func (this *QRadioTunerControl) Band() QRadioTuner__Band {
	return (QRadioTuner__Band)(C.QRadioTunerControl_band(this.h))
}

func (this *QRadioTunerControl) SetBand(b QRadioTuner__Band) {
	C.QRadioTunerControl_setBand(this.h, (C.int)(b))
}

func (this *QRadioTunerControl) IsBandSupported(b QRadioTuner__Band) bool {
	return (bool)(C.QRadioTunerControl_isBandSupported(this.h, (C.int)(b)))
}

func (this *QRadioTunerControl) Frequency() int {
	return (int)(C.QRadioTunerControl_frequency(this.h))
}

func (this *QRadioTunerControl) FrequencyStep(b QRadioTuner__Band) int {
	return (int)(C.QRadioTunerControl_frequencyStep(this.h, (C.int)(b)))
}

func (this *QRadioTunerControl) FrequencyRange(b QRadioTuner__Band) struct {
	First  int
	Second int
} {
	var _mm C.struct_miqt_map = C.QRadioTunerControl_frequencyRange(this.h, (C.int)(b))
	_First_CArray := (*[0xffff]C.int)(unsafe.Pointer(_mm.keys))
	_Second_CArray := (*[0xffff]C.int)(unsafe.Pointer(_mm.values))
	_entry_First := (int)(_First_CArray[0])

	_entry_Second := (int)(_Second_CArray[0])

	return struct {
		First  int
		Second int
	}{First: _entry_First, Second: _entry_Second}
}

func (this *QRadioTunerControl) SetFrequency(frequency int) {
	C.QRadioTunerControl_setFrequency(this.h, (C.int)(frequency))
}

func (this *QRadioTunerControl) IsStereo() bool {
	return (bool)(C.QRadioTunerControl_isStereo(this.h))
}

func (this *QRadioTunerControl) StereoMode() QRadioTuner__StereoMode {
	return (QRadioTuner__StereoMode)(C.QRadioTunerControl_stereoMode(this.h))
}

func (this *QRadioTunerControl) SetStereoMode(mode QRadioTuner__StereoMode) {
	C.QRadioTunerControl_setStereoMode(this.h, (C.int)(mode))
}

func (this *QRadioTunerControl) SignalStrength() int {
	return (int)(C.QRadioTunerControl_signalStrength(this.h))
}

func (this *QRadioTunerControl) Volume() int {
	return (int)(C.QRadioTunerControl_volume(this.h))
}

func (this *QRadioTunerControl) SetVolume(volume int) {
	C.QRadioTunerControl_setVolume(this.h, (C.int)(volume))
}

func (this *QRadioTunerControl) IsMuted() bool {
	return (bool)(C.QRadioTunerControl_isMuted(this.h))
}

func (this *QRadioTunerControl) SetMuted(muted bool) {
	C.QRadioTunerControl_setMuted(this.h, (C.bool)(muted))
}

func (this *QRadioTunerControl) IsSearching() bool {
	return (bool)(C.QRadioTunerControl_isSearching(this.h))
}

func (this *QRadioTunerControl) IsAntennaConnected() bool {
	return (bool)(C.QRadioTunerControl_isAntennaConnected(this.h))
}

func (this *QRadioTunerControl) SearchForward() {
	C.QRadioTunerControl_searchForward(this.h)
}

func (this *QRadioTunerControl) SearchBackward() {
	C.QRadioTunerControl_searchBackward(this.h)
}

func (this *QRadioTunerControl) SearchAllStations(searchMode QRadioTuner__SearchMode) {
	C.QRadioTunerControl_searchAllStations(this.h, (C.int)(searchMode))
}

func (this *QRadioTunerControl) CancelSearch() {
	C.QRadioTunerControl_cancelSearch(this.h)
}

func (this *QRadioTunerControl) Start() {
	C.QRadioTunerControl_start(this.h)
}

func (this *QRadioTunerControl) Stop() {
	C.QRadioTunerControl_stop(this.h)
}

func (this *QRadioTunerControl) Error() QRadioTuner__Error {
	return (QRadioTuner__Error)(C.QRadioTunerControl_error(this.h))
}

func (this *QRadioTunerControl) ErrorString() string {
	var _ms C.struct_miqt_string = C.QRadioTunerControl_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioTunerControl) StateChanged(state QRadioTuner__State) {
	C.QRadioTunerControl_stateChanged(this.h, (C.int)(state))
}
func (this *QRadioTunerControl) OnStateChanged(slot func(state QRadioTuner__State)) {
	C.QRadioTunerControl_connect_stateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTunerControl_stateChanged
func miqt_exec_callback_QRadioTunerControl_stateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QRadioTuner__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QRadioTuner__State)(state)

	gofunc(slotval1)
}

func (this *QRadioTunerControl) BandChanged(band QRadioTuner__Band) {
	C.QRadioTunerControl_bandChanged(this.h, (C.int)(band))
}
func (this *QRadioTunerControl) OnBandChanged(slot func(band QRadioTuner__Band)) {
	C.QRadioTunerControl_connect_bandChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTunerControl_bandChanged
func miqt_exec_callback_QRadioTunerControl_bandChanged(cb C.intptr_t, band C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(band QRadioTuner__Band))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QRadioTuner__Band)(band)

	gofunc(slotval1)
}

func (this *QRadioTunerControl) FrequencyChanged(frequency int) {
	C.QRadioTunerControl_frequencyChanged(this.h, (C.int)(frequency))
}
func (this *QRadioTunerControl) OnFrequencyChanged(slot func(frequency int)) {
	C.QRadioTunerControl_connect_frequencyChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTunerControl_frequencyChanged
func miqt_exec_callback_QRadioTunerControl_frequencyChanged(cb C.intptr_t, frequency C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frequency int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(frequency)

	gofunc(slotval1)
}

func (this *QRadioTunerControl) StereoStatusChanged(stereo bool) {
	C.QRadioTunerControl_stereoStatusChanged(this.h, (C.bool)(stereo))
}
func (this *QRadioTunerControl) OnStereoStatusChanged(slot func(stereo bool)) {
	C.QRadioTunerControl_connect_stereoStatusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTunerControl_stereoStatusChanged
func miqt_exec_callback_QRadioTunerControl_stereoStatusChanged(cb C.intptr_t, stereo C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(stereo bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(stereo)

	gofunc(slotval1)
}

func (this *QRadioTunerControl) SearchingChanged(searching bool) {
	C.QRadioTunerControl_searchingChanged(this.h, (C.bool)(searching))
}
func (this *QRadioTunerControl) OnSearchingChanged(slot func(searching bool)) {
	C.QRadioTunerControl_connect_searchingChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTunerControl_searchingChanged
func miqt_exec_callback_QRadioTunerControl_searchingChanged(cb C.intptr_t, searching C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(searching bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(searching)

	gofunc(slotval1)
}

func (this *QRadioTunerControl) SignalStrengthChanged(signalStrength int) {
	C.QRadioTunerControl_signalStrengthChanged(this.h, (C.int)(signalStrength))
}
func (this *QRadioTunerControl) OnSignalStrengthChanged(slot func(signalStrength int)) {
	C.QRadioTunerControl_connect_signalStrengthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTunerControl_signalStrengthChanged
func miqt_exec_callback_QRadioTunerControl_signalStrengthChanged(cb C.intptr_t, signalStrength C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(signalStrength int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(signalStrength)

	gofunc(slotval1)
}

func (this *QRadioTunerControl) VolumeChanged(volume int) {
	C.QRadioTunerControl_volumeChanged(this.h, (C.int)(volume))
}
func (this *QRadioTunerControl) OnVolumeChanged(slot func(volume int)) {
	C.QRadioTunerControl_connect_volumeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTunerControl_volumeChanged
func miqt_exec_callback_QRadioTunerControl_volumeChanged(cb C.intptr_t, volume C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(volume int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(volume)

	gofunc(slotval1)
}

func (this *QRadioTunerControl) MutedChanged(muted bool) {
	C.QRadioTunerControl_mutedChanged(this.h, (C.bool)(muted))
}
func (this *QRadioTunerControl) OnMutedChanged(slot func(muted bool)) {
	C.QRadioTunerControl_connect_mutedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTunerControl_mutedChanged
func miqt_exec_callback_QRadioTunerControl_mutedChanged(cb C.intptr_t, muted C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(muted bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(muted)

	gofunc(slotval1)
}

func (this *QRadioTunerControl) ErrorWithErr(err QRadioTuner__Error) {
	C.QRadioTunerControl_errorWithErr(this.h, (C.int)(err))
}
func (this *QRadioTunerControl) OnErrorWithErr(slot func(err QRadioTuner__Error)) {
	C.QRadioTunerControl_connect_errorWithErr(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTunerControl_errorWithErr
func miqt_exec_callback_QRadioTunerControl_errorWithErr(cb C.intptr_t, err C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(err QRadioTuner__Error))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QRadioTuner__Error)(err)

	gofunc(slotval1)
}

func (this *QRadioTunerControl) StationFound(frequency int, stationId string) {
	stationId_ms := C.struct_miqt_string{}
	stationId_ms.data = C.CString(stationId)
	stationId_ms.len = C.size_t(len(stationId))
	defer C.free(unsafe.Pointer(stationId_ms.data))
	C.QRadioTunerControl_stationFound(this.h, (C.int)(frequency), stationId_ms)
}
func (this *QRadioTunerControl) OnStationFound(slot func(frequency int, stationId string)) {
	C.QRadioTunerControl_connect_stationFound(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTunerControl_stationFound
func miqt_exec_callback_QRadioTunerControl_stationFound(cb C.intptr_t, frequency C.int, stationId C.struct_miqt_string) {
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

func (this *QRadioTunerControl) AntennaConnectedChanged(connectionStatus bool) {
	C.QRadioTunerControl_antennaConnectedChanged(this.h, (C.bool)(connectionStatus))
}
func (this *QRadioTunerControl) OnAntennaConnectedChanged(slot func(connectionStatus bool)) {
	C.QRadioTunerControl_connect_antennaConnectedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTunerControl_antennaConnectedChanged
func miqt_exec_callback_QRadioTunerControl_antennaConnectedChanged(cb C.intptr_t, connectionStatus C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(connectionStatus bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(connectionStatus)

	gofunc(slotval1)
}

func QRadioTunerControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioTunerControl_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioTunerControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioTunerControl_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioTunerControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioTunerControl_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioTunerControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioTunerControl_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QRadioTunerControl) Delete() {
	C.QRadioTunerControl_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRadioTunerControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QRadioTunerControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
