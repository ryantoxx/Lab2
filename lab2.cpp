#include <iostream>
#include <string>


using std::string;

class Customer {
private:
    string Name;
    string Surname;
    int Age;
public:
void setName(string c_name) {
    Name = c_name;
}
string getName() {
    return Name;
}
void setSurname(string c_surname) {
    Surname = c_surname;
}
string getSurname() {
    return Surname;
}
void setAge(int c_age) {
    Age = c_age;
}
int getAge() {
    return Age;
}
void customer_request() {
    std::cout << "-> Hi, my name is " << Name <<" "<< Surname <<" I am "<< Age << " years old, and I would like to take a seat." << std::endl;
}
}; 

class Restaurant {
private:
    string Name;
    string Address;
    int Rating;
public:
    void setName(string r_name) {
        Name = r_name;
    }
    string getName(){
        return Name;
    }
    void setAddress(string r_address) {
        Address = r_address;
    }
    string getAddress() {
        return Address;
    }
    void setRating(int r_rating) {
        Rating = r_rating;
    }
    int getRating() {
        return Rating;
    }
    void Info_Restaurant() {
        std::cout << "-> Welcome, you've come to " << Name << " at " << Address << ", we are glad that you are here!" << std::endl;
        std::cout << "Our rating is " << Rating << " out of 10." << std::endl;
    }
};

class Hostess {
public:
  string Name;
  int Table_Nr;
  int Age;
    Hostess(string name, int table_nr, int age) {
        Name = name;
        Table_Nr = table_nr;
        Age = age;
    }
    void take_seat() {
        std::cout << "-> Hi, I'm " << Name << ", it's a pleasure meeting you here!I will help you to find a seat." << std::endl;
        std::cout << "Table number " << Table_Nr << " is empty, you can sit there." << std::endl;
    }
};

class Waiter {
private:
    string Name;
    int Age;
    int Salary;
    int Tip;
public:
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }
    void setAge(int age) {
        Age = age;
    }
    int getAge() {
        return Age;
    }
    void setSalary(int salary) {
        Salary = salary;
    } 
    int getSalary() {
        return Salary;
    }
    void setTip(int tip) {
        Tip = tip;
    }
    int getTip() {
        return Tip;
    }

    void come_Waiter() {
        std::cout << "-> Hi, I'm " << Name << " and I will serve you today." << std::endl;
        std::cout << "You can have the menu:" << std::endl;
    }
};

class Menu {
public:
    string Pizza; int Pprice;
    string Burger; int Burgerprice;
    string Steak; int Sprice;
    string Salad; int Vprice;
    string Soup; int Bprice;
    string Coffee; int Cprice;
    string Juice; int Jprice;
    string Soda; int Sodaprice;
    string Water; int Wprice;

    Menu(string pizza,int p_price,string burger,int burgerprice,string steak,int sprice,string salad,int vprice,string soup,int bprice,
         string coffee,int cprice,string juice,int jprice,string soda,int sodaprice,string water,int wprice) {
            Pizza = pizza; Pprice = p_price;
            Burger = burger; Burgerprice = burgerprice;
            Steak = steak; Sprice = sprice;
            Salad = salad; Vprice = vprice;
            Soup = soup; Bprice = bprice;
            Coffee = coffee; Cprice = cprice;
            Juice = juice; Jprice = jprice;
            Soda = soda; Sodaprice = sodaprice;
            Water = water; Wprice = wprice;
         } 
    void show_menu() {
        std::cout << Pizza <<": "<< Pprice <<"$."<< std::endl;
        std::cout << Burger <<": "<< Burgerprice <<"$."<< std::endl;
        std::cout << Steak <<": "<< Sprice <<"$."<< std::endl;
        std::cout << Salad <<": "<< Vprice <<"$."<< std::endl;
        std::cout << Soup <<": "<< Bprice <<"$."<< std::endl;
        std::cout << Coffee <<": " << Cprice <<"$."<< std::endl;
        std::cout << Juice <<": "<< Jprice <<"$."<< std::endl;
        std::cout << Soda <<": "<< Sodaprice <<"$."<< std::endl;
        std::cout << Water <<": "<< Wprice <<"$."<< std::endl;
    }
};

class Sommelier {
private:
    string Name;
    int Experience;
    int Age;
public:
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }
    void setExperience(int experience) {
        Experience = experience;
    }
    int getExperience() {
        return Experience;
    }
    void setAge(int age) {
        Age = age;
    }
    int getAge() {
        return Age;
    }
    void come_Sommelier() {
        std::cout << "-> Hi, my name is " << Name << " and I would like to show you the menu of hard drinks." << std::endl;
        std::cout << "I am " << Age << " years old and I've been a sommelier for " << Experience << " years now, so I can help you decide:" << std::endl;
    }
};

