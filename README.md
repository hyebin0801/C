# CProject
 2025 - 02 - 08 ~ 2025 - 03 - 15 Project

## 목차
[깃허브 데스크톱](#깃허브-데스크톱)
<hr/>

# 깃허브 데스크톱

+ 설치 방법
  > https://desktop.github.com/download/

<hr/>

# 코드 기본 구성
+ 전처리기
+ main

```c
#include <stdio.h>

int main()
{
   printf("C programming");
   return 0;
}
```
# printf
> stdio.h에서 제공해주는 C언어의 대표적인 문장 출력용 기능(함수)입니다.<br>
> 일반적으로는 printf("작성하고 싶은 문장");을 작성해 사용합니다.

예시)
```c
int main()
{
   printf("Good day to Study!");
   return 0;
}
```
#서식 지정자
|지정자 명칭|설명|
|-----|-----|
|%d|정수에 대한 지정자|
|%f|실수에 대한 지정자|
|%c|문자에 대한 지정자|


# 포인터와 함수를 사용하는 방법
> Swap 함수 : 포인터를 사용해 main() 함수의 변수 값을 직접 변경

> 배열 포인터 (1차원 배열) : printArray()를 통해 배열의 내용을 출력

> 배열 포인터 (2차원 배열) : print2Array()를 이용해 2차원 배열의 내용을 출력

> 함수 포인터 : ptr을 함수 포인터로 선언하여 add와 sub을 동적으로 호출 / 함수의 이름을 ptr에 할당하여 필요한 함수를 실행 가능



[목차로](#목차)
