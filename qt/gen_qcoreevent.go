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
	QEvent__Type__None                             QEvent__Type = 0
	QEvent__Type__Timer                            QEvent__Type = 1
	QEvent__Type__MouseButtonPress                 QEvent__Type = 2
	QEvent__Type__MouseButtonRelease               QEvent__Type = 3
	QEvent__Type__MouseButtonDblClick              QEvent__Type = 4
	QEvent__Type__MouseMove                        QEvent__Type = 5
	QEvent__Type__KeyPress                         QEvent__Type = 6
	QEvent__Type__KeyRelease                       QEvent__Type = 7
	QEvent__Type__FocusIn                          QEvent__Type = 8
	QEvent__Type__FocusOut                         QEvent__Type = 9
	QEvent__Type__FocusAboutToChange               QEvent__Type = 23
	QEvent__Type__Enter                            QEvent__Type = 10
	QEvent__Type__Leave                            QEvent__Type = 11
	QEvent__Type__Paint                            QEvent__Type = 12
	QEvent__Type__Move                             QEvent__Type = 13
	QEvent__Type__Resize                           QEvent__Type = 14
	QEvent__Type__Create                           QEvent__Type = 15
	QEvent__Type__Destroy                          QEvent__Type = 16
	QEvent__Type__Show                             QEvent__Type = 17
	QEvent__Type__Hide                             QEvent__Type = 18
	QEvent__Type__Close                            QEvent__Type = 19
	QEvent__Type__Quit                             QEvent__Type = 20
	QEvent__Type__ParentChange                     QEvent__Type = 21
	QEvent__Type__ParentAboutToChange              QEvent__Type = 131
	QEvent__Type__ThreadChange                     QEvent__Type = 22
	QEvent__Type__WindowActivate                   QEvent__Type = 24
	QEvent__Type__WindowDeactivate                 QEvent__Type = 25
	QEvent__Type__ShowToParent                     QEvent__Type = 26
	QEvent__Type__HideToParent                     QEvent__Type = 27
	QEvent__Type__Wheel                            QEvent__Type = 31
	QEvent__Type__WindowTitleChange                QEvent__Type = 33
	QEvent__Type__WindowIconChange                 QEvent__Type = 34
	QEvent__Type__ApplicationWindowIconChange      QEvent__Type = 35
	QEvent__Type__ApplicationFontChange            QEvent__Type = 36
	QEvent__Type__ApplicationLayoutDirectionChange QEvent__Type = 37
	QEvent__Type__ApplicationPaletteChange         QEvent__Type = 38
	QEvent__Type__PaletteChange                    QEvent__Type = 39
	QEvent__Type__Clipboard                        QEvent__Type = 40
	QEvent__Type__Speech                           QEvent__Type = 42
	QEvent__Type__MetaCall                         QEvent__Type = 43
	QEvent__Type__SockAct                          QEvent__Type = 50
	QEvent__Type__WinEventAct                      QEvent__Type = 132
	QEvent__Type__DeferredDelete                   QEvent__Type = 52
	QEvent__Type__DragEnter                        QEvent__Type = 60
	QEvent__Type__DragMove                         QEvent__Type = 61
	QEvent__Type__DragLeave                        QEvent__Type = 62
	QEvent__Type__Drop                             QEvent__Type = 63
	QEvent__Type__DragResponse                     QEvent__Type = 64
	QEvent__Type__ChildAdded                       QEvent__Type = 68
	QEvent__Type__ChildPolished                    QEvent__Type = 69
	QEvent__Type__ChildRemoved                     QEvent__Type = 71
	QEvent__Type__ShowWindowRequest                QEvent__Type = 73
	QEvent__Type__PolishRequest                    QEvent__Type = 74
	QEvent__Type__Polish                           QEvent__Type = 75
	QEvent__Type__LayoutRequest                    QEvent__Type = 76
	QEvent__Type__UpdateRequest                    QEvent__Type = 77
	QEvent__Type__UpdateLater                      QEvent__Type = 78
	QEvent__Type__EmbeddingControl                 QEvent__Type = 79
	QEvent__Type__ActivateControl                  QEvent__Type = 80
	QEvent__Type__DeactivateControl                QEvent__Type = 81
	QEvent__Type__ContextMenu                      QEvent__Type = 82
	QEvent__Type__InputMethod                      QEvent__Type = 83
	QEvent__Type__TabletMove                       QEvent__Type = 87
	QEvent__Type__LocaleChange                     QEvent__Type = 88
	QEvent__Type__LanguageChange                   QEvent__Type = 89
	QEvent__Type__LayoutDirectionChange            QEvent__Type = 90
	QEvent__Type__Style                            QEvent__Type = 91
	QEvent__Type__TabletPress                      QEvent__Type = 92
	QEvent__Type__TabletRelease                    QEvent__Type = 93
	QEvent__Type__OkRequest                        QEvent__Type = 94
	QEvent__Type__HelpRequest                      QEvent__Type = 95
	QEvent__Type__IconDrag                         QEvent__Type = 96
	QEvent__Type__FontChange                       QEvent__Type = 97
	QEvent__Type__EnabledChange                    QEvent__Type = 98
	QEvent__Type__ActivationChange                 QEvent__Type = 99
	QEvent__Type__StyleChange                      QEvent__Type = 100
	QEvent__Type__IconTextChange                   QEvent__Type = 101
	QEvent__Type__ModifiedChange                   QEvent__Type = 102
	QEvent__Type__MouseTrackingChange              QEvent__Type = 109
	QEvent__Type__WindowBlocked                    QEvent__Type = 103
	QEvent__Type__WindowUnblocked                  QEvent__Type = 104
	QEvent__Type__WindowStateChange                QEvent__Type = 105
	QEvent__Type__ReadOnlyChange                   QEvent__Type = 106
	QEvent__Type__ToolTip                          QEvent__Type = 110
	QEvent__Type__WhatsThis                        QEvent__Type = 111
	QEvent__Type__StatusTip                        QEvent__Type = 112
	QEvent__Type__ActionChanged                    QEvent__Type = 113
	QEvent__Type__ActionAdded                      QEvent__Type = 114
	QEvent__Type__ActionRemoved                    QEvent__Type = 115
	QEvent__Type__FileOpen                         QEvent__Type = 116
	QEvent__Type__Shortcut                         QEvent__Type = 117
	QEvent__Type__ShortcutOverride                 QEvent__Type = 51
	QEvent__Type__WhatsThisClicked                 QEvent__Type = 118
	QEvent__Type__ToolBarChange                    QEvent__Type = 120
	QEvent__Type__ApplicationActivate              QEvent__Type = 121
	QEvent__Type__ApplicationActivated             QEvent__Type = 121
	QEvent__Type__ApplicationDeactivate            QEvent__Type = 122
	QEvent__Type__ApplicationDeactivated           QEvent__Type = 122
	QEvent__Type__QueryWhatsThis                   QEvent__Type = 123
	QEvent__Type__EnterWhatsThisMode               QEvent__Type = 124
	QEvent__Type__LeaveWhatsThisMode               QEvent__Type = 125
	QEvent__Type__ZOrderChange                     QEvent__Type = 126
	QEvent__Type__HoverEnter                       QEvent__Type = 127
	QEvent__Type__HoverLeave                       QEvent__Type = 128
	QEvent__Type__HoverMove                        QEvent__Type = 129
	QEvent__Type__AcceptDropsChange                QEvent__Type = 152
	QEvent__Type__ZeroTimerEvent                   QEvent__Type = 154
	QEvent__Type__GraphicsSceneMouseMove           QEvent__Type = 155
	QEvent__Type__GraphicsSceneMousePress          QEvent__Type = 156
	QEvent__Type__GraphicsSceneMouseRelease        QEvent__Type = 157
	QEvent__Type__GraphicsSceneMouseDoubleClick    QEvent__Type = 158
	QEvent__Type__GraphicsSceneContextMenu         QEvent__Type = 159
	QEvent__Type__GraphicsSceneHoverEnter          QEvent__Type = 160
	QEvent__Type__GraphicsSceneHoverMove           QEvent__Type = 161
	QEvent__Type__GraphicsSceneHoverLeave          QEvent__Type = 162
	QEvent__Type__GraphicsSceneHelp                QEvent__Type = 163
	QEvent__Type__GraphicsSceneDragEnter           QEvent__Type = 164
	QEvent__Type__GraphicsSceneDragMove            QEvent__Type = 165
	QEvent__Type__GraphicsSceneDragLeave           QEvent__Type = 166
	QEvent__Type__GraphicsSceneDrop                QEvent__Type = 167
	QEvent__Type__GraphicsSceneWheel               QEvent__Type = 168
	QEvent__Type__KeyboardLayoutChange             QEvent__Type = 169
	QEvent__Type__DynamicPropertyChange            QEvent__Type = 170
	QEvent__Type__TabletEnterProximity             QEvent__Type = 171
	QEvent__Type__TabletLeaveProximity             QEvent__Type = 172
	QEvent__Type__NonClientAreaMouseMove           QEvent__Type = 173
	QEvent__Type__NonClientAreaMouseButtonPress    QEvent__Type = 174
	QEvent__Type__NonClientAreaMouseButtonRelease  QEvent__Type = 175
	QEvent__Type__NonClientAreaMouseButtonDblClick QEvent__Type = 176
	QEvent__Type__MacSizeChange                    QEvent__Type = 177
	QEvent__Type__ContentsRectChange               QEvent__Type = 178
	QEvent__Type__MacGLWindowChange                QEvent__Type = 179
	QEvent__Type__FutureCallOut                    QEvent__Type = 180
	QEvent__Type__GraphicsSceneResize              QEvent__Type = 181
	QEvent__Type__GraphicsSceneMove                QEvent__Type = 182
	QEvent__Type__CursorChange                     QEvent__Type = 183
	QEvent__Type__ToolTipChange                    QEvent__Type = 184
	QEvent__Type__NetworkReplyUpdated              QEvent__Type = 185
	QEvent__Type__GrabMouse                        QEvent__Type = 186
	QEvent__Type__UngrabMouse                      QEvent__Type = 187
	QEvent__Type__GrabKeyboard                     QEvent__Type = 188
	QEvent__Type__UngrabKeyboard                   QEvent__Type = 189
	QEvent__Type__MacGLClearDrawable               QEvent__Type = 191
	QEvent__Type__StateMachineSignal               QEvent__Type = 192
	QEvent__Type__StateMachineWrapped              QEvent__Type = 193
	QEvent__Type__TouchBegin                       QEvent__Type = 194
	QEvent__Type__TouchUpdate                      QEvent__Type = 195
	QEvent__Type__TouchEnd                         QEvent__Type = 196
	QEvent__Type__NativeGesture                    QEvent__Type = 197
	QEvent__Type__RequestSoftwareInputPanel        QEvent__Type = 199
	QEvent__Type__CloseSoftwareInputPanel          QEvent__Type = 200
	QEvent__Type__WinIdChange                      QEvent__Type = 203
	QEvent__Type__Gesture                          QEvent__Type = 198
	QEvent__Type__GestureOverride                  QEvent__Type = 202
	QEvent__Type__ScrollPrepare                    QEvent__Type = 204
	QEvent__Type__Scroll                           QEvent__Type = 205
	QEvent__Type__Expose                           QEvent__Type = 206
	QEvent__Type__InputMethodQuery                 QEvent__Type = 207
	QEvent__Type__OrientationChange                QEvent__Type = 208
	QEvent__Type__TouchCancel                      QEvent__Type = 209
	QEvent__Type__ThemeChange                      QEvent__Type = 210
	QEvent__Type__SockClose                        QEvent__Type = 211
	QEvent__Type__PlatformPanel                    QEvent__Type = 212
	QEvent__Type__StyleAnimationUpdate             QEvent__Type = 213
	QEvent__Type__ApplicationStateChange           QEvent__Type = 214
	QEvent__Type__WindowChangeInternal             QEvent__Type = 215
	QEvent__Type__ScreenChangeInternal             QEvent__Type = 216
	QEvent__Type__PlatformSurface                  QEvent__Type = 217
	QEvent__Type__Pointer                          QEvent__Type = 218
	QEvent__Type__TabletTrackingChange             QEvent__Type = 219
	QEvent__Type__User                             QEvent__Type = 1000
	QEvent__Type__MaxUser                          QEvent__Type = 65535
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

