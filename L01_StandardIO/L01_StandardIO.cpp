#include <cstdio>

int main()
{
   // 정수형 변수 선언
   int Num1 = 0;
   int Num2 = 0;
   scanf_s("%d", &Num1);
   scanf_s("%d", &Num2);
   
   printf("Num1: %d\n", Num1);
   printf("Num2: %d\n", Num2);
   //덧셈
   printf("Num1: %d + Num2: %d = %d\n", Num1, Num2, Num1 + Num2);
   //뺄셈 -
   printf("Num1: %d - Num2: %d = %d\n", Num1, Num2, Num1 - Num2);
   //곱셈 *
   printf("Num1: %d * Num2: %d = %d\n", Num1, Num2, Num1 * Num2);
   //나눗셈 /
   printf("Num1: %d / Num2: %d = %d\n", Num1, Num2, Num1 / Num2);
   //나머지 % (%를 출력하기 위해서는 %%처럼 한 번 더 입력
   printf("Num1: %d %% Num2: %d = %d\n", Num1, Num2, Num1 % Num2);
   
   return 0;
}
