/*
链表逻辑实现的头文件，由vector提供的最小操作集来实现非最小操作集的函数。
*/
#pragma once

#include <data-structute.h>
#include <vector>

typedef Bool (*compare)(int,int);

Bool compare_int(int e_1,int e_2)
{
	if(e_1==e_2)
		return TRUE;
	else
		return FALSE;
}

int LocateElem(vector<int> List,int e,compare compare)
{
	vector<int>::iterator it;
	int index=1;
	for(it=List.begin();it!=List.end();it++)
	{
		if(compare(*it,e))
			return index;
		index++;
	}
	return 0;
}
