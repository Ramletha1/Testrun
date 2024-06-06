void print_instruction(){
    cout << "\n\nMonster Medieval Ohio Cursed Starfish Figher." << endl;
    cout << "There are 3 monsters provided." << endl;
    cout << "Each has starting 20 health points and 5 attack points." << endl;
    cout << "Including money balance of 10,000 gold coins for spending on strategies.\n\n" << endl;
}

class monster{
    private:
        string name;
        float hp,atk;
        int def,potion,money;
    public:
        monster (string,float=20,float=5,int=0,int=0,int=10000);
        string get_name();
        int get_money();
        void print_info();
        void print_instruction();
        void set_name(string);
        void set_hp(float);
        void set_attack(float);
        void set_potion(int);
        int heal();
        int hit();
};

monster::monster(string n, float h, float a, int d, int p, int m){
    name=n;
    hp=h;
    atk=a;
    def=d;
    potion=p;
    money=m;
}

string monster::get_name(){
    return name;
}

int monster::get_money(){
    return money;
}

void monster::print_info(){
    cout << "Monster's Name: " << name << endl;
    cout << "Health: " << hp << endl;
    cout << "Attack Damage: " << atk << endl;
    cout << "Armor(%): " << def << endl;
    cout << "Total Potion: " << potion << endl;
    cout << "Currency Balance: " << money << endl;
}