func newQEvent(h *C.QEvent) *QEvent {
	if h == nil {
		return nil
	}
	return &QEvent{h: h}
}

func newQEvent_U(h unsafe.Pointer) *QEvent {
	return newQEvent((*C.QEvent)(h))
}

// NewQEvent constructs a new QEvent object.
func NewQEvent(typeVal QEvent__Type) *QEvent {
	ret := C.QEvent_new((C.uintptr_t)(typeVal))
	return newQEvent(ret)
}

// NewQEvent2 constructs a new QEvent object.
func NewQEvent2(other *QEvent) *QEvent {
	ret := C.QEvent_new2(other.cPointer())
	return newQEvent(ret)
}

func (this *QEvent) OperatorAssign(other *QEvent) {
	C.QEvent_OperatorAssign(this.h, other.cPointer())
}

func (this *QEvent) Type() QEvent__Type {
	ret := C.QEvent_Type(this.h)
	return (QEvent__Type)(ret)
}

func (this *QEvent) Spontaneous() bool {
	ret := C.QEvent_Spontaneous(this.h)
	return (bool)(ret)
}

func (this *QEvent) SetAccepted(accepted bool) {
	C.QEvent_SetAccepted(this.h, (C.bool)(accepted))
}

func (this *QEvent) IsAccepted() bool {
	ret := C.QEvent_IsAccepted(this.h)
	return (bool)(ret)
}

