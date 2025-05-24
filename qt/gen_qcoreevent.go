package qt

/*

#include "gen_qcoreevent.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QEvent__Type int

const (
	QEvent__None                             QEvent__Type = 0
	QEvent__Timer                            QEvent__Type = 1
	QEvent__MouseButtonPress                 QEvent__Type = 2
	QEvent__MouseButtonRelease               QEvent__Type = 3
	QEvent__MouseButtonDblClick              QEvent__Type = 4
	QEvent__MouseMove                        QEvent__Type = 5
	QEvent__KeyPress                         QEvent__Type = 6
	QEvent__KeyRelease                       QEvent__Type = 7
	QEvent__FocusIn                          QEvent__Type = 8
	QEvent__FocusOut                         QEvent__Type = 9
	QEvent__FocusAboutToChange               QEvent__Type = 23
	QEvent__Enter                            QEvent__Type = 10
	QEvent__Leave                            QEvent__Type = 11
	QEvent__Paint                            QEvent__Type = 12
	QEvent__Move                             QEvent__Type = 13
	QEvent__Resize                           QEvent__Type = 14
	QEvent__Create                           QEvent__Type = 15
	QEvent__Destroy                          QEvent__Type = 16
	QEvent__Show                             QEvent__Type = 17
	QEvent__Hide                             QEvent__Type = 18
	QEvent__Close                            QEvent__Type = 19
	QEvent__Quit                             QEvent__Type = 20
	QEvent__ParentChange                     QEvent__Type = 21
	QEvent__ParentAboutToChange              QEvent__Type = 131
	QEvent__ThreadChange                     QEvent__Type = 22
	QEvent__WindowActivate                   QEvent__Type = 24
	QEvent__WindowDeactivate                 QEvent__Type = 25
	QEvent__ShowToParent                     QEvent__Type = 26
	QEvent__HideToParent                     QEvent__Type = 27
	QEvent__Wheel                            QEvent__Type = 31
	QEvent__WindowTitleChange                QEvent__Type = 33
	QEvent__WindowIconChange                 QEvent__Type = 34
	QEvent__ApplicationWindowIconChange      QEvent__Type = 35
	QEvent__ApplicationFontChange            QEvent__Type = 36
	QEvent__ApplicationLayoutDirectionChange QEvent__Type = 37
	QEvent__ApplicationPaletteChange         QEvent__Type = 38
	QEvent__PaletteChange                    QEvent__Type = 39
	QEvent__Clipboard                        QEvent__Type = 40
	QEvent__Speech                           QEvent__Type = 42
	QEvent__MetaCall                         QEvent__Type = 43
	QEvent__SockAct                          QEvent__Type = 50
	QEvent__WinEventAct                      QEvent__Type = 132
	QEvent__DeferredDelete                   QEvent__Type = 52
	QEvent__DragEnter                        QEvent__Type = 60
	QEvent__DragMove                         QEvent__Type = 61
	QEvent__DragLeave                        QEvent__Type = 62
	QEvent__Drop                             QEvent__Type = 63
	QEvent__DragResponse                     QEvent__Type = 64
	QEvent__ChildAdded                       QEvent__Type = 68
	QEvent__ChildPolished                    QEvent__Type = 69
	QEvent__ChildRemoved                     QEvent__Type = 71
	QEvent__ShowWindowRequest                QEvent__Type = 73
	QEvent__PolishRequest                    QEvent__Type = 74
	QEvent__Polish                           QEvent__Type = 75
	QEvent__LayoutRequest                    QEvent__Type = 76
	QEvent__UpdateRequest                    QEvent__Type = 77
	QEvent__UpdateLater                      QEvent__Type = 78
	QEvent__EmbeddingControl                 QEvent__Type = 79
	QEvent__ActivateControl                  QEvent__Type = 80
	QEvent__DeactivateControl                QEvent__Type = 81
	QEvent__ContextMenu                      QEvent__Type = 82
	QEvent__InputMethod                      QEvent__Type = 83
	QEvent__TabletMove                       QEvent__Type = 87
	QEvent__LocaleChange                     QEvent__Type = 88
	QEvent__LanguageChange                   QEvent__Type = 89
	QEvent__LayoutDirectionChange            QEvent__Type = 90
	QEvent__Style                            QEvent__Type = 91
	QEvent__TabletPress                      QEvent__Type = 92
	QEvent__TabletRelease                    QEvent__Type = 93
	QEvent__OkRequest                        QEvent__Type = 94
	QEvent__HelpRequest                      QEvent__Type = 95
	QEvent__IconDrag                         QEvent__Type = 96
	QEvent__FontChange                       QEvent__Type = 97
	QEvent__EnabledChange                    QEvent__Type = 98
	QEvent__ActivationChange                 QEvent__Type = 99
	QEvent__StyleChange                      QEvent__Type = 100
	QEvent__IconTextChange                   QEvent__Type = 101
	QEvent__ModifiedChange                   QEvent__Type = 102
	QEvent__MouseTrackingChange              QEvent__Type = 109
	QEvent__WindowBlocked                    QEvent__Type = 103
	QEvent__WindowUnblocked                  QEvent__Type = 104
	QEvent__WindowStateChange                QEvent__Type = 105
	QEvent__ReadOnlyChange                   QEvent__Type = 106
	QEvent__ToolTip                          QEvent__Type = 110
	QEvent__WhatsThis                        QEvent__Type = 111
	QEvent__StatusTip                        QEvent__Type = 112
	QEvent__ActionChanged                    QEvent__Type = 113
	QEvent__ActionAdded                      QEvent__Type = 114
	QEvent__ActionRemoved                    QEvent__Type = 115
	QEvent__FileOpen                         QEvent__Type = 116
	QEvent__Shortcut                         QEvent__Type = 117
	QEvent__ShortcutOverride                 QEvent__Type = 51
	QEvent__WhatsThisClicked                 QEvent__Type = 118
	QEvent__ToolBarChange                    QEvent__Type = 120
	QEvent__ApplicationActivate              QEvent__Type = 121
	QEvent__ApplicationActivated             QEvent__Type = 121
	QEvent__ApplicationDeactivate            QEvent__Type = 122
	QEvent__ApplicationDeactivated           QEvent__Type = 122
	QEvent__QueryWhatsThis                   QEvent__Type = 123
	QEvent__EnterWhatsThisMode               QEvent__Type = 124
	QEvent__LeaveWhatsThisMode               QEvent__Type = 125
	QEvent__ZOrderChange                     QEvent__Type = 126
	QEvent__HoverEnter                       QEvent__Type = 127
	QEvent__HoverLeave                       QEvent__Type = 128
	QEvent__HoverMove                        QEvent__Type = 129
	QEvent__AcceptDropsChange                QEvent__Type = 152
	QEvent__ZeroTimerEvent                   QEvent__Type = 154
	QEvent__GraphicsSceneMouseMove           QEvent__Type = 155
	QEvent__GraphicsSceneMousePress          QEvent__Type = 156
	QEvent__GraphicsSceneMouseRelease        QEvent__Type = 157
	QEvent__GraphicsSceneMouseDoubleClick    QEvent__Type = 158
	QEvent__GraphicsSceneContextMenu         QEvent__Type = 159
	QEvent__GraphicsSceneHoverEnter          QEvent__Type = 160
	QEvent__GraphicsSceneHoverMove           QEvent__Type = 161
	QEvent__GraphicsSceneHoverLeave          QEvent__Type = 162
	QEvent__GraphicsSceneHelp                QEvent__Type = 163
	QEvent__GraphicsSceneDragEnter           QEvent__Type = 164
	QEvent__GraphicsSceneDragMove            QEvent__Type = 165
	QEvent__GraphicsSceneDragLeave           QEvent__Type = 166
	QEvent__GraphicsSceneDrop                QEvent__Type = 167
	QEvent__GraphicsSceneWheel               QEvent__Type = 168
	QEvent__KeyboardLayoutChange             QEvent__Type = 169
	QEvent__DynamicPropertyChange            QEvent__Type = 170
	QEvent__TabletEnterProximity             QEvent__Type = 171
	QEvent__TabletLeaveProximity             QEvent__Type = 172
	QEvent__NonClientAreaMouseMove           QEvent__Type = 173
	QEvent__NonClientAreaMouseButtonPress    QEvent__Type = 174
	QEvent__NonClientAreaMouseButtonRelease  QEvent__Type = 175
	QEvent__NonClientAreaMouseButtonDblClick QEvent__Type = 176
	QEvent__MacSizeChange                    QEvent__Type = 177
	QEvent__ContentsRectChange               QEvent__Type = 178
	QEvent__MacGLWindowChange                QEvent__Type = 179
	QEvent__FutureCallOut                    QEvent__Type = 180
	QEvent__GraphicsSceneResize              QEvent__Type = 181
	QEvent__GraphicsSceneMove                QEvent__Type = 182
	QEvent__CursorChange                     QEvent__Type = 183
	QEvent__ToolTipChange                    QEvent__Type = 184
	QEvent__NetworkReplyUpdated              QEvent__Type = 185
	QEvent__GrabMouse                        QEvent__Type = 186
	QEvent__UngrabMouse                      QEvent__Type = 187
	QEvent__GrabKeyboard                     QEvent__Type = 188
	QEvent__UngrabKeyboard                   QEvent__Type = 189
	QEvent__MacGLClearDrawable               QEvent__Type = 191
	QEvent__StateMachineSignal               QEvent__Type = 192
	QEvent__StateMachineWrapped              QEvent__Type = 193
	QEvent__TouchBegin                       QEvent__Type = 194
	QEvent__TouchUpdate                      QEvent__Type = 195
	QEvent__TouchEnd                         QEvent__Type = 196
	QEvent__NativeGesture                    QEvent__Type = 197
	QEvent__RequestSoftwareInputPanel        QEvent__Type = 199
	QEvent__CloseSoftwareInputPanel          QEvent__Type = 200
	QEvent__WinIdChange                      QEvent__Type = 203
	QEvent__Gesture                          QEvent__Type = 198
	QEvent__GestureOverride                  QEvent__Type = 202
	QEvent__ScrollPrepare                    QEvent__Type = 204
	QEvent__Scroll                           QEvent__Type = 205
	QEvent__Expose                           QEvent__Type = 206
	QEvent__InputMethodQuery                 QEvent__Type = 207
	QEvent__OrientationChange                QEvent__Type = 208
	QEvent__TouchCancel                      QEvent__Type = 209
	QEvent__ThemeChange                      QEvent__Type = 210
	QEvent__SockClose                        QEvent__Type = 211
	QEvent__PlatformPanel                    QEvent__Type = 212
	QEvent__StyleAnimationUpdate             QEvent__Type = 213
	QEvent__ApplicationStateChange           QEvent__Type = 214
	QEvent__WindowChangeInternal             QEvent__Type = 215
	QEvent__ScreenChangeInternal             QEvent__Type = 216
	QEvent__PlatformSurface                  QEvent__Type = 217
	QEvent__Pointer                          QEvent__Type = 218
	QEvent__TabletTrackingChange             QEvent__Type = 219
	QEvent__User                             QEvent__Type = 1000
	QEvent__MaxUser                          QEvent__Type = 65535
)

type QEvent struct {
	h *C.QEvent
}

func (this *QEvent) cPointer() *C.QEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQEvent constructs the type using only CGO pointers.
func newQEvent(h *C.QEvent) *QEvent {
	if h == nil {
		return nil
	}

	return &QEvent{h: h}
}

// UnsafeNewQEvent constructs the type using only unsafe pointers.
func UnsafeNewQEvent(h unsafe.Pointer) *QEvent {
	return newQEvent((*C.QEvent)(h))
}

// NewQEvent constructs a new QEvent object.
func NewQEvent(typeVal QEvent__Type) *QEvent {

	return newQEvent(C.QEvent_new((C.int)(typeVal)))
}

// NewQEvent2 constructs a new QEvent object.
func NewQEvent2(other *QEvent) *QEvent {

	return newQEvent(C.QEvent_new2(other.cPointer()))
}

func (this *QEvent) OperatorAssign(other *QEvent) {
	C.QEvent_operatorAssign(this.h, other.cPointer())
}

func (this *QEvent) Type() QEvent__Type {
	return (QEvent__Type)(C.QEvent_type(this.h))
}

func (this *QEvent) Spontaneous() bool {
	return (bool)(C.QEvent_spontaneous(this.h))
}

func (this *QEvent) SetAccepted(accepted bool) {
	C.QEvent_setAccepted(this.h, (C.bool)(accepted))
}

func (this *QEvent) IsAccepted() bool {
	return (bool)(C.QEvent_isAccepted(this.h))
}

func (this *QEvent) Accept() {
	C.QEvent_accept(this.h)
}

func (this *QEvent) Ignore() {
	C.QEvent_ignore(this.h)
}

func QEvent_RegisterEventType() int {
	return (int)(C.QEvent_registerEventType())
}

func QEvent_RegisterEventTypeWithHint(hint int) int {
	return (int)(C.QEvent_registerEventTypeWithHint((C.int)(hint)))
}

// Delete this object from C++ memory.
func (this *QEvent) Delete() {
	C.QEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTimerEvent struct {
	h *C.QTimerEvent
	*QEvent
}

func (this *QTimerEvent) cPointer() *C.QTimerEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTimerEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTimerEvent constructs the type using only CGO pointers.
func newQTimerEvent(h *C.QTimerEvent) *QTimerEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QTimerEvent_virtbase(h, &outptr_QEvent)

	return &QTimerEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQTimerEvent constructs the type using only unsafe pointers.
func UnsafeNewQTimerEvent(h unsafe.Pointer) *QTimerEvent {
	return newQTimerEvent((*C.QTimerEvent)(h))
}

// NewQTimerEvent constructs a new QTimerEvent object.
func NewQTimerEvent(timerId int) *QTimerEvent {

	return newQTimerEvent(C.QTimerEvent_new((C.int)(timerId)))
}

// NewQTimerEvent2 constructs a new QTimerEvent object.
func NewQTimerEvent2(param1 *QTimerEvent) *QTimerEvent {

	return newQTimerEvent(C.QTimerEvent_new2(param1.cPointer()))
}

func (this *QTimerEvent) TimerId() int {
	return (int)(C.QTimerEvent_timerId(this.h))
}

func (this *QTimerEvent) OperatorAssign(param1 *QTimerEvent) {
	C.QTimerEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QTimerEvent) Delete() {
	C.QTimerEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTimerEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QTimerEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QChildEvent struct {
	h *C.QChildEvent
	*QEvent
}

func (this *QChildEvent) cPointer() *C.QChildEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QChildEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQChildEvent constructs the type using only CGO pointers.
func newQChildEvent(h *C.QChildEvent) *QChildEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QChildEvent_virtbase(h, &outptr_QEvent)

	return &QChildEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQChildEvent constructs the type using only unsafe pointers.
func UnsafeNewQChildEvent(h unsafe.Pointer) *QChildEvent {
	return newQChildEvent((*C.QChildEvent)(h))
}

// NewQChildEvent constructs a new QChildEvent object.
func NewQChildEvent(typeVal QEvent__Type, child *QObject) *QChildEvent {

	return newQChildEvent(C.QChildEvent_new((C.int)(typeVal), child.cPointer()))
}

// NewQChildEvent2 constructs a new QChildEvent object.
func NewQChildEvent2(param1 *QChildEvent) *QChildEvent {

	return newQChildEvent(C.QChildEvent_new2(param1.cPointer()))
}

func (this *QChildEvent) Child() *QObject {
	return newQObject(C.QChildEvent_child(this.h))
}

func (this *QChildEvent) Added() bool {
	return (bool)(C.QChildEvent_added(this.h))
}

func (this *QChildEvent) Polished() bool {
	return (bool)(C.QChildEvent_polished(this.h))
}

func (this *QChildEvent) Removed() bool {
	return (bool)(C.QChildEvent_removed(this.h))
}

func (this *QChildEvent) OperatorAssign(param1 *QChildEvent) {
	C.QChildEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QChildEvent) Delete() {
	C.QChildEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QChildEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QChildEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDynamicPropertyChangeEvent struct {
	h *C.QDynamicPropertyChangeEvent
	*QEvent
}

func (this *QDynamicPropertyChangeEvent) cPointer() *C.QDynamicPropertyChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDynamicPropertyChangeEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDynamicPropertyChangeEvent constructs the type using only CGO pointers.
func newQDynamicPropertyChangeEvent(h *C.QDynamicPropertyChangeEvent) *QDynamicPropertyChangeEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QDynamicPropertyChangeEvent_virtbase(h, &outptr_QEvent)

	return &QDynamicPropertyChangeEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQDynamicPropertyChangeEvent constructs the type using only unsafe pointers.
func UnsafeNewQDynamicPropertyChangeEvent(h unsafe.Pointer) *QDynamicPropertyChangeEvent {
	return newQDynamicPropertyChangeEvent((*C.QDynamicPropertyChangeEvent)(h))
}

// NewQDynamicPropertyChangeEvent constructs a new QDynamicPropertyChangeEvent object.
func NewQDynamicPropertyChangeEvent(name []byte) *QDynamicPropertyChangeEvent {
	name_alias := C.struct_miqt_string{}
	if len(name) > 0 {
		name_alias.data = (*C.char)(unsafe.Pointer(&name[0]))
	} else {
		name_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	name_alias.len = C.size_t(len(name))

	return newQDynamicPropertyChangeEvent(C.QDynamicPropertyChangeEvent_new(name_alias))
}

// NewQDynamicPropertyChangeEvent2 constructs a new QDynamicPropertyChangeEvent object.
func NewQDynamicPropertyChangeEvent2(param1 *QDynamicPropertyChangeEvent) *QDynamicPropertyChangeEvent {

	return newQDynamicPropertyChangeEvent(C.QDynamicPropertyChangeEvent_new2(param1.cPointer()))
}

func (this *QDynamicPropertyChangeEvent) PropertyName() []byte {
	var _bytearray C.struct_miqt_string = C.QDynamicPropertyChangeEvent_propertyName(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QDynamicPropertyChangeEvent) OperatorAssign(param1 *QDynamicPropertyChangeEvent) {
	C.QDynamicPropertyChangeEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDynamicPropertyChangeEvent) Delete() {
	C.QDynamicPropertyChangeEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDynamicPropertyChangeEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QDynamicPropertyChangeEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
