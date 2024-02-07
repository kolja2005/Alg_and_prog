#include<vector>
struct Complex_num {
	double re;
	double im;
};
class Complex { 
	 
public:
	double real;
	double image;
 
	Complex_num complex;
	Complex(std::string num) {
		 
		std::vector<double> number = Split(num, ' ');
		double re = number[0];
		double im = number[1];
		complex.re = re;
		complex.im = im;
		real = re;
		image = im;
	}
	Complex(double re, double im) {
		complex.re = re;
		complex.im = im;
		real = re;
		image = im;
	}
	 

 

private:
	std::vector<double> Split(std::string line, char delimeter) {
		std::vector<std::string> array;
		std::string new_line;
		int count = 0;
		for (int i = 0; i < line.size(); i++) {
			if (line[i] != delimeter && line[i] != 'j') {
				new_line += line[i];
			}
		}	
		for (int i = 0; i < new_line.size();i++) {
			if (i == 0) {
				array.push_back("");
			}
			if (i == 0 && !std::isdigit(new_line[i])) {
				array[count] += new_line[i];
			}
			else if (std::isdigit(new_line[i]) || new_line[i]=='.') {
				array[count] += new_line[i];
			}
			else {
				count++;
				array.push_back("");
				array[count] += new_line[i];
			}
		}
		std::vector<double>result;
		for (auto& elem : array) {
			result.push_back(std::stod(elem));
		}
		return result;
	}
};
Complex operator + (Complex left,Complex right) {
	return Complex(left.complex.re + right.complex.re, left.complex.im + right.complex.im);
}
Complex operator - (Complex left, Complex right) {
	return Complex(left.complex.re - right.complex.re, left.complex.im - right.complex.im);
}
Complex operator * (Complex left, Complex right) {

	return Complex(left.complex.re * right.complex.re - left.complex.im * right.complex.im, left.complex.re * right.complex.im + left.complex.im * right.complex.re);
}
Complex operator /(Complex left, Complex right) {
	return Complex{ (left.complex.re * right.complex.re + left.complex.im * right.complex.im) / (right.complex.re * right.complex.re + right.complex.im * right.complex.im), (left.complex.im * right.complex.re - left.complex.re * right.complex.im) / (right.complex.re * right.complex.re + right.complex.im * right.complex.im) };
}
std::ostream& operator<<(std::ostream& out, const Complex& num) {
	out << (num.complex.re == 0.0 ? 0.0 : num.complex.re)
		<< (num.complex.im < 0 ? "" : "+")
		<< (num.complex.im == 0.0 ? 0.0 : num.complex.im) << 'j';
	return out;
}