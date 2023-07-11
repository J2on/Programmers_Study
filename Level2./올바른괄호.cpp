#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    int isValid = 0;
    
    for(int i=0; i< s.size(); i++){
        if(s[i] == '('){
            isValid++;
        }
        else{
            isValid--;
        }
        
        if(isValid < 0){
            return false;
        }
    }
    
    if(isValid == 0){
        answer = true;
    }
    else{
        answer = false;
    }
    
    return answer;
}
