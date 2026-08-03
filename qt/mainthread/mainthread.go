package mainthread

import (
	"sync"
	"runtime/cgo"
)

/*
#cgo CXXFLAGS: -std=c++11
#cgo pkg-config: Qt5Core

#include "mainthread.h"
*/
import "C"

// Start runs the callback in the main Qt thread. You should use this whenever
// accessing the main Qt GUI from inside a goroutine.
// This function is non-blocking.
func Start(gofunc func()) {
	h := cgo.NewHandle(gofunc)

	C.mainthread_exec(C.intptr_t(h))
}

// IsCurrent reports whether the calling thread is the Qt main thread.
func IsCurrent() bool {
	return C.mainthread_is_current() != 0
}

// Wait runs the callback in the main Qt thread. You should use this whenever
// accessing the main Qt GUI from inside a goroutine.
// The call blocks until the callback is executed in the main thread's eventloop.
//
// If called from the Qt main thread itself, the callback is invoked directly:
// queueing onto the main thread's event loop and then waiting for it would
// deadlock (the main thread is blocked in wg.Wait() and can't process the
// queued event). This makes Wait safe to call from code that may run on
// either a goroutine or the main thread (e.g. a slot invoked indirectly from
// both an event handler and a background worker).
func Wait(gofunc func()) {
	if IsCurrent() {
		gofunc()
		return
	}
	// It's possible to use Qt::BlockingQueuedConnection to implement the
	// blocking, but it has a deadlock risk
	var wg sync.WaitGroup
	wg.Add(1)
	outerfunc := func() {
		gofunc()
		wg.Done()
	}
	Start(outerfunc)
	wg.Wait()
}

func Wait2[T any](gofunc func() T) (ret T) {
	outerfunc := func() {
		ret = gofunc()
	}
	Wait(outerfunc)
	return ret
}

func Wait3[T any](gofunc func() (T, error)) (ret T, err error) {
	outerfunc := func() {
		ret, err = gofunc()
	}
	Wait(outerfunc)
	return ret, err
}

//export mainthread_exec_handle
func mainthread_exec_handle(u uintptr) {
	h := cgo.Handle(u)

	gofunc, ok := h.Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

	// Free handle after use
	h.Delete()
}
