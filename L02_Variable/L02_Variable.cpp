
#include <cstdio>

int main(int argc, char* argv[])
{
    printf("== Variable ==\n");
    
    // 변수의 선언 ==> 자료형은 int(정수형) / 변수 이름이 A
    int A; // 선언만 하면 A는 쓰레기 값만 들어감 =>
    A = 1024; // A에 1024처럼 값을 대입해야 한다.
    printf("A = %d\n", A);
    
    // 변수의 선언 + 정의(Definition) ==> 값을 넣어서 변수를 초기화 시켜주는 것
    // 변수는 마지막에 입력된 값이 출력된다.
    int B = 100;
    B = 2222;
    B = -130;
    printf("B = %d\n", B);
    
    // 상수, 리터럴(Literal)
    const int Val = 5; // 상수는 선언만 하면 컴파일 오류 발생
                       // 한 번 초기화된 상수는 다른 값으로 쓰이지 못한다
    int const Val2 = 10; // const는 int의 앞에 있어도 되고 뒤에 있어도 된다
    
    char C = 'A'; // 문자 출력
    printf("C = %c\n", C);
    
    char szString[] = "Hello"; //문자열 출력 "Hello" 문자열 리터럴
    printf("szString = %s\n", szString);
    
    bool Boolean =true; // bool 변수는 true or false 밖에 입력되지 않는다. 
    // true(참)=1, false(거짓)=0
    //모든 프로그래밍에서 거짓은 0값 하나 뿐이다. 0이 아닌 모든 값은 참이다. 
    
    return 0;
}
