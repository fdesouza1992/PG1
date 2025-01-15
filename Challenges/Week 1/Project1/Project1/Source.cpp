#include <iostream>

// Uncomment the line below to run Tests 1 and 2
// #define PG1

#ifdef PG1

enum class MathOperator
{
    Add,
    Subtract,
    Multiply,
    Divide,
    Modulo
};

// Display the result based on the test value
switch (testOperator)
{
case MathOperator::Add:
    std::cout << "Result: Add" << std::endl;
    break;
case MathOperator::Subtract:
    std::cout << "Result: Subtract" << std::endl;
    break;
case MathOperator::Multiply:
    std::cout << "Result: Multiply" << std::endl;
    break;
case MathOperator::Divide:
    std::cout << "Result: Divide" << std::endl;
    break;
case MathOperator::Modulo:
    std::cout << "Result: Modulo" << std::endl;
    break;
default:
    std::cout << "Result: Unknown Operator" << std::endl;
    break;
}

return 0;