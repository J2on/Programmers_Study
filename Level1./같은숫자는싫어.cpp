#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    int exNum = -1;
    for (int num:arr){
        if(exNum != num){
            answer.push_back(num);
            exNum = num;
        }
    }

    return answer;
}
