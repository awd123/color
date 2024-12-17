# color
A simple string colorizer

## Building
`color` is distributed as a single C file, so it is quite easy to build.
Simply run `gcc -o color color.c` in this directory, then install the binary in
a directory of your choice (for example ~/.local/bin), if desired.

## Usage
Invoke this program with the command `color` followed by an **escaped or quoted** string.
You can also simply type `color`, which will bring up an interactive prompt. Commands can also be piped to `color`, like so:
```bash
$ fortune | color
```
