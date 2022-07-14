#include<stdio.h>// khai bao thu vien stdio.h
#include<windows.h> // khai bao thu vien windows.h de su dung lenh xoa man hinh
#include<math.h>// khai bao thu vien math.h

// ham de bai
void debai(){
	 printf("\nNguyen Thanh Trung-20182837");
    printf("\nDe Bai 5.06");
    printf("\nNhap tu ban phim mang mot chieu A voi n so nguyen toi da 100 phan tu  ");
    printf("\nViet chuong trinh thuc hien cac cong viec cho truoc va in ra man hinh ");
    printf("\nNote    -Mo ta gia tri dau vao:");
    printf("\n         +Mang A la mang mot chieu");
    printf("\n         +n<100");
    printf("\n       -Mo ta gia tri dau ra:");
    printf("\n        +In ket qua ra man hinh");
    printf("\n        +Trong bai co su dung lenh xoa man hinh");
    printf("\n\n");
}
// ham in ra cac yeu cau de bai
void menu(){
	printf("\n\t=========MENU===========\n\n");
	printf("1.Nhap mang\n");
	printf("2.Xuat mang\n");
	printf("3.Dem so phan tu am\n");
	printf("4.Tim phan tu max va min cua mang\n");
	printf("5.Tim phan tu am lon nhat va duong be nhat cua mang\n");
	printf("6.Liet ke cac so nguyen to co trong mang\n");
	printf("7.Liet ke cac so chinh phuong co trong mang\n");
	printf("8.Sap xep mang theo thu tu tang dan\n");
	printf("9.Sap xep mang theo thu tu giam dan\n");
	printf("10.Xoa man hinh\n");
	printf("11.Tro ve ham main\n");
	printf("12.Thoat chuong trinh\n");
	}
// ham nhap mang	
void NhapMang(int a[0], int n){
	for(int i=0;i<n;i++){
		printf("Nhap gia tri cho mang: a[%d]=",i);
		scanf("%d",&a[i]);// nhap gia tri cho mang
		}
		}
// ham xuat mang		
void XuatMang(int a[], int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);}// xuat gia tri mang
		}
// ham dem so phan tu am 		
int Dem_phan_tu_am(int a[],int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			dem++;}// neu a[i]<0 thi bien dem tang
			}
	printf("\nSo luong phan tu am trong mang la %d\n",dem);// in ket qua
	return dem;	// tra ve gia tri dem
	}
// ham tim max cua mang	
int TimMax(int a[],int n){
	int max;// khai bao max
	max=a[0];// gan max=a[0]
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];}
			}
	return max;// tra lai gia tri max
	}
// ham tin min cua mang				
int TimMin(int a[],int n){ 
	int min;// khai bao min
	min=a[0];// gan min bang a[0]
	for(int i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];}
			}
	return min;// tra lai gia tri min	
	}
// ham tim phan tu am lon nhat	
void Tim_phan_tu_am_Max(int a[],int n){
	int Max_Am,dem=0; // khai nao bien
	for(int i=0;i<n;i++){
		if(a[i]<0){
			Max_Am=a[i];dem++;}
			}
	for(int i=0;i<n;i++){
		if(a[i]<0&&a[i]>Max_Am){
			Max_Am=a[i];
			}
			}
	if(dem==0){
		printf("Mang khong co so am nao");}
	else{
		printf("\nGia tri am lon nhat cua mang la %d ",Max_Am);}
	}				
// ham tim phan tu duong be nhat	
void Tim_phan_tu_duong_Min(int a[],int n){
	int Min_Duong,dem=0; // khai bao bien
	for(int i=0;i<n;i++){
		if(a[i]>0){
			Min_Duong=a[i];dem++;}
			}
	for(int i=0;i<n;i++){
		if(a[i]>0&&a[i]<Min_Duong){
			Min_Duong=a[i];
			}
			}
	if(dem==0){
		printf("\nMang khong co so duong nao");}
	else{
		printf("\nGia tri duong be nhat cua mang la %d ",Min_Duong);}		
	}						
// tao ham kiem tra so nguyen to 
bool checkSNT(int n)
{
    if (n < 2)
        return false;// tra ve false
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;// tra ve false
        }
    }
    return true;// tra ve true
}
 // tao ham dem so luong so nguyen to
 int Dem_SNT(int a[], int n)
{
    int count = 0; // khai bao va khoi tao gia tri count
    for (int i = 0; i < n; i++)
    {
        if (checkSNT(a[i]))
        {
            count++; // neu la so nguyen to thi count tang
        }
    }
    return count;
}
// tao ham in ra cac so nguyen to trong mang
void In_SNT(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (checkSNT(a[i]))
        {
            printf("%d ", a[i]);// in ra cac so nguyen to
        }
    }
}	
// tao ham kiem tra so chinh phuong
bool check_SCP(int n){
	int sqr;// khai bao bien
	sqr=sqrt(n);
	if(sqr*sqr==n)
		return true;// tra ve true
	else
		return false;// tra ve false
	}
