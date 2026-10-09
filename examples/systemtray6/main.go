package main

import (
	"os"

	qt "github.com/mappu/miqt/qt6"
)

const windowTitle = "Qt 6 System Tray Example"

func main() {
	qt.NewQApplication(os.Args)

	if !qt.QSystemTrayIcon_IsSystemTrayAvailable() {
		qt.QMessageBox_Critical(nil, windowTitle, "No system tray available.")
		return
	}

	qt.QGuiApplication_SetQuitOnLastWindowClosed(false)

	messageBox := qt.NewQGroupBox3("Balloon Message")
	typeCombo := qt.NewQComboBox2()

	noVariant := qt.NewQVariant4(int(qt.QSystemTrayIcon__NoIcon))
	infoVariant := qt.NewQVariant4(int(qt.QSystemTrayIcon__Information))
	warningVariant := qt.NewQVariant4(int(qt.QSystemTrayIcon__Warning))
	criticalVariant := qt.NewQVariant4(int(qt.QSystemTrayIcon__Critical))

	dialog := qt.NewQDialog2()
	dialog.SetWindowTitle(windowTitle)
	dialog.Resize(400, 300)
	style := dialog.Style()

	minimizeAction := qt.NewQAction5("Mi&nimize", dialog.QObject)
	minimizeAction.OnTriggered(func() {
		dialog.Hide()
	})

	maximizeAction := qt.NewQAction5("Ma&ximize", dialog.QObject)
	maximizeAction.OnTriggered(func() {
		dialog.ShowMaximized()
	})

	restoreAction := qt.NewQAction5("&Restore", dialog.QObject)
	restoreAction.OnTriggered(func() {
		dialog.ShowNormal()
	})

	quitAction := qt.NewQAction5("&Quit", dialog.QObject)
	quitAction.OnTriggered(func() {
		qt.QCoreApplication_Quit()
	})

	trayMenu := qt.NewQMenu(dialog.QWidget)
	trayMenu.AddAction(minimizeAction)
	trayMenu.AddAction(maximizeAction)
	trayMenu.AddAction(restoreAction)
	trayMenu.AddSeparator()
	trayMenu.AddAction(quitAction)

	trayIcon := qt.NewQSystemTrayIcon3(dialog.QObject)
	trayIcon.SetContextMenu(trayMenu)
	trayIcon.OnMessageClicked(func() {
		qt.QMessageBox_Information(dialog.QWidget, windowTitle,
			"Sorry, I already gave what help I could."+
				"\nMaybe you should try asking a human?")
	})

	infoIcon := style.StandardIcon(qt.QStyle__SP_MessageBoxInformation, nil, nil)
	warningIcon := style.StandardIcon(qt.QStyle__SP_MessageBoxWarning, nil, nil)
	criticalIcon := style.StandardIcon(qt.QStyle__SP_MessageBoxCritical, nil, nil)

	typeCombo.AddItem3("None", noVariant)
	typeCombo.AddItem4(infoIcon, "Information", infoVariant)
	typeCombo.AddItem4(warningIcon, "Warning", warningVariant)
	typeCombo.AddItem4(criticalIcon, "Critical", criticalVariant)
	typeCombo.SetCurrentIndex(1)

	durationLabel := qt.NewQLabel3("Duration:")
	durationSpinBox := qt.NewQSpinBox2()
	durationSpinBox.SetRange(5, 60)
	durationSpinBox.SetSuffix(" s")
	durationSpinBox.SetValue(15)

	warningLabel := qt.NewQLabel3("(some systems might ignore this hint)")
	warningLabel.SetIndent(10)

	titleEdit := qt.NewQLineEdit3("Cannot connect to network")
	bodyEdit := qt.NewQTextEdit2()
	bodyEdit.SetPlainText("Don't believe me. Honestly, I don't have a clue." +
		"\nClick this balloon for details.")

	quitButton := qt.NewQPushButton3("&Quit")
	quitButton.SetFixedWidth(100)
	quitButton.OnClicked(func() {
		qt.QCoreApplication_Quit()
	})

	showButton := qt.NewQPushButton3("Show Message")
	showButton.SetDefault(true)
	showButton.OnClicked(func() {
		typeVariant := typeCombo.ItemData(typeCombo.CurrentIndex())
		selectedIcon := typeVariant.ToInt()
		trayIcon.ShowMessage5(titleEdit.Text(), bodyEdit.ToPlainText(),
			qt.QSystemTrayIcon__MessageIcon(selectedIcon),
			durationSpinBox.Value()*1000)
	})

	messageLayout := qt.NewQGridLayout2()
	messageLayout.AddWidget2(qt.NewQLabel3("Type:").QWidget, 0, 0)
	messageLayout.AddWidget3(typeCombo.QWidget, 0, 1, 1, 2)
	messageLayout.AddWidget2(durationLabel.QWidget, 1, 0)
	messageLayout.AddWidget2(durationSpinBox.QWidget, 1, 1)
	messageLayout.AddWidget3(warningLabel.QWidget, 1, 2, 1, 3)
	messageLayout.AddWidget2(qt.NewQLabel3("Title:").QWidget, 2, 0)
	messageLayout.AddWidget3(titleEdit.QWidget, 2, 1, 1, 4)
	messageLayout.AddWidget2(qt.NewQLabel3("Body:").QWidget, 3, 0)
	messageLayout.AddWidget3(bodyEdit.QWidget, 3, 1, 2, 4)
	messageLayout.AddWidget2(showButton.QWidget, 5, 4)
	messageLayout.SetColumnStretch(3, 1)
	messageLayout.SetRowStretch(4, 1)
	messageBox.SetLayout(messageLayout.QLayout)

	layout := qt.NewQVBoxLayout2()
	layout.AddWidget(messageBox.QWidget)
	layout.AddWidget(quitButton.QWidget)
	dialog.SetLayout(layout.QLayout)
	dialog.SetWindowIcon(infoIcon)
	trayIcon.SetIcon(infoIcon)

	trayIcon.Show()
	dialog.Show()

	qt.QApplication_Exec()
}
