

// Write your Student class here
class Student
{
    int scores[5];
    public:
    void input()
    {
        int i;
        for(i=0;i<5;i++){
            cin>>scores[i];
        }
    }
    int calculateTotalScore()
    {
        int i,count=0;
        for(i=0;i<5;i++){
            count+=(scores[i]);
        }
        return count;
    }
};
