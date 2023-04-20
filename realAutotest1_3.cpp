int solution(vector<int> &A, int K, int L) {
    //define variables when alice is on the right
    int sumaaright=0,sumbaright=0;
    int maxsumbaright=0;

    //define common
    int n = A.size(),result=-1;

    if(K+L>n){return -1;}//Not enough tree
    if(n==2)
    {
        result=A[0]+A[1];
        return result;
    }
    //First Alice is on the right and bob follows

    for(int changeKL=0;changeKL<2;changeKL++)
    {
        //cout<<"Started"<<endl;
        for(int i=L;i<n-K+1;i++)
        {
            //cout<<"Alice head is at "<<i<<endl;
            for(int j=0;j<K;j++)
            {
                //cout<<A[j+i]<<endl;
                sumaaright=sumaaright+A[j+i];
            }//Here I find the sum for Alice
            //Bob sum starts
            //cout<<"Head for Alice is "<<i<<endl;

            //cout<<"End for Alice sum "<<sumaaright<<endl<<endl;

            for(int k=0;k<i-L+1;k++)//starting from zero and goes to alices start point
            {
                //cout<<"Head for Bob is at "<<k<<endl;
                for(int j=0;j<L;j++)
                {
                    //cout<<A[j+k]<<endl;
                    sumbaright=sumbaright+A[j+k];
                }
                //cout<<"Bob sum is "<<sumbaright<<endl;
                if(sumbaright+sumaaright>maxsumbaright)
                {
                    maxsumbaright=sumbaright+sumaaright;
                }
                //cout<<"Max sum is "<<maxsumbaright<<endl;
                sumbaright=0;
                //cout<<endl;

            }
            sumaaright=0;
        }
        int temp=L;
        L=K;
        K=temp;
    }
    return maxsumbaright;//this place will be maxsumab
}
