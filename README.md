# LockWorkstation
Simple executable that uses the user32 function `LockWorkStation` to lock the workstation. It's equivalent to a user pushing the Windows+L key or selecting "Lock" or "Lock Computer" options from the CTRL+ALT+DEL menu.

## Operating System Support

As the API we use has support from Windows XP onward, this application supports Windows XP onward.

## I/O and Exit Status

Takes no input from standard input and outputs nothing to standard output or standard error. The exit code will be either `0` (for success) or the error code that `LockWorkStation` returns.
