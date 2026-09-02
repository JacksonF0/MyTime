// Add documentation for each function

#include <iostream>
    
class MyTime
{   
	public:

		// CONVERT THESE CONSTRUCTORS INTO A SINGLE CONSTRUCTOR THAT USES 
		// DEFAULT ARGUMENT
//removed first constructor and set defaults for second
		MyTime(int h = 0, int m = 0);   

		// Member functions
		void Reset(int h, int m);

		void input(std::istream& ins);            

		void output(std::ostream& outs) const;

		int get_hours() const{return hours;}

		int get_minutes() const{return minutes;}

		// Friend functions
		// Removed t1 calls and friend text
		//add const to the back to maintain t1s constant
		MyTime operator + (const MyTime& t2) const;
	
		MyTime operator - (const MyTime& t2) const;
	
		MyTime operator * (int num) const;

		MyTime operator / (int num) const;

		//really just the same as above operators

		bool operator == (const MyTime& t2) const;

		bool operator < (const MyTime& t2) const;

		bool operator <= (const MyTime& t2) const;
   
  	private:
		void simplify();
		int hours;        // hours can be > 24
		int minutes;      // 0 <= minutes <= 59
 };	
 // stream operators moved outside the function
 // also removed friend category
 	std::istream& operator >>(std::istream& ins, MyTime& t);
	// kept MyTime constant on output but not input	
	std::ostream& operator <<(std::ostream& outs, const MyTime& t);