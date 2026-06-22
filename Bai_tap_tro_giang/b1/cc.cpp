#include <iostream>
using namespace std;
#define MAX 100
int luaChonMenu(unsigned int &lua_chon)
{
    cout<<"================================"<<endl
    <<"Vui long chon chuc nang tuong ung"<<endl
    <<"1. Nhap mang"<<endl
    <<"2. Xuat mang vua nhap"<<endl
    <<"3. Tim kiem mot phan tu trong mang"<<endl
    <<"4. Kiem tra tinh chat cua mang"<<endl
    <<"5. Dem so luong cac phan tu co gia tri chan trong mang"<<endl
    <<"6. Tinh tong cac phan tu co gia tri chan trong mang"<<endl
    <<"7. Tach mang"<<endl
    <<"8. Gop mang"<<endl
    <<"9. Tim gia tri nho nhat cua mang"<<endl
    <<"10.Tim gia tri lon nhat cua mang"<<endl
    <<"11.Sap xep mang tang dan"<<endl
    <<"12.Sap xep mang giam dan"<<endl
    <<"13.Them mot phan tu vao mang"<<endl
    <<"14.Xoa mot phan tu trong mang"<<endl
    <<"15.Sua mot phan tu trong mang"<<endl
    <<"16.Thoat"<<endl
    <<"================================"<<endl
    <<"Lua chon cua ban: ";
    cin>>lua_chon;
    return lua_chon;
}


void nhap_mang (int a[], int &n)//1
{
    cout<<"Nhap size mang: "; cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Nhap gia tri thu "<<i<<": ";
        cin>>a[i];
    }
    cout<<endl;
}


void xuat_mang (int a[], int n)//2
{
    cout<<"Mang ban vua nhap: ";
    for(int i=0; i<n; i++)
    {
        
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


void tim_kiem (int a[], int n)//3 //******* */
{
    int x;
    cout<<"Nhap so can tim: "; cin >> x;
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            cout<<"Vi tri ton tai cua so tai: "<<i<<endl;
        }
    }
    cout<<endl;
}


void kiem_tra (int a[], int n)//4
{
    bool flag=true;
    for(int i=0; i<n; i++)
    {
        if(a[i]<2)
        {
            flag=false;
            break;
        }
        for(int j=2; j*j<=a[i]; j++)//xét tại căn bậc hai của giá trị thứ i trong mảng.
        {
            if(a[i]%j==0&&a[i]!=2)
            { ///**** */
                flag=false;
                break;
            }
        }
    }
    if(flag==false)
    {
        cout<<"Mang khong toan so nguyen to."<<endl<<endl;
    }
    else
    {
        cout<<"Mang toan so nguyen to."<<endl<<endl;
    }
}


void dem (int a[], int n)//5
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            count++;
        }
    }
    cout<<"So luong cac so chan co trong ham: "<<count<<endl;
}


void tinh_tong(int a[], int n)//6
{
    int S=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            S=S+a[i];
        }
    }
    cout<<"Tong cac so chan trong ham: "<<S<<endl;
}


void tach (int a[], int n, int b[], int c[], int &nb, int &nc)//7
{
    // nb = nc = 0;
    // for(int i = 0; i < n; i++)
    // {
    //     bool flag = true;
    //     if(a[i] < 2)
    //     {
    //         flag = false;
    //     }
    //     for(int j = 2; j * j <= a[i]; j++)
    //     {
    //         if(a[i] % j == 0)
    //         {
    //             flag = false;
    //             break;
    //         }
    //     }


    //     if(flag==true)
    //         b[nb++] = a[i];
    //     else
    //         c[nc++] = a[i];
    // }


    // cout<<"Mang nguyen to: ";
    // for(int i = 0; i < nb; i++)
    // {
    //     cout << b[i] << " ";
    // }


    // cout<<"Mang khong nguyen to: ";
    // for(int i = 0; i < nc; i++)
    // {
    //     cout << c[i] << " ";
    // }    
}


void gop (int a[], int n)//8
{
    int tro1=0;
    int tro2=0;


}


void timMin (int a[], int n)//9
{
    int m=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<m)
        {
            m=a[i];
        }
    }
    cout<<"So nho nhat: "<<m<<endl;
}


void timMax (int a[], int n)//10
{
    int M=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>M)
        {
            M=a[i];
        }
    }
    cout<<"So lon nhat: "<<M<<endl;
}


void tangDan (int a[], int n)//11
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"Mang da sap xep: ";
    for(int l=0;l<n;l++)
    {
        cout<<a[l]<<" ";
    }
cout<<endl;
}


void giamDan (int a[], int n)//12
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    cout<<"Mang da sap xep: ";
    for(int l=0;l<n;l++)
    {
        cout<<a[l]<<" ";
    }
cout<<endl;
}


void them1PhanTu (int a[], int n)//13
{


}


void xoa1PhanTu (int a[], int n)//14
{


}


void sua1PhanTu (int a[], int n)//15
{
   
}




int main ()
{
    int n, a[MAX], x; //*** */
    int nb = 0, nc = 0; //*** */
    int b[MAX], c[MAX]; //**** */
    unsigned int lua_chon;
    luaChonMenu (lua_chon);
    while (lua_chon!=16)
    {
        switch (lua_chon)
        {
        case 1: nhap_mang(a,n);
            break;
        case 2: xuat_mang(a,n);
            break;
        case 3: tim_kiem(a,n); //**** */
            break;
        case 4: kiem_tra(a,n);
            break;
        case 5: dem(a,n);
            break;
        case 6: tinh_tong(a,n);
            break;
        case 7: tach(a,n,b,c,nb,nc);
            break;
        case 8: gop(a,n);
            break;
        case 9: timMin(a,n);
            break;
        case 10: timMax(a,n);
            break;
        case 11: tangDan(a,n);
            break;
        case 12: giamDan(a,n);
            break;
        case 13: them1PhanTu(a,n);
            break;
        case 14: xoa1PhanTu(a,n);
            break;
        case 15: sua1PhanTu(a,n);
            break;
       
        default://cac truong hop khac case
            cout<<"Nhap lai.";
            break;
        }
        luaChonMenu (lua_chon);
    }
    cout<<"End.";
return 0;}

