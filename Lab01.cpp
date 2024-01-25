/*
#include<iostream>
using namespace std;
int main(){
    int score1, score2, score3, maxScore, minScore, score;
    cout<<"첫번째 정수입력:";
    cin>>score1;
    cout<<"두번째 정수입력:";
    cin>>score2;
    cout<<"세번째 정수입력:";
    cin>>score3;
    if(score1>score2 && score1>score3){
        maxScore=score1;
    }
    else if(score2>score1 && score2>score3){
        maxScore=score2;
    }
    else{
        maxScore=score3;
    }


     if(score1<score2 && score1<score3){
        minScore=score1;
    }
    else if(score2<score1 && score2<score3){
        minScore=score2;
    }
    else{
        minScore=score3;
    }
    int temp =maxScore+minScore;
    if(temp % 2 ==1){
        temp+=1;

    }
    score=temp/2;

    cout<<"입력한 점수="<<score1<<" "<<score2<<" "<<score3<<endl;
    cout<<"최고점수와 최대점수= ";
    cout<<minScore<< ' '<<maxScore<<endl;
    cout<<"학생성적="<<score<<endl;

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    double income, tax;
    bool bracket1, bracket2, bracket3, bracket4;
    double limit1 = 10000.00, limit2 = 50000.00, limit3 = 100000.00;
    double rate1 = 0.05, rate2 = 0.10, rate3 = 0.15, rate4 = 0.20;

    cout << "수입을 달러로 입력하세여 :";
    cin >> income;
    bracket1 = (income <= limit1) && (income >= 0);
    bracket2 = (income > limit1) && (income <= limit2);
    bracket3 = (income > limit2) && (income <= limit3);
    bracket4 = (income > limit3);

    if (bracket1)
    {
        tax = income * rate1;
    }
    else if (bracket2)
    {
        tax = limit1 * rate1 + (income - limit1) * rate2;
    }
    else if (bracket3)
    {
        tax = limit1 * rate1 + (limit2 - limit1) * rate2 + (income - limit2) * rate3;
    }
    else if (bracket4)
    {
        tax = limit1 * rate1 + (limit2 - limit1) * rate2 + (income - limit2) * rate3;
    }
}

//shift alt f:자동 줄맞춤

#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

string test()//type이 vector string임 string하고 달라
{
    vector<string> str;
    for (int i = 0; i < 26; i++)
    {
        str.push_back(string(1, static_cast<char>('a' + i)));
    }
    string combinedString;
    for (const string& str : str) {
        combinedString += str;
    }
    return combinedString;
}
int main()
{
    string a; // 대문자 ㅁsms 65 소문자 97

    a=test();
    for (int i = 0; i < size(a); i++)
    {

        if (a[i] >= 'a' && a[i] <= 'z')
        {
            cout << static_cast<char>(a[i] - 32) << " ";
        }


    }
    return 0;
}*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int startDay;
    int daysInMonth;
    int col = 1;
    do
    {
        cout << "한달의 날짜수를 입력하세여(28,29,30,31): ";
        cin >> daysInMonth;
    } while (daysInMonth < 28 || daysInMonth > 31);

    do
    {
        cout << "첫날의 요일을 입력하세요(0~6): ";
        cin >> startDay;
    } while (startDay < 0 || startDay > 6);

    cout << endl
         << "Sun Mon Tue Wed Thr Fru Sat" << endl
         << "--- --- --- --- --- --- --- " << endl;
    for (int space = 0; space < startDay; space++)
    {
        cout << "    ";
        col++;
    }
    for (int day = 1; day <= daysInMonth; day++)
    {
        cout << setw(3) << day << " ";
        col++;
          if (col > 7)
    {
        cout << endl;
        col = 1;
    }
    }
  
}
