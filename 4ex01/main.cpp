#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    // Create a Dog object dynamically
    const Dog* luna = new Dog();

    // Copy construct a new Dog from luna
    Dog diego(*luna);

    // Test assignment operator
    Dog bella;
    bella = diego; // This uses the assignment operator

    // Test sounds
    luna->makeSound();
    diego.makeSound();
    bella.makeSound();

    // Test deep copy: set an idea in one, check it's not in the other
    diego.setIdea(0, "Chase the ball");
    std::cout << "luna's idea[0]: " << luna->getIdea(0) << std::endl;
    std::cout << "diego's idea[0]: " << diego.getIdea(0) << std::endl;

    // Clean up
    delete luna;
    return 0;
}

