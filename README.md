# Lab 1 - Utils

## General instructions

In this lab you will be mainly working in creating commandline utils.

Important files to check:
- `Makefile` - to add your user programs to the $UPROGS
- `user/cat` - Since it does a similar thing.

## Exercise 1 - `sleep`

### Statement
Implement the `sleep` command line utility that accepts 1 optional argument `time` and calls the sleep system call with `time` as the argument.

### Tests
- sleep with no argument runs without failing.
- sleep with argument should return.
- sleep should call the `sys_sleep` system call.

### Hints
-

## Exercise 2 - `head`

### Statement

Implement the `head` command line utility that accepts 2 arguments `file_path` and `n_lines`, and displays the first n lines of a particular file.
`n_lines` is an optional 
Also add the text file `head_text.txt` to the filesystem.

### Test cases