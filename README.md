# color
A simple string colorizer

## Installation
`color` can be installed by opening a terminal in the directory you downloaded the source. For example:
```bash
$ cd ~/Downloads
```
Then extract the source folder:
If you downloaded `color` in .zip format:
```bash
$ unzip color-<current release>.zip
```
For .tar.gz format:
```bash
$ tar xzf color-<current release>.tar.gz
```
Then `cd` into the newly created directory:
```bash
$ cd color-<current release>
```
Then build `color`:
```bash
$ ./configure
<configure output>
$ make
<build output>
```
Optionally, you can install the program (after building):
```bash
$ sudo make install
```
If you do not install the program, then you must call `color` by typing the path of the directory you installed it in, for example:
```bash
$ ~/Downloads/color-0.2/color "ayy lmao"
ayy lmao
```
You can also make an alias in your ~/.bashrc (or .zshrc, etc...):
```bash
alias color="~/Downloads/color-0.2/color"
```

## Usage
Invoke this program with the command `color` followed by an **escaped or quoted** string.
You can also simply type `color`, which will bring up an interactive prompt. Commands can also be piped to `color`, like so:
```bash
$ fortune | color
```

### Example usage
```bash
$ color 'Hello World!'
Hello World!
$ color Hello\ World!
Hello World!
$ color
>Hello World!
Hello World!
>\q
$
```

