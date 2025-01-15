#define SHAPE

class Circle {																//Initiating the class Circle
	int mX;
	int mY;
	int mRadius;


public:

	Circle(int x, int y, int radius) {										//Overloaded Constructor that takes x, y, and radius as parameters
		this->mX = x;
		this->mY = y;
		this->mRadius = radius;
	}

	int GetX() {															// Getter function to return the x-coordinate of the center
		return mX;
	}

	int GetY() {															// Getter function to return the y-coordinate of the center
		return mY;
	}

	int GetRadius() {														// Getter function to return the radius of the circle
		return mRadius;
	}

	float GetArea() {														// Getter function to calculate and return the area of the circle
		return (3.14f * (mRadius * mRadius));
	}

	float GetCircumference() {												// Getter function to calculate and return the circumference of the circle
		return (2 * 3.14f * mRadius);
	}

	int GetDiameter() {														// Getter function to calculate and return the diameter of the circle
		return (2 * mRadius);
	}
};