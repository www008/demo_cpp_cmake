#pragma once

/**
 * @brief 计算器类
 * @startuml{class_calc.png} "Image Caption" width=5cm
    Alice -> Bob : Hello
 * @enduml
 */
class Calc {
public:
    int sum(int a, int b);
    int multiply(int a, int b);
};
