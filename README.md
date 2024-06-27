# C++开发原型模板(CMake版)

用于C++程序开发原型的CMake编译模板。

## 特性

* 采用CMake编译样例程序(C++20以上)
* 采用CTest+GoogleTest完成用例测试
* 采用Doxygen+PlanUML生成文档

__注__: 为win10下vscode项目，采用visual studio 2022编译器。

## VSCode中使用

* GoogleTest单元测试
  * 左侧工具栏切换至CMake边栏，
  * 在“项目大纲”中选“test_calc(可执行)”右边的“生成”，进行编译
  * 选中“test_calc(可执行)”，点右键选择“在终端中运行”
* Doxygen文档生成
  * 左侧工具栏切换至CMake边栏，
  * 在“项目大纲”中选“doxygen(实用工具)”右边的“生成”，进行文档生成
  * 直接查看`build/docs`目录中的文档内容
