#include <iostream>

using namespace std;
//Special overloading operator [] -> ()

class Info{
    //array
    string cat[3];

public:
    Info(string c1, string c2, string c3){
        cat[0] = c1;
        cat[1] = c2;
        cat[2] = c3;
    }
    //operator [] overloading
    // return type -> string
    string operator[] (int n){
        return cat[n];
    }
};

int main() {
    //Creating object cat
    Info cat("white", "yellow", "black");
    // now can treat obj as array
    cout << cat[1] << endl;

    return 0;
}