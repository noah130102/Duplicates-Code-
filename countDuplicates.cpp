#include <iostream>
#include <string>
#include <map>
using namespace std;
void returnDuplicates(string str){
    map<char,int> m;
    
    for (int i = 0; i < str.length(); i++) {
        m[str[i]]++;
    }


    for (auto it : m) {
        if (it.second > 1)
            cout << it.first << ", count = " << it.second
                 << "\n";
    }
    

}

int main(){
    string str = "karandeep";
    returnDuplicates(str);
    return 0;
}