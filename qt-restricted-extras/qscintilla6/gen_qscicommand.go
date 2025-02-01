package qscintilla6

/*

#include "gen_qscicommand.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QsciCommand__Command int

const (
	QsciCommand__LineDown                QsciCommand__Command = 2300
	QsciCommand__LineDownExtend          QsciCommand__Command = 2301
	QsciCommand__LineDownRectExtend      QsciCommand__Command = 2426
	QsciCommand__LineScrollDown          QsciCommand__Command = 2342
	QsciCommand__LineUp                  QsciCommand__Command = 2302
	QsciCommand__LineUpExtend            QsciCommand__Command = 2303
	QsciCommand__LineUpRectExtend        QsciCommand__Command = 2427
	QsciCommand__LineScrollUp            QsciCommand__Command = 2343
	QsciCommand__ScrollToStart           QsciCommand__Command = 2628
	QsciCommand__ScrollToEnd             QsciCommand__Command = 2629
	QsciCommand__VerticalCentreCaret     QsciCommand__Command = 2619
	QsciCommand__ParaDown                QsciCommand__Command = 2413
	QsciCommand__ParaDownExtend          QsciCommand__Command = 2414
	QsciCommand__ParaUp                  QsciCommand__Command = 2415
	QsciCommand__ParaUpExtend            QsciCommand__Command = 2416
	QsciCommand__CharLeft                QsciCommand__Command = 2304
	QsciCommand__CharLeftExtend          QsciCommand__Command = 2305
	QsciCommand__CharLeftRectExtend      QsciCommand__Command = 2428
	QsciCommand__CharRight               QsciCommand__Command = 2306
	QsciCommand__CharRightExtend         QsciCommand__Command = 2307
	QsciCommand__CharRightRectExtend     QsciCommand__Command = 2429
	QsciCommand__WordLeft                QsciCommand__Command = 2308
	QsciCommand__WordLeftExtend          QsciCommand__Command = 2309
	QsciCommand__WordRight               QsciCommand__Command = 2310
	QsciCommand__WordRightExtend         QsciCommand__Command = 2311
	QsciCommand__WordLeftEnd             QsciCommand__Command = 2439
	QsciCommand__WordLeftEndExtend       QsciCommand__Command = 2440
	QsciCommand__WordRightEnd            QsciCommand__Command = 2441
	QsciCommand__WordRightEndExtend      QsciCommand__Command = 2442
	QsciCommand__WordPartLeft            QsciCommand__Command = 2390
	QsciCommand__WordPartLeftExtend      QsciCommand__Command = 2391
	QsciCommand__WordPartRight           QsciCommand__Command = 2392
	QsciCommand__WordPartRightExtend     QsciCommand__Command = 2393
	QsciCommand__Home                    QsciCommand__Command = 2312
	QsciCommand__HomeExtend              QsciCommand__Command = 2313
	QsciCommand__HomeRectExtend          QsciCommand__Command = 2430
	QsciCommand__HomeDisplay             QsciCommand__Command = 2345
	QsciCommand__HomeDisplayExtend       QsciCommand__Command = 2346
	QsciCommand__HomeWrap                QsciCommand__Command = 2349
	QsciCommand__HomeWrapExtend          QsciCommand__Command = 2450
	QsciCommand__VCHome                  QsciCommand__Command = 2331
	QsciCommand__VCHomeExtend            QsciCommand__Command = 2332
	QsciCommand__VCHomeRectExtend        QsciCommand__Command = 2431
	QsciCommand__VCHomeWrap              QsciCommand__Command = 2453
	QsciCommand__VCHomeWrapExtend        QsciCommand__Command = 2454
	QsciCommand__LineEnd                 QsciCommand__Command = 2314
	QsciCommand__LineEndExtend           QsciCommand__Command = 2315
	QsciCommand__LineEndRectExtend       QsciCommand__Command = 2432
	QsciCommand__LineEndDisplay          QsciCommand__Command = 2347
	QsciCommand__LineEndDisplayExtend    QsciCommand__Command = 2348
	QsciCommand__LineEndWrap             QsciCommand__Command = 2451
	QsciCommand__LineEndWrapExtend       QsciCommand__Command = 2452
	QsciCommand__DocumentStart           QsciCommand__Command = 2316
	QsciCommand__DocumentStartExtend     QsciCommand__Command = 2317
	QsciCommand__DocumentEnd             QsciCommand__Command = 2318
	QsciCommand__DocumentEndExtend       QsciCommand__Command = 2319
	QsciCommand__PageUp                  QsciCommand__Command = 2320
	QsciCommand__PageUpExtend            QsciCommand__Command = 2321
	QsciCommand__PageUpRectExtend        QsciCommand__Command = 2433
	QsciCommand__PageDown                QsciCommand__Command = 2322
	QsciCommand__PageDownExtend          QsciCommand__Command = 2323
	QsciCommand__PageDownRectExtend      QsciCommand__Command = 2434
	QsciCommand__StutteredPageUp         QsciCommand__Command = 2435
	QsciCommand__StutteredPageUpExtend   QsciCommand__Command = 2436
	QsciCommand__StutteredPageDown       QsciCommand__Command = 2437
	QsciCommand__StutteredPageDownExtend QsciCommand__Command = 2438
	QsciCommand__Delete                  QsciCommand__Command = 2180
	QsciCommand__DeleteBack              QsciCommand__Command = 2326
	QsciCommand__DeleteBackNotLine       QsciCommand__Command = 2344
	QsciCommand__DeleteWordLeft          QsciCommand__Command = 2335
	QsciCommand__DeleteWordRight         QsciCommand__Command = 2336
	QsciCommand__DeleteWordRightEnd      QsciCommand__Command = 2518
	QsciCommand__DeleteLineLeft          QsciCommand__Command = 2395
	QsciCommand__DeleteLineRight         QsciCommand__Command = 2396
	QsciCommand__LineDelete              QsciCommand__Command = 2338
	QsciCommand__LineCut                 QsciCommand__Command = 2337
	QsciCommand__LineCopy                QsciCommand__Command = 2455
	QsciCommand__LineTranspose           QsciCommand__Command = 2339
	QsciCommand__LineDuplicate           QsciCommand__Command = 2404
	QsciCommand__SelectAll               QsciCommand__Command = 2013
	QsciCommand__MoveSelectedLinesUp     QsciCommand__Command = 2620
	QsciCommand__MoveSelectedLinesDown   QsciCommand__Command = 2621
	QsciCommand__SelectionDuplicate      QsciCommand__Command = 2469
	QsciCommand__SelectionLowerCase      QsciCommand__Command = 2340
	QsciCommand__SelectionUpperCase      QsciCommand__Command = 2341
	QsciCommand__SelectionCut            QsciCommand__Command = 2177
	QsciCommand__SelectionCopy           QsciCommand__Command = 2178
	QsciCommand__Paste                   QsciCommand__Command = 2179
	QsciCommand__EditToggleOvertype      QsciCommand__Command = 2324
	QsciCommand__Newline                 QsciCommand__Command = 2329
	QsciCommand__Formfeed                QsciCommand__Command = 2330
	QsciCommand__Tab                     QsciCommand__Command = 2327
	QsciCommand__Backtab                 QsciCommand__Command = 2328
	QsciCommand__Cancel                  QsciCommand__Command = 2325
	QsciCommand__Undo                    QsciCommand__Command = 2176
	QsciCommand__Redo                    QsciCommand__Command = 2011
	QsciCommand__ZoomIn                  QsciCommand__Command = 2333
	QsciCommand__ZoomOut                 QsciCommand__Command = 2334
	QsciCommand__ReverseLines            QsciCommand__Command = 2354
)

type QsciCommand struct {
	h *C.QsciCommand
}

func (this *QsciCommand) cPointer() *C.QsciCommand {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QsciCommand) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQsciCommand constructs the type using only CGO pointers.
func newQsciCommand(h *C.QsciCommand) *QsciCommand {
	if h == nil {
		return nil
	}

	return &QsciCommand{h: h}
}

// UnsafeNewQsciCommand constructs the type using only unsafe pointers.
func UnsafeNewQsciCommand(h unsafe.Pointer) *QsciCommand {
	return newQsciCommand((*C.QsciCommand)(h))
}

func (this *QsciCommand) Command() QsciCommand__Command {
	return (QsciCommand__Command)(C.QsciCommand_command(this.h))
}

func (this *QsciCommand) Execute() {
	C.QsciCommand_execute(this.h)
}

func (this *QsciCommand) SetKey(key int) {
	C.QsciCommand_setKey(this.h, (C.int)(key))
}

func (this *QsciCommand) SetAlternateKey(altkey int) {
	C.QsciCommand_setAlternateKey(this.h, (C.int)(altkey))
}

func (this *QsciCommand) Key() int {
	return (int)(C.QsciCommand_key(this.h))
}

func (this *QsciCommand) AlternateKey() int {
	return (int)(C.QsciCommand_alternateKey(this.h))
}

func QsciCommand_ValidKey(key int) bool {
	return (bool)(C.QsciCommand_validKey((C.int)(key)))
}

func (this *QsciCommand) Description() string {
	var _ms C.struct_miqt_string = C.QsciCommand_description(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QsciCommand) Delete() {
	C.QsciCommand_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QsciCommand) GoGC() {
	runtime.SetFinalizer(this, func(this *QsciCommand) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
