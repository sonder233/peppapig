    #include <iostream>
    using namespace std;
    int main()
    {
        int a[10] = { 0,1,1,0,2,3,10,4,2,4 };
        int tmp[10]; // ����һ����k��ͬ��С�����飬���ȥ�غ����
        int m = 0; // ��¼��ǰtmp���״��˶��ٸ�Ԫ��

        for (int i = 0; i < 10; i++)
        {
            int j = 0;
            for (; j < m; j++)
            {
                if (a[i] == tmp[j])//��a[i]������tmp���Ԫ�ضԱ�
                    break; // �ҵ���ͬ����
            }

            if (j == m)
            { // û���ҵ�һ����ͬ�ģ���a�д�Ԫ�ط���tmp��
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
