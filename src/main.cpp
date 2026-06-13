#include <iostream>
using namespace std;
int main(){
    int score{};
    cout<<"enter the score in the exam(0-100):"<<endl;
    cin>>score;
    char letter_graded{};
    if (score>=0 && score<=100){
        if(score>90)
        letter_graded ='A';
      else if(score>80)
      letter_graded='B';
      else if(score>70)
      letter_graded='C';
      else if(score>60)
      letter_graded='D';
      else
        letter_graded='F';
        cout<<"your grade is:"<<letter_graded<<endl;
      if(letter_graded=='F')
      cout<<"sorry, you have to repeat this class"<<endl;
      else
      cout<<"congrats! you have finish ur class properly"<<endl;
         }
     else{
        cout<<"sorry "<<score<< " is not valid score"<<endl;

    }
    }
