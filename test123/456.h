#pragma once

class qq
{
public:
	qq(int y) {
		this->y = y;
	}
	int ok()
	{
		return y;
	}
	qq() = default;

private:
	int y{ 1 };
};
