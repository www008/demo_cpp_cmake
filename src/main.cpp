#include <iostream>

#include "calc.hpp"
using namespace std;

/**
 * @brief 主函数
 
    @startuml{main_interaction.png} "System Interaction Diagram"
    user -> executable : main()
    user -> stdin : input text
    executable -> stdin: read_stdin()
    stdin -> executable
    executable -> stdout: print_to_stdout()
    stdout -> user : visual feedback
    @enduml

 * @return int 
 */
int main() {
    Calc c;
    cout << "2 + 2 = " << c.sum(2, 2) << endl;
    cout << "3 * 3 = " << c.multiply(3, 3) << endl;
    return 0;
}
