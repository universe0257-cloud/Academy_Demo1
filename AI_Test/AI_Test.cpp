//이중 for문과 do-while문 예시

#include <cstdio>

using namespace std;

int main() {
    // 1. 이중 for 문: 주로 2차원 구조(행렬, 구구단, 좌표)를 다룰 때 사용
    printf("=== 이중 for 문 (2x3 격자 출력) ===\n");
    for (int i = 1; i <= 2; i++) { // 바깥쪽 루프 (행)
        for (int j = 1; j <= 3; j++) { // 안쪽 루프 (열)
            printf("[%d행 %d열] ", i, j);
        }
        printf("\n"); // 한 행이 끝나면 줄바꿈
                            // 총 6번 실행
    }

    // 2. do-while 문: 조건 검사 전에 '최소 한 번'은 반드시 실행해야 할 때 사용 
    // while은 조건에 맞으면 실행
    printf("\n=== do-while 문 (카운트다운) ===\n");
    int retry_count = 0;
    do {
        printf("작업을 실행 중입니다... (시도 횟수: %d)\n", retry_count + 1);
        retry_count++;
        
        // 조건: retry_count가 3보다 작으면 계속 반복
    } while (retry_count < 3);

    printf("모든 작업이 완료되었습니다.\n");

    return 0;
}