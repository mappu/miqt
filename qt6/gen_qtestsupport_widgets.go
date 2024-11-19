package qt6

/*

#include "gen_qtestsupport_widgets.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

		type QTest__QTouchEventWidgetSequence struct {
			h *C.QTest__QTouchEventWidgetSequence
			isSubclass bool
		*QTest__QTouchEventSequence

		}
		
		func (this *QTest__QTouchEventWidgetSequence) cPointer() *C.QTest__QTouchEventWidgetSequence {
			if this == nil {
				return nil
			}
			return this.h
		}
		
		func (this *QTest__QTouchEventWidgetSequence) UnsafePointer() unsafe.Pointer {
			if this == nil {
				return nil
			}
			return unsafe.Pointer(this.h)
		}
		
		
			// newQTest__QTouchEventWidgetSequence constructs the type using only CGO pointers.
			func newQTest__QTouchEventWidgetSequence(h *C.QTest__QTouchEventWidgetSequence, h_QTest__QTouchEventSequence *C.QTest__QTouchEventSequence) *QTest__QTouchEventWidgetSequence {
				if h == nil {
					return nil
				}
				return &QTest__QTouchEventWidgetSequence{h: h,
QTest__QTouchEventSequence: newQTest__QTouchEventSequence(h_QTest__QTouchEventSequence)}
			}
			
			// UnsafeNewQTest__QTouchEventWidgetSequence constructs the type using only unsafe pointers.
			func UnsafeNewQTest__QTouchEventWidgetSequence(h unsafe.Pointer, h_QTest__QTouchEventSequence unsafe.Pointer) *QTest__QTouchEventWidgetSequence {				
				if h == nil {
					return nil
				}
				
				return &QTest__QTouchEventWidgetSequence{h: (*C.QTest__QTouchEventWidgetSequence)(h),
QTest__QTouchEventSequence: UnsafeNewQTest__QTouchEventSequence(h_QTest__QTouchEventSequence)}
			}
			
		
			// NewQTest__QTouchEventWidgetSequence constructs a new QTest::QTouchEventWidgetSequence object.
			func NewQTest__QTouchEventWidgetSequence(param1 *QTest__QTouchEventWidgetSequence) *QTest__QTouchEventWidgetSequence {
				var outptr_QTest__QTouchEventWidgetSequence *C.QTest__QTouchEventWidgetSequence = nil
var outptr_QTest__QTouchEventSequence *C.QTest::QTouchEventSequence = nil

				C.QTest__QTouchEventWidgetSequence_new(param1.cPointer(), &outptr_QTest__QTouchEventWidgetSequence, &outptr_QTest__QTouchEventSequence)
				ret := newQTest__QTouchEventWidgetSequence(outptr_QTest__QTouchEventWidgetSequence, outptr_QTest__QTouchEventSequence)
				ret.isSubclass = true
				return ret
			}
			
			
			func (this *QTest__QTouchEventWidgetSequence) Press(touchId int, pt *QPoint) *QTest__QTouchEventWidgetSequence {
				return  UnsafeNewQTest__QTouchEventWidgetSequence(unsafe.Pointer(C.QTest__QTouchEventWidgetSequence_Press(this.h, (C.int)(touchId), pt.cPointer())), nil)}
			
			func (this *QTest__QTouchEventWidgetSequence) Move(touchId int, pt *QPoint) *QTest__QTouchEventWidgetSequence {
				return  UnsafeNewQTest__QTouchEventWidgetSequence(unsafe.Pointer(C.QTest__QTouchEventWidgetSequence_Move(this.h, (C.int)(touchId), pt.cPointer())), nil)}
			
			func (this *QTest__QTouchEventWidgetSequence) Release(touchId int, pt *QPoint) *QTest__QTouchEventWidgetSequence {
				return  UnsafeNewQTest__QTouchEventWidgetSequence(unsafe.Pointer(C.QTest__QTouchEventWidgetSequence_Release(this.h, (C.int)(touchId), pt.cPointer())), nil)}
			
			func (this *QTest__QTouchEventWidgetSequence) Stationary(touchId int) *QTest__QTouchEventWidgetSequence {
				return  UnsafeNewQTest__QTouchEventWidgetSequence(unsafe.Pointer(C.QTest__QTouchEventWidgetSequence_Stationary(this.h, (C.int)(touchId))), nil)}
			
			func (this *QTest__QTouchEventWidgetSequence) Commit(processEvents bool) bool {
				return (bool)(C.QTest__QTouchEventWidgetSequence_Commit(this.h, (C.bool)(processEvents)))
}
			
			func (this *QTest__QTouchEventWidgetSequence) Press3(touchId int, pt *QPoint, widget *QWidget) *QTest__QTouchEventWidgetSequence {
				return  UnsafeNewQTest__QTouchEventWidgetSequence(unsafe.Pointer(C.QTest__QTouchEventWidgetSequence_Press3(this.h, (C.int)(touchId), pt.cPointer(), widget.cPointer())), nil)}
			
			func (this *QTest__QTouchEventWidgetSequence) Move3(touchId int, pt *QPoint, widget *QWidget) *QTest__QTouchEventWidgetSequence {
				return  UnsafeNewQTest__QTouchEventWidgetSequence(unsafe.Pointer(C.QTest__QTouchEventWidgetSequence_Move3(this.h, (C.int)(touchId), pt.cPointer(), widget.cPointer())), nil)}
			
			func (this *QTest__QTouchEventWidgetSequence) Release3(touchId int, pt *QPoint, widget *QWidget) *QTest__QTouchEventWidgetSequence {
				return  UnsafeNewQTest__QTouchEventWidgetSequence(unsafe.Pointer(C.QTest__QTouchEventWidgetSequence_Release3(this.h, (C.int)(touchId), pt.cPointer(), widget.cPointer())), nil)}
			
				func (this *QTest__QTouchEventWidgetSequence) callVirtualBase_Stationary(touchId int) *QTest__QTouchEventWidgetSequence {
					
					return  UnsafeNewQTest__QTouchEventWidgetSequence(unsafe.Pointer(C.QTest__QTouchEventWidgetSequence_virtualbase_Stationary(unsafe.Pointer(this.h), (C.int)(touchId))), nil)
				}
			func (this *QTest__QTouchEventWidgetSequence) OnStationary(slot func(super func(touchId int) *QTest__QTouchEventWidgetSequence, touchId int) *QTest__QTouchEventWidgetSequence) {
					C.QTest__QTouchEventWidgetSequence_override_virtual_Stationary(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)) )
				}
				
				//export miqt_exec_callback_QTest__QTouchEventWidgetSequence_Stationary
				func miqt_exec_callback_QTest__QTouchEventWidgetSequence_Stationary(self *C.QTest__QTouchEventWidgetSequence, cb C.intptr_t, touchId C.int) *C.QTest__QTouchEventWidgetSequence{
					gofunc, ok := cgo.Handle(cb).Value().(func(super func(touchId int) *QTest__QTouchEventWidgetSequence, touchId int) *QTest__QTouchEventWidgetSequence)
					if !ok {
						panic("miqt: callback of non-callback type (heap corruption?)")
					}
				
			// Convert all CABI parameters to Go parameters
slotval1 := (int)(touchId)


virtualReturn := gofunc((&QTest__QTouchEventWidgetSequence{h: self}).callVirtualBase_Stationary, slotval1 )

return virtualReturn.cPointer()

				}
			
				func (this *QTest__QTouchEventWidgetSequence) callVirtualBase_Commit(processEvents bool) bool {
					
					return (bool)(C.QTest__QTouchEventWidgetSequence_virtualbase_Commit(unsafe.Pointer(this.h), (C.bool)(processEvents)))

				}
			func (this *QTest__QTouchEventWidgetSequence) OnCommit(slot func(super func(processEvents bool) bool, processEvents bool) bool) {
					C.QTest__QTouchEventWidgetSequence_override_virtual_Commit(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)) )
				}
				
				//export miqt_exec_callback_QTest__QTouchEventWidgetSequence_Commit
				func miqt_exec_callback_QTest__QTouchEventWidgetSequence_Commit(self *C.QTest__QTouchEventWidgetSequence, cb C.intptr_t, processEvents C.bool) C.bool{
					gofunc, ok := cgo.Handle(cb).Value().(func(super func(processEvents bool) bool, processEvents bool) bool)
					if !ok {
						panic("miqt: callback of non-callback type (heap corruption?)")
					}
				
			// Convert all CABI parameters to Go parameters
slotval1 := (bool)(processEvents)


virtualReturn := gofunc((&QTest__QTouchEventWidgetSequence{h: self}).callVirtualBase_Commit, slotval1 )

return (C.bool)(virtualReturn)

				}
			
			// Delete this object from C++ memory.
			func (this *QTest__QTouchEventWidgetSequence) Delete() {
				C.QTest__QTouchEventWidgetSequence_Delete(this.h, C.bool(this.isSubclass))
			}
				
			// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
			// from C++ memory once it is unreachable from Go memory.
			func (this *QTest__QTouchEventWidgetSequence) GoGC() {
				runtime.SetFinalizer(this, func(this *QTest__QTouchEventWidgetSequence) {
					this.Delete()
					runtime.KeepAlive(this.h)
				})
			}
			