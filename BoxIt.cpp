
class Box
{
    int b;
    int h;
    int l;
    long long int n;
    public:
    Box(int length, int breadth, int height){
        l=length;
        b=breadth;
        h=height;
    }
    Box(){
        l=0;
        b=0;
        h=0;
    }
    Box(const Box &B){
        l=B.l;
        b=B.b;
        h=B.h;
    }
    int getLength(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h;
    }
    long long CalculateVolume(){
        n=l;
        n=n*b;
        n=n*h;
        return (n);
    } 
    friend int operator<(Box a,Box b);
    friend ostream &operator<<(ostream &out,const Box &B);
};
int operator<(Box a,Box b){
    if((a.l<b.l)||((a.b<b.b)&&(a.l==b.l))||((a.l==b.l)&&(a.h<b.h)&&(a.b==b.b))){
        return 1;
    }
    return 0;
}

ostream &operator<<(ostream &out,const Box &B){
    cout<<B.l<<" "<<B.b<<" "<<B.h;
    return out;
}

