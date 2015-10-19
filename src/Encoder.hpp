#ifndef ENCODER_HPP_
#define ENCODER_HPP_

class Encoder
{
public:
	virtual ~Encoder(){};
protected:
	virtual void encode(int& current_value) = 0;
};

#endif
