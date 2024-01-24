#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
for (const string& word : msg)
{
cout << word << " ";
}
cout << endl;
}
//메모리 처음에는 0 많이 들어감 0 안들어가있어서 런타임에러가 발생할 수 있어
//좋은 습관은 모든 변수 할당시 초기화 해주는게 제일 좋아
//나누기는 비싼 연산자 나누기보다는 곱셈이 코스트가 적다(클럭을 덜 잡아먹는다) 
/*double보다는 float효율 쓰는게 좋다? 정확한 값 볼거 생각하면..? 일단 형변환안일어나도록 하자(거기서 문제가 발생할 확률이 높아-의도했는지 의도 안했는지 명시적으로 하는게 좋다)
+=연산자같은거 왜 제공한걸까? 한번에 할수있는 명령어를 가지고 잇어 자기자신한테 더해서 자기한테 넣어라 같은 명령어가 있다 컴퓨터 빠르게 계산할 수 있어
+= 쓰는 식으로 써야겠다.. 한클락밖에 안빨라지지만 일단 저런 오퍼레이터 시플플에서 제공한다.
dynamic cast도 있다? statuc cast는 런타임에 관여하지 않아 template에서 사용하는 문법임(static_cast <int> (x)) 거기서 제공하는 함수임 
overflow는 저장할수없어
limit은 max값 min값을 출력함 numeric_limits <unsigned int>::max()가능한 최대값 아닌값 출력하게됨 max는 unsigned signed면 반절로 줄어들게 돼
float가 IEEE의 기준에 맞춰서 설정돼있음 최대값보다 넘어가면 lfoat는 특수한 INF를 출력하게 돼 float는 과학계산에서 많이 사용해왔어서.. INF들어왔을때 따로 생각해서 코딩해야한다
cout cin에서 사용할만한 조정자 true false로 표현해주기 우너하면 boolalpha같은거 쓰면 그렇게 예쁘게 출력된다. 진수 표현하는dec oct hex등의 조정자 cout에 달아주면 진수 맞춰서 출력해줌
setprecision은 몇자리수까지 필요한지 지정하는 것 setw(15) 무조건 15개로 찍어라 예제보면 어떻게 써야할지 알수있을듯
cpu는 조건문 처리 빨라 GPU는 계산은 빠르지만 조건문 처리는 빠르지 않아
파이프 라이팅 하게 되면서 1번 2번 3번 구문 처리해야할때 클락 하나씩 차이나게해서 파이프라인함(하드웨어 다 사용하도록)
컴파일러가 머신코드다 집어넣어줘? 근데 그 명령어 주소 어디서 가져오는지 처리하는데 한클럭에서 끝나지 않아서 처리하는거는 한클럿에서 끝나지만 준비하는 기간이 더 오래걸려 
더 많은 클락을 더 많이 사용하게 돼()패치하고 가져오고 다 합해서 말하는 듯,,,) 메모리에서 가져오고 하는 준비 단계는 순 다음 명령어가 뭔지 알아야 미리 파이프라이닝 하게된,ㄴ데 조건문이면 그게 어려워져 예측을 하는 로직도 요즘엔 들어가있어..(이것도 배웠던거 인듯)
플러시도 하게돼 cpu는 컨트롤 유닛이많고 gpu는 처리하는 로직보다는 계산위주임 조건문 많으면 gpu써도 원하는 만큼 성능이나오지않아.
template meta program template program을 잘 다루게 되면 멐파일할때 프로그램을 하게 돼
메타 프로그래밍: 우리가 하는게 아닌 컴파일러가 프로그래밍하는것 컴파일러가 프로그래밍 하게되면 분기문을 없앨수있어(컴파일할때 사용자가 입력하지 않더라도 컴파일 단계에서 true false를 알수있기 때문에)  시플플 할거면 메타프로그래밍을 알아두는게 좋다.
if (x=0) 하면 언제나 실행이 되게돼.. 꼭 ==으로 쓰자(컴파일에 문제가 없을듯)
추가적인 세미콜론 if(b);하면 에러가 발생해 컴파일 오류 안날지도..? 빈 스테이트로 받아들여질지도



*/