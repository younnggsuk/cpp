#ifndef __TEMPLATE_SMART_POINTER_H__
#define __TEMPLATE_SMART_POINTER_H__

template <typename T>
class SmartPointer
{
private:
	T *ptr;
public:
	SmartPointer(T *p);
	~SmartPointer();
	T& operator*() const;
	T* operator->() const;
};

template <typename T>
SmartPointer<T>::SmartPointer(T *p) : ptr(p)
{}

template <typename T>
SmartPointer<T>::~SmartPointer()
{
	delete ptr;
}

template <typename T>
T& SmartPointer<T>::operator*() const
{
	return *ptr;
}

template <typename T>
T* SmartPointer<T>::operator->() const
{
	return ptr;
}

#endif
