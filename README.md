# practice-c
part of my daily plan for Algorithm by C

#### gets()函数
```c
/*
  parmater : char *
  return : char *
*/
(char *) gets(char *);
```
gets()代表get string,它从系统的标准输入设备获得一个字符串。它读取换行符之前的所有字符，在这些字符后添加一个空字符(\0)，然后把这个字符串交给调用它的程序。
注意：gets()返回的指针与传给它的是同一个指针。

#### typedef
```c
typedef struct person {
	char * name;
	int age;
}man,*people;
```
person作为该结构的标记名，typedef将该结构声明为man类型和(*people)类型。可以简化成：
```
man * people;
```
people就是一个指向man类型的指针。

#### 关于二叉树创建为何需要传递双重指针
```c
void createTree(node **p) {
	int n;
	scanf("%d",&n);
	*p=(node *)malloc(sizeof(node));
	*p->data = n;
	createTree(&(*p->left));
	createTree(&(*p->right));	
}
```
这里p指的是一个指向node结构的指针的指针，由于函数传参具有作用域，createTree方法在被调用的时候，会将外部指针的值赋值给参数p,当函数执行结束，参数p(变量p)就会被释放掉,但是在函数中为p生成的动态空间并没有从内存中释放，这样会造成内存泄漏。所以，如果传递单层指针node *,也只是把该指针的值赋值给函数内的临时变量，临时变量被赋值一块内存地址后，就被释放了。因此，要传入一个双层指针，在函数内对传入的第一层指针取值，也就是取到了第二层指针自身的地址，给这个地址分配一块内存地址，也就让该指针的值被赋予了新的地址值。函数执行完毕后，第一层的指针变量会被释放，但是第二层指针也已经被赋值。外部调用函数传递给被调函数的参数，就是这个节点的指针自身的地址。
