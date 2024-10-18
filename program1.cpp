#include<iostream>
using namespace std;
//I HAVE CREATED A CLASS CALLED "EMPLOYEE"
class Employee
{
    private:
    string f_name,l_name;
    int m_salary;
    public:
    Employee()
    {
        f_name="TEDDYDAN ";
        l_name="MUDANYA";
        m_salary=7000;
		if (m_salary< 0)
	 {
        m_salary = 0;
    } 
		else 
		{
	        m_salary = m_salary;
	    };
    }
	   
	   
	  //  CREATED THREE SETTER FUNCTION  FOR EACH DATA TYPE IN EMPLOYEE
	    void set_fname(string firstname)
    {
        f_name= firstname;
    }   
    void set_Lname(string lastname)
    {
        l_name= lastname;
    } 
  // THIS CHECKS FOR THE CONDITION OF MONTHLY SALARY WHERE IT IS SET 0 IFF ITS LESS THAN IT
    void set_salary(int monthlysalary)
	{
		
    if (monthlysalary < 0)
	 {
        m_salary = 0;
    } 
		else 
		{
	        m_salary = monthlysalary;
	    }
	}  
	// THE GETTER FUNCTION FOR THE ABOVE SEETERS
    string get_fname()
    {
           return f_name;
    }
    
    string get_lname()
    {
           return l_name;
    }
    int get_salary()
    {
           return m_salary;
    }
    // THIS WILL OUTPUT THE VALUES OF THE OBJECT ..PERSON1 
	void displaydetails()
    {  
	    cout<<"__________display details__________"<<endl;
	    cout<<"EMPLOYEE FIRST NAME IS :"<<f_name<<endl;
	    cout<<"EMPLOYEE LAST NAME IS : "<<l_name<<endl;
	    cout<<"EMPLOYEE MONTHLY SALARY  IS :KSH "<<m_salary<<endl;
	    cout<<"EMPLOYEE ANNUAL SALARY  IS :KSH "<<m_salary*12<<endl;
    }  
	// THIS FUNCTION LOOKS AT RAISING THE MONTHLY SALARY HENCE THE ANNUAL SALARY
	void raise_fun()
	{
      m_salary= m_salary * 1.1;
		
	}   
};

int main()
{
    // OBJECTS NAMED PERSON1 AND PERSON2
		   Employee person1,person2;
		   person1.displaydetails();
		   // FOR PERSON2 OBJECT--> WE ARE GOING TO DECLARE THE TYPES BY THE SET
		   // FUNCTIONS AND DISPLAY THEM BY THE GET FUNCTION
		   person2.set_fname("MELANIE");
		    person2.set_Lname("OUYA");
		   person2.set_salary(10000);
		     
		   cout<<"_____________display details_________"<<endl;
		   cout<<"EMPLOYEE FIRST NAME IS :"<<person2.get_fname()<<endl;
   	       cout<<"EMPLOYEE LAST NAME IS : "<<person2.get_lname()<<endl;
           cout<<"EMPLOYEE MONTHLY SALARY  IS :KSH "<<person2.get_salary()<<endl;
		   cout<<"EMPLOYEE ANNUAL SALARY  IS :KSH "<<person2.get_salary()*12<<endl<<endl;
		   // FOR THE SECOND PART WE WOULD BE DISPLAYING THE UPDATED VALUES OF SALARY BY USING THE RAISE FUNCTION 
		   //FOR BOTH OBJECTS
		   cout<<"------------------------------------------------------"<<endl;
		   cout<<"  ____________  UPDATE VALUES AFTER THE RAISE _____________"<<endl;
		   
		   person1.raise_fun();
		   cout<<"PERSON 1"<<endl;
		    person1.displaydetails();
		     cout<<"PERSON 2"<<endl;
		   person2.raise_fun();
		    cout<<"_____________display details_________"<<endl;
		   cout<<"EMPLOYEE FIRST NAME IS :"<<person2.get_fname()<<endl;
   	       cout<<"EMPLOYEE LAST NAME IS : "<<person2.get_lname()<<endl;
           cout<<"EMPLOYEE MONTHLY SALARY  IS :KSH "<<person2.get_salary()<<endl;
		   cout<<"EMPLOYEE ANNUAL SALARY  IS :KSH "<<person2.get_salary()*12<<endl<<endl;
		   
		    
		   
	  return 0;
}
