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

// newQRadioTuner constructs the type using only CGO pointers.
func newQRadioTuner(h *C.QRadioTuner) *QRadioTuner {
	if h == nil {
		return nil
	}
	var outptr_QMediaObject *C.QMediaObject = nil
	C.QRadioTuner_virtbase(h, &outptr_QMediaObject)

	return &QRadioTuner{h: h,
		QMediaObject: newQMediaObject(outptr_QMediaObject)}
}

// UnsafeNewQRadioTuner constructs the type using only unsafe pointers.
func UnsafeNewQRadioTuner(h unsafe.Pointer) *QRadioTuner {
	return newQRadioTuner((*C.QRadioTuner)(h))
}

// NewQRadioTuner constructs a new QRadioTuner object.
func NewQRadioTuner() *QRadioTuner {

	return newQRadioTuner(C.QRadioTuner_new())
}

// NewQRadioTuner2 constructs a new QRadioTuner object.
func NewQRadioTuner2(parent *qt.QObject) *QRadioTuner {

	return newQRadioTuner(C.QRadioTuner_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QRadioTuner) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QRadioTuner_metaObject(this.h)))
}

func (this *QRadioTuner) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QRadioTuner_metacast(this.h, param1_Cstring))
}

func QRadioTuner_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRadioTuner_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioTuner_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRadioTuner_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioTuner) Availability() QMultimedia__AvailabilityStatus {
	return (QMultimedia__AvailabilityStatus)(C.QRadioTuner_availability(this.h))
}

func (this *QRadioTuner) State() QRadioTuner__State {
	return (QRadioTuner__State)(C.QRadioTuner_state(this.h))
}

func (this *QRadioTuner) Band() QRadioTuner__Band {
	return (QRadioTuner__Band)(C.QRadioTuner_band(this.h))
}

func (this *QRadioTuner) IsBandSupported(b QRadioTuner__Band) bool {
	return (bool)(C.QRadioTuner_isBandSupported(this.h, (C.int)(b)))
}

func (this *QRadioTuner) Frequency() int {
	return (int)(C.QRadioTuner_frequency(this.h))
}

func (this *QRadioTuner) FrequencyStep(band QRadioTuner__Band) int {
	return (int)(C.QRadioTuner_frequencyStep(this.h, (C.int)(band)))
}

func (this *QRadioTuner) FrequencyRange(band QRadioTuner__Band) struct {
	First  int
	Second int
} {
	var _mm C.struct_miqt_map = C.QRadioTuner_frequencyRange(this.h, (C.int)(band))
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
	return (bool)(C.QRadioTuner_isStereo(this.h))
}

func (this *QRadioTuner) SetStereoMode(mode QRadioTuner__StereoMode) {
	C.QRadioTuner_setStereoMode(this.h, (C.int)(mode))
}

func (this *QRadioTuner) StereoMode() QRadioTuner__StereoMode {
	return (QRadioTuner__StereoMode)(C.QRadioTuner_stereoMode(this.h))
}

func (this *QRadioTuner) SignalStrength() int {
	return (int)(C.QRadioTuner_signalStrength(this.h))
}

func (this *QRadioTuner) Volume() int {
	return (int)(C.QRadioTuner_volume(this.h))
}

func (this *QRadioTuner) IsMuted() bool {
	return (bool)(C.QRadioTuner_isMuted(this.h))
}

func (this *QRadioTuner) IsSearching() bool {
	return (bool)(C.QRadioTuner_isSearching(this.h))
}

func (this *QRadioTuner) IsAntennaConnected() bool {
	return (bool)(C.QRadioTuner_isAntennaConnected(this.h))
}

func (this *QRadioTuner) Error() QRadioTuner__Error {
	return (QRadioTuner__Error)(C.QRadioTuner_error(this.h))
}

func (this *QRadioTuner) ErrorString() string {
	var _ms C.struct_miqt_string = C.QRadioTuner_errorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioTuner) RadioData() *QRadioData {
	return newQRadioData(C.QRadioTuner_radioData(this.h))
}

func (this *QRadioTuner) SearchForward() {
	C.QRadioTuner_searchForward(this.h)
}

func (this *QRadioTuner) SearchBackward() {
	C.QRadioTuner_searchBackward(this.h)
}

func (this *QRadioTuner) SearchAllStations() {
	C.QRadioTuner_searchAllStations(this.h)
}

