#include <iostream>
using namespace std;
int main()
{
    int arr[201];
    int ans1=0,ans2=0,sm=0,bg=9999999,n;cin>>n;

    for (int i=0; i<n ;++i)
    {
        cin>>arr[i];

        if (arr[i]>sm){
            ans1=i;
            sm=arr[i];
            }
        //كان في ايرور عجيب بيحصل لما بستخدم  else if هنا  3  1.3.2
         if (arr[i]<=bg)
        {
            ans2=i;
            bg=arr[i];
         }
    }
      //لازم يبقى الاندكس بتاع الكبير اقل لو الاندكس بتاع الكبير هو الللي اكبر اطرح خطوه (:


    cout <<ans1 + ((n-1)-ans2) - (ans2<ans1 ? 1:0);

    return 0;
}
