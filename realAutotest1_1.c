//Codility example test
//here I deleted print functions to upload code
#include <iostream>     // std::cout
#include <vector>       // std::vector
#include <algorithm> // std::vector


using namespace std;
//Print function
void print_vector(vector<int> &vect)
   {   cout<<"Array is: ";
       for (auto i = vect.begin(); i != vect.end(); ++i)
        {cout<< *i << " ";}
        cout<<endl;
   }

int solution(vector<int> &A, int K, int L) {
    //define variables when alice is on the right
    int sumaaright=0,sumbaright=0,sumabaright=0;
    int maxsumaaright=0, maxsumbaright=0, maxsumabaright=0,astartaright=K-1;

    //define variables when bob is on the right
    int sumaaleft=0,sumbaleft=0,sumabaleft=0;
    int maxsumaaleft=0, maxsumbaleft=0, maxsumabaleft=0,bstartbright=L-1;

    //define common
    int n = A.size(),result=-1,suma=0,sumb=0,sumab=0;
    int maxsuma=0, maxsumb=0, maxsumab=0/*,astart=K-1*/;


    if(K+L>n){return -1;}//Not enough tree
    if(n==2)
    {
        result=A[0]+A[1];
        return result;
    }
    //Alice is on the right and bob follows
    for(int i=L;i<n-K+1;i++)
    {
        //I added this code as a corrector
        maxsumaaright=0;
        maxsumbaright=0;
        sumaaright=0;
        sumbaright=0;
        //End of corrector
        for(int j=0;j<K;j++)
        {
            //cout<<A[j+i]<<endl;
            sumaaright=sumaaright+A[j+i];
            astartaright=j+i-K+1;
        }
        if(sumaaright>maxsumaaright)
            {
                maxsumaaright=sumaaright;
            }
        //Alice sums ends

        //Bob sum starts
        //cout<<"Head for Alice is "<<astartaright<<endl;

        //cout<<"End for Alice right sum "<<sumaaright<<endl<<endl;

        for(int k=0;k<astartaright-L-1;k++)//starting from zero and goes to alices start point
        {
            for(int j=0;j<L;j++)
            {
                //cout<<A[j+k]<<endl;
                sumbaright=sumbaright+A[j+k];
            }
            if(sumbaright>maxsumbaright)
            {
                maxsumbaright=sumbaright;
            }
            sumbaright=0;
            //cout<<endl;

        }
        sumabaright=maxsumaaright+maxsumbaright;//working on this

        //cout<<"End for Bob left sum "<<maxsumbaright<<endl<<endl;
        if(sumabaright>maxsumabaright)
        {
            maxsumabaright=sumabaright;
        }
        //cout<<"Max sum is "<<maxsumabaright<<endl<<endl;
        //cout<<"----------------"<<endl<<endl;
        sumabaright=0;
        sumaaright=0;
        sumbaright=0;
        maxsumaaright=0;
        maxsumbaright=0;
    }
    //Alice on the right solution is ok!
    //I will continue with alice on the left solution
    //start swapping variables
    //cout<<"**************"<<endl<<endl;
    //cout<<"Now bob is on the right"<<endl<<endl;
    //cout<<"**************"<<endl<<endl;
   int temp=L;
   L=K;
   K=temp;

   //This part below I added afterwards
    sumaaright=0,sumbaright=0,sumabaright=0;
    maxsumaaright=0, maxsumbaright=0, maxsumabaright=0/*,astartaright=K-1*/;

    //define variables when bob is on the right
    sumaaleft=0,sumbaleft=0,sumabaleft=0;
    maxsumaaleft=0, maxsumbaleft=0, maxsumabaleft=0,bstartbright=L-1;

    //define common
    n = A.size(),result=-1,suma=0,sumb=0,sumab=0;
    maxsuma=0, maxsumb=0, maxsumab=0/*,astart=K-1*/;
    //This part above I added afterwards


    //end of swap variables
        for(int i=L;i<n-K+1;i++)
    {
        //I added this code as a corrector
        maxsumaaright=0;
        maxsumbaright=0;
        sumaaright=0;
        sumbaright=0;
        //End of corrector

        for(int j=0;j<K;j++)
        {
            //cout<<A[j+i]<<endl;
            sumaaright=sumaaright+A[j+i];
            astartaright=j+i-K+1;
        }
        if(sumaaright>maxsumaaright)
            {
                maxsumaaright=sumaaright;
            }
        //Alice sums ends

        //Bob sum starts
        //cout<<"Head for Alice is "<<astartaright<<endl;

        //cout<<"End for Alice right sum "<<sumaaright<<endl<<endl;

        /*I am changing this line because it has to be astartaright -K*/
        //for(int k=0;k<astartaright-1;k++)//starting from zero and goes to alices start point
        for(int k=0;k<astartaright-L-1;k++)//starting from zero and goes to alices start point
        {
            for(int j=0;j<L;j++)
            {
                //cout<<A[j+k]<<endl;
                sumbaright=sumbaright+A[j+k];
            }
            if(sumbaright>maxsumbaright)
            {
                maxsumbaright=sumbaright;
            }
            sumbaright=0;
            //cout<<endl;

        }
        sumabaright=maxsumaaright+maxsumbaright;//working on this
        //cout<<"End for Bob left sum "<<maxsumbaright<<endl<<endl;
        if(sumabaright>maxsumabaright)
        {
            maxsumabaright=sumabaright;
        }
        //cout<<"Max sum is "<<maxsumabaright<<endl<<endl;
        //cout<<"----------------"<<endl<<endl;
        sumabaright=0;
        sumaaright=0;
        sumbaright=0;
    }


        maxsumab=max(maxsumabaright,maxsumabaleft);
    return maxsumab;//this place will be maxsumab
}
int solution(vector<int> &A)
{
    int result=-1;
    return result;
}

