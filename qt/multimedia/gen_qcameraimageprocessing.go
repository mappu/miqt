package multimedia

/*

#include "gen_qcameraimageprocessing.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"unsafe"
)

type QCameraImageProcessing__WhiteBalanceMode int

const (
	QCameraImageProcessing__WhiteBalanceAuto        QCameraImageProcessing__WhiteBalanceMode = 0
	QCameraImageProcessing__WhiteBalanceManual      QCameraImageProcessing__WhiteBalanceMode = 1
	QCameraImageProcessing__WhiteBalanceSunlight    QCameraImageProcessing__WhiteBalanceMode = 2
	QCameraImageProcessing__WhiteBalanceCloudy      QCameraImageProcessing__WhiteBalanceMode = 3
	QCameraImageProcessing__WhiteBalanceShade       QCameraImageProcessing__WhiteBalanceMode = 4
	QCameraImageProcessing__WhiteBalanceTungsten    QCameraImageProcessing__WhiteBalanceMode = 5
	QCameraImageProcessing__WhiteBalanceFluorescent QCameraImageProcessing__WhiteBalanceMode = 6
	QCameraImageProcessing__WhiteBalanceFlash       QCameraImageProcessing__WhiteBalanceMode = 7
	QCameraImageProcessing__WhiteBalanceSunset      QCameraImageProcessing__WhiteBalanceMode = 8
	QCameraImageProcessing__WhiteBalanceVendor      QCameraImageProcessing__WhiteBalanceMode = 1000
)

type QCameraImageProcessing__ColorFilter int

const (
	QCameraImageProcessing__ColorFilterNone       QCameraImageProcessing__ColorFilter = 0
	QCameraImageProcessing__ColorFilterGrayscale  QCameraImageProcessing__ColorFilter = 1
	QCameraImageProcessing__ColorFilterNegative   QCameraImageProcessing__ColorFilter = 2
	QCameraImageProcessing__ColorFilterSolarize   QCameraImageProcessing__ColorFilter = 3
	QCameraImageProcessing__ColorFilterSepia      QCameraImageProcessing__ColorFilter = 4
	QCameraImageProcessing__ColorFilterPosterize  QCameraImageProcessing__ColorFilter = 5
	QCameraImageProcessing__ColorFilterWhiteboard QCameraImageProcessing__ColorFilter = 6
	QCameraImageProcessing__ColorFilterBlackboard QCameraImageProcessing__ColorFilter = 7
	QCameraImageProcessing__ColorFilterAqua       QCameraImageProcessing__ColorFilter = 8
	QCameraImageProcessing__ColorFilterVendor     QCameraImageProcessing__ColorFilter = 1000
)

type QCameraImageProcessing struct {
	h *C.QCameraImageProcessing
	*qt.QObject
}

func (this *QCameraImageProcessing) cPointer() *C.QCameraImageProcessing {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraImageProcessing) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraImageProcessing constructs the type using only CGO pointers.
func newQCameraImageProcessing(h *C.QCameraImageProcessing) *QCameraImageProcessing {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QCameraImageProcessing_virtbase(h, &outptr_QObject)

	return &QCameraImageProcessing{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQCameraImageProcessing constructs the type using only unsafe pointers.
func UnsafeNewQCameraImageProcessing(h unsafe.Pointer) *QCameraImageProcessing {
	return newQCameraImageProcessing((*C.QCameraImageProcessing)(h))
}

func (this *QCameraImageProcessing) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraImageProcessing_metaObject(this.h)))
}

func (this *QCameraImageProcessing) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraImageProcessing_metacast(this.h, param1_Cstring))
}

func QCameraImageProcessing_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageProcessing_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageProcessing_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageProcessing_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraImageProcessing) IsAvailable() bool {
	return (bool)(C.QCameraImageProcessing_isAvailable(this.h))
}

func (this *QCameraImageProcessing) WhiteBalanceMode() QCameraImageProcessing__WhiteBalanceMode {
	return (QCameraImageProcessing__WhiteBalanceMode)(C.QCameraImageProcessing_whiteBalanceMode(this.h))
}

func (this *QCameraImageProcessing) SetWhiteBalanceMode(mode QCameraImageProcessing__WhiteBalanceMode) {
	C.QCameraImageProcessing_setWhiteBalanceMode(this.h, (C.int)(mode))
}

func (this *QCameraImageProcessing) IsWhiteBalanceModeSupported(mode QCameraImageProcessing__WhiteBalanceMode) bool {
	return (bool)(C.QCameraImageProcessing_isWhiteBalanceModeSupported(this.h, (C.int)(mode)))
}

func (this *QCameraImageProcessing) ManualWhiteBalance() float64 {
	return (float64)(C.QCameraImageProcessing_manualWhiteBalance(this.h))
}

func (this *QCameraImageProcessing) SetManualWhiteBalance(colorTemperature float64) {
	C.QCameraImageProcessing_setManualWhiteBalance(this.h, (C.double)(colorTemperature))
}

func (this *QCameraImageProcessing) Brightness() float64 {
	return (float64)(C.QCameraImageProcessing_brightness(this.h))
}

func (this *QCameraImageProcessing) SetBrightness(value float64) {
	C.QCameraImageProcessing_setBrightness(this.h, (C.double)(value))
}

func (this *QCameraImageProcessing) Contrast() float64 {
	return (float64)(C.QCameraImageProcessing_contrast(this.h))
}

func (this *QCameraImageProcessing) SetContrast(value float64) {
	C.QCameraImageProcessing_setContrast(this.h, (C.double)(value))
}

func (this *QCameraImageProcessing) Saturation() float64 {
	return (float64)(C.QCameraImageProcessing_saturation(this.h))
}

func (this *QCameraImageProcessing) SetSaturation(value float64) {
	C.QCameraImageProcessing_setSaturation(this.h, (C.double)(value))
}

func (this *QCameraImageProcessing) SharpeningLevel() float64 {
	return (float64)(C.QCameraImageProcessing_sharpeningLevel(this.h))
}

func (this *QCameraImageProcessing) SetSharpeningLevel(value float64) {
	C.QCameraImageProcessing_setSharpeningLevel(this.h, (C.double)(value))
}

func (this *QCameraImageProcessing) DenoisingLevel() float64 {
	return (float64)(C.QCameraImageProcessing_denoisingLevel(this.h))
}

func (this *QCameraImageProcessing) SetDenoisingLevel(value float64) {
	C.QCameraImageProcessing_setDenoisingLevel(this.h, (C.double)(value))
}

func (this *QCameraImageProcessing) ColorFilter() QCameraImageProcessing__ColorFilter {
	return (QCameraImageProcessing__ColorFilter)(C.QCameraImageProcessing_colorFilter(this.h))
}

func (this *QCameraImageProcessing) SetColorFilter(filter QCameraImageProcessing__ColorFilter) {
	C.QCameraImageProcessing_setColorFilter(this.h, (C.int)(filter))
}

func (this *QCameraImageProcessing) IsColorFilterSupported(filter QCameraImageProcessing__ColorFilter) bool {
	return (bool)(C.QCameraImageProcessing_isColorFilterSupported(this.h, (C.int)(filter)))
}

func QCameraImageProcessing_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageProcessing_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageProcessing_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageProcessing_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageProcessing_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageProcessing_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageProcessing_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageProcessing_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
