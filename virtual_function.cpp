int stu=0;
int tea=0;
class Person
{
    public:
    char name[500];
    int age;
    virtual void getdata()=0;
    virtual void putdata()=0;
};
class Professor : public Person
{
    public:
    int publications;
    int cur_id;
    void getdata()
    {
        cin>>name;
        cin>>age;
        cin>>publications;
        tea++;
        cur_id=tea;
    }
    void putdata()
    {
        cout<<name<<' '<<age<<' '<<publications<<' '<<cur_id<<endl;
    }
};
class Student : public Person
{
    public:
    int marks[6];
    int cur_id;
    void getdata()
    {
        cin>>name;
        cin>>age;
        cin>>marks[0]>>marks[1]>>marks[2]>>marks[3]>>marks[4]>>marks[5];
        stu++;
        cur_id=stu;
    }
    void putdata()
    {
        cout<<name<<' '<<age<<' '<<marks[0]+marks[1]+marks[2]+marks[3]+marks[4]+marks[5]<<' ';
        cout<<cur_id<<endl;
    }
};
