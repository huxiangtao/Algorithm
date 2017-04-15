# practice-c
part of my daily plan for studying C

# gets()函数
```c
/*parmater : char *
  return : char *
*/
(char *) gets(char *);
```
gets()代表get string,它从系统的标准输入设备获得一个字符串。它读取换行符之前的所有字符，在这些字符后添加一个空字符(\0)，然后把这个字符串交给调用它的程序。
注意：gets()返回的指针与传给它的是同一个指针。
