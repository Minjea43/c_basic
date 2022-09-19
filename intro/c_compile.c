//주석 (commert)
// + 개발자 메모(프로그램 실행 x)
//  1) // : 한 줄 주석 (단축키 : ctrl + /)
//  2)/**/ : 여러줄 주석 또는 부분 주석
//  3) /***/ : 여러줄 주석
/**
 * 
 * 
*/

/**
 * 1. 컴파일 : 소스코드를 컴파일러를 통해 기계어로 바꾸는 과정
 *      -자연어 : 사람이 사용하는 언어
 *      -프로그래밍 언어 : 사람이 작성한 소스코드를 사용해서 컴퓨터와 대화할 수 있는 언어 : 소스코드
 *          +종류 : C, java, javascript, python
 *      -기계어 : 컴퓨터가 사용하는 언어 (0,1)

 *      컴파일 단축키(Ctrl + Art + c) : .exe 파일 생성
 *      실행 단축키(Ctrl + Art + r) : 프로그램 실행 (번역된 .exe 파일 실행)
 * 
 * 2. 컴파일러 동작과정
 *  - 소스코드 작성(.c) - 1.전처리 - 전처리된 파일 - 2.컴파일 - 개체파일 - 3. 링크 - 실행파일(.exe)
 * 
 *  1) 전처리 
 *      +지시자 (#include)에 따라 프로그램에 필요한 소스 중 외부에 있는 소스를 불러옴
 *                   ↓
 *      - 전처리 된 소스파일
 *                   ↓
 *  2) 컴파일
 *                   ↓
 *      -개체파일 
 *          + CPU가 해석할 수 있는 명령어들로 구성된 기계어
 *          + 해당 운영체제(OS)에서 인식할 수 있게 변경
 *                   ↓
 *  3) 링크
 *      + 프로그램 실행 전 필요한 코드 결합하는 과정
 *      + main() 함수가 작성 된 코드 실행하도록 설정
 *                   ↓
 *      - 실행파일(.exe)
 * 
 * 라이브러리 (외부에서 다른사람이 작성한 코드) (예시 : <stdio.h> : 입력과 출력 관련 기능)
 * 
*/


#include <stdio.h>

int main(void){
    int a /*학색번호*/ ,b /*학생이름*/ ;
    printf("Hello C");
}