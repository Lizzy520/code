#include <bits/stdc++.h>
using namespace std;

int main()
{
    long e, m, h, em, mh, minN = 0, res = 0;
    vector<long> t;
    cin >> e >> em >> m >> mh >> h;
    minN = (e < m ? e : m) < h ? (e < m ? e : m) : h;
    res = minN;
    e -= minN;
    m -= minN;
    h -= minN;
    long sum = e + m + h + em + mh;
    // cout << sum 7<< endl;
    while(sum >= 3)
    {
        // cout << e << m << h << em << mh << endl;
        if(em + mh < 1) break;
        if(e == 0 && em > 0)
        {
            e++;
            em--;
        }
        else if(e == 0 && em == 0) break;
        if(h == 0 && mh > 0)
        {
            h++;
            mh--;
        }
        else if(h == 0 && mh == 0) break;
        if(m == 0 && (em >0 || mh > 0))
        {
            if(em > 0 && mh == 0)
            {
                m++;
                em--;
            }
            else if(mh > 0 && em == 0)
            {
                m++;
                mh--;
            }
            else if(mh + h > em + e)
            {
                m++;
                mh--;
            }
            else if(mh + h < em + e)
            {
                m++;
                em--;
            }
            else if(mh + h == em + e)
            {
                if(mh >= em)
                {
                    m++;
                    mh--;
                }
                else
                {
                    m++;
                    em--;
                }

            }
            else if(em == 0 && mh == 0) break;

        }
        if(e > 0 && m > 0 && h > 0)
        {
            e--;
            m--;
            h--;
            res++;
        }
        if(m == 0 && em + mh < 2 && (e == 0 || h == 0))
        {
            break;
        }
        sum = e + m + h + em + mh;

    }

    cout << res << endl;
    return 0;
}