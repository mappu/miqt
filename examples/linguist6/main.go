package main

import (
	"os"

	qt "github.com/mappu/miqt/qt6"
)

var (
	label       *qt.QLabel
	mainwindow  *qt.QMainWindow
	upButton    *qt.QPushButton
	downButton  *qt.QPushButton
	leftButton  *qt.QPushButton
	rightButton *qt.QPushButton
	exitAction  *qt.QAction
	fileMenu    *qt.QMenu
)

func main() {
	qt.NewQApplication(os.Args)

	combo := qt.NewQComboBox2()

	combo.AddItems([]string{"en", "es", "fr"})
	combo.OnCurrentTextChanged(onCurrentTextChanged)

	label = qt.NewQLabel3("L&anguage:")
	label.SetBuddy(combo.QWidget)

	mainwindow = qt.NewQMainWindow2()
	defer mainwindow.Delete()

	mainwindow.SetWindowTitle("Qt 6 Translation Example")
	mainwindow.SetMinimumSize2(460, 270)

	widget := qt.NewQWidget2()

	upButton = qt.NewQPushButton3("&Up")
	downButton = qt.NewQPushButton3("&Down")
	leftButton = qt.NewQPushButton3("&Left")
	rightButton = qt.NewQPushButton3("&Right")

	gridlayout := qt.NewQGridLayout2()

	gridlayout.AddWidget2(upButton.QWidget, 0, 1)
	gridlayout.AddWidget2(downButton.QWidget, 2, 1)
	gridlayout.AddWidget2(leftButton.QWidget, 1, 0)
	gridlayout.AddWidget2(rightButton.QWidget, 1, 2)

	vboxlayout := qt.NewQVBoxLayout2()

	vboxlayout.AddStretch()
	vboxlayout.AddWidget(label.QWidget)
	vboxlayout.AddWidget(combo.QWidget)

	gridlayout.AddLayout(vboxlayout.QLayout, 3, 0)

	widget.SetLayout(gridlayout.QLayout)
	mainwindow.SetCentralWidget(widget)

	exitAction = qt.NewQAction5("E&xit", mainwindow.QWidget.QObject)

	exitKey := qt.NewQKeySequence2("Ctrl+Q")
	defer exitKey.Delete()

	exitAction.SetShortcut(exitKey)
	exitAction.OnTriggered(onTriggered)

	fileMenu = mainwindow.MenuBar().AddMenuWithTitle("&File")
	fileMenu.AddAction(exitAction)

	mainwindow.Show()

	qt.QApplication_Exec()
}

func onTriggered() {
	mainwindow.Close()
}

func onCurrentTextChanged(text string) {
	locale := qt.NewQLocale2(text)
	defer locale.Delete()

	translator := qt.NewQTranslator()
	defer translator.Delete()

	if translator.Load7(locale, "lupdate", "_") {
		qt.QCoreApplication_InstallTranslator(translator)
		retranslate()
	}
}

func retranslate() {
	label.SetText(qt.QCoreApplication_Translate("Main", "L&anguage:"))
	upButton.SetText(qt.QCoreApplication_Translate("Main", "&Up"))
	downButton.SetText(qt.QCoreApplication_Translate("Main", "&Down"))
	leftButton.SetText(qt.QCoreApplication_Translate("Main", "&Left"))
	rightButton.SetText(qt.QCoreApplication_Translate("Main", "&Right"))
	exitAction.SetText(qt.QCoreApplication_Translate("Main", "E&xit"))
	fileMenu.SetTitle(qt.QCoreApplication_Translate("Main", "&File"))

	exitKey := qt.NewQKeySequence2(qt.QCoreApplication_Translate2("Main", "Ctrl+Q", "Quit"))
	defer exitKey.Delete()

	exitAction.SetShortcut(exitKey)
}
