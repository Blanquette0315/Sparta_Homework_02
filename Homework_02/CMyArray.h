#pragma once

template<typename T>
class CMyArray
{
private:
	T* pBeginData;
	int iCurCount;
	int iMaxCount;

public:
	void ReSize();
	void push_back(T data);
	T GetData(int idx);
	int size();
	void Distroy();

	//연산자 오버로드
public:
	T& operator[](int Idx);

public:

	CMyArray()
		: pBeginData(nullptr)
		, iCurCount(0)
		, iMaxCount(2)
	{
		// 초기 할당 받을 Hip 메모리 크기는 T가 2개 들어갈 공간
		pBeginData = new T[iMaxCount];
	}

	~CMyArray()
	{
		delete pBeginData;
	}
};

template<typename T>
inline void CMyArray<T>::ReSize()
{
	iMaxCount *= 2;
	T* tempData = new T[iMaxCount];

	for (int i = 0; i < iCurCount; ++i)
	{
		tempData[i] = pBeginData[i];
	}
	delete pBeginData;
	pBeginData = tempData;
}

template<typename T>
inline void CMyArray<T>::push_back(T data)
{
	if (iMaxCount <= iCurCount)
	{
		ReSize();
	}
	pBeginData[iCurCount++] = data;
}

template<typename T>
inline T CMyArray<T>::GetData(int idx)
{
	return pBeginData[idx];
}

template<typename T>
inline int CMyArray<T>::size()
{
	return iCurCount;
}

template<typename T>
inline void CMyArray<T>::Distroy()
{
	for (int i = 0; i < iCurCount; ++i)
	{
		delete pBeginData[i];
	}
}

template<typename T>
inline T& CMyArray<T>::operator[](int Idx)
{
	return pBeginData[Idx];
}