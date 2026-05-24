package main

import (
	"os"

	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt-extras/qwt"
)

func main() {

	qt.NewQApplication(os.Args)

	systemBox := qt.NewQFrame2()
	defer systemBox.Delete()

	layout := qt.NewQHBoxLayout(systemBox.QWidget)
	layout.SetContentsMargins(10, 10, 10, 10)
	layout.AddWidget2(newMemoryBox().QWidget, 0)
	layout.AddWidget2(newCpuBox().QWidget, 0)

	systemBox.SetWindowTitle("Qt 5 Qwt Example")
	systemBox.Resize(600, 400)
	systemBox.Show()

	qt.QApplication_Exec()
}

func newMemoryBox() *qt.QGroupBox {
	memoryBox := newInfoBox(qt.Vertical, "Memory Usage")
	orientation := qt.Horizontal
	layout := qt.UnsafeNewQBoxLayout(memoryBox.Layout().UnsafePointer())
	layout.AddWidget(newValueBar(orientation, "Used", 57))
	layout.AddWidget(newValueBar(orientation, "Shared", 17))
	layout.AddWidget(newValueBar(orientation, "Cache", 30))
	layout.AddWidget(newValueBar(orientation, "Buffers", 22))
	layout.AddWidget(newValueBar(orientation, "Swap Used", 57))
	layout.AddWidget2(qt.NewQWidget2(), 10)

	return memoryBox
}

func newCpuBox() *qt.QGroupBox {
	cpuBox := newInfoBox(qt.Horizontal, "CPU Usage")
	orientation := qt.Vertical
	layout := qt.UnsafeNewQBoxLayout(cpuBox.Layout().UnsafePointer())
	layout.AddWidget(newValueBar(orientation, "User", 57))
	layout.AddWidget(newValueBar(orientation, "Total", 73))
	layout.AddWidget(newValueBar(orientation, "System", 16))
	layout.AddWidget(newValueBar(orientation, "Idle", 27))

	return cpuBox
}

func newInfoBox(orientation qt.Orientation, title string) *qt.QGroupBox {
	infoBox := qt.NewQGroupBox3(title)
	margin := 15
	spacing := 5

	direction := qt.QBoxLayout__LeftToRight
	if orientation == qt.Vertical {
		direction = qt.QBoxLayout__TopToBottom
	}

	layout := qt.NewQBoxLayout2(direction, infoBox.QWidget)
	layout.SetContentsMargins(margin, margin, margin, margin)
	layout.SetSpacing(spacing)

	font := qt.NewQFont6("Helvetica", 10)
	defer font.Delete()

	infoBox.SetFont(font)

	return infoBox
}

func newValueBar(orientation qt.Orientation, text string, value float64) *qt.QWidget {
	valueBar := qt.NewQWidget2()
	label := qt.NewQLabel3(text)
	font := qt.NewQFont6("Helvetica", 10)
	defer font.Delete()

	label.SetFont(font)

	gauge := qwt.NewQwtThermo2()
	gauge.SetScale(0, 100)
	gauge.SetFont(font)
	gauge.SetPipeWidth(6)
	gauge.SetScaleMaxMajor(6)
	gauge.SetScaleMaxMinor(5)
	gauge.SetValue(value)
	gauge.SetOrientation(orientation)

	var brush *qt.QBrush
	lightness := gauge.Palette().ColorWithCr(qt.QPalette__Base).Lightness()

	if lightness < 128 {
		brush = qt.NewQBrush4(qt.LightGray)
	} else {
		brush = qt.NewQBrush4(qt.DarkGray)
	}
	defer brush.Delete()

	gauge.SetFillBrush(brush)

	layout := qt.NewQVBoxLayout(valueBar)
	margins := qt.NewQMargins()
	defer margins.Delete()

	layout.SetContentsMarginsWithMargins(margins)
	layout.SetSpacing(0)

	if orientation == qt.Horizontal {
		label.SetAlignment(qt.AlignCenter)
		gauge.SetScalePosition(qwt.QwtThermo__LeadingScale)
		layout.AddWidget(label.QWidget)
		layout.AddWidget(gauge.QWidget)
	} else {
		label.SetAlignment(qt.AlignRight)
		gauge.SetScalePosition(qwt.QwtThermo__TrailingScale)
		layout.AddWidget3(gauge.QWidget, 10, qt.AlignHCenter)
		layout.AddWidget2(label.QWidget, 0)
	}

	return valueBar
}
