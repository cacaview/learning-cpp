#include <iostream>
#include <string>

using namespace std;

// Animal类
class Animal {
protected:
    string name; // 动物的名字
    int age;     // 动物的年龄
public:
    // 构造函数
    Animal(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // 发出声音的虚函数
    virtual void makeSound() {
        cout << "This is an animal." << endl;
    }
};

// Dog类继承自Animal类
class Dog : public Animal {
public:
    // 构造函数
    Dog(string name, int age) : Animal(name, age) {}

    // 重写父类的虚函数
    void makeSound() {
        cout << "The dog " << name << " barks." << endl;
    }
};

// Cat类继承自Animal类
class Cat : public Animal {
public:
    // 构造函数
    Cat(string name, int age) : Animal(name, age) {}

    // 重写父类的虚函数
    void makeSound() {
        cout << "The cat " << name << " meows." << endl;
    }
};

// 发出动物声音的函数
void emitSound(Animal& animal) {
    animal.makeSound(); // 调用Animal、Dog或Cat的makeSound()函数
}

int main() {
    // 创建动物对象
    Animal animal("Generic Animal", 5);
    // 发出动物的声音
    emitSound(animal);

    // 创建狗对象
    Dog dog("Buddy", 3);
    // 发出狗的声音
    emitSound(dog);

    // 创建猫对象
    Cat cat("Mittens", 2);
    // 发出猫的声音
    emitSound(cat);

    return 0;
}

//在这段代码中，Animal类被设计成基类，它有两个保护的属性name和age，这些属性被子类继承。Dog和Cat类都继承自Animal类，并且分别重写了父类的虚函数makeSound()，这表明它们都有自己独特的声音。在emitSound()函数中，我们使用Animal类的引用作为参数，因为Animal是Dog和Cat的基类。在main()函数中，我们分别创建了一个Animal、一个Dog和一个Cat对象，并将它们传递给emitSound()函数，从而展示了多态的概念。