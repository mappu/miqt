package main

import (
	"embed"
	"fmt"
	"io/ioutil"
	"os"
	"path/filepath"
	"strings"

	"github.com/mappu/miqt/qt"
)

//go:embed README.md
var embedContent embed.FS

const (
	lineNumberRole = int(qt.ItemDataRole__UserRole + 1)
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

	tab := qt.NewQWidget()
	ret.tab = tab

	layout := qt.NewQHBoxLayout2(tab)

	panes := qt.NewQSplitter()
	layout.AddWidget(panes.QWidget)

	ret.outline = qt.NewQListWidget2(tab)
	panes.AddWidget(ret.outline.QWidget)
	ret.outline.OnCurrentItemChanged(ret.handleJumpToBookmark)

	ret.textArea = qt.NewQTextEdit3(tab)
	ret.textArea.OnTextChanged(ret.handleTextChanged)

	panes.AddWidget(ret.textArea.QWidget)

	panes.SetSizes([]int{250, 550})

	return &ret
}

func NewAppWindow() *AppWindow {

	ret := AppWindow{}

	ret.w = qt.NewQMainWindow()
	ret.w.SetWindowTitle("Markdown Outliner")

	// Menu

	mnu := qt.NewQMenuBar()
	fileMenu := mnu.AddMenuWithTitle("&File")

	newtab := fileMenu.AddAction("New Tab")
	newtab.SetShortcut(qt.NewQKeySequence2("Ctrl+N"))
	newtab.SetIcon(qt.QIcon_FromTheme("document-new"))
	newtab.OnTriggered1(func() {
		ret.createTabWithContents("New Document", "")
	})

	open := fileMenu.AddAction("Open...")
	open.SetShortcut(qt.NewQKeySequence2("Ctrl+O"))
	open.SetIcon(qt.QIcon_FromTheme("document-open"))
	open.OnTriggered1(ret.handleFileOpen)

	fileMenu.AddSeparator()
	exit := fileMenu.AddAction("Exit")
	exit.SetIcon(qt.QIcon_FromTheme("application-exit"))
	exit.OnTriggered1(func() {
		os.Exit(0)
	})

	helpMenu := mnu.AddMenuWithTitle("&Help")
	aboutQt := helpMenu.AddAction("About Qt")
	aboutQt.SetIcon(qt.QIcon_FromTheme("help-about"))
	aboutQt.SetShortcut(qt.NewQKeySequence2("F1"))
	aboutQt.OnTriggered1(func() {
		qt.QApplication_AboutQt()
	})
	ret.w.SetMenuBar(mnu)

	// Main widgets

	ret.tabs = qt.NewQTabWidget2(ret.w.QWidget)
	ret.tabs.SetTabsClosable(true)
	ret.tabs.OnTabCloseRequested(func() {
		ret.handleTabClose(ret.tabs.CurrentIndex()) // FIXME need to get this from the signal
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
			bookmark.SetData(lineNumberRole, qt.NewQVariant5(lineNumber))
		}
	}
}

func (t *AppTab) handleJumpToBookmark() {
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
