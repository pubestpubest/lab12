// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<time.h>
#include<string>
#include<cstdlib>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int grade=rand()%9;
    string grade_text;
    switch (grade){
    case 0:
        grade_text="A";
        break;
    case 1:
        grade_text="B+";
        break;
    case 2:
        grade_text="B";
        break;
    case 3:
        grade_text="C+";
        break;
    case 4:
        grade_text="C";
        break;
    case 5:
        grade_text="D+";
        break;
    case 6:
        grade_text="D";
        break;
    case 7:
        grade_text="F";
        break;
    case 8:
        grade_text="W";
        break;
    default:
        break;
    }
    cout<<"You will get "<<grade_text<<" in this 261102.";
    return 0;
}
