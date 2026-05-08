package main

import (
	"os"

	"github.com/mappu/miqt/qt"
)

const format = "png"

var (
	screenshot      *qt.QWidget
	screenshotLabel *qt.QLabel
	delaySpinBox    *qt.QSpinBox
	hideCheckBox    *qt.QCheckBox
	newButton       *qt.QPushButton
	originalPixmap  *qt.QPixmap
)

func main() {
	qt.NewQApplication(os.Args)

	screenshot = qt.NewQWidget2()
	defer screenshot.Delete()

	screenshot.SetWindowTitle("Qt 5 Screenshot Example")
	screenshot.SetMinimumSize2(400, 300)

	screenshotLabel = qt.NewQLabel5("Take a screenshot", screenshot)
	screenshotLabel.SetSizePolicy2(qt.QSizePolicy__Expanding, qt.QSizePolicy__Expanding)
	screenshotLabel.SetAlignment(qt.AlignCenter)

	screen := screenshot.Screen()
	rect := screen.Geometry()
	defer rect.Delete()

	screenshotLabel.SetMinimumSize2(rect.Width()/8, rect.Height()/8)

	mainLayout := qt.NewQVBoxLayout(screenshot)
	mainLayout.AddWidget(screenshotLabel.QWidget)

	optionsGroupBox := qt.NewQGroupBox4("Options", screenshot)

	delaySpinBox = qt.NewQSpinBox(optionsGroupBox.QWidget)
	delaySpinBox.SetSuffix(" s")
	delaySpinBox.SetMaximum(60)
	delaySpinBox.SetMinimum(0)
	delaySpinBox.OnValueChanged(func(value int) {
		if value == 0 {
			hideCheckBox.SetDisabled(true)
			hideCheckBox.SetChecked(false)
		} else {
			hideCheckBox.SetDisabled(false)
		}
	})

	hideCheckBox = qt.NewQCheckBox4("Hide This Window", optionsGroupBox.QWidget)

	optionsLayout := qt.NewQGridLayout(optionsGroupBox.QWidget)
	optionsLayout.AddWidget2(qt.NewQLabel5("Screenshot Delay:", screenshot).QWidget, 0, 0)
	optionsLayout.AddWidget2(delaySpinBox.QWidget, 0, 1)
	optionsLayout.AddWidget3(hideCheckBox.QWidget, 1, 0, 1, 2)

	mainLayout.AddWidget(optionsGroupBox.QWidget)

	newButton = qt.NewQPushButton5("New Screenshot", screenshot)
	newButton.OnClicked(func() {
		if hideCheckBox.IsChecked() {
			screenshot.Hide()
		}

		timer := qt.NewQTimer2(screenshot.QObject)
		timer.SetSingleShot(true)
		timer.OnTimeout(shootScreenshot)
		timer.Start(delaySpinBox.Value() * 1000)
	})

	saveButton := qt.NewQPushButton5("Save Screenshot", screenshot)
	saveButton.OnClicked(func() {
		initialPath := qt.QStandardPaths_WritableLocation(qt.QStandardPaths__PicturesLocation)

		if initialPath == "" {
			initialPath = qt.QDir_CurrentPath()
		}

		initialPath = initialPath + "/untitled." + format

		fileDialog := qt.NewQFileDialog5(screenshot, "Save As", initialPath)
		fileDialog.SetAcceptMode(qt.QFileDialog__AcceptSave)
		fileDialog.SetFileMode(qt.QFileDialog__AnyFile)
		fileDialog.SetDirectory(initialPath)

		mimeTypes := qt.QImageWriter_SupportedMimeTypes()
		supportedTypes := make([]string, len(mimeTypes))
		for i, mimeType := range mimeTypes {
			supportedTypes[i] = string(mimeType)
		}
		fileDialog.SetMimeTypeFilters(supportedTypes)
		fileDialog.SelectMimeTypeFilter("image/" + format)
		fileDialog.SetDefaultSuffix(format)

		if fileDialog.Exec() != int(qt.QDialog__Accepted) {
			return
		}

		selectedFiles := fileDialog.SelectedFiles()
		if len(selectedFiles) == 0 {
			return
		}

		if !originalPixmap.Save(selectedFiles[0]) {
			savePath := qt.QDir_ToNativeSeparators(selectedFiles[0])
			qt.QMessageBox_Warning(screenshot, "Save Error", "Failed to save screenshot to "+savePath)
		}
	})

	quitShortcut := qt.NewQKeySequence3(int(qt.ControlModifier) | int(qt.Key_Q))
	defer quitShortcut.Delete()

	quitButton := qt.NewQPushButton5("Quit", screenshot)
	quitButton.SetShortcut(quitShortcut)
	quitButton.OnClicked(func() {
		qt.QCoreApplication_Quit()
	})

	buttonsLayout := qt.NewQHBoxLayout2()
	buttonsLayout.AddWidget(newButton.QWidget)
	buttonsLayout.AddWidget(saveButton.QWidget)
	buttonsLayout.AddWidget(quitButton.QWidget)
	buttonsLayout.AddStretch()

	mainLayout.AddLayout(buttonsLayout.QLayout)

	shootScreenshot()

	delaySpinBox.SetValue(5)

	availableGeometry := screen.AvailableGeometry()
	defer availableGeometry.Delete()

	topLeftPoint := availableGeometry.TopLeft()
	defer topLeftPoint.Delete()

	offset := qt.NewQPoint2(50, 50)
	defer offset.Delete()

	topLeftPoint.OperatorPlusAssign(offset)

	screenshot.MoveWithQPoint(topLeftPoint)
	screenshot.OnResizeEvent(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent) {
		scaledSize := originalPixmap.Size()
		defer scaledSize.Delete()

		labelSize := screenshotLabel.Size()
		defer labelSize.Delete()

		scaledSize.Scale2(labelSize, qt.KeepAspectRatio)

		pixmap := screenshotLabel.Pixmap()
		size := pixmap.Size()
		defer size.Delete()

		if scaledSize != size {
			updateScreenshotLabel()
		}
	})

	screenshot.Show()

	qt.QApplication_Exec()
}

func shootScreenshot() {
	screen := qt.QGuiApplication_PrimaryScreen()
	window := screenshot.WindowHandle()

	if window != nil {
		screen = window.Screen()
	}

	if screen == nil {
		return
	}

	if delaySpinBox.Value() != 0 {
		qt.QApplication_Beep()
	}

	originalPixmap = screen.GrabWindow(0)
	updateScreenshotLabel()

	newButton.SetDisabled(false)
	if hideCheckBox.IsChecked() {
		screenshot.Show()
	}
}

func updateScreenshotLabel() {
	size := screenshotLabel.Size()
	defer size.Delete()

	pixmap := originalPixmap.Scaled5(size, qt.KeepAspectRatio, qt.SmoothTransformation)
	defer pixmap.Delete()

	screenshotLabel.SetPixmap(pixmap)
}
