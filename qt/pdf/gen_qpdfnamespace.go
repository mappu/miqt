package pdf

/*

#include "gen_qpdfnamespace.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"unsafe"
)

type QPdf__Rotation int

const (
	QPdf__Rotate0   QPdf__Rotation = 0
	QPdf__Rotate90  QPdf__Rotation = 1
	QPdf__Rotate180 QPdf__Rotation = 2
	QPdf__Rotate270 QPdf__Rotation = 3
)

type QPdf__RenderFlag int

const (
	QPdf__NoRenderFlags         QPdf__RenderFlag = 0
	QPdf__RenderAnnotations     QPdf__RenderFlag = 1
	QPdf__RenderOptimizedForLcd QPdf__RenderFlag = 2
	QPdf__RenderGrayscale       QPdf__RenderFlag = 4
	QPdf__RenderForceHalftone   QPdf__RenderFlag = 8
	QPdf__RenderTextAliased     QPdf__RenderFlag = 16
	QPdf__RenderImageAliased    QPdf__RenderFlag = 32
	QPdf__RenderPathAliased     QPdf__RenderFlag = 64
)

func QPdf_QtGetEnumMetaObjectWithQPdfRotation(param1 QPdf__Rotation) *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.miqt_QPdf_QtGetEnumMetaObjectWithQPdfRotation((C.int)(param1))))
}

func QPdf_QtGetEnumNameWithQPdfRotation(param1 QPdf__Rotation) string {
	_ret := C.miqt_QPdf_QtGetEnumNameWithQPdfRotation((C.int)(param1))
	return C.GoString(_ret)
}

func QPdf_QtGetEnumMetaObjectWithQPdfRenderFlag(param1 QPdf__RenderFlag) *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.miqt_QPdf_QtGetEnumMetaObjectWithQPdfRenderFlag((C.int)(param1))))
}

func QPdf_QtGetEnumNameWithQPdfRenderFlag(param1 QPdf__RenderFlag) string {
	_ret := C.miqt_QPdf_QtGetEnumNameWithQPdfRenderFlag((C.int)(param1))
	return C.GoString(_ret)
}
