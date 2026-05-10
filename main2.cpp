#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

     searchingForInput(string input, char character){
        for (size_t i = 0; i < input.size(); ++i) {
            char letter = input.at(i);
            cout << i << ": " << letter << endl;
        }
    }
}