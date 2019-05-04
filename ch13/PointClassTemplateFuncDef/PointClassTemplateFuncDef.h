#ifndef __POINT_CLASS_TEMPLATE_FUNC_DEF_H__
#define __POINT_CLASS_TEMPLATE_FUNC_DEF_H__

template <typename T>
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x=0, T y=0);
	void ShowPosition() const;
};

#endif
