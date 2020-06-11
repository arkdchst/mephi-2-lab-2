#include <complex>


template <typename T>
class complex {
private:
	T realPart;
	T imagPart;

public:
	complex(T realPart = T(), T imagPart = T())
		: realPart(realPart), imagPart(imagPart){}

	T real() const {
		return this->realPart;
	}

	T imag() const {
		return this->imagPart;
	}

	complex operator+(int val) const {
		return complex(this->realPart + val, this->imagPart);
	}

	complex operator+(const complex<T> &val) const {
		return complex(this->realPart + val.realPart, this->imagPart + val.imagPart);
	}

	template <typename U>
	complex operator*(U val) const {
		return complex(this->realPart * val, this->imagPart * val);
	}

	template <typename U>
	bool operator==(const complex<U> &val) const {
		return this->realPart == val.real() && this->imagPart == val.imag();
	}

	template <typename U>
	bool operator!=(const complex<U> &val) const {
		return !this->operator==(val);
	}

};