func (this *QEvent) Accept() {
	C.QEvent_Accept(this.h)
}

func (this *QEvent) Ignore() {
	C.QEvent_Ignore(this.h)
}

func QEvent_RegisterEventType() int {
	ret := C.QEvent_RegisterEventType()
	return (int)(ret)
}

func QEvent_RegisterEventType1(hint int) int {
	ret := C.QEvent_RegisterEventType1((C.int)(hint))
	return (int)(ret)
}

func (this *QEvent) Delete() {
	C.QEvent_Delete(this.h)
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

func newQTimerEvent(h *C.QTimerEvent) *QTimerEvent {
	if h == nil {
		return nil
	}
	return &QTimerEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQTimerEvent_U(h unsafe.Pointer) *QTimerEvent {
	return newQTimerEvent((*C.QTimerEvent)(h))
}

// NewQTimerEvent constructs a new QTimerEvent object.
func NewQTimerEvent(timerId int) *QTimerEvent {
	ret := C.QTimerEvent_new((C.int)(timerId))
	return newQTimerEvent(ret)
}

// NewQTimerEvent2 constructs a new QTimerEvent object.
func NewQTimerEvent2(param1 *QTimerEvent) *QTimerEvent {
	ret := C.QTimerEvent_new2(param1.cPointer())
	return newQTimerEvent(ret)
}

func (this *QTimerEvent) TimerId() int {
	ret := C.QTimerEvent_TimerId(this.h)
	return (int)(ret)
}

func (this *QTimerEvent) Delete() {
	C.QTimerEvent_Delete(this.h)
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

func newQChildEvent(h *C.QChildEvent) *QChildEvent {
	if h == nil {
		return nil
	}
	return &QChildEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQChildEvent_U(h unsafe.Pointer) *QChildEvent {
	return newQChildEvent((*C.QChildEvent)(h))
}

// NewQChildEvent constructs a new QChildEvent object.
func NewQChildEvent(typeVal QEvent__Type, child *QObject) *QChildEvent {
	ret := C.QChildEvent_new((C.uintptr_t)(typeVal), child.cPointer())
	return newQChildEvent(ret)
}

// NewQChildEvent2 constructs a new QChildEvent object.
func NewQChildEvent2(param1 *QChildEvent) *QChildEvent {
	ret := C.QChildEvent_new2(param1.cPointer())
	return newQChildEvent(ret)
}

func (this *QChildEvent) Child() *QObject {
	ret := C.QChildEvent_Child(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QChildEvent) Added() bool {
	ret := C.QChildEvent_Added(this.h)
	return (bool)(ret)
}

func (this *QChildEvent) Polished() bool {
	ret := C.QChildEvent_Polished(this.h)
	return (bool)(ret)
}

func (this *QChildEvent) Removed() bool {
	ret := C.QChildEvent_Removed(this.h)
	return (bool)(ret)
}

func (this *QChildEvent) Delete() {
	C.QChildEvent_Delete(this.h)
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

func newQDynamicPropertyChangeEvent(h *C.QDynamicPropertyChangeEvent) *QDynamicPropertyChangeEvent {
	if h == nil {
		return nil
	}
	return &QDynamicPropertyChangeEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQDynamicPropertyChangeEvent_U(h unsafe.Pointer) *QDynamicPropertyChangeEvent {
	return newQDynamicPropertyChangeEvent((*C.QDynamicPropertyChangeEvent)(h))
}

// NewQDynamicPropertyChangeEvent constructs a new QDynamicPropertyChangeEvent object.
func NewQDynamicPropertyChangeEvent(name *QByteArray) *QDynamicPropertyChangeEvent {
	ret := C.QDynamicPropertyChangeEvent_new(name.cPointer())
	return newQDynamicPropertyChangeEvent(ret)
}

// NewQDynamicPropertyChangeEvent2 constructs a new QDynamicPropertyChangeEvent object.
func NewQDynamicPropertyChangeEvent2(param1 *QDynamicPropertyChangeEvent) *QDynamicPropertyChangeEvent {
	ret := C.QDynamicPropertyChangeEvent_new2(param1.cPointer())
	return newQDynamicPropertyChangeEvent(ret)
}

func (this *QDynamicPropertyChangeEvent) PropertyName() *QByteArray {
	ret := C.QDynamicPropertyChangeEvent_PropertyName(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDynamicPropertyChangeEvent) Delete() {
	C.QDynamicPropertyChangeEvent_Delete(this.h)
}

type QDeferredDeleteEvent struct {
	h *C.QDeferredDeleteEvent
	*QEvent
}

func (this *QDeferredDeleteEvent) cPointer() *C.QDeferredDeleteEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDeferredDeleteEvent(h *C.QDeferredDeleteEvent) *QDeferredDeleteEvent {
	if h == nil {
		return nil
	}
	return &QDeferredDeleteEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQDeferredDeleteEvent_U(h unsafe.Pointer) *QDeferredDeleteEvent {
	return newQDeferredDeleteEvent((*C.QDeferredDeleteEvent)(h))
}

// NewQDeferredDeleteEvent constructs a new QDeferredDeleteEvent object.
func NewQDeferredDeleteEvent() *QDeferredDeleteEvent {
	ret := C.QDeferredDeleteEvent_new()
	return newQDeferredDeleteEvent(ret)
}

// NewQDeferredDeleteEvent2 constructs a new QDeferredDeleteEvent object.
func NewQDeferredDeleteEvent2(param1 *QDeferredDeleteEvent) *QDeferredDeleteEvent {
	ret := C.QDeferredDeleteEvent_new2(param1.cPointer())
	return newQDeferredDeleteEvent(ret)
}

func (this *QDeferredDeleteEvent) LoopLevel() int {
	ret := C.QDeferredDeleteEvent_LoopLevel(this.h)
	return (int)(ret)
}

func (this *QDeferredDeleteEvent) Delete() {
	C.QDeferredDeleteEvent_Delete(this.h)
}
