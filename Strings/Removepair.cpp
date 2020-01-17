
#include <bits/stdc++.h> 
using namespace std; 
  

  

string removePair(string str){
    // Your code here
    
        // Your code here
    string ret = "";
   // std::stack<char> tempStack;
    
    int j = 0; 
    int n = str.size();
    for (int i = 1 ; i <n; i++){
        
        if (i==1){
            ret +=str[i]; 
        }
        
       else if (str[i-1] != str[i]){
             ret +=str[i]; 
        }
        else
        {
            ret.pop_back();
        }
        
    }
    if (str.empty()) return "Empty String";
    return ret;
}
// Driver program 
int main() 
{ 
    string str = ""; 
    removePair(str); 
    cout <<   removePair(str); 
    return 0; 
} 
