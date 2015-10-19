#ifndef REVERSEENCODER_HPP_
#define REVERSEENCODER_HPP_

class ReverseEncoder
{
public:
	virtual ~ReverseEncoder(){};
protected:
	virtual void reverse_encode(int& current_value) = 0;
};

#endif
