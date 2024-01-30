
//const 쓰면 처음 할당 이후로 값을 바꿀수 없어서 보호가 가능함 함수에 const를 붙이면 리턴값을 상수화시켜서 보호한다는 의미(이후에 값을 바꾸면 컴파일 에러남)
//const int num= function() 에서 function이 const일때는 reference를 사용할때 의미가 있는 것이다.<-- 이해 못함 함수 자체에 const붙이는게 왜 reference랑 있어야 한다는겨
//함수에서 안에서 초기화할때는 function():num(3)이런식으로위에 코드에도 있듯이 이런식으로 수정해주는 거인듯
//const로 오버로딩가능(함수 구분이 가능해진다는 의미)
#include<iostream>
using namespace std;
/*
const int& Function(){
    int& num1 = n;
    return num1;
}*/
const int Function(){return 10;}
int main(){
    int num1= Function();
    const int num2=Function();
    //int& num2 = Function();
    //const int& num3 = Function();
    num1=30;
    num2=30;

}
