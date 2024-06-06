class monster{
    private:
    string name;
    int hp;
    int potion;

    public:
    monster(string, int, int);
    string get_name();
    void set_name(string);
    void print_all();
    void heal();
    void attack(int);
};

monster::monster(string n,int h,int p){
    this->name=n;
    this->hp=h;
    this->potion=p;
}

string monster::get_name(){
    return name;
}

void monster::set_name(string n){
    n=name;
}

void monster::print_all(){
    cout<<"Name : "<<name<<endl;
    cout<<"HP : "<<hp<<endl;
    cout<<"Potion : "<<potion<<endl;
    cout<<endl;
}

void monster::heal(){
    hp+=20;
    cout<<name<<" has used Healing Of The God"<<endl;
    cout<<name<<" gained additonal 20 health from the blessing of the god"<<endl;
    cout<<endl;
}

void monster::attack(int damage){
    int d = damage;
    int m = rand() % 4;
    m = rand() % 4;

    //cout<<m<<endl;
    //cout<<m<<endl;

    if(m==1){
    cout<<name<<" used poison acidic shot"<<endl;
    cout<<name<<" dealt "<<d<<" damage to the enemy"<<endl;
    cout<<endl;
    }

    if(m==0){
    cout<<name<<" used giant hell fire"<<endl;
    cout<<name<<" dealt "<<d<<" damage to the enemy"<<endl;
    cout<<endl;
    }

    else{
    cout<<name<<" has tripped and fell down"<<endl;
    cout<<name<<" dealt no damage to the enemy"<<endl;
    cout<<endl;
    }
}