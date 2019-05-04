int SimpleFunc(int a=10)
{
	return a+1;
}

int SimpleFunc(void)
{
	return 10;
}


/*
	   위와 같은 형태의 함수 오버로딩은
	   SimpleFunc();와 같이 호출 시
	   두 함수 모두에게 호출될 수 있으므로
	   잘못된 경우이다.
 */
