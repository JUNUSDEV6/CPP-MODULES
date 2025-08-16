#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& other) : _stack(other._stack) {}

RPN& RPN::operator=(const RPN& other) {
    if (this != &other) {
        _stack = other._stack;
    }
    return *this;
}

RPN::~RPN() {}

bool RPN::isOperator(const std::string& token) const {
    return (token == "+" || token == "-" || token == "*" || token == "/");
}

bool RPN::isNumber(const std::string& token) const {
    if (token.empty())
        return false;
    
    // Vérifie si c'est un nombre négatif
    size_t start = 0;
    if (token[0] == '-' && token.length() > 1)
        start = 1;
    
    // Vérifie que tous les caractères restants sont des chiffres
    for (size_t i = start; i < token.length(); i++) {
        if (token[i] < '0' || token[i] > '9')
            return false;
    }
    
    return true;
}

int RPN::performOperation(int operand2, int operand1, char op) const {
    switch (op) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand2 == 0)
                throw std::runtime_error("Division by zero");
            return operand1 / operand2;
        default:
            throw std::runtime_error("Invalid operator");
    }
}

void RPN::processToken(const std::string& token) {
    if (isNumber(token)) {
        // Convertit le token en nombre
        std::istringstream iss(token);
        int number;
        iss >> number;
        _stack.push(number);
    }
    else if (isOperator(token)) {
        // Vérifie qu'il y a au moins 2 opérandes
        if (_stack.size() < 2) {
            throw std::runtime_error("Insufficient operands");
        }
        
        // Pop les deux opérandes
        int operand2 = _stack.top();
        _stack.pop();
        int operand1 = _stack.top();
        _stack.pop();
        
        // Effectue l'opération et push le résultat
        int result = performOperation(operand2, operand1, token[0]);
        _stack.push(result);
    }
    else {
        throw std::runtime_error("Invalid token: " + token);
    }
}

int RPN::evaluate(const std::string& expression) {
    // Réinitialise la stack
    while (!_stack.empty()) {
        _stack.pop();
    }
    
    // Parse l'expression
    std::istringstream iss(expression);
    std::string token;
    
    while (iss >> token) {
        processToken(token);
    }
    
    // Vérifie qu'il ne reste qu'un seul élément dans la stack
    if (_stack.size() != 1) {
        throw std::runtime_error("Invalid expression");
    }
    
    return _stack.top();
}