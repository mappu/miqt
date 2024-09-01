package main

import (
	"fmt"
	"io/ioutil"
	"os"
	"strings"

	"github.com/mappu/miqt/qt"
)

const sampleContent = `# Markdown Outliner

This is sample markdown content.

## Features

- You can use the outline on the left to jump to parts of the document
- Demonstrates use of the MIQT library`

type AppWindow struct {
	w        *qt.QMainWindow
	cw       *qt.QWidget
	outline  *qt.QListWidget
	textArea *qt.QTextEdit
}

func NewAppWindow() *AppWindow {

	ret := AppWindow{}

	ret.w = qt.NewQMainWindow()
	ret.w.SetWindowTitle("Markdown Outliner")

	// Menu

	mnu := qt.NewQMenuBar()
	fileMenu := mnu.AddMenuWithTitle("&File")
	open := fileMenu.AddAction("Open...")
	open.SetShortcut(qt.NewQKeySequence2("Ctrl+O"))
	open.OnTriggered1(ret.handleFileOpen)
	fileMenu.AddSeparator()
	exit := fileMenu.AddAction("Exit")
	exit.OnTriggered1(func() {
		os.Exit(0)
	})

	helpMenu := mnu.AddMenuWithTitle("&Help")
	aboutQt := helpMenu.AddAction("About Qt")
	aboutQt.SetShortcut(qt.NewQKeySequence2("F1"))
	aboutQt.OnTriggered1(func() {
		qt.QApplication_AboutQt()
	})
	ret.w.SetMenuBar(mnu)

	// Main widgets

	ret.cw = qt.NewQWidget2(ret.w.QWidget)
	ret.w.SetCentralWidget(ret.cw)
	layout := qt.NewQHBoxLayout2(ret.cw)

	panes := qt.NewQSplitter()
	layout.AddWidget(panes.QWidget)

	ret.outline = qt.NewQListWidget2(ret.cw)
	panes.AddWidget(ret.outline.QWidget)
	ret.outline.OnCurrentItemChanged(ret.handleJumpToBookmark)

	ret.textArea = qt.NewQTextEdit3(ret.cw)
	ret.textArea.OnTextChanged(ret.handleTextChanged)
	ret.textArea.SetText(sampleContent)
	panes.AddWidget(ret.textArea.QWidget)

	panes.SetSizes([]int{250, 550})

	return &ret
}

const lineNumberRole = 0x0100 // Qt::UserDataRole

func (a *AppWindow) handleFileOpen() {
	fname := qt.QFileDialog_GetOpenFileName4(a.w.QWidget, "Open markdown file...", "", "Markdown files (*.md *.txt);;All Files (*)")
	if fname == "" {
		return
	}

	contents, err := ioutil.ReadFile(fname)
	if err != nil {
		qt.QMessageBox_Warning(a.w.QWidget, "Failed to open file", fmt.Sprintf("Opening file %q: %v", fname, err))
		return
	}

	a.textArea.SetText(string(contents))
}

func (a *AppWindow) handleTextChanged() {
	content := a.textArea.ToPlainText()
	a.updateOutlineForContent(content)
}

func (a *AppWindow) updateOutlineForContent(content string) {
	a.outline.Clear()

	lines := strings.Split(content, "\n")

	for lineNumber, line := range lines {
		if strings.HasPrefix(line, `#`) {

			bookmark := qt.NewQListWidgetItem7(line, a.outline)
			bookmark.SetData(lineNumberRole, qt.NewQVariant5(lineNumber))
		}
	}
}

func (a *AppWindow) handleJumpToBookmark() {
	itm := a.outline.CurrentItem()
	if itm == nil {
		return
	}

	lineNumber := itm.Data(lineNumberRole).ToInt()

	targetBlock := a.textArea.Document().FindBlockByLineNumber(lineNumber)
	a.textArea.SetTextCursor(qt.NewQTextCursor4(targetBlock))

	a.textArea.SetFocus()
}

func main() {
	qt.NewQApplication(os.Args)

	app := NewAppWindow()
	app.w.Show()

	qt.QApplication_Exec()
}
