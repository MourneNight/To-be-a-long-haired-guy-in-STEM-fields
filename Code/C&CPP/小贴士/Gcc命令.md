1. 基本编译单个文件
```zsh
gcc hello.c -o hello
```
2. 编译多个文件
```zsh
gcc file1.c file2.c -o program
```
3. 添加调试信息
```zsh
gcc -g hello.c -o hello
```
4. 优化代码
```zsh
gcc -02 hello.c -o hello
#启用优化选项 -O0 到 -O3
```
5. 链接库
```zsh
gcc hello.c -o hello -lm
# -l 后接库名
```
6. 检查版本
```zsh
gcc --version
```
7. 生成汇编代码
```zsh
gcc -S hello.c
```
8. 预处理文件
```zsh
gcc -E hello.c > hello.i
```