#include <iostream>

using namespace std;

int main() {
 
    string  Mynames[] = {"Jose", "Sandra" ," Ana" ,"Beatriz"};
    for (string  name : Mynames ){
        cout << name << "\n";
    }
    return 0;
}