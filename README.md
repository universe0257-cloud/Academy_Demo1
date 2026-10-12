# Academy_Demo1

가상 융합 프로젝트의 C++ 기초 학습 예제입니다. 세 프로그램은 각각 독립된 main 함수를 가지므로 하나씩 빌드하고 실행합니다.

## 다른 PC·새 대화에서 시작

[작업 지침](AGENTS.md) → [현재 상태·다음 학습](docs/handoff.md) → 아래 실행 순서로 읽습니다.

이 인계 문서 초안은 `docs/resume-handoff-20261012` 브랜치에서 검토합니다. main 병합 전에는 아래 clone을 `git clone --branch docs/resume-handoff-20261012 ...`로 바꿔 초안을 받습니다.

```bash
git clone https://github.com/universe0257-cloud/Academy_Demo1.git
cd Academy_Demo1
git status --short --branch
git log -1 --oneline
```

기준일 2026-10-12, 기준 main `98939c1c76645d676585ec95ff1550458e121dde`입니다. 기존 미커밋 학습 내용을 보존하고 새 대화에 브랜치·커밋·OS·컴파일러·진행할 예제·실행 결과를 알려주세요.

## 예제 구성

| 프로그램 | 학습 내용 | 입력/출력 |
|---|---|---|
| [L01_StandardIO](L01_StandardIO/L01_StandardIO.cpp) | 정수 입력, 사칙연산, 나머지 | 정수 두 개 입력; 나눗셈은 정수 연산 |
| [L02_Variable](L02_Variable/L02_Variable.cpp) | 변수, 상수, 문자, 문자열, bool | 입력 없음; A=1024, B=-130, C=A, Hello 출력 |
| [AI_Test](AI_Test/AI_Test.cpp) | 이중 for, do-while | 2×3 격자와 3회 반복 출력 |

## Windows: Visual Studio

1. C++ 데스크톱 개발 도구가 있는 Visual Studio에서 [Academy_Demo1.sln](Academy_Demo1.sln)을 엽니다.
2. 현재 vcxproj는 MSVC 도구 집합 v145와 Windows SDK 10.0.26100.0을 지정합니다. 설치된 구성 요소가 다르면 먼저 설치 여부를 확인합니다. 재대상 지정은 프로젝트 파일 변경이므로 별도로 검토합니다.
3. 실행할 프로젝트를 시작 프로젝트로 지정한 뒤 빌드하고 Ctrl+F5로 실행합니다. 현재 솔루션의 Debug/Release Any CPU 구성은 프로젝트의 Win32에 연결됩니다. 프로젝트에는 x64 구성도 있지만 솔루션 구성을 임의로 바꾸지 않습니다.
4. L01은 첫 시험 입력으로 `8 2`를 사용합니다. 덧셈 10, 뺄셈 6, 곱셈 16, 몫 4, 나머지 0을 예상합니다. 현재 코드는 잘못된 입력과 0으로 나누기를 처리하지 않으므로 두 번째 정수는 0이 아닌 값을 입력합니다.

MSVC Developer Command Prompt에서 단일 파일을 확인할 수도 있습니다. 저장소 루트에서 실행합니다.

```bat
mkdir build
cl /nologo /utf-8 /std:c++17 /EHsc /W4 AI_Test\AI_Test.cpp /Fo:build\AI_Test.obj /Fe:build\AI_Test.exe
build\AI_Test.exe
```

L01/L02는 위 소스·OBJ·EXE 경로를 해당 프로젝트 이름으로 바꿉니다. 기존 build 폴더가 있으면 mkdir은 생략합니다. 이 MSVC 명령은 이번 Mac 작업에서 실행하지 않았습니다.

## macOS: Clang으로 가능한 두 예제

C++ 컴파일러가 준비된 터미널에서 저장소 루트 기준으로 실행합니다.

```bash
clang++ --version
mkdir -p build
clang++ -std=c++17 -Wall -Wextra AI_Test/AI_Test.cpp -o build/AI_Test
./build/AI_Test
clang++ -std=c++17 -Wall -Wextra L02_Variable/L02_Variable.cpp -o build/L02_Variable
./build/L02_Variable
```

L01의 scanf_s는 현재 MSVC 환경을 전제로 작성되어 macOS 기본 Clang에서 그대로 빌드되지 않습니다. 이번 문서 정리에서는 코드를 바꾸지 않습니다. L02의 사용하지 않는 변수·매개변수 경고는 실제 컴파일 출력과 함께 확인합니다. 빌드 경고와 실행 성공을 구분합니다.

## 현재 상태와 다음 액션

학습 코드와 Visual Studio 프로젝트 세 개가 있으며 자동 테스트/CI 설정은 없습니다. 2026-10-12 Mac/Apple Clang 21.0.0에서 위 명령으로 AI_Test와 L02를 각각 빌드·실행해 예상 출력을 확인했습니다. AI_Test는 경고 0개, L02는 사용하지 않는 변수/매개변수 경고 5개였고 둘 다 종료 코드 0입니다. [인계 문서](docs/handoff.md)에 범위를 기록합니다. Windows 솔루션 빌드·L01 수동 입력은 별도 확인이 필요합니다.

다음 학습은 Windows에서 L01의 `8 2` 실행 → L02 변수값 예측 → AI_Test 반복 횟수 예측 순서입니다. 입력 오류·0 나누기 처리와 scanf_s 이식성은 다음 코드 변경 과제로 따로 검토합니다. 이번 변경은 문서만 정리합니다.
