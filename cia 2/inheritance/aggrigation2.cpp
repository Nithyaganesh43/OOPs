#include <iostream>
#include<string.h>
using namespace std;
class Tech{
public:
int house;
string city, state;
Tech(int house_no, string city, string state)
{ this->house = house_no;
this->city = city;
this->state = state;
}
};
class Person
{
private:
Tech *address;
public:
string name;
Person(string name, Tech &address)
{
this->name = name;

this->address = &address;
}
void display()
{
cout<< name<< " "<< " "<< address->house<<" "<<address->city<< " "<<address->state<<endl;
}
};
int main(void) {
Tech add1= Tech(112 ,"Bandra","Mumbai");
Tech add2 = Tech(222, "Jahanpanah","New Delhi");
Person p1 = Person("Raj",add1);
Person p2 = Person("John",add2);
cout << "Name of the Person" << " and " << "Address"<< endl<<endl;
p1.display();
p2.display();
return 0;
}