#include <stdio.h>

int main(void)
{
  //배열
  //이렇게 일일이 적는 걸 편하게 줄일 수 있음
  // int subway_1 = 30; //지하철 1번칸에 30명이 타고 있다.
  // int subway_2 = 40;
  // int subway_3 = 50;

  // printf("지하철 1호차에 %d명이 타고 있습니다.\n", subway_1);
  // printf("지하철 2호차에 %d명이 타고 있습니다. \n", subway_2);
  // printf("지하철 3호차에 %d명이 타고 있습니다. \n", subway_3);


  // 여러개의 변수를 함께 동시에 생성
  // int subway_array[3]; //배열 선언, []안 숫자는 배열 갯수 
  // subway_array[0] = 30;
  // subway_array[1] = 40;
  // subway_array[2] = 50;

  // for (int i = 0; i < 3; i++)
  // {
  //   printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i + 1, subway_array[i]);
  // }

  // 값 설정 방법
  // int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

  // for (int i = 0; i < 10; i++)
  // {
  //   printf("%d\n", arr[i]);
  // }

  //값은 초기화를 반드시 해야함!!

  // int arr[10];
  // for (int i = 0; i < 10; i++)
  // {
  //   printf("%d\n", arr[i]);

  // }

  //배열 크기는 항상 상수로 선언 []안에 문자열을 넣으면 문자열의 길이가 나옴
  //문자열을 넣으면 안됨, 상수만 넣을 수 있음
  // int size = 10;
  // int arr[10];

  // int arr[10] = { 1, 2};//입력하지 않으면 자동으로 0으로 초기화됨
  // for (int i = 0; i < 10; i++)
  // {
  //   printf("%d\n", arr[i]);
  // }

  // int arr[] = {1, 2}; // 배열의 크기는 컴파일러가 뒤에 {}안을 보고 알아서 계산함



  // float arr[5] = {1.0f, 2.0f, 3.0f};
  // for (int i = 0; i < 5; i++)
  // {
  //   printf("%.2f\n", arr[i]);
  // }

  //문자 vs 문자열
  //char c = 'A';
  //printf("%c\n", c);

  //문자열 끝에는 끝을 의미하는NULL문자 \0이 들어가야함
  // char str[6] = "coding";
  // char str[7] = "coding"; // [c] [o] [d] [i] [n] [g]
  // printf("%s\n", str);

  // char str[] = "coding";
  // printf("%s\n", str);
  // printf("%d\n", sizeof(str));

  // for (int i = 0; i < (int)sizeof(str); i++)
  // {
  //   printf("%c\n", str[i]);
  // }

  //sizeof 앞에 (int)를 붙이면 정수형으로 바꿔줌 붙여야함

  // char kor[] = "안녕하세요"; 
  // printf("%s\n", kor);
  // printf("%d\n", (int)sizeof(kor));
  //한글의 사이즈는 한 개당 2byte 따라서 안 녕 하 세 요 는 3+1+3+1+2+1+2+1+2=16byte이다

  // char c_array[7] = {'c', 'o', 'd', 'i', 'n', 'g', '\0'};
  // printf("%s\n", c_array);

  
  //뒤에 자리가 남으면 끝을 의미하는 /0이 안들어가도 작동함
  char c_array[10] = {'c', 'o', 'd', 'i', 'n', 'g'};
  printf("%s\n", c_array);
  for (int i = 0; i < (int)sizeof(c_array); i++)
  { 
    printf("%c\n", c_array[i]);
    // printf("%d\n", c_array[i]);
    //%d를 출력하면 각 문자의 아스키 코드값을 출력함
    //c = 99처럼

  }

  
  
  




  return 0;

}



