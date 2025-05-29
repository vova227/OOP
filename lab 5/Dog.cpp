#include "Dog.h"
#include <iostream>

// --- Beast ---

void Beast::build() {
    std::cout << "Створено:\n" << body << "\n" << head << "\nлапи:\n";
    for (int i = 0; i < number_of_paws; ++i)
        std::cout << paws[i] << "\n";
}

void Beast::destroy() {
    std::cout << "Знищено:\n" << body << "\n" << head << "\nлапи:\n";
    for (int i = 0; i < number_of_paws; ++i)
        std::cout << paws[i] << "\n";
}

Beast::Beast() {
    body = "тіло";
    head = "голова";
    number_of_paws = 4;
    paws = new std::string[number_of_paws] {
        "передня права", "передня ліва", "задня права", "задня ліва"
    };
    build();
}

Beast::~Beast() {
    destroy();
    delete[] paws;
}

// --- TailedBeast ---

TailedBeast::TailedBeast() {
    tail = "хвіст";
    std::cout << "додано " << tail << "\n";
}

TailedBeast::~TailedBeast() {
    std::cout << "видалено " << tail << "\n";
}

// --- SkinnedBeast ---

SkinnedBeast::SkinnedBeast() {
    skin = "шкіра";
    std::cout << "додано " << skin << "\n";
}

SkinnedBeast::~SkinnedBeast() {
    std::cout << "видалено " << skin << "\n";
}

// --- Dog ---

Dog::Dog() {
    std::cout << "додано вірність\nУ нас є СОБАКА!\n\n";
}

Dog::~Dog() {
    std::cout << "Прощання з собакою:\n";
}