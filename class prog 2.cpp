#include <iostream>
#include <conio.h>
#include <math.h>

	using namespace std;
	
	class Point3d
	{
		
		int m_x, m_y, m_z;
		
		public:
			void setValues(int x, int y, int z)
			{
				m_x=x;
				m_y=y;
				m_z=z;
			}
			
		public:
			void print(int x, int y, int z)
			{
				m_x=x;
				m_y=y;
				m_z=z;
				cout << "(" << m_x << "," << m_y << "," << m_z << ")\n";
			}
			
		public:
			void vektor()
			{
				double vektor;
				vektor =  sqrt(m_x*m_x+m_y*m_y+m_z*m_z);
				cout << "vector length:" << vektor;
						
			}			
	};
	
	int main()
{
    Point3d point;
    	int x,y,z;
    	cout<< " x=";
		cin >> x;
		cout<< "\n y=";
		cin >> y;
		cout<< "\n z=";
		cin >> z; 
    	 //	point.setValues(x, y, z);
 
    		point.print(x,y,z);
    		
			point.vektor();
 
    return 0;
}

