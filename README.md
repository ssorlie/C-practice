## C-Practice repo

Repo for some short excercises in the C language

### Tools used:

- IDE: VSCode
- Code Runner extension for VSCode
- C-Version: C17
- Compiler: GCC 13.2.0

### Code Runner extension

#### Modifications

##### Executormap

"code-runner.executorMap": Changed c execution to "cd $dir && gcc *.c -o $fileNameWithoutExt && $dir$fileNameWithoutExt".
Did the change in order to compile multiple C files at once with code runner