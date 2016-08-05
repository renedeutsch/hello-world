# hello-world

#include <Iostream>
#include <conio.h>

	using namespace std;
	
	class Employee 
	{
		public:
			std::string m_name;
			int m_id;
			double m_wage;
			
		void print()
		{
			cout << "Name : " << m_name << " \n Id: " << m_id << " \n Wage: " << m_wage << "\n";
			
			
		}
			
	};
	
	int main()
	{
			
		Employee alex {"Alex", 12, 30000};
		Employee anna {"Anna", 2, 50000 };
		
		alex.print();
		anna.print();
		
		
	return 0;
}




