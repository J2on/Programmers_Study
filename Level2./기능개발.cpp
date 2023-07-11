#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    // 각 작업이 필요로하는 일수를 dueDateList에 저장
    int dueDateList[progresses.size()];
    bool isDone;
    for(int i=0; i< progresses.size(); i++){
        dueDateList[i] = 0;
        isDone = false;
        while(!isDone){
            dueDateList[i]++;
            if(progresses[i] + speeds[i]*dueDateList[i] >= 100){
                isDone = true;
            }
        }
    }
    
    
    int targetNum = 0; // 배포를 하는 당시에 progresses의 시작지점
    int commitNum = 1; // 연속 몇개를 배포하는지
    for(int i=1; i<progresses.size(); i++){
        if(dueDateList[i] <= dueDateList[targetNum]){ // 필요한 날짜를 비교하여 작으면 같이 배포가 가능한 경우
            commitNum++;
        }
        else{
            answer.push_back(commitNum);
            targetNum = i;
            commitNum = 1;
        }
    }
    answer.push_back(commitNum);
    
    
    return answer;
}
