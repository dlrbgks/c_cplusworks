//day18-2
#ifndef POINT_H
#define POINT_H



class Point
{
public:
	Point(int x, int y);

	int getX();
	int getY();
	
	void setX(int x);
	void setY(int y);

private:
	int x;
	int y;

};

#endif // !1