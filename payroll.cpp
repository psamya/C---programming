#include<iostream>
 int salary,overtime,pay,workhours,hourlysalary,overtimepay;
  class employee
{
   public:
    char name[25];
    void input()
  { std::cout<<"Enter name:";
    std::cin>>name;
    std::cout<<"working hours:";
    std::cin>>workhours;
    std::cout<<"hourly salary:";
    std::cin>>hourlysalary;
  }
};
   class principle:public employee
{  public:
    int calculate()
    {
      if(workhours>30)  
   {   overtime = workhours-30;
       overtimepay = overtime * hourlysalary;
      salary = overtimepay + workhours*hourlysalary;
   }
      else
   {   salary=workhours*hourlysalary;
   }
 std::cout<< workhours<<"\n";
   std::cout<< hourlysalary<<"\n";
   std::cout<<overtime<<"\n";
   std::cout<<"\nprint values";
    return salary;
  }
};
  class teacher:public employee
 {  public:
    double calculate1() 
    {
    pay = workhours * hourlysalary;

     if(workhours>30)
   {  overtime = workhours-30;
      overtimepay = overtime * hourlysalary;
      salary = overtimepay + pay;
   }
     else
      salary=pay;
      return salary;
  }
};

  class peon:public employee
{  public:

   double calculate2() {
    pay = workhours * hourlysalary;

 if(workhours>40)
   { overtime = workhours-40;
     overtimepay = overtime * hourlysalary;
     salary = overtime + pay;
   }
    else
   { salary=pay;
   }
    return salary;
  }
};
  int main()
{
  employee e;
  principle p;
  teacher t;
  peon g;
  int num;
  std::cout<<"Enter 1 for principle,\n2 for teacherand \n3 for peon\n";
  std::cin>>num;

   if(num==1)
  { e.input();
    std::cout<<"\nafter calculating the salary is:\n"<<p.calculate();
  }
   else if(num==2)
  { e.input();
    std::cout<<"\nsalary=\n"<<t.calculate1();
  }
   else
  { e.input();
    std::cout<<"\nAfter calculating salary is=\n"<<g.calculate2();
  }
  return 0;
}