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
##### 请计算  
请计算`sizeof (p) = `    
### 【标准答案】
#### （5）4
#### 【答案解析】
指针即为地址，指针几个字节跟语言无关，而是跟系统的寻址能力有关，  
譬如以前是16为地址，指针即为2个字节，  
现在一般是32位系统，所以是4个字节，  
以后64位，则就为8个字节。