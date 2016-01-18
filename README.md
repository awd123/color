# color
A simple string colorizer

## Usage
Invoke this program with the command `color` followed by an **escaped or quoted** string. As of the current time, color cannot recieve input via stdin, but I'm working on that.

### Example usage
```bash
$ /path/to/color 'Hello World!'
Hello World!
$ /path/to/color Hello\ World!
Hello World!
$ /path/to/color
>Hello World!
Hello World!
>\q
$
```
