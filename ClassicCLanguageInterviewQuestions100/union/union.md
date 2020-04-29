##### 设有以下说明和定义：
（5）  
`    
    #include <stdio.h>
    #include <windows.h>  
        typedef union {
            long i;
            int k[5];
            char c;
        } DATE;
        struct data
        {
            int cat;
            DATE cow;
            double dog;
        } too;
        DATE max;
        mian()
        {
            printf("%d", sizeof(struct date) + sizeof(max));
        }
`  
##### 则语句  
`printf("%d",sizeof(struct date)+sizeof(max));`
的执行结果是：_____  
### 【标准答案】
#### 52
#### 【答案解析】
`DATE`是一个`union`, 变量公用空间.  
里面最大的变量类型是`int[5]`,占用20个字节.  
所以它的大小是20  
`data` 是一个`struct`,每个变量分开占用空间.  
依次为`int`4 + `DATE`20 + `double`8 = 32.  
所以结果是20 + 32 = 52.  
当然... 在某些16位编辑器下, int 可能是2字节,那么结果是  
`int`2 + `DATE`10 + `double`8 = 20

 