int main ()
    {
      int mode=1;
      if(mode==1)
      {

          int TESTNUM=10000;
          for(int j=0;j<TESTNUM;j++)
          {
          //int myints[]=    [6, 1, 4, 6, 3, 2, 7, 4];
          /*int myints[] = {1892,	13698,	11267,	11749,	65,	10389,	6932,	25619,	16081,	2003,	29130,	13028,	18631,	14589,	23152,	18630,	19172,	19864,	6407,	12295,	25428,	29681,	18490,	26610,	26177,	31071,	25236,	6459,	20643,	16840,	27633,	27037,	23893,	22630,	20274,	12993,	28782,	32203,	17461,	8290,	19662,	22307,	20997,	31151,	18423,	8890,	16717,	6640,	28703,	5566,	4883,	23661,	22659,	18245,	20386,	32651,	32765,	19601,	16840,	17209,	1497,	27283,	29250,	18058,	8421,	175,	30581,	26787,	3271,	4287,	27999,	12504,	24979,	2138,	10700,	530,	2461,	12118,	205,	7540,	18828,	24459,	11622,	14398,	3760,	27098,	12935,	10481,	30614,	19567,	18493,	28596,	19161,	7746,	10538,	7670,	20538,	21476,	21555,	24917
    };*/
          //int myints[] = {rand(), rand(), rand(), rand(), rand(), rand(), rand(), rand()};
          int vectorlen=rand();
          if(vectorlen>100){vectorlen=100;}
          int myints[vectorlen];
          for (int l=0;l<vectorlen;l++)
          {
              myints[l]=rand();
          }
          int maxsum=0;
          //int myints[] = {6,1};
          //int myints[] = {};
          vector<int> myvector (myints, myints+sizeof(myints)/sizeof(myints[0]) );
         // string S{"CA"};
          //print_vector(myvector);
          //cout<<endl<<endl;
          int K=(rand()%10)+1;
          int L=(rand()%10)+1;
          int result=solution(myvector,K,L);
          int last=myvector.size();
          //cout<<"\nResult is "<< result<<endl;
          vector<int> copymyvector=myvector;
          sort(myvector.begin(),myvector.end());
          //cout<<endl<<"After sorting "<<endl;
          //print_vector(myvector);
          //cout<<endl;
          for(int i=0;i<K+L;i++)
          {
              //cout<<"myvector[last-i-1]is "<<myvector[last-i-1]<<endl;
              maxsum=maxsum+myvector[last-i-1];
              //cout<<"maxsum is "<<maxsum<<endl;
          }
          //cout<<"Final maxsum is "<<maxsum<<endl;
          if(maxsum<result)
          {
              cout<<endl<<"Test failed for"<<endl;
              print_vector(copymyvector);
              cout<<"K is "<<L<<"       L is "<<K<<endl;
              cout<<endl<<"Max sum is "<<maxsum<<endl<<"result is "<<result<<endl;
              return -1;
          }
          else
          {
             cout<<"Successful"<<endl;
              //print_vector(myvector);
          }
          //print_vector(myvector);

          }
          return 0;
        }
        if (mode==0)
        {
            int myints[]=    [6, 1, 4, 6, 3, 2, 7, 4];
            vector<int> myvector (myints, myints+sizeof(myints)/sizeof(myints[0]) );
            int result=solution(myvector,K,L);
            return 0;
        }
    }
