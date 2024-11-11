package main

import (
	"embed"
	"fmt"
	"io/ioutil"
	"os"
	"path/filepath"
	"strings"

	qt "github.com/mappu/miqt/qt6"
)

//go:embed README.md
var embedContent embed.FS

const (
	lineNumberRole = int(qt.UserRole + 1)
)

type AppWindow struct {
	w  *qt.QMainWindow
	cw *qt.QWidget

	tabs *qt.QTabWidget
}

type AppTab struct {
	tab      *qt.QWidget
	outline  *qt.QListWidget
	textArea *qt.QTextEdit
}

func NewAppTab() *AppTab {
	var ret AppTab

	tab := qt.NewQWidget2()
	ret.tab = tab

	layout := qt.NewQHBoxLayout(tab)

	panes := qt.NewQSplitter2()
	layout.AddWidget(panes.QWidget)

	ret.outline = qt.NewQListWidget(tab)
	panes.AddWidget(ret.outline.QWidget)
	ret.outline.OnCurrentItemChanged(ret.handleJumpToBookmark)

	ret.textArea = qt.NewQTextEdit(tab)
	ret.textArea.OnTextChanged(ret.handleTextChanged)

	panes.AddWidget(ret.textArea.QWidget)

	panes.SetSizes([]int{250, 550})

	return &ret
}

func NewAppWindow() *AppWindow {
	ret := AppWindow{}

	ret.w = qt.NewQMainWindow2()
	ret.w.SetWindowTitle("Markdown Outliner")

	// Menu

	mnu := qt.NewQMenuBar2()
	fileMenu := mnu.AddMenuWithTitle("&File")

	newtab := fileMenu.QWidget.AddActionWithText("New Tab")
	newtab.SetShortcut(qt.NewQKeySequence2("Ctrl+N"))
	newtab.SetIcon(qt.QIcon_FromTheme("document-new"))
	newtab.OnTriggered(func() {
		ret.createTabWithContents("New Document", "")
	})

	open := fileMenu.QWidget.AddActionWithText("Open...")
	open.SetShortcut(qt.NewQKeySequence2("Ctrl+O"))
	open.SetIcon(qt.QIcon_FromTheme("document-open"))
	open.OnTriggered(ret.handleFileOpen)

	fileMenu.AddSeparator()
	exit := fileMenu.QWidget.AddActionWithText("Exit")
	exit.SetShortcut(qt.NewQKeySequence2("Ctrl+Q"))
	exit.SetIcon(qt.QIcon_FromTheme("application-exit"))
	exit.OnTriggered(func() {
		os.Exit(0)
	})

	helpMenu := mnu.AddMenuWithTitle("&Help")
	aboutQt := helpMenu.QWidget.AddActionWithText("About Qt")
	aboutQt.SetIcon(qt.QIcon_FromTheme("help-about"))
	aboutQt.SetShortcut(qt.NewQKeySequence2("F1"))
	aboutQt.OnTriggered(func() {
		qt.QApplication_AboutQt()
	})
	ret.w.SetMenuBar(mnu)

	// Main widgets

	ret.tabs = qt.NewQTabWidget(ret.w.QWidget)
	ret.tabs.SetTabsClosable(true)
	ret.tabs.OnTabCloseRequested(func(index int) {
		ret.handleTabClose(index)
	})

	ret.w.SetCentralWidget(ret.tabs.QWidget)

	// Add initial tab

	sampleContent, err := embedContent.ReadFile("README.md")
	if err != nil {
		panic(err)
	}
	ret.createTabWithContents("README.md", string(sampleContent))

	return &ret
}

func (a *AppWindow) handleTabClose(tabIndex int) {
	a.tabs.RemoveTab(tabIndex)
}

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

	a.createTabWithContents(filepath.Base(fname), string(contents))
}

func (a *AppWindow) createTabWithContents(tabTitle, tabContent string) {
	tab := NewAppTab()
	tab.textArea.SetText(tabContent)

	tabIdx := a.tabs.AddTab2(tab.tab, qt.QIcon_FromTheme("text-markdown"), tabTitle)
	a.tabs.SetCurrentIndex(tabIdx)
}

func (t *AppTab) handleTextChanged() {
	content := t.textArea.ToPlainText()
	t.updateOutlineForContent(content)
}

func (t *AppTab) updateOutlineForContent(content string) {
	t.outline.Clear()

	lines := strings.Split(content, "\n")

	for lineNumber, line := range lines {
		if strings.HasPrefix(line, `#`) {
			bookmark := qt.NewQListWidgetItem7(line, t.outline)
			bookmark.SetToolTip(fmt.Sprintf("Line %d", lineNumber+1))
			bookmark.SetData(lineNumberRole, qt.NewQVariant4(lineNumber))
		}
	}
}

func (t *AppTab) handleJumpToBookmark(current *qt.QListWidgetItem, previous *qt.QListWidgetItem) {
	itm := t.outline.CurrentItem()
	if itm == nil {
		return
	}

	lineNumber := itm.Data(lineNumberRole).ToInt()

	targetBlock := t.textArea.Document().FindBlockByLineNumber(lineNumber)
	t.textArea.SetTextCursor(qt.NewQTextCursor4(targetBlock))

	t.textArea.SetFocus()
}

func main() {
	qt.NewQApplication(os.Args)

	app := NewAppWindow()
	app.w.Show()

	qt.QApplication_Exec()
}
