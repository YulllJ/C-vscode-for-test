/*
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main(){

    const int CAPACITY = 10;
    int frequencies[CAPACITY] = {0};
    ifstream integerFile;

    integerFile.open("integerFile.dat");
    if(!integerFile){
        cout <<"숫자 파일을 열 수 없습니다."<<endl;
        cout <<"프로그램을 중단합니다." ;
        return 0;
    }
    // BOM 제거
    char bom[3];
    integerFile.read(bom, 3);
    if (!(bom[0] == (char)0xEF && bom[1] == (char)0xBB && bom[2] == (char)0xBF)) {
        // BOM이 아니라면 파일 포인터를 처음으로 되돌림
        integerFile.seekg(0);
    }
    int data ;
    int size = 0;
    while(integerFile >> data){
        if(data>=0 && data<=9){
            size++;
            frequencies[data]++;
        }
    }
    integerFile.close();

    cout << "파일 안에 " << size << "개의 유효한 데이터가 있습니다." << endl;

    for(int i =0; i<10; i++){
        cout << setw(3) << i << " ";
        for(int f=1; f<=frequencies[i]; f++){
            cout <<'*';
        }
        cout<< " " << frequencies[i]<< endl;
    }
    return 0;
}
*/


//const 쓰면 처음 할당 이후로 값을 바꿀수 없어서 보호가 가능함 함수에 const를 붙이면 리턴값을 상수화시켜서 보호한다는 의미(이후에 값을 바꾸면 컴파일 에러남)
//const int num= function() 에서 function이 const일때는 reference를 사용할때 의미가 있는 것이다.
//함수에서 안에서 초기화할때는 function():num(3)이런식으로위에 코드에도 있듯이 이런식으로 수정해주는 거인듯
//const로 오버로딩가능(함수 구분이 가능해진다는 의미)
#include<iostream>
using namespace std;

const int Function() {
    return 10;
}
int main (){
int num1=Function();//이거는 에러가 안나
const int num2=Function();
int const num3 =Function();//const 선언 순서 바뀌어도 상관이 없다.
num2=20;
cout<<num1<<num2<<num3<<endl;
}