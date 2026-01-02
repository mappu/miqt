package main

import (
	"os"

	qt "github.com/mappu/miqt/qt6"
	"github.com/mappu/miqt/qt6/designer"
)

const FormFile = "design.ui"

func main() {

	qt.NewQApplication(os.Args)

	widget := qt.NewQWidget2()
	defer widget.Delete()

	widget.SetWindowTitle("Qt 6 Designer Example")

	layout := qt.NewQVBoxLayout(widget)

	builder := designer.NewQFormBuilder()
	defer builder.Delete()

	file := qt.NewQFile2(FormFile)
	defer file.Delete()

	if file.Open(qt.QIODeviceBase__ReadOnly) {
		defer file.Close()

		parent := qt.NewQWidget2()
		form := builder.Load(file.QFileDevice.QIODevice, parent)
		layout.AddWidget(form)
		widget.Resize(850, 550)
	} else {
		label := qt.NewQLabel5("### Failed to open form file: " + FormFile, widget)
		label.SetTextFormat(qt.MarkdownText)
		label.SetAlignment(qt.AlignCenter)
		layout.AddWidget(label.QFrame.QWidget)
		widget.Resize(550, 100)
	}

	widget.Show()

	qt.QApplication_Exec()
}
