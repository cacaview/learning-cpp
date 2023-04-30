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

    // 发出声音的纯虚函数
    virtual void makeSound() = 0;
};

// Dog类继承自Animal类
class Dog : public Animal {
public:
    // 构造函数
    Dog(string name, int age) : Animal(name, age) {}

    // 实现纯虚函数
    void makeSound() {
        cout << "The dog " << name << " barks." << endl;
    }
};

// Cat类继承自Animal类
class Cat : public Animal {
public:
    // 构造函数
    Cat(string name, int age) : Animal(name, age) {}

    // 实现纯虚函数
    void makeSound() {
        cout << "The cat " << name << " meows." << endl;
    }
};

// 发出动物声音的函数
void emitSound(Animal& animal) {
    animal.makeSound(); // 调用Animal、Dog或Cat的makeSound()函数
}

int main() {
    // 无法创建抽象类的对象
    // Animal animal("Generic Animal", 5);

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


//这段代码中，Animal类中的makeSound()函数被声明为纯虚函数，这表明Animal类是抽象类。抽象类不能被实例化，所以我们注释掉了在main()函数中创建Animal对象的语句。在Dog和Cat类中，我们必须实现纯虚函数makeSound()。这使得Dog和Cat类成为了具体类，可以被实例化。在emitSound()函数中，我们传递了Animal类的引用，因为Animal是Dog和Cat的基类。这展示了抽象类的概念，即Animal类提供了一些通用的方法，但它本身不能被实例化。