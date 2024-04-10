# Terminal Output Formatting

## aka `tof`

### Description

**In brief:**

Terminal Output Formatting (T.O.F. => tof) is a small utility that replace tags in text by corresponding ascii escape sequences (like colors, text style).
It can receive input from

**WHat it does**

_tof_ takes in input a string or a file, parse it for to find tags and return a formatted strings with corresponding ascci escape sequences to found tags.
The output can be written into a file, replace the content of the original file passed as argument with the formatted cnontent, or to the standard output.
If no arguments are provided, tof read from standard input, line by line until the stop commande is entered (see documentation for commands list in interactive mode).
If you install _tof_ see `man tof` for more explanation, help and examples.

### Installation

Download and extract the archive, or `git clone` it, `cd` to the _tof_ folder and run `make`.
You can either use _tof_ as a standalone app, or install it system wide with `make install`.

### Usage

**TODO**

