class monster{
    private:
        string name;
        int hp, atk;
    public:
        void monster(string, int=10, int=5);
        void monster_info();
        void monster_print();
};

monster::monster(string n,int h,int a){
    name=n;
    hp=h;
    atk=a;
}

monster::monster_info(int x){
    return 0;
}