func (this *QRadioTuner) CancelSearch() {
	C.QRadioTuner_cancelSearch(this.h)
}

func (this *QRadioTuner) SetBand(band QRadioTuner__Band) {
	C.QRadioTuner_setBand(this.h, (C.int)(band))
}

func (this *QRadioTuner) SetFrequency(frequency int) {
	C.QRadioTuner_setFrequency(this.h, (C.int)(frequency))
}

func (this *QRadioTuner) SetVolume(volume int) {
	C.QRadioTuner_setVolume(this.h, (C.int)(volume))
}

func (this *QRadioTuner) SetMuted(muted bool) {
	C.QRadioTuner_setMuted(this.h, (C.bool)(muted))
}

func (this *QRadioTuner) Start() {
	C.QRadioTuner_start(this.h)
}

func (this *QRadioTuner) Stop() {
	C.QRadioTuner_stop(this.h)
}

func (this *QRadioTuner) StateChanged(state QRadioTuner__State) {
	C.QRadioTuner_stateChanged(this.h, (C.int)(state))
}
func (this *QRadioTuner) OnStateChanged(slot func(state QRadioTuner__State)) {
	C.QRadioTuner_connect_stateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_stateChanged
func miqt_exec_callback_QRadioTuner_stateChanged(cb C.intptr_t, state C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(state QRadioTuner__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QRadioTuner__State)(state)

	gofunc(slotval1)
}

func (this *QRadioTuner) BandChanged(band QRadioTuner__Band) {
	C.QRadioTuner_bandChanged(this.h, (C.int)(band))
}
func (this *QRadioTuner) OnBandChanged(slot func(band QRadioTuner__Band)) {
	C.QRadioTuner_connect_bandChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_bandChanged
func miqt_exec_callback_QRadioTuner_bandChanged(cb C.intptr_t, band C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(band QRadioTuner__Band))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QRadioTuner__Band)(band)

	gofunc(slotval1)
}

