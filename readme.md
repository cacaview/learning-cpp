# learning-cpp

这是某个苦逼为了应付考试写的练习代码，欢迎向我提pr和Issues！

你如果是手机，可以点击“view code”来查看代码，或者把网页翻到底下查看文件说明。

代码里面都有中文注释的，不要再和我说中文的问题了。其实编程语言和英语没有太大的关系，认真看总能看懂的。

## 编译方法

#### 在Linux上：

在 Linux 上编译 C++ 文件需要使用 C++ 编译器，通常是 g++。您可以按照以下步骤编译.cpp文件：

1. 打开终端并进入您的项目目录。

2. 在终端中输入以下命令，其中 filename.cpp 是您要编译的 C++ 源代码文件名：

   ```
   g++ filename.cpp -o output
   ```

   这个命令将使用 g++ 编译器将您的 C++ 源代码文件编译为可执行文件，并将其命名为 output。

3. 如果您的 C++ 代码中包含其他文件，例如头文件，您需要将这些文件包含在编译命令中，例如：

   ```
   g++ filename.cpp header1.h header2.h -o output
   ```

4. 如果编译过程中出现错误，编译器将输出错误信息。您需要根据错误信息修改您的源代码并重新编译。

5. 一旦编译成功，您可以在终端中运行可执行文件，例如：

   ```
   ./output
   ```

   这个命令将运行您的 C++ 可执行文件并输出结果。

请注意，以上命令仅供参考，具体命令可能因环境和代码而异。在编译 C++ 代码之前，请确保您已经安装了 C++ 编译器。

#### 在windows上

在 Windows 上编译 C++ 文件也需要使用 C++ 编译器，通常是 Microsoft Visual C++ 或 MinGW。您可以按照以下步骤编译.cpp文件：

1. 打开命令提示符（cmd）并进入您的项目目录。

2. 在命令提示符中输入以下命令，其中 filename.cpp 是您要编译的 C++ 源代码文件名：

   ```
   cl filename.cpp
   ```

   如果您使用的是 MinGW 编译器，则可以使用以下命令：

   ```
   g++ filename.cpp -o output.exe
   ```

   这个命令将使用 C++ 编译器将您的 C++ 源代码文件编译为可执行文件，并将其命名为 output.exe。

3. 如果您的 C++ 代码中包含其他文件，例如头文件，您需要将这些文件包含在编译命令中，例如：

   ```
   cl filename.cpp header1.h header2.h
   ```

   或者，如果您使用的是 MinGW 编译器：

   ```
   g++ filename.cpp header1.h header2.h -o output.exe
   ```

4. 如果编译过程中出现错误，编译器将输出错误信息。您需要根据错误信息修改您的源代码并重新编译。

5. 一旦编译成功，您可以在命令提示符中运行可执行文件，例如：

   ```
   output.exe
   ```

说明：MinGW安装时选择操作系统接口协议，如果你想要开发 Windows 程序，需要选择 win32 ，而开发 Linux、Unix、Mac OS 等其他操作系统下的程序，则需要选择 posix 

#### 在MacOS上

如果你使用的是 Xcode，可以按照以下步骤编译 C++ 文件：

1. 打开 Xcode 应用程序。
2. 创建一个新的 C++ 项目或打开一个已有的项目。
3. 在项目导航器中，选择要编译的 C++ 文件。
4. 如果你的项目没有设置 C++ 编译器，请选择 "Build Settings" 选项卡，并在搜索框中输入 "compiler"。然后在 "C++ Language Dialect" 和 "C++ Standard Library" 设置中选择你想要使用的 C++ 标准。通常情况下，可以选择 "C++17" 或更高版本，以使用最新的 C++ 特性和标准库。
5. 点击 "Product" 菜单，选择 "Build" 或使用快捷键 Command-B 进行编译。编译后，Xcode 会在 "Products" 文件夹中生成可执行文件。
6. 如果想要运行可执行文件，可以选择 "Product" 菜单，选择 "Run" 或使用快捷键 Command-R，Xcode 将会运行可执行文件并在控制台输出结果。

如果你需要在 Xcode 中调试 C++ 代码，可以使用 Xcode 的调试功能。在代码中设置断点，并使用调试器来检查变量值和执行流程。



如果你想使用命令行工具 gcc 或 clang。以下是基本的编译步骤：

1. 打开终端应用程序。
2. 确认已经安装了 gcc 或 clang。可以在终端输入以下命令来检查：

   ```
   gcc -v
   clang -v
   ```

   如果提示 "command not found"，则需要安装 gcc 或 clang。
   
3. 进入包含 C++ 文件的目录。可以使用 "cd" 命令来切换目录。例如：

   ```
   cd /Users/username/Documents/cpp_projects/
   ```
   
4. 编译 C++ 文件。可以使用以下命令：

   ```
   g++ -o output_file_name input_file_name.cpp
   ```

   或者：

   ```
   clang++ -o output_file_name input_file_name.cpp
   ```

   其中，output_file_name 是生成的可执行文件的名称，可以自定义；input_file_name.cpp 是要编译的 C++ 源代码文件的名称。

