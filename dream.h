#include<iostream>
using namespace std;
class idealjob
{
  private:
  double pay;
  double workhours;
  double distance;
  public:
    idealjob()
    {

    this->pay=100;
    this->workhours=5;
    this->distance=100;
  }
void setpay(double pay)
{
  this->pay=pay;
}
void setworkhours(double workhours)
{
  this->workhours=workhours;
}
void setdistance(double distance)
{
  this->distance=distance;
}
double getpay()
{
  return this->pay;
}
double getworkhours()
{
return this->workhours;
}
double getdistance()
{
  return this->distance;
}
void display()
{
  cout<<"my ideal job"<<endl;
  cout<<"offers perhour $";
  cout<<this->pay<<endl;
  cout<<"requires maximum hours";
  cout<<this->workhours<<endl;
  cout<<"is at distance of km";
  cout<<this->distance<<endl;
  cout<<"may Allah bless everyone with the best"<<endl;
}
};