func (this *QRadioTuner) FrequencyChanged(frequency int) {
	C.QRadioTuner_frequencyChanged(this.h, (C.int)(frequency))
}
func (this *QRadioTuner) OnFrequencyChanged(slot func(frequency int)) {
	C.QRadioTuner_connect_frequencyChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_frequencyChanged
func miqt_exec_callback_QRadioTuner_frequencyChanged(cb C.intptr_t, frequency C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(frequency int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(frequency)

	gofunc(slotval1)
}

func (this *QRadioTuner) StereoStatusChanged(stereo bool) {
	C.QRadioTuner_stereoStatusChanged(this.h, (C.bool)(stereo))
}
func (this *QRadioTuner) OnStereoStatusChanged(slot func(stereo bool)) {
	C.QRadioTuner_connect_stereoStatusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_stereoStatusChanged
func miqt_exec_callback_QRadioTuner_stereoStatusChanged(cb C.intptr_t, stereo C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(stereo bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(stereo)

	gofunc(slotval1)
}

func (this *QRadioTuner) SearchingChanged(searching bool) {
	C.QRadioTuner_searchingChanged(this.h, (C.bool)(searching))
}
func (this *QRadioTuner) OnSearchingChanged(slot func(searching bool)) {
	C.QRadioTuner_connect_searchingChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_searchingChanged
func miqt_exec_callback_QRadioTuner_searchingChanged(cb C.intptr_t, searching C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(searching bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(searching)

	gofunc(slotval1)
}

func (this *QRadioTuner) SignalStrengthChanged(signalStrength int) {
	C.QRadioTuner_signalStrengthChanged(this.h, (C.int)(signalStrength))
}
func (this *QRadioTuner) OnSignalStrengthChanged(slot func(signalStrength int)) {
	C.QRadioTuner_connect_signalStrengthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_signalStrengthChanged
func miqt_exec_callback_QRadioTuner_signalStrengthChanged(cb C.intptr_t, signalStrength C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(signalStrength int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(signalStrength)

	gofunc(slotval1)
}

func (this *QRadioTuner) VolumeChanged(volume int) {
	C.QRadioTuner_volumeChanged(this.h, (C.int)(volume))
}
func (this *QRadioTuner) OnVolumeChanged(slot func(volume int)) {
	C.QRadioTuner_connect_volumeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_volumeChanged
func miqt_exec_callback_QRadioTuner_volumeChanged(cb C.intptr_t, volume C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(volume int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(volume)

	gofunc(slotval1)
}

func (this *QRadioTuner) MutedChanged(muted bool) {
	C.QRadioTuner_mutedChanged(this.h, (C.bool)(muted))
}
func (this *QRadioTuner) OnMutedChanged(slot func(muted bool)) {
	C.QRadioTuner_connect_mutedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_mutedChanged
func miqt_exec_callback_QRadioTuner_mutedChanged(cb C.intptr_t, muted C.bool) {
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
	C.QRadioTuner_stationFound(this.h, (C.int)(frequency), stationId_ms)
}
func (this *QRadioTuner) OnStationFound(slot func(frequency int, stationId string)) {
	C.QRadioTuner_connect_stationFound(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_stationFound
func miqt_exec_callback_QRadioTuner_stationFound(cb C.intptr_t, frequency C.int, stationId C.struct_miqt_string) {
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
	C.QRadioTuner_antennaConnectedChanged(this.h, (C.bool)(connectionStatus))
}
func (this *QRadioTuner) OnAntennaConnectedChanged(slot func(connectionStatus bool)) {
	C.QRadioTuner_connect_antennaConnectedChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_antennaConnectedChanged
func miqt_exec_callback_QRadioTuner_antennaConnectedChanged(cb C.intptr_t, connectionStatus C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(connectionStatus bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(connectionStatus)

	gofunc(slotval1)
}

func (this *QRadioTuner) ErrorWithError(error QRadioTuner__Error) {
	C.QRadioTuner_errorWithError(this.h, (C.int)(error))
}
func (this *QRadioTuner) OnErrorWithError(slot func(error QRadioTuner__Error)) {
	C.QRadioTuner_connect_errorWithError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioTuner_errorWithError
func miqt_exec_callback_QRadioTuner_errorWithError(cb C.intptr_t, error C.int) {
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
	var _ms C.struct_miqt_string = C.QRadioTuner_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioTuner_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioTuner_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioTuner_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioTuner_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioTuner_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioTuner_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioTuner) SearchAllStationsWithSearchMode(searchMode QRadioTuner__SearchMode) {
	C.QRadioTuner_searchAllStationsWithSearchMode(this.h, (C.int)(searchMode))
}

// AddPropertyWatch can only be called from a QRadioTuner that was directly constructed.
func (this *QRadioTuner) AddPropertyWatch(name []byte) {
	name_alias := C.struct_miqt_string{}
	if len(name) > 0 {
		name_alias.data = (*C.char)(unsafe.Pointer(&name[0]))
	} else {
		name_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	name_alias.len = C.size_t(len(name))

	var _dynamic_cast_ok C.bool = false
	C.QRadioTuner_protectedbase_addPropertyWatch(&_dynamic_cast_ok, unsafe.Pointer(this.h), name_alias)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemovePropertyWatch can only be called from a QRadioTuner that was directly constructed.
func (this *QRadioTuner) RemovePropertyWatch(name []byte) {
	name_alias := C.struct_miqt_string{}
	if len(name) > 0 {
		name_alias.data = (*C.char)(unsafe.Pointer(&name[0]))
	} else {
		name_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	name_alias.len = C.size_t(len(name))

	var _dynamic_cast_ok C.bool = false
	C.QRadioTuner_protectedbase_removePropertyWatch(&_dynamic_cast_ok, unsafe.Pointer(this.h), name_alias)

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QRadioTuner that was directly constructed.
func (this *QRadioTuner) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QRadioTuner_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QRadioTuner that was directly constructed.
func (this *QRadioTuner) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QRadioTuner_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QRadioTuner that was directly constructed.
func (this *QRadioTuner) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QRadioTuner_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QRadioTuner that was directly constructed.
func (this *QRadioTuner) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QRadioTuner_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QRadioTuner) callVirtualBase_Availability() QMultimedia__AvailabilityStatus {

	return (QMultimedia__AvailabilityStatus)(C.QRadioTuner_virtualbase_availability(unsafe.Pointer(this.h)))

}
func (this *QRadioTuner) OnAvailability(slot func(super func() QMultimedia__AvailabilityStatus) QMultimedia__AvailabilityStatus) {
	ok := C.QRadioTuner_override_virtual_availability(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioTuner_availability
func miqt_exec_callback_QRadioTuner_availability(self *C.QRadioTuner, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QMultimedia__AvailabilityStatus) QMultimedia__AvailabilityStatus)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRadioTuner{h: self}).callVirtualBase_Availability)

	return (C.int)(virtualReturn)

}

func (this *QRadioTuner) callVirtualBase_IsAvailable() bool {

	return (bool)(C.QRadioTuner_virtualbase_isAvailable(unsafe.Pointer(this.h)))

}
func (this *QRadioTuner) OnIsAvailable(slot func(super func() bool) bool) {
	ok := C.QRadioTuner_override_virtual_isAvailable(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioTuner_isAvailable
func miqt_exec_callback_QRadioTuner_isAvailable(self *C.QRadioTuner, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRadioTuner{h: self}).callVirtualBase_IsAvailable)

	return (C.bool)(virtualReturn)

}

func (this *QRadioTuner) callVirtualBase_Service() *QMediaService {

	return newQMediaService(C.QRadioTuner_virtualbase_service(unsafe.Pointer(this.h)))

}
func (this *QRadioTuner) OnService(slot func(super func() *QMediaService) *QMediaService) {
	ok := C.QRadioTuner_override_virtual_service(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioTuner_service
func miqt_exec_callback_QRadioTuner_service(self *C.QRadioTuner, cb C.intptr_t) *C.QMediaService {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMediaService) *QMediaService)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QRadioTuner{h: self}).callVirtualBase_Service)

	return virtualReturn.cPointer()

}

func (this *QRadioTuner) callVirtualBase_Bind(param1 *qt.QObject) bool {

	return (bool)(C.QRadioTuner_virtualbase_bind(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer())))

}
func (this *QRadioTuner) OnBind(slot func(super func(param1 *qt.QObject) bool, param1 *qt.QObject) bool) {
	ok := C.QRadioTuner_override_virtual_bind(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioTuner_bind
func miqt_exec_callback_QRadioTuner_bind(self *C.QRadioTuner, cb C.intptr_t, param1 *C.QObject) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject) bool, param1 *qt.QObject) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QRadioTuner{h: self}).callVirtualBase_Bind, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QRadioTuner) callVirtualBase_Unbind(param1 *qt.QObject) {

	C.QRadioTuner_virtualbase_unbind(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()))

}
func (this *QRadioTuner) OnUnbind(slot func(super func(param1 *qt.QObject), param1 *qt.QObject)) {
	ok := C.QRadioTuner_override_virtual_unbind(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioTuner_unbind
func miqt_exec_callback_QRadioTuner_unbind(self *C.QRadioTuner, cb C.intptr_t, param1 *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject), param1 *qt.QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	gofunc((&QRadioTuner{h: self}).callVirtualBase_Unbind, slotval1)

}

func (this *QRadioTuner) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QRadioTuner_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QRadioTuner) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QRadioTuner_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioTuner_event
func miqt_exec_callback_QRadioTuner_event(self *C.QRadioTuner, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QRadioTuner{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QRadioTuner) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QRadioTuner_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QRadioTuner) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QRadioTuner_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioTuner_eventFilter
func miqt_exec_callback_QRadioTuner_eventFilter(self *C.QRadioTuner, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QRadioTuner{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QRadioTuner) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QRadioTuner_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QRadioTuner) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QRadioTuner_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioTuner_timerEvent
func miqt_exec_callback_QRadioTuner_timerEvent(self *C.QRadioTuner, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QRadioTuner{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QRadioTuner) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QRadioTuner_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QRadioTuner) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QRadioTuner_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioTuner_childEvent
func miqt_exec_callback_QRadioTuner_childEvent(self *C.QRadioTuner, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QRadioTuner{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QRadioTuner) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QRadioTuner_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QRadioTuner) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QRadioTuner_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioTuner_customEvent
func miqt_exec_callback_QRadioTuner_customEvent(self *C.QRadioTuner, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QRadioTuner{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QRadioTuner) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QRadioTuner_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QRadioTuner) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QRadioTuner_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioTuner_connectNotify
func miqt_exec_callback_QRadioTuner_connectNotify(self *C.QRadioTuner, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QRadioTuner{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QRadioTuner) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QRadioTuner_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QRadioTuner) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QRadioTuner_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QRadioTuner_disconnectNotify
func miqt_exec_callback_QRadioTuner_disconnectNotify(self *C.QRadioTuner, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QRadioTuner{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QRadioTuner) Delete() {
	C.QRadioTuner_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRadioTuner) GoGC() {
	runtime.SetFinalizer(this, func(this *QRadioTuner) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
