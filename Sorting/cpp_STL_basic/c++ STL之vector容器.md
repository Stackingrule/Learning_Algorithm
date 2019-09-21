# c++ STL之vector容器

*[目录](#0)
	*[创建vector对象](#1)
	*[尾部元素扩张](#2)
	*[下标方式访问vector元素](#3)
	*[用迭代器访问](#4)
	*[元素的插入](#5)
	*[元素的删除](#6)
	*[使用reverse反向排列算法](#7)
	*[使用sort算法对向量元素进行排序](#8)
	*[向量的大小](#9)

<h2 id="1">创建vector对象</h2>
创建vector对象常用的有三种形式：
- 1.不指定容器的元素个数
vector<int> v;
- 2.指定容器的大小
vector<double> v(10);
- 3.创建一个具有n个元素的向量容器对象，每个元素具有指定的初始值
vector<double> v(10, 3.14);

<h2 id="2">尾部元素扩张</h2>
用push_back()对vector容器在尾部追加新元素。

```cpp
#include <vector>
#include <iostream>
using namespace std;
int main() {
	vector<int> v;
	v.push_back(2);
	v.push_back(7);
	v.push_back(9);
	cout << v[0] << " " << v[1] << " " << v[2] << endl;
	return 0;
}
```

<h2 id="3">下标方式访问vector元素</h2>
类似于数组的访问

```cpp
```

<h2 id="4">用迭代器访问</h2>

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v(3);
	v[0] = 3;
	v[1] = 5;
	v[2] = 7;

	//定义迭代器变量
	vector<int>::iterator it;
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}	
```
<h2 id="5">元素的插入</h2>
insert()方法可以在vector对象的任意位置前插入一个新的元素

```cpp
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> v(3);
	v[0] = 1;
	v[1] = 2;
	v[2] = 3;

	v.insert(v.begin(), 8);
	v.insert(v.begin()+2, 5);
	v.insert(v.end(), 9);

	vector<int>::iterator it;
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}
```

<h2 id="6">元素的删除</h2>
erase()方法可以删除vector中迭代器所指的一个元素或一段区间中的所有元素
clear()方法则一次性删除vector中的所有元素

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v(20);
	for (int i = 0; i < 20; ++i)
	{
		v[i] = i;
	}

	v.erase(v.begin()+2);
	vector<int>::iterator it;
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	v.erase(v.begin()+1, v.begin()+5);
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout<< endl;

	v.clear();

	cout << v.size() << endl;
	return 0;
}
```

<h2 id="7">使用reverse反向排列算法</h2>
reverse反向排列算法，需要定义头文件**#include<algorithm>**
reverse算法可将向量中的某段迭代器区间反向排列

```cpp
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	vector<int> v(10);
	for(int i = 0; i < 10; i++) {
		v[i] = i;
	}

	reverse(v.begin(), v.end());

	vector<int>::iterator it;

	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}
```

<h2 id="8">使用sort算法对向量元素进行排序</h2>
使用sort算法，需要定义头文件**#include<algorithm>**
sort算法要求随机访问迭代器进行排序，在默认情况下，对向量元素进行升序排列

```cpp
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;
	int i;

	for(i = 10; i > 0; i--) {
		v.push_back(i);
	}

	for(i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	sort(v.begin(), v.end());

	for(i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}
```

<h2 id="9">向量的大小</h2>
使用size()方法可以返回向量的大小
使用empty()方法反回向量是否为空

```cpp
#include <vector>
#include <iostream>

using namespace std;

int main() {
	vector<int> v(10);

	for(int i = 0; i < 10; i++) {
		v[i] = i;
	}

	cout << v.size() << endl;
	cout << v.empty() << endl;

	v.clear();
	cout << v.empty() << endl;

	return 0;
}
```
