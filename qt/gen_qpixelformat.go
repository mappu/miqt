package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qpixelformat.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QPixelFormat struct {
	h *C.QPixelFormat
}

func (this *QPixelFormat) cPointer() *C.QPixelFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPixelFormat(h *C.QPixelFormat) *QPixelFormat {
	return &QPixelFormat{h: h}
}

func newQPixelFormat_U(h unsafe.Pointer) *QPixelFormat {
	return newQPixelFormat((*C.QPixelFormat)(h))
}

// NewQPixelFormat constructs a new QPixelFormat object.
func NewQPixelFormat() *QPixelFormat {
	ret := C.QPixelFormat_new()
	return newQPixelFormat(ret)
}

// NewQPixelFormat2 constructs a new QPixelFormat object.
func NewQPixelFormat2(param1 *QPixelFormat) *QPixelFormat {
	ret := C.QPixelFormat_new2(param1.cPointer())
	return newQPixelFormat(ret)
}

func (this *QPixelFormat) ChannelCount() byte {
	ret := C.QPixelFormat_ChannelCount(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) RedSize() byte {
	ret := C.QPixelFormat_RedSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) GreenSize() byte {
	ret := C.QPixelFormat_GreenSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) BlueSize() byte {
	ret := C.QPixelFormat_BlueSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) CyanSize() byte {
	ret := C.QPixelFormat_CyanSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) MagentaSize() byte {
	ret := C.QPixelFormat_MagentaSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) YellowSize() byte {
	ret := C.QPixelFormat_YellowSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) BlackSize() byte {
	ret := C.QPixelFormat_BlackSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) HueSize() byte {
	ret := C.QPixelFormat_HueSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) SaturationSize() byte {
	ret := C.QPixelFormat_SaturationSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) LightnessSize() byte {
	ret := C.QPixelFormat_LightnessSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) BrightnessSize() byte {
	ret := C.QPixelFormat_BrightnessSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) AlphaSize() byte {
	ret := C.QPixelFormat_AlphaSize(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) BitsPerPixel() byte {
	ret := C.QPixelFormat_BitsPerPixel(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) SubEnum() byte {
	ret := C.QPixelFormat_SubEnum(this.h)
	return (byte)(ret)
}

func (this *QPixelFormat) Delete() {
	C.QPixelFormat_Delete(this.h)
}