class hard_drink {
public:
    string Whiskey; int Wprice;
    string Vodca; int Vprice;
    string Wine; int Wineprice;
    string Liquer; int Lprice;
    string Tequila; int Tprice;

    hard_drink(string whiskey, int wprice, string vodca, int vprice, string wine, 
    int wineprice, string liquer, int lprice, string tequila, int tprice) {
        Whiskey = whiskey; Wprice = wprice;
        Vodca = vodca; Vprice = vprice;
        Wine = wine; Wineprice = wineprice;
        Liquer = liquer; Lprice = lprice;
        Tequila = tequila; Tprice = tprice; }
        
    void hard_menu() {
        std::cout << Whiskey << ": " << Wprice <<"$." << std::endl;
        std::cout << Vodca << ": " << Vprice <<"$." << std::endl;
        std::cout << Wine << ": " << Wineprice <<"$." << std::endl;
        std::cout << Liquer << ": " << Lprice <<"$." << std::endl;
        std::cout << Tequila << ": " << Tprice <<"$." << std::endl;
    }
};

class Chef {
private:
    string Name;
    float Experience;
    int Salary;
    string Pnumber; 
public:
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }
    void setExperience(float experience) {
        Experience = experience;
    }
    float getExperience() {
        return Experience;
    }
    void setPnumber(string pnumber) {
        Pnumber = pnumber;
    }
    string getPnumber() {
        return Pnumber;
    }
    
    void chef_prepares() {
        std::cout << "-> Our chef, " << Name << " is preparing your meal." << std::endl;
        std::cout << Name << " has been cooking for " << Experience << " years so far, he is really impressive." << std::endl;
        std::cout << "The meal is prepared, enjoy it! " << std::endl;
    }
};

class Bill {
public:
    string Payment;
    int Amount;

    Bill(string payment, int amount) {
      Payment = payment;
        Amount = amount;
    }
    void pay_bill() {
    std::cout << "-> The meal is worth " << Amount << "$ " << " and customer paid with " << Payment << std::endl;
        if(Amount == 0 && Payment == "credit card") {
            std::cout << "Payment unsuccessful! " << std::endl;
        }else {
            std::cout << "Payment successful! " << std::endl;
        }
    }
};

class Owner {
public:
    string Name;
    string Surname;
    int Pnumber;
    int Amount;

    Owner(string name, string surname, int pnumber, int amount) {
        Name = name;
        Surname = surname;
        Pnumber = pnumber;
        Amount = amount;
    }
    void introduce_yourself() {
        std::cout << "-> My name is " << Name << " " << Surname << " and I own this restaurant, happy to see you here!" << std::endl;
    }
    void income_today() {
        std::cout << "Our income for today is " << Amount << "$." << std::endl; 
    }
};

int main() {

    Customer client;
    client.setName("John");
    client.setSurname("Brown");
    client.setAge(24);
    client.customer_request();

    std::cout << "" << std::endl;

    Restaurant rest;
    rest.setName("La Placinte");
    rest.setAddress("Igor Vieru");
    rest.setRating(9);
    rest.Info_Restaurant();

    std::cout << "" << std::endl;

    Hostess employee("Jane", 11, 30);
    employee.take_seat();

    std::cout << "" << std::endl;

Waiter person;
    person.setName("Anne");
    person.setAge(21);
    person.come_Waiter();

    Menu menu1("Pepperoni", 12, "BigBurger", 10, "Beef Steak", 15, "Vinegred", 5, "Borsch", 8, "Latte", 5, "Apple Juice", 3, "Cola", 3, "Water", 1);
    menu1.show_menu();

    std::cout << "" << std::endl;

    Sommelier worker1;
    worker1.setName("Bruce");
    worker1.setAge(40);
    worker1.setExperience(15);
    worker1.come_Sommelier();

    hard_drink menu2("Irish Whiskey", 100, "Spicusor", 20, "Gallo Vine", 120, "McDowells", 150, "Blanco Tequila", 80);
    menu2.hard_menu();
    std::cout << "" << std::endl;
    std::cout << "-> " << client.getName() << " does not drink alcohol! " << worker1.getName() <<  " has to leave, bye." << std::endl;
    std::cout << "" << std::endl;

    std::cout <<"-> "<< client.getName() << " wants to order " << menu1.Pizza << " and " << menu1.Juice << "." <<std::endl;

    std::cout << "" << std::endl;

    Chef worker2;
    worker2.setName("William");
    worker2.setExperience(10);
    worker2.chef_prepares();

    std::cout << "" << std::endl;

    Bill money("credit card", 15);
    money.pay_bill();

    std::cout << "" << std::endl;

    Owner dir("Oliver", "Lopez", 79242514, 15);
    dir.introduce_yourself();
    dir.income_today();

}