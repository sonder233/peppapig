    #include <iostream>
    using namespace std;
    int main()
    {
        int a[10] = { 0,1,1,0,2,3,10,4,2,4 };
        int tmp[10]; // 定义一个和k相同大小的数组，存放去重后的数
        int m = 0; // 记录当前tmp到底存了多少个元素

        for (int i = 0; i < 10; i++)
        {
            int j = 0;
            for (; j < m; j++)
            {
                if (a[i] == tmp[j])//拿a[i]依次与tmp里的元素对比
                    break; // 找到相同的了
            }

            if (j == m)
            { // 没有找到一个相同的，把a中此元素放入tmp里
                tmp[m] = a[i];
                m++;
            }
        }



        for (int i = 0; i < m; i++)
        {
            cout << tmp[i] <<" ";
        }
        return 0;
    }
