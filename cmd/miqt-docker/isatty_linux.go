//+build linux
//go:build linux

package main

import (
	"os"
	"syscall"
	"unsafe"
)

func isatty() bool {
	fd := os.Stdout.Fd()
	req := syscall.TCGETS
	termios := syscall.Termios{}

	_, _, errno := syscall.Syscall(syscall.SYS_IOCTL, uintptr(fd), uintptr(req), uintptr(unsafe.Pointer(&termios)))
	if errno != 0 {
		return false
	}

	// Successfully got Termios info = stdout is a tty
	return true
}
