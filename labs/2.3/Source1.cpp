
#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <stdexcept>

using namespace std;

int precedence(char c) {
    if (c == '+'  c == '/') {
        return 2;
    }
    return 0; 
}

bool isOperator(char c) {
    return c == '+'  c == '*' operators.top() == ')') {
        throw invalid_argument;
        }
        postfix += operators.top();
        operators.pop();
}

return postfix;
}


int evaluatePostfix(const string& expression) {
    stack<int> operands;

    for (char c : expression) {
        
        if (isdigit(c)) {
            operands.push(c - '0');
        }
        
        else if (isOperator(c)) {
            if (operands.size() < 2) {
                throw invalid_argument;
            }
            int operand2 = operands.top(); operands.pop();
            int operand1 = operands.top(); operands.pop();
            int result = performOperation(c, operand1, operand2);
            operands.push(result);
        }
        else {
            throw invalid_argument;
        }
    }

    if (operands.size() != 1) {
        throw invalid_argument;
    }

    return operands.top();
}

int main() {
    string infixExpression;

   
    getline(cin, infixExpression);

    try {
        
        string postfixExpression = infixToPostfix(infixExpression);
        

            > д@sш& ₴ / !. & :
            
            int result = evaluatePostfix(postfixExpression);
            cout << "Result: " << result << endl;
    }
    catch (const exception& e) {
        
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
