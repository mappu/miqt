package qtermwidget

/*

#include "gen_KeyboardTranslator.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"unsafe"
)

type Konsole__KeyboardTranslator__State int

const (
	Konsole__KeyboardTranslator__NoState                Konsole__KeyboardTranslator__State = 0
	Konsole__KeyboardTranslator__NewLineState           Konsole__KeyboardTranslator__State = 1
	Konsole__KeyboardTranslator__AnsiState              Konsole__KeyboardTranslator__State = 2
	Konsole__KeyboardTranslator__CursorKeysState        Konsole__KeyboardTranslator__State = 4
	Konsole__KeyboardTranslator__AlternateScreenState   Konsole__KeyboardTranslator__State = 8
	Konsole__KeyboardTranslator__AnyModifierState       Konsole__KeyboardTranslator__State = 16
	Konsole__KeyboardTranslator__ApplicationKeypadState Konsole__KeyboardTranslator__State = 32
)

type Konsole__KeyboardTranslator__Command int

const (
	Konsole__KeyboardTranslator__NoCommand                 Konsole__KeyboardTranslator__Command = 0
	Konsole__KeyboardTranslator__SendCommand               Konsole__KeyboardTranslator__Command = 1
	Konsole__KeyboardTranslator__ScrollPageUpCommand       Konsole__KeyboardTranslator__Command = 2
	Konsole__KeyboardTranslator__ScrollPageDownCommand     Konsole__KeyboardTranslator__Command = 4
	Konsole__KeyboardTranslator__ScrollLineUpCommand       Konsole__KeyboardTranslator__Command = 8
	Konsole__KeyboardTranslator__ScrollLineDownCommand     Konsole__KeyboardTranslator__Command = 16
	Konsole__KeyboardTranslator__ScrollLockCommand         Konsole__KeyboardTranslator__Command = 32
	Konsole__KeyboardTranslator__ScrollUpToTopCommand      Konsole__KeyboardTranslator__Command = 64
	Konsole__KeyboardTranslator__ScrollDownToBottomCommand Konsole__KeyboardTranslator__Command = 128
	Konsole__KeyboardTranslator__EraseCommand              Konsole__KeyboardTranslator__Command = 256
)

type Konsole__KeyboardTranslator struct {
	h *C.Konsole__KeyboardTranslator
}

func (this *Konsole__KeyboardTranslator) cPointer() *C.Konsole__KeyboardTranslator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Konsole__KeyboardTranslator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKonsole__KeyboardTranslator constructs the type using only CGO pointers.
func newKonsole__KeyboardTranslator(h *C.Konsole__KeyboardTranslator) *Konsole__KeyboardTranslator {
	if h == nil {
		return nil
	}

	return &Konsole__KeyboardTranslator{h: h}
}

// UnsafeNewKonsole__KeyboardTranslator constructs the type using only unsafe pointers.
func UnsafeNewKonsole__KeyboardTranslator(h unsafe.Pointer) *Konsole__KeyboardTranslator {
	return newKonsole__KeyboardTranslator((*C.Konsole__KeyboardTranslator)(h))
}

// NewKonsole__KeyboardTranslator constructs a new Konsole::KeyboardTranslator object.
func NewKonsole__KeyboardTranslator(name string) *Konsole__KeyboardTranslator {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return newKonsole__KeyboardTranslator(C.Konsole__KeyboardTranslator_new(name_ms))
}

// NewKonsole__KeyboardTranslator2 constructs a new Konsole::KeyboardTranslator object.
func NewKonsole__KeyboardTranslator2(param1 *Konsole__KeyboardTranslator) *Konsole__KeyboardTranslator {

	return newKonsole__KeyboardTranslator(C.Konsole__KeyboardTranslator_new2(param1.cPointer()))
}

func (this *Konsole__KeyboardTranslator) Name() string {
	var _ms C.struct_miqt_string = C.Konsole__KeyboardTranslator_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *Konsole__KeyboardTranslator) SetName(name string) {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	C.Konsole__KeyboardTranslator_setName(this.h, name_ms)
}

func (this *Konsole__KeyboardTranslator) Description() string {
	var _ms C.struct_miqt_string = C.Konsole__KeyboardTranslator_description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *Konsole__KeyboardTranslator) SetDescription(description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.Konsole__KeyboardTranslator_setDescription(this.h, description_ms)
}

func (this *Konsole__KeyboardTranslator) FindEntry(keyCode int, modifiers qt.KeyboardModifier) *Konsole__KeyboardTranslator__Entry {
	_goptr := newKonsole__KeyboardTranslator__Entry(C.Konsole__KeyboardTranslator_findEntry(this.h, (C.int)(keyCode), (C.int)(modifiers)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *Konsole__KeyboardTranslator) AddEntry(entry *Konsole__KeyboardTranslator__Entry) {
	C.Konsole__KeyboardTranslator_addEntry(this.h, entry.cPointer())
}

func (this *Konsole__KeyboardTranslator) ReplaceEntry(existing *Konsole__KeyboardTranslator__Entry, replacement *Konsole__KeyboardTranslator__Entry) {
	C.Konsole__KeyboardTranslator_replaceEntry(this.h, existing.cPointer(), replacement.cPointer())
}

func (this *Konsole__KeyboardTranslator) RemoveEntry(entry *Konsole__KeyboardTranslator__Entry) {
	C.Konsole__KeyboardTranslator_removeEntry(this.h, entry.cPointer())
}

func (this *Konsole__KeyboardTranslator) Entries() []Konsole__KeyboardTranslator__Entry {
	var _ma C.struct_miqt_array = C.Konsole__KeyboardTranslator_entries(this.h)
	_ret := make([]Konsole__KeyboardTranslator__Entry, int(_ma.len))
	_outCast := (*[0xffff]*C.Konsole__KeyboardTranslator__Entry)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newKonsole__KeyboardTranslator__Entry(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *Konsole__KeyboardTranslator) FindEntry2(keyCode int, modifiers qt.KeyboardModifier, state Konsole__KeyboardTranslator__State) *Konsole__KeyboardTranslator__Entry {
	_goptr := newKonsole__KeyboardTranslator__Entry(C.Konsole__KeyboardTranslator_findEntry2(this.h, (C.int)(keyCode), (C.int)(modifiers), (C.int)(state)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *Konsole__KeyboardTranslator) Delete() {
	C.Konsole__KeyboardTranslator_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Konsole__KeyboardTranslator) GoGC() {
	runtime.SetFinalizer(this, func(this *Konsole__KeyboardTranslator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Konsole__KeyboardTranslatorReader struct {
	h *C.Konsole__KeyboardTranslatorReader
}

func (this *Konsole__KeyboardTranslatorReader) cPointer() *C.Konsole__KeyboardTranslatorReader {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Konsole__KeyboardTranslatorReader) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKonsole__KeyboardTranslatorReader constructs the type using only CGO pointers.
func newKonsole__KeyboardTranslatorReader(h *C.Konsole__KeyboardTranslatorReader) *Konsole__KeyboardTranslatorReader {
	if h == nil {
		return nil
	}

	return &Konsole__KeyboardTranslatorReader{h: h}
}

// UnsafeNewKonsole__KeyboardTranslatorReader constructs the type using only unsafe pointers.
func UnsafeNewKonsole__KeyboardTranslatorReader(h unsafe.Pointer) *Konsole__KeyboardTranslatorReader {
	return newKonsole__KeyboardTranslatorReader((*C.Konsole__KeyboardTranslatorReader)(h))
}

// NewKonsole__KeyboardTranslatorReader constructs a new Konsole::KeyboardTranslatorReader object.
func NewKonsole__KeyboardTranslatorReader(source *qt.QIODevice) *Konsole__KeyboardTranslatorReader {

	return newKonsole__KeyboardTranslatorReader(C.Konsole__KeyboardTranslatorReader_new((*C.QIODevice)(source.UnsafePointer())))
}

// NewKonsole__KeyboardTranslatorReader2 constructs a new Konsole::KeyboardTranslatorReader object.
func NewKonsole__KeyboardTranslatorReader2(param1 *Konsole__KeyboardTranslatorReader) *Konsole__KeyboardTranslatorReader {

	return newKonsole__KeyboardTranslatorReader(C.Konsole__KeyboardTranslatorReader_new2(param1.cPointer()))
}

func (this *Konsole__KeyboardTranslatorReader) Description() string {
	var _ms C.struct_miqt_string = C.Konsole__KeyboardTranslatorReader_description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *Konsole__KeyboardTranslatorReader) HasNextEntry() bool {
	return (bool)(C.Konsole__KeyboardTranslatorReader_hasNextEntry(this.h))
}

func (this *Konsole__KeyboardTranslatorReader) ParseError() bool {
	return (bool)(C.Konsole__KeyboardTranslatorReader_parseError(this.h))
}

// Delete this object from C++ memory.
func (this *Konsole__KeyboardTranslatorReader) Delete() {
	C.Konsole__KeyboardTranslatorReader_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Konsole__KeyboardTranslatorReader) GoGC() {
	runtime.SetFinalizer(this, func(this *Konsole__KeyboardTranslatorReader) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Konsole__KeyboardTranslatorWriter struct {
	h *C.Konsole__KeyboardTranslatorWriter
}

func (this *Konsole__KeyboardTranslatorWriter) cPointer() *C.Konsole__KeyboardTranslatorWriter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Konsole__KeyboardTranslatorWriter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKonsole__KeyboardTranslatorWriter constructs the type using only CGO pointers.
func newKonsole__KeyboardTranslatorWriter(h *C.Konsole__KeyboardTranslatorWriter) *Konsole__KeyboardTranslatorWriter {
	if h == nil {
		return nil
	}

	return &Konsole__KeyboardTranslatorWriter{h: h}
}

// UnsafeNewKonsole__KeyboardTranslatorWriter constructs the type using only unsafe pointers.
func UnsafeNewKonsole__KeyboardTranslatorWriter(h unsafe.Pointer) *Konsole__KeyboardTranslatorWriter {
	return newKonsole__KeyboardTranslatorWriter((*C.Konsole__KeyboardTranslatorWriter)(h))
}

// NewKonsole__KeyboardTranslatorWriter constructs a new Konsole::KeyboardTranslatorWriter object.
func NewKonsole__KeyboardTranslatorWriter(destination *qt.QIODevice) *Konsole__KeyboardTranslatorWriter {

	return newKonsole__KeyboardTranslatorWriter(C.Konsole__KeyboardTranslatorWriter_new((*C.QIODevice)(destination.UnsafePointer())))
}

func (this *Konsole__KeyboardTranslatorWriter) WriteHeader(description string) {
	description_ms := C.struct_miqt_string{}
	description_ms.data = C.CString(description)
	description_ms.len = C.size_t(len(description))
	defer C.free(unsafe.Pointer(description_ms.data))
	C.Konsole__KeyboardTranslatorWriter_writeHeader(this.h, description_ms)
}

// Delete this object from C++ memory.
func (this *Konsole__KeyboardTranslatorWriter) Delete() {
	C.Konsole__KeyboardTranslatorWriter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Konsole__KeyboardTranslatorWriter) GoGC() {
	runtime.SetFinalizer(this, func(this *Konsole__KeyboardTranslatorWriter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Konsole__KeyboardTranslatorManager struct {
	h *C.Konsole__KeyboardTranslatorManager
}

func (this *Konsole__KeyboardTranslatorManager) cPointer() *C.Konsole__KeyboardTranslatorManager {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Konsole__KeyboardTranslatorManager) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKonsole__KeyboardTranslatorManager constructs the type using only CGO pointers.
func newKonsole__KeyboardTranslatorManager(h *C.Konsole__KeyboardTranslatorManager) *Konsole__KeyboardTranslatorManager {
	if h == nil {
		return nil
	}

	return &Konsole__KeyboardTranslatorManager{h: h}
}

// UnsafeNewKonsole__KeyboardTranslatorManager constructs the type using only unsafe pointers.
func UnsafeNewKonsole__KeyboardTranslatorManager(h unsafe.Pointer) *Konsole__KeyboardTranslatorManager {
	return newKonsole__KeyboardTranslatorManager((*C.Konsole__KeyboardTranslatorManager)(h))
}

// NewKonsole__KeyboardTranslatorManager constructs a new Konsole::KeyboardTranslatorManager object.
func NewKonsole__KeyboardTranslatorManager() *Konsole__KeyboardTranslatorManager {

	return newKonsole__KeyboardTranslatorManager(C.Konsole__KeyboardTranslatorManager_new())
}

func (this *Konsole__KeyboardTranslatorManager) AddTranslator(translator *Konsole__KeyboardTranslator) {
	C.Konsole__KeyboardTranslatorManager_addTranslator(this.h, translator.cPointer())
}

func (this *Konsole__KeyboardTranslatorManager) DeleteTranslator(name string) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.Konsole__KeyboardTranslatorManager_deleteTranslator(this.h, name_ms))
}

func (this *Konsole__KeyboardTranslatorManager) DefaultTranslator() *Konsole__KeyboardTranslator {
	return newKonsole__KeyboardTranslator(C.Konsole__KeyboardTranslatorManager_defaultTranslator(this.h))
}

func (this *Konsole__KeyboardTranslatorManager) FindTranslator(name string) *Konsole__KeyboardTranslator {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return newKonsole__KeyboardTranslator(C.Konsole__KeyboardTranslatorManager_findTranslator(this.h, name_ms))
}

func (this *Konsole__KeyboardTranslatorManager) AllTranslators() []string {
	var _ma C.struct_miqt_array = C.Konsole__KeyboardTranslatorManager_allTranslators(this.h)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func Konsole__KeyboardTranslatorManager_Instance() *Konsole__KeyboardTranslatorManager {
	return newKonsole__KeyboardTranslatorManager(C.Konsole__KeyboardTranslatorManager_instance())
}

// Delete this object from C++ memory.
func (this *Konsole__KeyboardTranslatorManager) Delete() {
	C.Konsole__KeyboardTranslatorManager_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Konsole__KeyboardTranslatorManager) GoGC() {
	runtime.SetFinalizer(this, func(this *Konsole__KeyboardTranslatorManager) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type Konsole__KeyboardTranslator__Entry struct {
	h *C.Konsole__KeyboardTranslator__Entry
}

func (this *Konsole__KeyboardTranslator__Entry) cPointer() *C.Konsole__KeyboardTranslator__Entry {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *Konsole__KeyboardTranslator__Entry) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newKonsole__KeyboardTranslator__Entry constructs the type using only CGO pointers.
func newKonsole__KeyboardTranslator__Entry(h *C.Konsole__KeyboardTranslator__Entry) *Konsole__KeyboardTranslator__Entry {
	if h == nil {
		return nil
	}

	return &Konsole__KeyboardTranslator__Entry{h: h}
}

// UnsafeNewKonsole__KeyboardTranslator__Entry constructs the type using only unsafe pointers.
func UnsafeNewKonsole__KeyboardTranslator__Entry(h unsafe.Pointer) *Konsole__KeyboardTranslator__Entry {
	return newKonsole__KeyboardTranslator__Entry((*C.Konsole__KeyboardTranslator__Entry)(h))
}

// NewKonsole__KeyboardTranslator__Entry constructs a new Konsole::KeyboardTranslator::Entry object.
func NewKonsole__KeyboardTranslator__Entry() *Konsole__KeyboardTranslator__Entry {

	return newKonsole__KeyboardTranslator__Entry(C.Konsole__KeyboardTranslator__Entry_new())
}

// NewKonsole__KeyboardTranslator__Entry2 constructs a new Konsole::KeyboardTranslator::Entry object.
func NewKonsole__KeyboardTranslator__Entry2(param1 *Konsole__KeyboardTranslator__Entry) *Konsole__KeyboardTranslator__Entry {

	return newKonsole__KeyboardTranslator__Entry(C.Konsole__KeyboardTranslator__Entry_new2(param1.cPointer()))
}

func (this *Konsole__KeyboardTranslator__Entry) IsNull() bool {
	return (bool)(C.Konsole__KeyboardTranslator__Entry_isNull(this.h))
}

func (this *Konsole__KeyboardTranslator__Entry) Command() Konsole__KeyboardTranslator__Command {
	return (Konsole__KeyboardTranslator__Command)(C.Konsole__KeyboardTranslator__Entry_command(this.h))
}

func (this *Konsole__KeyboardTranslator__Entry) SetCommand(command Konsole__KeyboardTranslator__Command) {
	C.Konsole__KeyboardTranslator__Entry_setCommand(this.h, (C.int)(command))
}

func (this *Konsole__KeyboardTranslator__Entry) Text() []byte {
	var _bytearray C.struct_miqt_string = C.Konsole__KeyboardTranslator__Entry_text(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *Konsole__KeyboardTranslator__Entry) SetText(text []byte) {
	text_alias := C.struct_miqt_string{}
	if len(text) > 0 {
		text_alias.data = (*C.char)(unsafe.Pointer(&text[0]))
	} else {
		text_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	text_alias.len = C.size_t(len(text))
	C.Konsole__KeyboardTranslator__Entry_setText(this.h, text_alias)
}

func (this *Konsole__KeyboardTranslator__Entry) EscapedText() []byte {
	var _bytearray C.struct_miqt_string = C.Konsole__KeyboardTranslator__Entry_escapedText(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *Konsole__KeyboardTranslator__Entry) KeyCode() int {
	return (int)(C.Konsole__KeyboardTranslator__Entry_keyCode(this.h))
}

func (this *Konsole__KeyboardTranslator__Entry) SetKeyCode(keyCode int) {
	C.Konsole__KeyboardTranslator__Entry_setKeyCode(this.h, (C.int)(keyCode))
}

func (this *Konsole__KeyboardTranslator__Entry) Modifiers() qt.KeyboardModifier {
	return (qt.KeyboardModifier)(C.Konsole__KeyboardTranslator__Entry_modifiers(this.h))
}

func (this *Konsole__KeyboardTranslator__Entry) ModifierMask() qt.KeyboardModifier {
	return (qt.KeyboardModifier)(C.Konsole__KeyboardTranslator__Entry_modifierMask(this.h))
}

func (this *Konsole__KeyboardTranslator__Entry) SetModifiers(modifiers qt.KeyboardModifier) {
	C.Konsole__KeyboardTranslator__Entry_setModifiers(this.h, (C.int)(modifiers))
}

func (this *Konsole__KeyboardTranslator__Entry) SetModifierMask(modifiers qt.KeyboardModifier) {
	C.Konsole__KeyboardTranslator__Entry_setModifierMask(this.h, (C.int)(modifiers))
}

func (this *Konsole__KeyboardTranslator__Entry) State() Konsole__KeyboardTranslator__State {
	return (Konsole__KeyboardTranslator__State)(C.Konsole__KeyboardTranslator__Entry_state(this.h))
}

func (this *Konsole__KeyboardTranslator__Entry) StateMask() Konsole__KeyboardTranslator__State {
	return (Konsole__KeyboardTranslator__State)(C.Konsole__KeyboardTranslator__Entry_stateMask(this.h))
}

func (this *Konsole__KeyboardTranslator__Entry) SetState(state Konsole__KeyboardTranslator__State) {
	C.Konsole__KeyboardTranslator__Entry_setState(this.h, (C.int)(state))
}

func (this *Konsole__KeyboardTranslator__Entry) SetStateMask(mask Konsole__KeyboardTranslator__State) {
	C.Konsole__KeyboardTranslator__Entry_setStateMask(this.h, (C.int)(mask))
}

func (this *Konsole__KeyboardTranslator__Entry) ConditionToString() string {
	var _ms C.struct_miqt_string = C.Konsole__KeyboardTranslator__Entry_conditionToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *Konsole__KeyboardTranslator__Entry) ResultToString() string {
	var _ms C.struct_miqt_string = C.Konsole__KeyboardTranslator__Entry_resultToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *Konsole__KeyboardTranslator__Entry) Matches(keyCode int, modifiers qt.KeyboardModifier, flags Konsole__KeyboardTranslator__State) bool {
	return (bool)(C.Konsole__KeyboardTranslator__Entry_matches(this.h, (C.int)(keyCode), (C.int)(modifiers), (C.int)(flags)))
}

func (this *Konsole__KeyboardTranslator__Entry) OperatorEqual(rhs *Konsole__KeyboardTranslator__Entry) bool {
	return (bool)(C.Konsole__KeyboardTranslator__Entry_operatorEqual(this.h, rhs.cPointer()))
}

func (this *Konsole__KeyboardTranslator__Entry) TextWithExpandWildCards(expandWildCards bool) []byte {
	var _bytearray C.struct_miqt_string = C.Konsole__KeyboardTranslator__Entry_textWithExpandWildCards(this.h, (C.bool)(expandWildCards))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *Konsole__KeyboardTranslator__Entry) Text2(expandWildCards bool, modifiers qt.KeyboardModifier) []byte {
	var _bytearray C.struct_miqt_string = C.Konsole__KeyboardTranslator__Entry_text2(this.h, (C.bool)(expandWildCards), (C.int)(modifiers))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *Konsole__KeyboardTranslator__Entry) EscapedTextWithExpandWildCards(expandWildCards bool) []byte {
	var _bytearray C.struct_miqt_string = C.Konsole__KeyboardTranslator__Entry_escapedTextWithExpandWildCards(this.h, (C.bool)(expandWildCards))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *Konsole__KeyboardTranslator__Entry) EscapedText2(expandWildCards bool, modifiers qt.KeyboardModifier) []byte {
	var _bytearray C.struct_miqt_string = C.Konsole__KeyboardTranslator__Entry_escapedText2(this.h, (C.bool)(expandWildCards), (C.int)(modifiers))
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *Konsole__KeyboardTranslator__Entry) ResultToStringWithExpandWildCards(expandWildCards bool) string {
	var _ms C.struct_miqt_string = C.Konsole__KeyboardTranslator__Entry_resultToStringWithExpandWildCards(this.h, (C.bool)(expandWildCards))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *Konsole__KeyboardTranslator__Entry) ResultToString2(expandWildCards bool, modifiers qt.KeyboardModifier) string {
	var _ms C.struct_miqt_string = C.Konsole__KeyboardTranslator__Entry_resultToString2(this.h, (C.bool)(expandWildCards), (C.int)(modifiers))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *Konsole__KeyboardTranslator__Entry) Delete() {
	C.Konsole__KeyboardTranslator__Entry_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *Konsole__KeyboardTranslator__Entry) GoGC() {
	runtime.SetFinalizer(this, func(this *Konsole__KeyboardTranslator__Entry) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
