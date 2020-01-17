
#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.

/*This is a function problem.You only need to complete the function given below*/
// Function to return if the paranthesis are balanced or not
bool ispar(string x)

{
    // Your code here
    bool ret = false;
    std::stack<char> mystack;
    
    int n = x.size();
    char c;
    for (int i =0 ; i < n ; i++){
			std::cout << i << "iteration \n" ;
        if ((x[i] == '{' ) || (x[i] == '(' ) || (x[i] == '[' ))
        {
            mystack.push(x[i]);
	std::cout << x[i] << " \n" ;
        }
        else if ((x[i] == '}' ) || (x[i] == ')' ) || (x[i] == ']' ))
        {
		std::cout << " else case :  \n" ;
	    if (!mystack.empty()){
		std::cout << " stack not empty() \n" ;
            c = mystack.top();
            switch(x[i]){
		case ')':
			if (c!='(') return false;
		break;
		case '}':
		
			if (c !='{') return false;
		break;
		case ']':
			if (c != '[') return false;
		break;
		default : return false;
		break;
		}
		mystack.pop();
		
	}
	else {
		ret = false;
		return false; 
	}
        }
        else {
            
        }
    }
        return mystack.empty();
        
    
}

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}

