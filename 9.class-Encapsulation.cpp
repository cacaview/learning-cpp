//展示了一个Animal类及其子类Dog和Cat的封装和继承关系，同时使用了访问控制符和getter/setter函数的概念。注释已经在代码中详细解释。
#include <iostream>
#include <string>

using namespace std;

// Animal类
class Animal {
private:
    string name; // 动物的名字
    int age;     // 动物的年龄
public:
    // 构造函数
    Animal(string name, int age) {
        // 使用setter函数设置属性
        setName(name);
        setAge(age);
    }

    // getter函数获取动物名字
    string getName() {
        return name;
    }

    // getter函数获取动物年龄
    int getAge() {
        return age;
    }

    // setter函数设置动物名字
    void setName(string name) {
        // 使用访问控制符保护属性，避免错误的赋值
        this->name = name;
    }

    // setter函数设置动物年龄
    void setAge(int age) {
        // 使用访问控制符保护属性，避免错误的赋值
        if (age < 0) {
            // 非法年龄，抛出异常
            throw "Invalid age";
        }
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
        cout << "The dog " << getName() << " barks." << endl;
    }
};

// Cat类继承自Animal类
class Cat : public Animal {
public:
    // 构造函数
    Cat(string name, int age) : Animal(name, age) {}

    // 重写父类的虚函数
    void makeSound() {
        cout << "The cat " << getName() << " meows." << endl;
    }
};

int main() {
    try {
        // 创建动物对象
        Animal animal("Generic Animal", 5);
        // 获取动物对象的名字和年龄
        cout << animal.getName() << " is " << animal.getAge() << " years old." << endl;

        // 创建狗对象
        Dog dog("Buddy", 3);
        // 获取狗对象的名字和年龄
        cout << dog.getName() << " is " << dog.getAge() << " years old." << endl;

        // 创建猫对象
        Cat cat("Mittens", -1); // 传入非法年龄
        // 获取猫对象的名字和年龄
        cout << cat.getName() << " is " << cat.getAge() << " years old." << endl;
    }
    catch (const char* msg) {
        // 捕捉异常并输出错误信息
        cerr << "Error: " << msg << endl;
    }

    return 0;
}
