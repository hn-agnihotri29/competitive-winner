#include <iostream>
using namespace std;


int main() {
  
  int scores[] = {3, 4, 21, 36, 10, 28, 35, 5, 24, 42};

  int highestScore = scores[0];
  int lowestScore = scores[0];

  int countForMax = 0;
  int countForMin = 0;

  for(int i  = 1 ; i < 10 ; i++) {

    if(scores[i] < lowestScore) {
      lowestScore = scores[i];
      countForMin++;
    }
    
    if(scores[i] > highestScore) {
      highestScore = scores[i];
      countForMax++;
    }
  }

  cout<<"Max: "<<countForMax<<endl;
  cout<<"Min: "<<countForMin;
  
  
}