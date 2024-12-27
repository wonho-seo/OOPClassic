// OopClassic.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Animal {
public:
    Animal() {
        std::cout << "create Animal class" << std::endl;
    }

    virtual void makeSound() = 0;

    virtual ~Animal() {
        std::cout << "delete Animal class" << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog() : Animal() {
        std::cout << "create Dog class" << std::endl;
    }
    void makeSound() override {
        std::cout << "개 소리" << std::endl;
    }

    ~Dog() override {
        std::cout << "delete Dog class" << std::endl;
    }
};

class Cat : public Animal {
public:
    Cat() {
        std::cout << "create Cat class" << std::endl;
    }
    void makeSound() override {
        std::cout << "고양이 소리" << std::endl;
    }

    ~Cat() override {
        std::cout << "delete Cat class" << std::endl;
    }
}; 

class Cow : public Animal {
public:
    Cow() {
        std::cout << "create Cow class" << std::endl;
    }
    void makeSound() override {
        std::cout << "소 소리" << std::endl;
    }

    ~Cow() override {
        std::cout << "delete Cow class" << std::endl;
    }
};


int main()
{
    Animal* animal[3];
    animal[0] = new Dog();
    animal[1] = new Cat();
    animal[2] = new Cow();

    for (int index{ 0 }; index < 3; index++) {
        animal[index]->makeSound();
    }

    for (int index{ 0 }; index < 3; index++) {
        delete animal[index];
    }
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
