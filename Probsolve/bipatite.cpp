#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,m;

int g[100010];
bool visited[100010];
void init()
{
    for(int i=0; i<n; i++)
    {
        visited[i]=false;
    }
}


int main()
{
    vector<int> adj[100010]={};
    int k,z;
    cin>>k;
    int o,p;
    string x;
    while(k--)
    {
        x="yes";
        init();
        cin>>p>>o;
        for(int i=0;i<o;i++)
        {
            cin>>n>>m;
            n--;
            m--;
            adj[n].push_back(m);
            adj[m].push_back(n);
            // cout<<g[n]<<g[m]<<endl;
        }
       /* for(int i=0;i<p;i++)
          for( int kuy=0; kuy<adj[i].size() ;kuy++)
        {
            cout<<adj[i][kuy]<<endl;
        }}*/
       for( n=0; n<p; n++)
        {
            for( m=0; m<adj[n].size(); m++)
            {
               // cout<<(visited[adj[n][m]])<<endl;

                if(!visited[n])
                {
                    visited[n]=true;
                    g[n]=1;
                }
                if(!(visited[adj[n][m]]))
                {
                    visited[adj[n][m]]=true;
                    if(g[n]==1)
                    {
                        g[adj[n][m]]=-1;
                    }
                    else
                    {
                        g[adj[n][m]]=1;
                    }


                }
                z=g[adj[n][m]];
                if(g[z]==g[n])
                    x="no";
                //cout<<(g[adj[n][m]])<<endl;
                cout<<n<<" "<<m<<" "<<adj[n][m]<<endl;
            }

        }

            if(o==2||p==1)
                x="yes";
        cout<<x<<endl;
        for(int bb=0;bb<o;bb++)
        {
            g[bb]=0;
        }
    }
    return 0;
}
/*3 3 3 1 2 2 3 3 1 4 3 1 2 1 3 4 1 100 1000 71 53 99 97 57 30 98 14 74 60 7 30 1 47 93 79 10 33 72 18 44 89 27 59 22 6 22 60 55 79 99 64
86 19 56 33 68 53 90 36
73 14
56 14
82 89
93 59
7 89
2 9
68 14
90 6
7 32
26 33
29 17
50 16
15 69
27 92
26 47
93 91
13 80
51 24
8 67
68 97
52 6
11 17
86 6
20 80
87 9
68 41
50 69
90 96
7 58
51 92
15 9
8 4
12 47
45 59
81 69
10 88
26 3
93 24
62 14
83 67
100 37
29 84
50 53
66 58
22 58
39 40
55 30
20 16
20 36
62 79
55 46
62 53
90 38
11 77
93 37
74 46
86 36
48 23
48 78
1 60
45 69
85 32
15 75
12 61
73 77
12 32
72 38
66 37
82 17
35 38
86 42
34 18
13 97
12 40
100 64
15 17
68 40
98 24
82 88
93 9
74 24
2 61
5 60
44 77
70 53
81 41
21 84
95 9
22 67
49 42
50 59
70 47
73 53
44 63
7 16
22 37
7 91
5 33
76 30
74 67
51 28
90 18
29 54
83 80
49 75
15 78
12 46
13 37
10 17
71 97
13 79
48 54
1 16
21 38
51 30
20 61
85 65
10 78
29 6
39 88
8 58
49 61
95 32
52 58
51 46
68 89
95 18
27 54
49 58
87 75
62 97
20 32
12 6
57 25
26 75
45 91
1 18
22 61
100 40
98 16
55 80
76 92
82 97
35 40
73 97
44 97
50 92
13 33
55 24
21 3
56 88
81 17
87 3
51 96
31 94
52 14
85 67
51 18
31 41
62 88
52 69
50 97
72 32
8 32
86 65
76 79
72 4
73 40
90 89
76 41
12 94
21 79
2 59
68 67
15 41
52 80
68 36
8 47
83 77
50 40
83 3
51 94
49 32
52 41
99 78
95 94
29 3
39 97
7 75
68 6
72 77
8 23
56 89
22 97
27 36
70 32
39 17
68 63
85 69
39 91
49 54
39 38
100 69
35 41
56 32
56 18
34 23
71 19
7 37
7 88
21 65
13 47
68 65
39 58
45 25
100 60
49 36
87 61
34 14
90 65
2 78
83 38
50 32
93 46
73 43
39 32
99 43
87 67
1 88
31 19
56 97
52 53
44 32
86 43
76 42
70 97
48 47
71 33
57 33
71 61
13 78
35 14
70 41
99 3
73 36
70 16
31 23
82 58
8 89
34 92
13 40
51 79
70 19
93 63
98 43
99 75
52 3
15 97
72 28
62 77
83 28
21 69
87 46
62 65
90 92
39 54
71 16
74 69
68 47
57 6
49 63
83 91
45 54
52 43
56 61
85 6
95 17
70 36
62 3
70 88
86 84
45 46
49 59
73 80
81 16
93 61
52 75
20 18
82 28
10 38
49 4
57 64
74 43
98 36
1 79
50 23
52 9
99 42
8 54
45 16
56 63
55 54
99 91
81 25
93 92
8 25
70 78
29 60
2 54
82 78
11 46
93 18
8 60
7 40
35 54
98 69
13 92
10 84
35 97
7 43
98 89
20 97
10 32
86 23
82 18
99 47
49 96
56 19
71 64
100 6
81 97
99 69
1 38
81 59
100 96
68 3
44 64
35 69
10 75
35 6
99 6
21 19
15 88
68 60
1 92
99 33
5 9
26 94
56 80
100 88
11 89
39 89
70 67
21 16
7 4
99 92
99 16
57 40
68 80
27 38
1 53
86 77
34 89
10 79
5 96
81 18
35 47
81 79
12 30
62 4
27 88
85 54
98 54
27 33
7 36
100 38
10 47
82 47
90 4
12 79
26 60
55 37
15 65
31 14
21 97
39 67
34 84
51 88
22 59
49 41
71 37
70 89
99 84
95 89
13 91
44 9
2 92
12 60
7 77
70 9
82 19
82 63
2 19
55 89
11 16
29 25
76 47
5 40
26 9
22 41
90 33
74 58
55 64
68 84
11 67
95 46
73 61
31 77
87 63
62 91
90 16
31 53
12 92
81 36
34 40
13 54
5 36
95 25
76 64
8 41
90 59
56 3
12 75
81 24
51 61
72 92
87 64
85 30
83 89
52 33
57 14
100 32
70 54
66 18
44 53
86 9
48 37
57 89
86 78
83 53
56 46
95 41
51 41
8 96
73 23
66 30
29 36
29 33
93 64
10 89
11 53
51 97
20 14
71 47
100 19
50 64
35 36
20 17
76 69
7 92
51 77
35 67
93 32
68 24
55 25
21 77
87 89
11 36
52 84
48 14
27 19
56 43
74 61
2 94
70 6
31 9
44 16
57 42
45 33
83 16
1 25
22 89
35 17
83 36
1 14
66 64
11 23
68 30
1 23
99 38
83 64
95 65
57 79
76 59
50 36
85 91
51 64
51 37
99 36
48 36
82 69
21 88
55 91
26 84
82 14
7 96
8 16
1 17
81 65
73 33
39 33
68 28
55 94
81 67
51 89
15 61
49 30
22 53
51 6
76 24
10 65
45 6
83 84
87 84
98 47
20 60
12 37
100 41
72 65
70 40
74 84
72 17
62 96
26 17
7 78
26 18
11 60
68 4
2 75
39 63
95 36
12 59
52 46
21 80
66 77
44 58
2 18
12 16
34 4
52 36
13 14
73 75
51 53
62 59
90 79
21 96
49 46
49 91
2 4
55 88
83 40
21 9
74 37
35 84
98 28
74 16
34 54
8 24
45 40
85 46
52 28
82 54
98 59
39 75
83 79
10 92
29 30
71 40
20 92
81 92
39 9
98 97
8 28
85 33
51 63
5 46
27 63
57 61
2 14
50 58
62 38
86 24
5 54
21 37
57 19
35 53
50 6
76 61
10 63
26 79
76 9
74 41
99 63
86 79
35 32
66 97
82 80
31 43
99 9
72 88
90 24
85 25
62 43
83 23
52 67
29 67
29 42
34 58
90 9
85 97
93 33
73 3
15 23
87 38
98 30
83 14
56 84
73 41
55 96
45 37
57 18
62 60
95 80
62 92
7 59
95 6
11 78
82 94
29 97
15 38
83 63
68 96
39 36
8 30
87 77
31 33
52 17
29 47
7 38
49 97
83 60
81 94
73 24
22 33
70 25
66 3
5 30
34 3
27 40
5 77
100 16
49 89
99 96
82 33
1 78
22 14
95 91
29 4
22 18
71 94
90 46
71 79
5 84
48 46
34 28
68 92
44 79
76 18
15 14
49 80
62 47
29 61
39 77
72 46
8 65
11 19
49 65
72 43
50 60
5 89
8 3
45 32
34 80
31 16
56 38
50 63
10 36
82 53
34 37
66 59
31 79
74 53
5 37
90 53
48 28
95 23
57 80
50 24
56 78
68 18
68 23
35 65
93 41
90 88
68 32
20 78
81 40
7 46
90 17
85 37
52 18
12 36
70 77
52 23
15 47
5 64
66 89
99 59
29 38
100 54
85 59
52 4
98 58
62 54
8 69
48 79
73 79
20 67
76 36
20 69
82 3
22 65
52 61
1 80
74 32
56 17
7 60
56 65
55 19
26 91
39 53
83 42
82 42
21 58
62 32
68 91
71 88
12 65
20 65
73 18
5 78
31 88
57 58
52 79
95 63
87 36
2 30
57 38
20 89
27 24
72 96
100 58
29 58
45 19
39 28
1 19
85 41
74 6
98 33
66 88
45 41
44 91
87 6
71 32
5 63
48 60
73 91
45 78
45 75
31 63
27 37
48 24
26 67
52 97
27 17
13 67
26 89
5 91
27 94
21 17
1 24
56 92
48 19
49 6
86 46
83 58
11 41
57 43
66 32
81 6
62 41
76 65
100 92
45 60
55 18
49 28
10 42
7 24
45 77
13 69
20 94
85 28
7 65
2 79
68 43
27 67
81 42
71 65
20 43
29 94
12 96
13 30
73 60
85 43
93 23
99 37
56 60
55 92
99 17
11 38
70 64
22 16
11 14
62 33
100 30
20 46
76 3
68 59
39 19
71 41
26 6
90 91
31 18
44 80
93 30
71 9
73 28
15 84
86 80
15 53
26 36
21 33
15 46
12 91
49 69
20 96
22 9
95 59
27 53
39 4
27 77
99 19
66 42
76 53
74 38
83 61
39 23
99 40
27 69
50 41
83 17
82 30
1 43
98 46
70 58
45 84
39 43
85 61
56 96
52 96
45 14
95 4
8 94
39 78
31 67
26 32
87 17
22 24
15 4
45 23
56 25
35 79
49 23
21 59
2 33
1 69
76 43
31 78
8 59
45 3
62 84
1 61
71 77
50 4
2 23
56 79
81 3
72 67
50 88
83 65
2 46
82 46
66 43
70 60
56 6
83 96
62 28
7 47
21 63
8 53
70 92
83 59
12 67
98 61
95 92
100 61
81 14
73 69
34 41
20 63
22 42
68 54
83 43
52 65
51 59
76 75
5 88
34 47
99 28
8 37
2 84
81 61
83 94
86 75
50 19
45 96
100 36
73 92
98 53
21 30
73 37
99 18
87 43
83 46
100 78
82 61
71 3
48 94
2 42
1 40*/



