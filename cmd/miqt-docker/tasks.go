package main

import (
	"errors"
	"fmt"
	"os/exec"
)

// evaluateTask turns the supplied process arguments into real arguments to
// execute, handling quick command recipes as well as arbitrary execution
func evaluateTask(taskArgs []string) (retArgs []string, fixup func(*exec.Cmd), allowTty bool, err error) {

	if len(taskArgs) == 0 {
		return nil, nil, false, errors.New("No task specified")
	}

	if len(taskArgs[0]) == 0 {
		return nil, nil, false, errors.New("Empty-string first command")
	}

	// Set up defaults

	retArgs = []string{}
	fixup = func(*exec.Cmd) {} // no-op
	allowTty = true

	//

	if taskArgs[0][0] != '-' {
		// Task does not start with a hyphen = plain command
		retArgs = taskArgs
		return
	}

	switch taskArgs[0] {
	case `-build`:
		retArgs = []string{"go", "build", "-ldflags", "-s -w"}
		retArgs = append(retArgs, taskArgs[1:]...)
		return

	case `-windows-build`:
		retArgs = []string{"go", "build", "-ldflags", "-s -w -H windowsgui"}
		retArgs = append(retArgs, taskArgs[1:]...)
		return

	default:
		return nil, nil, false, fmt.Errorf("Unrecognized task %q", taskArgs[0])
	}
}