5. 运行生成的可执行文件。可以使用以下命令：

   ```
   ./output_file_name
   ```

   其中，output_file_name 是生成的可执行文件的名称。

注意，如果 C++ 代码中使用了特定的 C++ 标准库，可能需要在编译时指定使用的标准库。例如，如果使用了 C++11 标准库，可以在编译命令中加上 "-std=c++11" 参数。



#### 在 Android上

在安卓系统上，可以使用 Termux 应用程序来编译 C++ 文件。Termux 是一个模拟 Linux 终端的应用程序，支持在 Android 上运行常用的 Linux 命令和软件包。

以下是基本的编译步骤：

1. 下载并安装 Termux 应用程序。可以在 Google Play 商店或 F-Droid 应用商店中搜索 "Termux" 下载安装。

2. 打开 Termux 应用程序。

3. 更新 Termux 的软件包管理器并安装必要的软件包。可以使用以下命令：

   ```
   apt update
   apt upgrade
   apt install clang build-essential
   ```
   
   这将会更新软件包管理器并安装 clang 编译器和必要的构建工具。

4. 进入包含 C++ 文件的目录。可以使用 "cd" 命令来切换目录。例如：

   ```
   cd /storage/emulated/0/Documents/cpp_projects/
   ```
   
   如果需要访问外部存储器，需要授予 Termux 存储权限，可以在 Termux 中输入以下命令并按照提示操作：

   ```
   termux-setup-storage
   ```

5. 编译 C++ 文件。可以使用以下命令：

   ```
   clang++ -o output_file_name input_file_name.cpp
   ```

   其中，output_file_name 是生成的可执行文件的名称，可以自定义；input_file_name.cpp 是要编译的 C++ 源代码文件的名称。

6. 运行生成的可执行文件。可以使用以下命令：

   ```
   ./output_file_name
   ```

   其中，output_file_name 是生成的可执行文件的名称。

注意，如果 C++ 代码中使用了特定的 C++ 标准库，可能需要在编译时指定使用的标准库。例如，如果使用了 C++11 标准库，可以在编译命令中加上 "-std=c++11" 参数。



#### 在IOS上

在 iOS 上使用 iSH 编译 C++ 文件需要安装 iSH 应用程序，然后安装 C++ 编译器，例如 g++ 或 clang。

以下是基本的编译步骤：

1. 在 App Store 中搜索并安装 iSH 应用程序。
2. 打开 iSH 应用程序。
3. 在 iSH 终端中，安装 C++ 编译器。可以使用以下命令：

   ```
   apk add g++
   ```

   或者：

   ```
   apk add clang
   ```

   根据个人喜好选择 g++ 或 clang 编译器。如果需要其他 C++ 标准库或工具，可以使用相应的 apk 命令进行安装。
   
4. 进入包含 C++ 文件的目录。可以使用 "cd" 命令来切换目录。例如：

   ```
   cd /root/Documents/cpp_projects/
   ```
   
5. 编译 C++ 文件。可以使用以下命令：

   ```
   g++ -o output_file_name input_file_name.cpp
   ```

   或者：

   ```
   clang++ -o output_file_name input_file_name.cpp
   ```

   其中，output_file_name 是生成的可执行文件的名称，可以自定义；input_file_name.cpp 是要编译的 C++ 源代码文件的名称。

6. 运行生成的可执行文件。可以使用以下命令：

   ```
   ./output_file_name
   ```

   其中，output_file_name 是生成的可执行文件的名称。

注意，如果 C++ 代码中使用了特定的 C++ 标准库，可能需要在编译时指定使用的标准库。例如，如果使用了 C++11 标准库，可以在编译命令中加上 "-std=c++11" 参数。

此外，iSH 运行在 iOS 上的模拟 Linux 环境中，与真实的 Linux 系统可能存在一些差异，因此某些命令和工具可能无法正常工作。

**（Linux和unix-like上操作简直一模一样，我摸鱼直接复制了下来，嘿嘿。）**

## 文件说明

在这里你可以快速查看我编写的代码：

 变量类型：[1.variable type.cpp](1.variable type.cpp) 

局部变量和全局变量： [2.Local and global variables.cpp](2.Local and global variables.cpp) 

常量： [3.const.cpp](3.const.cpp) 

字符类常量： [4.Character constants.cpp](4.Character constants.cpp) 

运算符： [5.operator.cpp](5.operator.cpp) 

判断语句： [6.decide sentence.cpp](6.decide sentence.cpp) 

循环类型和循环控制语句： [7.loop sentence.cpp](7.loop sentence.cpp) 

数组： [8.array.cpp](8.array.cpp) 

##### 面向对象：

（这部分可能会难以理解，且未经过我本人测试过，可能会无法正确表达程序的设计思想！）

封装： [9.class-Encapsulation.cpp](9.class-Encapsulation.cpp) 

继承： [10.class-Inheritance.cpp](10.class-Inheritance.cpp) 

多态： [11.class-Polymorphism.cpp](11.class-Polymorphism.cpp) 

抽象（可能写得不是特别好）： [12.class-Abstraction.cpp](12.class-Abstraction.cpp) 