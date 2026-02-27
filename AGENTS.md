# HelloWorld 初始化摘要

> 使用cmake + gcc 构建一个简单的 C 语言项目

## 提示词
如果用户输入了`初始化工程` `构建工程` `构建项目`等提示词，且工程目录下没有`CMakeLists.txt`文件，则严格按照本文档的内容创建一个简单的 C 语言项目，构建编译运行验证。

## 环境要求
- `cmake`
- `gcc`

## 文件示例
`CMakeLists.txt`文件内容示例：
```cmake
cmake_minimum_required(VERSION 3.10)

set(CMAKE_C_COMPILER "gcc")

project(HelloWorld C)

set(CMAKE_C_STANDARD 11)

add_executable(hello_world hello_world.c)
```
`hello_world.c`文件内容示例：
```c
#include <stdio.h>
int main() {
    printf("hello world\n");
    return 0;
}
```

## 编译运行命令
```bash
mkdir -p build && cd build
cmake ..
make
./hello_world
```

## 预期输出
```text
hello world
```
