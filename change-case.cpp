#include <iostream>

using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    convertStringToLowerCase(input);
    cout << input << endl;
}
