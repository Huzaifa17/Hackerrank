

Complex operator+(Complex a,Complex b)
{
    Complex obj;
    obj.a=a.a+b.a;
    obj.b=a.b+b.b;
    return obj;
}

ostream &operator<<(ostream &out,const Complex &obj)
{
    cout<<obj.a<<"+i"<<obj.b;
    return out;
}

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

