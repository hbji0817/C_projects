#include <stdio.h>
void swap(int a, int b);
void swap_addr(int* a, int* b);
void changeArray(int * ptr);

int main(void) {
  // //포인터

  // // [철수] : 101호 --> 메모리 공간의 주소
  // // [영희] : 201호
  // // [민수] : 301호
  // // 각 문 앞에 암호가 걸려있음
  // int 철수 = 1;
  // int 영희 = 2;
  // int 민수 = 3;

  // printf("철수네 주소 : %p, 암호 : %d\n", (void*)&철수, 철수);
  // printf("영희네 주소 : %p, 암호 : %d\n", (void*)&영희, 영희);
  // printf("민수네 주소 : %p, 암호 : %d\n", (void*)&민수, 민수);

  // //미션맨

  // //첫번째 : 각 집 암호 확인
  // int * 미션맨; //포인터 변수
  // 미션맨 = &철수;
  // printf("미션맨이 방문하는 곳 주소 : %p, 암호 : %d\n", (void*)미션맨,
  // *미션맨);

  // 미션맨 = &영희;
  // printf("미션맨이 방문하는 곳 주소 : %p, 암호 : %d\n", (void*)미션맨,
  // *미션맨);

  // 미션맨 = &민수;
  // printf("미션맨이 방문하는 곳 주소 : %p, 암호 : %d\n", (void*)미션맨,
  // *미션맨);

  // //두번째 : 각 암호에 3을 곱해라
  // 미션맨 = &철수;
  // *미션맨 = *미션맨 * 3;
  // printf("미션맨이 암호를 바꾼 곳 주소 : %p, 암호 : %d\n", (void*)미션맨,
  // *미션맨);

  // 미션맨 = &영희;
  // *미션맨 = *미션맨 * 3;
  // printf("미션맨이 암호를 바꾼 곳 주소 : %p, 암호 : %d\n", (void*)미션맨,
  // *미션맨);

  // 미션맨 = &민수;
  // *미션맨 = *미션맨 * 3;
  // printf("미션맨이 암호를 바꾼 곳 주소 : %p, 암호 : %d\n", (void*)미션맨,
  // *미션맨);

  // // 스파이
  // // 미션맨이 바꾼 암호에서 2를 빼기
  // int * 스파이 = 미션맨;

  // // 스파이 (주소)
  // //         =>  누군가의 아파트 주소
  // // 미션맨 (주소)

  // printf("\n ... 스파이가 미션 수행하는 중 ... \n\n");
  // 스파이 = &철수;
  // *스파이 = *스파이 - 2;
  // printf("스파이가 방문하는 곳 주소 : %p, 암호 : %d\n", (void*)스파이,
  // *스파이);

  // 스파이 = &영희;
  // *스파이 = *스파이 - 2;
  // printf("스파이가 방문하는 곳 주소 : %p, 암호 : %d\n", (void*)스파이,
  // *스파이);

  // 스파이 = &민수;
  // *스파이 = *스파이 - 2;
  // printf("스파이가 방문하는 곳 주소 : %p, 암호 : %d\n", (void*)스파이,
  // *스파이);

  // printf("\n ... 철수 영희 민수는 바뀐 암호를 보고 놀람 ... \n\n");

  // printf("철수네 주소 : %p, 암호 : %d\n", (void*)&철수, 철수);
  // printf("영희네 주소 : %p, 암호 : %d\n", (void*)&영희, 영희);
  // printf("민수네 주소 : %p, 암호 : %d\n", (void*)&민수, 민수);

  // // 참고로 미션맨이 사는 곳의 주소는  &미션맨으로 확인
  // printf("미션맨이 사는 곳 주소 : %p\n", (void*)&미션맨);
  // printf("스파이가 사는 곳 주소 : %p\n", (void*)&스파이);

  // 배열

  // int arr[3] = { 5, 10, 15 };
  // int* ptr = arr;
  // for (int i = 0; i < 3; i++)
  // {  
  //   printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
    
  // }
  // for (int i = 0; i < 3; i++)
  // {  
  //   printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);

  // } 
  // ptr[0] = 100;
  // ptr[1] = 200;
  // ptr[2] = 300;
  // for (int i = 0; i < 3; i++)
  // {  
  //   printf("배열 arr[%d]의 값 : %d\n", i, arr[i]/* *(arr * i) 랑 같음 */);
  // }
  // for (int i = 0; i < 3; i++)
  // {  
  //   printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
  // }

  // // *(arr + i) 랑 arr[i] 랑 같음
  // // arr == arr 배열의 첫번째 값의 주소와 동일 == &arr[0]
  // printf("arr 배열의 자체 값 : %p\n", (void *)arr);
  // printf("arr[0] 의 주소 : %p\n", (void *)&arr[0]);
  
  // printf("arr 자체의 값이 가지는 주소의 실제값 : %d\n", *arr);
  // printf("arr[0] 의 실제값 : %d\n", *&arr[0]);

  // // *& = 주소의 값 = 아무것도 없는 것과 같다 & = 값의 주소, * = 주소의 값
  // // *& 는 서로 상쇄된다

  // printf("arr[0] 의 실제값 : %d\n", arr[0]);

//   int a = 10;
//   int b = 20;
//   printf("a의 주소 : %p\n", (void *)&a);
//   printf("b의 주소 : %p\n", (void *)&b);

  
//   // a와 b의 값을 바꾼다
//   printf("swap 함수 전 -> a : %d, b : %d\n", a, b);
//   swap(a, b);
//   printf("swap 함수 후 -> a : %d, b : %d\n", a, b);

//   //값에 의한 복사 (call by value) -> 값만 복사한다는 의미, 자체를 바꾸지 않음
  
//   //주소값을 넘기면? 메모리 공간에 있는 주소값 자체를 넘기면
//   printf("(주소값 전달) swap 함수 전 -> a : %d, b : %d\n", a, b);
//   swap_addr(&a, &b);
//   printf("(주소값 전달) swap 함수 후 -> a : %d, b : %d\n", a, b);
  
  //배열일때 arr2 -> 주소
  int arr2[3] = { 10, 20, 30 };
  changeArray(arr2);
  for(int i = 0; i < 3 ; i++)
  {
      printf("%d\n", arr2[i]);
  }
  
  
  
  return 0;
}

void swap(int a, int b)
{
  printf("(swap함수 내) a의 주소 : %p\n", (void *)&a);
  printf("(swap함수 내) b의 주소 : %p\n", (void *)&b);
  
  int temp = a;
  a = b;
  b = temp;
  printf("swap 함수 내 -> a : %d, b : %d\n", a, b);
}

void swap_addr(int* a, int* b)
{

  int temp = *a;
  *a = *b;
  *b = temp;
  printf("swap 함수 내 -> a : %d, b : %d\n", *a, *b);
}

void changeArray(int * ptr)
{
    ptr[2] = 50;
}
