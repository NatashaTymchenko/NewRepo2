#include <iostream>
#include <string>
#include <cctype>

using namespace std;


bool isValidCharacter(char c) {
    return (c >= 'A' && c <= 'F') || (c >= '0' && c <= '9');
}

bool isValidSubchain(const string& subchain) {
    if (subchain.empty() || subchain[0] != '$') {
        return false;
    }
    for (size_t i = 1; i < subchain.size(); ++i) {
        if (!isValidCharacter(subchain[i])) {
            return false;
        }
    }
    return true;
}


bool isValidChain(const string& chain) {
    size_t atPos = chain.find('@');

    
    if (atPos == string::npos || chain.find('@', atPos + 1) != string::npos) {
        return false;
    }

    
    string subchain1 = chain.substr(0, atPos);
    string subchain2 = chain.substr(atPos + 1);

    
    return isValidSubchain(subchain1) && isValidSubchain(subchain2);
}

int main() {
    string chain;
    cout << "Enter a string to verify: ";
    cin >> chain;

    if (isValidChain(chain)) {
        cout << "The chain matches the format!" << endl;
    }
    else {
        cout << "" << endl;
    }

    return 0;
}
