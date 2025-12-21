package main

import (
	"os"

	qt "github.com/mappu/miqt/qt6"
	"github.com/mappu/miqt/qt6/uitools"
)

const FormFile = "design.ui"

func main() {

	qt.QCoreApplication_SetAttribute(qt.AA_ShareOpenGLContexts)
	qt.NewQApplication(os.Args)

	widget := qt.NewQWidget2()
	defer widget.Delete()

	widget.SetWindowTitle("Qt 6 UI Tools Example")

	layout := qt.NewQVBoxLayout(widget)

	loader := uitools.NewQUiLoader()
	defer loader.Delete()

	file := qt.NewQFile2(FormFile)
	defer file.Delete()

	if file.Open(qt.QIODeviceBase__ReadOnly) {
		defer file.Close()

		parent := qt.NewQWidget2()
		form := loader.Load2(file.QFileDevice.QIODevice, parent)
		layout.AddWidget(form)
		widget.Resize(1000, 550)
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
