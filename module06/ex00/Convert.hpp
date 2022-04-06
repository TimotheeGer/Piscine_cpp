#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <limits>
#include <string>
#include <cmath>
#include <sstream>

class Convert {

	public:

		Convert( std::string conv );
		Convert( Convert const &src );
		~Convert();

		Convert &operator=(Convert const &rhs);
		
		char getChar(void);
		int getInt(void);
		float getFloat(void);
		double getDouble(void);
		
		long ft_stoi( std::string s );
		bool ValueConvertor(void);
		void checkWhichConvert(void);
		
		void convert_char(void);
		void convert_int(void);
		void convert_float(void);
		void convert_double(void);

		void conv_str(void);
		bool checkIsInt(void);
		bool checkIsNanOrInf(void);
		bool CheckIsCharacter(void);
		bool CheckIsFloat(void);
		bool CheckIsDouble(void);
		void checkOverflow(void);

		void printPseudo(void);
		void printConv(void);

		int ft_atoi( std::string str );

		class InputOverflow : public std::exception {
			public:
				virtual const char* what() const throw();
		};
	
	private:
		
		Convert();

		char 			_char;
		int 			_int;
		float 			_float;
		double 			_double;

		std::string 	char_str;
		std::string 	int_str;
		std::string 	float_str;
		std::string 	double_str;

		int				is_char;
		int				is_int;
		int				is_float;
		int				is_double;

		int 			stoi_error;

		std::string 	_value;

};

#endif
