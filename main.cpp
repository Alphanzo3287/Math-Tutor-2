// Alphanzo Moore

//CIS-5 Online

// September 14, 2023

// Lab 4B: Alphanzo Moore - <Math Tutor>

#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() 
{
  srand(time(0));

  int num1 = rand() % 100 + 1;
  int num2 = rand() % 100 + 1;

  int correctAnswer = num1 + num2;

  cout << "math Tutor - Addition Pracice" <<endl;
  cout << "What is the sum of" << num1 << "and" << num2 << "?";

  int studentAnswer;
  cin >> studentAnswer;

  if (studentAnswer == correctAnswer) {
    cout << " Congratulations! That's correct." << endl;
  } else {
    cout << "Sorry, the correct answer is" << correctAnswer << "." << endl;
    
  }
return 0;
}