// tao ham dem so luong so chinh phuong trong mang
int Dem_SCP(int a[],int n){
	int count=0;// khai bao va khoi tao gia tri count
	for(int i=0;i<n;i++){
		if(check_SCP(a[i])==true){
			count++;} // neu la so chinh phuong thi count tang
			}
			return count;// tra ve gia tri count
			}
// tao ham in ra cac so chinh phuong
void In_SCP(int a[],int n){
	for(int i=0;i<n;i++){		
		if(check_SCP(a[i])==true)
			printf("%d ",a[i]); // in ra cac so chinh phuong
			}
			}			

// ham sap xep mang tang dan
void Sap_xep_mang_tang(int a[], int n){
	int tmp;// khai bao bien trung gian
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				tmp=a[i];// gan bien tmp=a[i]
				a[i]=a[j];// gan bien a[i] bang a[j]
				a[j]=tmp; // gan bien a[j]	bang tmp
				}
				}
				}}					
// ham sap xep mang giam dan
void Sap_xep_mang_giam(int a[], int n){
	int tmp;// khai bao bien trung gian
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				tmp=a[i];// gan bien tmp=a[i]
				a[i]=a[j];// gan bien a[i] bang a[j]
				a[j]=tmp; // gan bien a[j]	bang tmp
				}
				}
				}}			
			
	
	
	
		
	int main(){
		debai();// khai bao ham debai
		int a[100],n,luachon;// khai bao cac bien
		char s,S;// khai bao bien s,S
		while(S!='n'){
		s='y'; // gan gia tri cho s
		printf("Nhap vao so phan tu cua mang:");scanf("%d",&n);// nhap gia tri cho n
		// neu n>=100 ta se nhap nhap lai n
		while(n<0||n>=100){
			printf("Ban da nhap sai. Vui long nhap lai n:");
			scanf("%d",&n);}// nhap lai gia tri n
			
		//	khoi tao vong lap chuong trinh
		while(s!='k'){
				menu();// ham menu
			printf("\nNhap vao lua chon cua ban:");scanf("%d",&luachon);// nhap vao lua chon chon
			switch(luachon){
				case 1: NhapMang(a,n);break;// ham nhap mang
				case 2: {printf("Xuat cac phan tu mang:");XuatMang(a,n);}break;// ham xuat mang
				case 3: Dem_phan_tu_am(a,n);break;// ham dem so phan tu am
				case 4: {printf("Max cua mang la %d\nMin cua mang la %d\n",TimMax(a,n),TimMin(a,n));};break;// in max va min
				// in gia tri am lon nhat va duong nho nhat
				case 5: {
					
							Tim_phan_tu_am_Max(a,n);// ham tim phan tu am lon nhat
							Tim_phan_tu_duong_Min(a,n);// ham tim phan tu duong be nhat
				}break;
				// Liet ke cac so nguyen to
				case 6: {int demSNT=Dem_SNT(a,n);
							if(demSNT==0)
								printf("Mang khong co so nguyen to nao");
							else{
								printf("Danh sach so nguyen to trong mang: ");
								In_SNT(a,n);
								}
								}break;
				// Liet ke cac so chinh phuong
				case 7: {
							int dem_SCP=Dem_SCP(a,n);
							if(dem_SCP==0)
								printf("Mang khong co so chinh phuong nao");
							else{
								printf("Danh sach cac so chinh phuong trong mang la: ");
								In_SCP(a,n);
								}
								}break;
				// Sap xep mang tang dan					
				case 8: {
							Sap_xep_mang_tang(a,n);
							printf("Mang theo thu tu tang dan la: ");
							XuatMang(a,n);
							}break;	
							
				// Sap xep mang giam dan			
				case 9: {
							Sap_xep_mang_giam(a,n);
							printf("Mang theo thu tu giam dan la: ");
							XuatMang(a,n);
							}break;					
				case 10: system("cls");break;// xoa man hinh
				case 11: main();break;// quay lai ham main
				case 12: printf("See you again");return 0;break;// thoat chuong trinh
				default: printf("Khong lua chon nao nhu vay.Vui long nhap lai!!");break;
				}
	printf("\nBan co muon thuc hien tiep chuong trinh voi n=%d?(c/k):",n);// nhan 'k' de thoat vong lap,'c'  de tiep tuc
	fflush(stdin);scanf("%c",&s);// nhap vao ky tu s			
	}
	printf("\nBan co muon nhap lai n?(y/n):");// nhan 'n' de thoat vong lap,'y'  de tiep tuc
	fflush(stdin);scanf("%c",&S);// nhap vao ky tu S		
	}
	printf("See you again");
	return 0;// tra ve gia tri ham main			
		}
		
					
		
