#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"


int main()
{
    // Correct hierarchy (with virtual)
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); // will output the cat sound!
    j->makeSound(); // will output the dog sound!
    meta->makeSound(); // will output the animal sound!

    delete meta;
    delete j;
    delete i;

    std::cout << "---- WrongAnimal tests ----" << std::endl;

    // Wrong hierarchy (no virtual)
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    const WrongAnimal* wrongDog = new WrongDog();

    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound(); // will output WrongAnimal's sound, not WrongCat's!

    std::cout << wrongDog->getType() << " " << std::endl;
    wrongDog->makeSound(); // will output WrongAnimal's sound, not WrongDog's!

    delete wrongMeta;
    delete wrongCat;
    delete wrongDog;

    return 0;
}
