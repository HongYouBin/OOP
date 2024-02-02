# 객체지향 프로그래밍


## 개요
학부 시절 객체지향을 공부하기 위해 만든 프로젝트입니다.

<br>

## 프로젝트 소개

### [0. webex 구현 프로그램](https://github.com/HongYouBin/OOP/tree/main/webex)
객체의 추상화를 공부하기 위해 만든 프로그램입니다. webex의 기능을 분석한 후 추상화하여 객체를 생성했습니다. Student, Professor, Video, Mic, Comment로 객체를 만들어 추상화하였습니다.

### [1. 서점 상품관리 프로그램](https://github.com/HongYouBin/OOP/tree/main/book)
객체의 상속성을 공부하기 위해 만들어본 프로젝트입니다. 서점 상품관리로 예제를 만들었습니다. 상품 입력, 조회 기능을 제공합니다.
상품의 종류로는 책, 음악 CD, 회화책이 있습니다. 모든 상품은 id, exp 번호, producer 이름, 가격을 설정하고 조회할 수 있는 공통 기능을 하고 있습니다. 
Product 객체가 메서드를 오버라이드하여 interface 역할을 수행하고 있습니다. 

### [2. 서점 상품관리 프로그램](https://github.com/HongYouBin/OOP/tree/main/grade_in_out)
성적 입출력 프로그램입니다. 성적 입력, 통계하는 기능을 넣었습니다. 반의 평균 점수, 반 표준 편차, 최고 평균 반, 최저 평균 반, 최고 표준편차 반, 최저 표준편차 반, 반별 최고 최저 점수 학생을 제공하고 있습니다.
파일 입출력을 활용하여 txt 파일로 성적을 입력, 제공받을 수 있습니다.

### [3. 끝말 잇기 게임](https://github.com/HongYouBin/OOP/tree/main/wordGame)
객체의 추상화를 공부하기 위해 만든 끝말잇기 게임입니다. player와 끝말잇기를 객체로 만들어 추상화하였습니다.

### [4. 링크드 리스트](https://github.com/HongYouBin/OOP/tree/main/graphic)
객체의 다형성과 링크드 리스트 자료구조를 공부하기 위해 만든 프로젝트입니다. interface 역할을 하는 Shape 객체를 Circle, Line, Rect 객체가 상속받고 메서드르 오버라이드 하고 있습니다. 
GraphicEditor안에서 Shape* 타입으로 링크드 리스트를 위한 포인터가 저장되어 있으며 도형끼리 다음 도형 주소를 저장하고 있습니다.

### [5. 예약 프로그램](https://github.com/HongYouBin/OOP/tree/main/reservation)
비행기 좌석 저장, 취소, 좌석 확인을 도와주는 프로그램입니다.


<br>

## 배운 점 & 아쉬운 점

객체지향 프로그래밍의 추상화 캡슐화, 상속성, 다형성을 모두 경혐하고 객체지향 프로그래밍의 속성을 이해하게 되었습니다. 
객체를 문제없이 생성하기 위해 요구사항을 꼼꼼하게 분석해야 합니다. 또한 interface를 잘 설계해 추후 변동사항이 있을 때 구현 class 바꾸면 되도록 하여 유연한 확장이 가능하도록 만들어야 합니다. 


<br>

## 라이센스

MIT &copy; [NoHack](mailto:lbjp114@gmail.com)

<!-- Stack Icon Refernces -->

[js]: /images/stack/javascript.svg
[ts]: /images/stack/typescript.svg
[react]: /images/stack/react.svg
[node]: /images/stack/node.svg
