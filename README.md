# Hello Codex

一个使用 **CMake + GCC** 构建的简单 C 语言示例项目。

## 项目结构

- `hello_world.c`：主程序，输出一行文本。
- `CMakeLists.txt`：CMake 构建配置。

## 环境要求

- `cmake`
- `gcc`

## 构建与运行

```bash
mkdir -p build
cd build
cmake ..
make
./hello_world
```

## 预期输出

```text
hello codex
```
