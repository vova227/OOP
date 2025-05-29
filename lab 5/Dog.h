#ifndef DOG_H
#define DOG_H

#include <string>

class Beast {
    std::string body;
    std::string head;
    std::string* paws;
    int number_of_paws;

    void build();
    void destroy();

public:
    Beast();
    virtual ~Beast();
};

class TailedBeast : virtual public Beast {
    std::string tail;

public:
    TailedBeast();
    virtual ~TailedBeast();
};

class SkinnedBeast : virtual public Beast {
    std::string skin;

public:
    SkinnedBeast();
    virtual ~SkinnedBeast();
};

class Dog : public TailedBeast, public SkinnedBeast {
public:
    Dog();
    ~Dog();
};

#endif // DOG_H
