#include <iostream>
#include <vector>
using namespace std;
namespace zich{
    class Matrix
    {
        public:
            double** matrix;
            size_t n;
            size_t m;
            Matrix();
            Matrix(vector<double> data,int n,int m);
            ~Matrix();
            void operator+=(const Matrix& a) const;
            void operator-=(const Matrix& a) const;
            Matrix operator-() const;
            Matrix operator+() const;
            void operator*=(const double scalar) const;
            void operator*=(const Matrix& a);
            Matrix& operator++();
            Matrix operator++(int);
            Matrix& operator--();
            Matrix operator--(int);
            Matrix& operator=(const Matrix& a);
            friend Matrix operator-(const Matrix& a,const Matrix& b);
            friend Matrix operator+(const Matrix& a,const Matrix& b);
            friend Matrix operator*(const double scalar,const Matrix& a);
            friend Matrix operator*(const Matrix& a,const double scalar);
            friend Matrix operator*(const Matrix& a,const Matrix& b);
            friend bool operator<(const Matrix& a, const Matrix& b);
            friend bool operator==(const Matrix& a, const Matrix& b);
            friend bool operator!=(const Matrix& a, const Matrix& b);
            friend bool operator<=(const Matrix& a, const Matrix& b);
            friend bool operator>(const Matrix& a, const Matrix& b);
            friend bool operator>=(const Matrix& a, const Matrix& b);
            friend ostream& operator<< (ostream& output, const Matrix& a);
            friend istream& operator>> (istream& input, Matrix& a);
    };


}


