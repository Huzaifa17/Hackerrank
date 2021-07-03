#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    int age;
    int standard;
    string first_name;
    string last_name;
    char all[500];
    public:
    void set_age(int n){
        age=n;
    }
    void set_standard(int n){
        standard=n;
    }
    void set_first_name(string s){
        first_name=s;
    }
    void set_last_name(string s){
        last_name=s;
    }
    int get_age(){
        return age;
    }
    int get_standard(){
        return standard;
    }
    string get_first_name(){
        return first_name;
    }
    string get_last_name(){
        return last_name;
    }
    char *to_string(){
        int i=0,j,k,n=age,m=age,l=0;
        while(n){
            i++;
            n/=10;
        }
        i--;
        k=i;
        while(m){
            all[k]=(m%10)+48;
            m/=10;
            k--;
        }
        i++;
        all[i]=',';
        i++;
        for(j=0;first_name[j]!='\0';j++,i++){
            all[i]=first_name[j];
        }
        all[i]=',';
        i++;
        for(j=0;last_name[j]!='\0';j++,i++){
            all[i]=last_name[j];
        }
        all[i]=',';
        n=standard;
        m=standard;
        while(n){
            i++;
            n/=10;
        }
        k=i;
        while(m){
            all[k]=(m%10)+48;
            m/=10;
            k--;
        }
        all[i+1]='\0';
        return all;
    }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
