#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int nFilesodu (int sd);                 // ham nhap gia tri vao file data\\sodu.txt									(44- 57)
int nFilesodu_tamthoi (int sdao);       // ham nhan gia tri so tien ma nguoi dung vua nhap vao						(59 - 72)
int xFilesodu_tamthoi ();               // ham xuat gia tri trong file data\\sodutamthoi.txt 						(74 - 90)
int xFilesodu ();                       // ham xuat gia tri xong file data\\sodu.txt								(94 - 108)
int nhaptien (int n);                   // ham kiem tra so tien nhap co chinh xac khong va in ra so du hien tai	  	(113 - 143)
void menu();                            // ham in ra menu nuoc co trong may											(308 - 335)
int sl_coca ();                         // ham in ra so luong coca trong file data\\cocacola.txt					(218 - 239)
int gia_tiencoca();                     // ham xuat gia tien coca trong file data\\giacoca.txt						(147 - 162)
int sl_pepsi();                         // ham in ra so luong pepsi trong file data\\pepsi.txt						(285 - 305)
int gia_tienpepsi();                    // xuat gia tien pepsi trong file data\\giapepsi.txt						(164 - 180)
int sl_7up (); 						    // ham in ra so luong 7up trong file data\\7up.txt							(241 - 261)
int gia_tien7up();                      // xuat gia tien 7 up trong file data\\gia7up.txt							(182 - 198)
int sl_revive (); 					    // ham in ra so luong revive trong file data\\revive.txt					(263 - 283)
int gia_tienrevive();                   // xuat gia tien revive trong file data\\giarevive.txt						(200 - 216)
int chia_tienthua(int money);           // ham dung de chia money thanh so luong cac menh gia 5k,10k,20k,50k hop ly (337 - 351)	
int mua_nuoc();                         // ham chon ms sp ,so sanh so du co du mua nuoc hay khong, tra lai tien thua..	(673 - 993)
void solanchayct();                     // ham hien so lan da chay ct len man hinh solanchayct.txt						(387 - 397)
int tk_sl_coca (int s);                 // ham dung de thay doi gia tri file cocacola.txt bang gia tri cua bien s		(400 - 414)	
int thongke_coca ();                    // ham dung de xuat gia tri trong file cocacola.txt								(416 - 430)
int tk_sl_pepsi (int s);                // ham dung de thay doi gia tri file data\\pepsi.txt bang gia tri cua bien s	(432 - 445)
int thongke_pepsi () ;                  // ham dung de xuat gia tri trong file data\\pepsi.txt							(448 - 462)
int tk_sl_7up (int s);                  // ham dung de thay doi gia tri file data\\7up.txt bang gia tri cua bien s		(466 - 479)
int thongke_7up ();                     // ham dung de xuat gia tri trong file data\\7up.txt							(482 - 496)
int tk_sl_revive (int s);               // ham dung de thay doi gia tri file data\\revive.txt bang gia tri cua bien s	(500 - 513)
int thongke_revive ();                  // ham xuat gia tri cua file data\\revive.txt									(516 - 530)
int doanh_thu();                        // ham kiem ke so luong da ban ra va doanh thu thu vao luu vao file admin\\doanhthu.txt va in ra man hinh  (937 - 982)
void lich_su_ban();                      // xuat gia tri trong file admin\\lichsubansp.txt ra man hinh					(984 - 1002)
void napsp() ;                           // ham dung cho admin update so luong san pham									(1004 - 1026)
int admin();							// ham xuat gia tri password trong file admin\\account_admin.txt				(1028 - 1041)
int xsl_coca_adtk();						// xuat gia tri trong file data\\sl_coca_adtk.txt 							(532 - 574)
int nsl_coca_adtk(int s);					// thay doi gia tri trong file data\\sl_coca_adtk.txt = gtri cua s			(549 - 564)	
int xsl_pepsi_adtk();						// xuat gia tri trong file data\\sl_pepsi_adtk.txt 							(566 - 581)
int nsl_pepsi_adtk(int s);					// thay doi gia tri trong file data\\sl_pepsi_adtk.txt = gtri cua s			(584 - 599)
int xsl_7up_adtk();							// xuat gia tri trong file data\\sl_7up_adtk.txt 							(601 - 616)
int nsl_7up_adtk(int s);					// thay doi gia tri trong file data\\sl_7up_adtk.txt = gtri cua s			(619 - 634)
int xsl_revive_adtk();						// xuat gia tri trong file data\\sl_revive_adtk.txt 						(636 - 651)
int nsl_revive_adtk(int s); 				// thay doi gia tri trong file data\\sl_revive_adtk.txt						(654 - 670)
//=======================================================================================================
int nFilesodu (int sd)  // ham nhap gia tri cua 'sd' vao file data\\sodu.txt
{
    FILE *f;            // tao file
    f = fopen("data\\sodu.txt", "w");
    if (f == NULL){
        printf("loi tao hoac mo file data\\sodu.txt ");
        exit(1);            // thoat ct vi gap loi

    }
    fprintf(f, "%d" , sd);          // dua gia tri cua bien sd vao file
    fclose(f);
//input = sd
//output = gia tri trong file data\\sodu.txt
}
//=======================================================================================================
int nFilesodu_tamthoi (int sdao)            // ham nhap gia tri 'sdao' vao file data\\sodutamthoi.txt
{
    FILE *f;                                // tao file
    f = fopen("data\\sodutamthoi.txt", "w");
    if (f == NULL){
        printf("loi tao hoac mo file data\\sodutamthoi.txt ");
        exit(1);                             //thoat ct vi gap loi

    }
    fprintf(f, "%d" , sdao);                // dua gia tri cua bien sdao vao file
    fclose(f);                               //dong file
//input = sdao
//output = gia tri trong file data\\sodutamthoi.txt
}
//=======================================================================================================
int xFilesodu_tamthoi ()                // xuat gia tri trong file data\\sodutamthoi.txt
{
    FILE *f;
    f=fopen("data\\sodutamthoi.txt", "r");
    if (f==NULL){
        printf("loi mo file data\\sodutamthoi.txt");
        exit(1);                                //thoat ct vi gap loi

    }

    int a;
    fscanf(f , "%d", &a);               // lay du lieu trong file => a
    fclose(f); // dong file
    return (a); // tra ve gia tri cua a
//input = gia tri trong file data\\sodutamthoi.txt 
// output = a
}

//=======================================================================================================

int xFilesodu () {                      // xuat gia tri trong file data\\sodu.txt
    FILE *f;
    f=fopen("data\\sodu.txt", "r");
    if (f==NULL){
        printf("loi mo file data\\sodu.txt");
        exit(1);                        //thoat ct vi gap loi
    }
    int a;
    fscanf(f , "%d", &a);       // a = gia tri trong file data\\sodu.txt
    fclose(f);              // dong file
 return (a);
 //input = gia tri trong file data\\sodu.txt  
  //output = a

}


//=======================================================================================================

int nhaptien ()         // ham de nguoi dung nap tien vao may ,kiem tra so tien vua nhap, xuat so du
{
    int s,n ;
    	printf("\n\n\n\t\t\tSo tien phu hop la cac menh gia sau : \n\t 5.000d | 10.000d | 20.000d | 50.000d | 100.000d | 200.000d | 500.000d");
       	printf("\n\n\t-> Nhap so tien can nap : ");
       	N:
        scanf("%d", &n);
    if(n != 5000 && n!= 10000 && n!= 20000 && n!= 50000 && n!=100000 && n!= 200000 && n!= 500000 && n!= 0 )
       {
       	system("cls");
		printf("\n\n\t\t\tSO TIEN PHU HOP LA CAC MENH GIA SAU:");
		printf("\n\t5.000d | 10.000d | 20.000d | 50.000d | 100.000d | 200.000d | 500.000d");
		printf("\n\n\t----------------------------------------------------------------------");
        printf("\n\n\tSo tien dua vao khong chinh xac vui long nhap lai : ");
        goto N;                 // quay lai thuc thi lai tu dong 118
       }
    else
    {
    	system("cls");                  // xoa man hinh
    nFilesodu_tamthoi(n);               // gia tri file data\\sodutamthoi.txt = gia tri cua 'n'
    s = xFilesodu() + xFilesodu_tamthoi(); 	// so du = so du + so tien vua nhap
    nFilesodu(s);                       // gia tri trong file data\\sodu.txt = gia tri cua 's'
    printf("\n\n\t\t    ------------------------------------------");
    printf("\n\t\t    | So du hien tai cua ban la : %d VND |",s);
	printf("\n\t\t    ------------------------------------------");
    }
// input = 'n' nhap tu ban phim
// output = so du hien tai cua khach & gia tri ghi vao file data\\sodu.txt


}

//=======================================================================================================

int gia_tiencoca()          // ham xuat gia tien coca trong file data\\giacoca.txt
{
    FILE *f;
    f=fopen("data\\giacoca.txt", "r");
    if (f==NULL)
    {
        printf("loi mo file giacoca.txt");
        exit(1);            // thoat ct khi gap loi
    }
    int z;
    fscanf(f, "%d" , &z);   // gia tri trong file data\\giacoca.txt vao 'z'
    fclose(f);
    return(z);  // ham se tra ve gia tri cua 'z'
    //input = gia tri trong file data\\giacoca.txt  
	// output = z
}
//=======================================================================================================
int gia_tienpepsi()     // ham xuat gia tien pepsi trong file data\\giapepsi.txt
{
    FILE *f;
    f=fopen("data\\giapepsi.txt", "r");
    if (f==NULL)
    {
        printf("loi mo file giapepsi.txt");
        exit(1);
    }
    int z;
    fscanf(f, "%d" , &z);
    fclose(f);
    return(z);
//input = gia tri trong file data\\giapepsi.txt  
// output = z

}
//=======================================================================================================
int gia_tien7up()           // ham xuat gia tien 7up trong file data\\gia7up.txt
{
    FILE *f;
    f=fopen("data\\gia7up.txt", "r");
    if (f==NULL)
    {
        printf("loi mo file gia7up.txt");
        exit(1);
    }
    int z;
    fscanf(f, "%d" , &z);
    fclose(f);
    return(z);

    //input = gia tri trong file data\\gia7up.txt  
	// output = z
}
//=======================================================================================================
int gia_tienrevive()            // ham xuat gia tien rivive trong file data\\giarevive.txt
{
    FILE *f;
    f=fopen("data\\giarevive.txt", "r");
    if (f==NULL)
    {
        printf("loi mo file giarevive.txt");
        exit(1);
    }
    int z; //tao bien de gan gia tri file giarevive vao bien
    fscanf(f, "%d" , &z);
    fclose(f);
    return(z);

    //input = gia tri trong file data\\giarevive.txt  
	// output = z
}
//=======================================================================================================
int sl_coca ()          // ham xuat gia tri trong file data\\cocacola.txt
{
    int g;
    g = gia_tiencoca();    // gia tri 'g' = gia tri tra ve cua ham gia_tiencoca()
    FILE *f;
     printf("\t 1: Coca cola | \t so luong : ");
    f=fopen("data\\cocacola.txt", "r");
    if (f==NULL){
        printf("loi mo file data\\cocacola.txt");
        exit(1);  								//dung ct vi loi

    }

    int z;
    fscanf(f , "%d", &z);
    fclose(f); // dong file
    printf("%d  lon \t don gia : %d VND/1 lon",z,g);        //in ra so luong va gia tren 1 sp

    //input = gia tri cua ham gia_tiencoca() , gia tri trong file data\\cocacola.txt
    //output = in ra so luong va gia tren 1 sp

}
//=======================================================================================================
int sl_7up () // ham xuat gia tri trong file data\\7up.txt
{
	int g;
	g=gia_tien7up();
    FILE *f;
     printf("\t 3: 7up       | \t so luong : ");
    f=fopen("data\\7up.txt", "r");
    if (f==NULL){
        printf("loi mo file 7up.txt");
        exit(1);

    }

    int z;
    fscanf(f , "%d", &z);
    fclose(f); // dong file
    printf("%d  lon \t don gia : %d VND/1 lon",z,g);        //in ra so luong va gia tren 1 sp

    //input = gia tri cua ham gia_tien7up() , gia tri trong file data\\7up.txt
    //output = in ra so luong va gia tren 1 sp
}
//=======================================================================================================
int sl_revive () // ham xuat gia tri trong file data\\revive.txt
{
	int g;
	g=gia_tienrevive();
    FILE *f;
     printf("\t 4: Revive    | \t so luong : ");
    f=fopen("data\\revive.txt", "r");
    if (f==NULL){
        printf("loi mo file revive.txt");
        exit(1);

    }

    int z;
    fscanf(f , "%d", &z);
    fclose(f); // dong file
    printf("%d  lon \t don gia : %d VND/1 lon",z,g);//in ra so luong va don gia tren 1 sp

    //input = gia tri cua ham gia_tienrevive() , gia tri trong file data\\revive.txt
    //output = in ra so luong va gia tren 1 sp
}
//=======================================================================================================
int sl_pepsi () // ham xuat gia tri trong file data\\pepsi.txt
{
    int g;
    g = gia_tienpepsi(); // lay gia tri trong ham gia_tienpepsi (giapepsi.txt ) vao g
    FILE *f;
     printf("\t 2: Pepsi     | \t so luong : ");
    f=fopen("data\\pepsi.txt", "r");
    if (f==NULL){
        printf("loi mo file pepsi.txt");
        exit(1);

    }

    int z;
    fscanf(f , "%d", &z);
    fclose(f); // dong file
    printf("%d  lon \t don gia : %d VND/1 lon",z,g);				//in ra so luong va gia tren 1 sp

     //input = gia tri cua ham gia_tienpepsi() , gia tri trong file data\\pepsi.txt
    //output = in ra so luong va gia tren 1 sp
}

//=======================================================================================================
void menu() // ham con in ra menu sp
{
    printf("MENU: \n    ");
    for(int i=0; i<80 ; i++)
    {
        printf("_");
    }
    printf("\n      MASO| TEN NUOC  | \t SO LUONG |    DON VI |        GIA/LON                  \n    ");
        for(int i=0; i<80 ; i++)
    {
        printf("_");
    }
    printf("\n \n");
    sl_coca();          // goi ham in so luong coca
    printf("\n");
    sl_pepsi();         // goi ham in so luong pepsi
    printf("\n");
    sl_7up();
    printf("\n");
    sl_revive();
    printf("\n    ");
       for(int i=0; i<80 ; i++)
    {
        printf("_");
    }
    //input = cac ham in so luong va gia nuoc
    //output = in menu ms nuoc . ten nuoc . so luong . gia ..
}
//=======================================================================================================
int chia_tienthua(int money)        // ham chia nho chia 'money' ra so luong cac menh gia 50k,20k,10k,5k hop ly
{
int so_to_5000, so_to_10000, so_to_20000, so_to_50000;
int phan_du;
	so_to_50000 = money / 50000;                // so to 50k = tien can chia chia lay phan nguyen cho 50k
	phan_du = money % 50000;                    // phan con du se bang so tien ban dau chia du cho 50k hoac =so tien ban dau - so_to_50000 * 50000
	so_to_20000 = phan_du / 20000;
	phan_du = phan_du % 20000;
	so_to_10000 = phan_du / 10000;
	phan_du = phan_du % 10000;
	so_to_5000 = phan_du / 5000;
printf("\n\t%d to 50.000d, %d to 20.000d, %d to 10.000d, %d to 5000d", so_to_50000,so_to_20000,so_to_10000,so_to_5000);
// input = money
// output = 'money' da duoc chia ra so luong cac menh gia hop ly
}
//=======================================================================================================
int sl_chay_ctw (int s)  // ham nhan gia tri so lan chay ct tu bien s { ham nay la ham con dung trong ham solanchayct()
{
    FILE *f; // tao file
    f = fopen("data\\solanchayct.txt", "w");
    if (f == NULL){
        printf("loi tao hoac mo file data\\solanchayct.txt ");
        exit(1);

    }
    fprintf(f, "%d" , s);               //gia tri trong file data\\solanchayct.txt = gia tri cua 's'
    fclose(f);
    //input = 's'
    //output = gia tri trong file data\\solanchayct.txt
}
//=======================================================================================================

int sl_chay_ct () // ham xuat gia tri trong file solanchayct.txt ra { ham nay la ham con dung trong ham solanchayct()
{
    FILE *f;
    f=fopen("data\\solanchayct.txt", "r");
    if (f==NULL){
        printf("loi mo file data\\solanchayct.txt");
        exit(1);

    }
    // doc du lieu tu file
    int z;
    fscanf(f , "%d", &z);
    fclose(f); // dong file
 return(z); // tra ve gia tri cua 'z'
 //input = gia tri trong file data\\solanchayct.txt
 // output = gia tri 'z' sau khi nhan gia tri cua input
 }
//=======================================================================================================
void solanchayct ()   // ham in ra mh so lan chay ct
{
	int z;
		z = sl_chay_ct();   // 		gia tri cua 'z' = gia tri cua ham sl_chay_ct ( = gia tri trong file data\\solanchayct.txt)
		z++;  // 'z' tang 1
		sl_chay_ctw(z);   		 	// gia tri trong file data\\solanchayct.txt = z
		z = sl_chay_ct();   		// gia tri cua 'z' = gia tri cua ham sl_chay_ct ( = gia tri trong file data\\solanchayct.txt)
		printf("so lan chay ct la: %d\n",z );
		//input = so lan chay ct truoc khi chay ct
		// output = so lan chay ct khi da chay ct
}
//=======================================================================================================

int tk_sl_coca (int s)      // ham dung de thay doi gia tri file data\\cocacola.txt bang gia tri cua bien s
{
    FILE *f;
    f = fopen("data\\cocacola.txt", "w");
    if (f == NULL){
        printf("loi tao hoac mo file data\\cocacola.txt ");
        exit(1);

    }
    fprintf(f, "%d" , s);
    fclose(f);

    // input = s
    // output = gia tri trong file data\\cocacola.txt
}
//=======================================================================================================
int thongke_coca ()  // ham dung de xuat gia tri trong file data\\cocacola.txt
{
    FILE *f;
    f=fopen("data\\cocacola.txt", "r");
    if (f==NULL){
        printf("loi mo file data\\cocacola.txt");
        exit(1);
    }
    int z;
    fscanf(f , "%d", &z);
    fclose(f); // dong file
 return(z);
 //input = gia tri trong file data\\cocacola.txt
 // output = gia tri cua 'z'
 }
//=======================================================================================================
int tk_sl_pepsi (int s) //ham dung de thay doi gia tri file data\\pepsi.txt bang gia tri cua bien s
{
    FILE *f;
    f = fopen("data\\pepsi.txt", "w");
    if (f == NULL){
        printf("loi tao hoac mo file data\\pepsi.txt ");
        exit(1);

    }
    fprintf(f, "%d" , s);
    fclose(f);
    //input = s
    // output = gia tri trong file data\\pepsi.txt
}
//=======================================================================================================

int thongke_pepsi () //ham dung de xuat gia tri trong file data\\pepsi.txt
{
    FILE *f;
    f=fopen("data\\pepsi.txt", "r");
    if (f==NULL){
        printf("loi mo file data\\pepsi.txt");
        exit(1);
    }
    int z;
    fscanf(f , "%d", &z);
    fclose(f); // dong file
 return(z);
 //input = gia tri trong file data\\pepsi.txt
 //output = gia tri cua 'z'
 }

//=======================================================================================================

int tk_sl_7up (int s) //ham dung de thay doi gia tri file data\\7up.txt bang gia tri cua bien s
{
    FILE *f;
    f = fopen("data\\7up.txt", "w");
    if (f == NULL){
        printf("loi tao hoac mo file data\\7up.txt ");
        exit(1);

    }
    fprintf(f, "%d" , s);
    fclose(f);
//input = gia tri 's'
// output = gia tri trong file data\\7up.txt
}
//=======================================================================================================

int thongke_7up () //ham dung de xuat gia tri trong file data\\7up.txt
{
    FILE *f;
    f=fopen("data\\7up.txt", "r");
    if (f==NULL){
        printf("loi mo file data\\7up.txt");
        exit(1);
    }
    int z;
    fscanf(f , "%d", &z);
    fclose(f); // dong file
 return(z);
 //input = gia tri trong file data\\7up.txt
 // output = gia tri 'z'
 }

//=======================================================================================================

int tk_sl_revive (int s) // ham dung de thay doi gia tri file data\\revive.txt bang gia tri cua bien s
{
    FILE *f;
    f = fopen("data\\revive.txt", "w");
    if (f == NULL){
        printf("loi tao hoac mo file data\\revive.txt ");
        exit(1);

    }
    fprintf(f, "%d" , s);
    fclose(f);
    //input = gia tri 's'
    // output = gia tri trong file data\\revive.txt
}
//=======================================================================================================

int thongke_revive () // ham xuat gia tri cua file data\\revive.txt
{
    FILE *f;
    f=fopen("data\\revive.txt", "r");
    if (f==NULL){
        printf("loi mo file data\\revive.txt");
        exit(1);
    }
    int z;
    fscanf(f , "%d", &z); // gia tri trong file se duoc gan cho 'z'
    fclose(f); // dong file
 return(z);  // tra ve gia tri cua z
 //input = gia tri trong file data\\revive.txt
 //output = gia tri 'z'
 }
//=======================================================================================================
int xsl_coca_adtk()   // xuat gia tri trong file data\\sl_coca_adtk.txt
                    //ham nay dung de xuat gia tri coca sau moi lan admin in thong ke doanh thu
{
     FILE *f;
    f=fopen("data\\sl_coca_adtk.txt", "r");
    if (f==NULL){
        printf("loi mo file data\\sl_coca_adtk.txt");
        exit(1);
    }
    int z;
    fscanf(f , "%d", &z);
    fclose(f); // dong file
 return(z);
 //input = gia tri trong file data\\sl_coca_adtk.txt
 //output = gia tri "z'
}
//========================================================================================================
int nsl_coca_adtk(int s)  // ham dua gia tri vao file data\\sl_coca_adtk
                        // ham nay chi dung khi admin in thong ke doanh thu
   {

    FILE *f;
    f = fopen("data\\sl_coca_adtk.txt", "w");
    if (f == NULL){
        printf("loi tao hoac mo file data\\sl_coca_adtk ");
        exit(1);   // thoat ct vi loi mo file

    }
    fprintf(f, "%d" , s);  // gia tri trong file duoc thay doi bang gia tri cua 's'
    fclose(f);
    //input = gia tri 'z'
    //output = gia tri trong file data\\sl_coca_adtk.txt
   }
//=======================================================================================================
int xsl_pepsi_adtk()   // xuat gia tri trong file data\\sl_pepsi_adtk.txt
                    //ham nay dung de xuat gia tri pepsi sau moi lan admin in thong ke doanh thu
{
     FILE *f;
    f=fopen("data\\sl_pepsi_adtk.txt", "r");
    if (f==NULL){
        printf("loi mo file data\\sl_pepsi_adtk.txt");
        exit(1);
    }
    int z;
    fscanf(f , "%d", &z); // gia tri cua file duoc gian lai cho 'z'
    fclose(f); // dong file
 return(z);
 //input = gia tri trong file data\\sl_pepsi_adtk.txt
 //output = gia tri 'z'
}
//========================================================================================================

int nsl_pepsi_adtk(int s)  // ham dua gia tri vao file data\\sl_pepsi_adtk
                        // ham nay chi dung khi admin in thong ke doanh thu
   {

    FILE *f;
    f = fopen("data\\sl_pepsi_adtk.txt", "w");
    if (f == NULL){
        printf("loi tao hoac mo file data\\sl_pepsi_adtk ");
        exit(1);

    }
    fprintf(f, "%d" , s);  // gia tri trong file duoc thay doi bang gia tri cua 's'
    fclose(f);
    //input = gia tri 's'
    // output = gia tri trong file data\\sl_pepsi_adtk.txt
   }
//=======================================================================================================
int xsl_7up_adtk()   // xuat gia tri trong file data\sl_7up_adtk.txt
                    //ham nay dung de xuat gia tri 7up sau moi lan admin in thong ke doanh thu
{
     FILE *f;
    f=fopen("data\\sl_7up_adtk.txt", "r");
    if (f==NULL){
        printf("loi mo file data\\sl_7up_adtk.txt");
        exit(1);
    }
    int z;
    fscanf(f , "%d", &z);// gia tri cua file duoc gian lai cho 'z'
    fclose(f); // dong file
 return(z);
 //input = gia tri trong file data\\sl_7up_adtk.txt
 //output = gia tri 'z'
}
//========================================================================================================

int nsl_7up_adtk(int s)  // ham dua gia tri vao file data\\sl_7up_adtk
                        // ham nay chi dung khi admin in thong ke doanh thu
   {

    FILE *f;
    f = fopen("data\\sl_7up_adtk.txt", "w");
    if (f == NULL){
        printf("loi tao hoac mo data\\file sl_7up_adtk ");
        exit(1);

    }
    fprintf(f, "%d" , s);  // gia tri trong file duoc thay doi bang gia tri cua 's'
    fclose(f);
    //input = gia tri 's'
    // output = gia tri trong file data\\sl_7up_adtk.txt
   }
//=======================================================================================================
int xsl_revive_adtk()   // xuat gia tri trong file data\\sl_revive_adtk.txt
                    //ham nay dung de xuat gia tri revive sau moi lan admin in thong ke doanh thu
{
     FILE *f;
    f=fopen("data\\sl_revive_adtk.txt", "r");
    if (f==NULL){
        printf("loi mo file data\\sl_revive_adtk.txt");
        exit(1);
    }
    int z;
    fscanf(f , "%d", &z);// gia tri cua file duoc gian lai cho 'z'
    fclose(f); // dong file
 return(z);
 //input = gia tri trong file data\\sl_revive_adtk.txt
 //output = gia tri 'z'
}
//========================================================================================================

int nsl_revive_adtk(int s)  // ham dua gia tri vao file data\\sl_revive_adtk.txt
                        // ham nay chi dung khi admin in thong ke doanh thu
   {

    FILE *f;
    f = fopen("data\\sl_revive_adtk.txt", "w");
    if (f == NULL){
        printf("loi tao hoac mo file sl_revive_adtk ");
        exit(1);

    }
    fprintf(f, "%d" , s);  // gia tri trong file duoc thay doi bang gia tri cua 's'
    fclose(f);
    //input = gia tri 's'
    // output = gia tri trong file data\\sl_revive_adtk.txt

   }
//=======================================================================================================
//=======================================================================================================
int mua_nuoc()  // ham chon ms sp ,so sanh so du co du mua nuoc hay khong, tra lai tien thua..
{
	int k;
    printf("\n\n\tChon ma so nuoc muon mua: ");
    X:
    scanf("%d",&k);
	switch(k){
		case 1:{
			if(thongke_coca()==0){
				system("cls");
				printf("\n\n\t-------->SOLD OUT<--------");
				printf("\n\n\t---------Tra tien---------");
				chia_tienthua(xFilesodu());  //chia tien thua cua so du va tra tien thua
				nFilesodu(0);   // sau khi tra tien thi sodu == 0
				nFilesodu_tamthoi(0);
			}else {
			printf("\t\n----------------------------------------------------------------------");
			printf("\n\n\tBan dang chon mua Coca Cola");
			int cost=gia_tiencoca();  // tinh gia tien can thanh toan cua sp chon mua
			printf("\n\t-------->Thanh` tien`: %d",cost);
			while (xFilesodu()<cost){
				system("cls");
				printf("\n\tBan khong du tien!");
				printf("\t\n\n--------Tra tien--------");
				chia_tienthua(xFilesodu());
				nFilesodu(0);
				nFilesodu_tamthoi(0);
				return 0;
			}

			while (xFilesodu()>=cost){
			char c;
			printf("\n\tGo'Y' de thanh toan hoac go 'N' de duoc hoan` tien`: "); scanf("%s",&c);
			if (c=='Y'|| c=='y'){
				system("cls");
				printf("\n\tThanh toan thanh cong!");
				int tienthua= xFilesodu() - cost;
				printf("\n\tTien thua: %d",tienthua);
				chia_tienthua(tienthua);
				nFilesodu(0);// sau khi thoi tien thi sodu trong may = 0
				nFilesodu_tamthoi(0);
				int z;
				z = thongke_coca();
				z--;
				tk_sl_coca(z);   // sau khi mua thanh cong thi soluong sp trong may phai - 1
					 FILE *f;
   					 f = fopen("admin\\lichsubansp.txt","a");
   					 if (f == NULL)
    				{
   					 printf("loi mo file admin\\lichsubansp.txt");
   					 exit(1);
    				}
					time_t now;// ham thoi gian trong may tinh
    				time(&now);// """"
    				fprintf(f,"\n da ban 1 Coca luc : %s",ctime(&now));  // xuat gia tri tgian khi ban sp vao file admin\\lichsubansp
				}else {
					if(c=='N'||c=='n'){
						system("cls");
				printf("\t\n\n--------Hoan Tien--------");
				chia_tienthua(xFilesodu());
				nFilesodu(0);
				nFilesodu_tamthoi(0);
					}
				}
			}
		}
	}
			break;

			case 2:{
				if(thongke_pepsi()==0){
				system("cls");
				printf("\n\n\t-------->SOLD OUT<--------");
				printf("\n\n\t---------Tra tien---------");
				chia_tienthua(xFilesodu());
				nFilesodu(0);
				nFilesodu_tamthoi(0);
			}else {
			printf("\t\n----------------------------------------------------------------------");
			printf("\n\n\n\tBan dang chon mua Pepsi");
			int cost=gia_tienpepsi();
			printf("\n\n\t-------->Thanh` tien`: %d",cost);
			while(xFilesodu()<cost){
				system("cls");
				printf("\n\tBan khong du tien!");
				printf("\t\n\n--------Tra tien--------");
				chia_tienthua(xFilesodu());
				nFilesodu(0);
				nFilesodu_tamthoi(0);
				return 0;
			}
			while (xFilesodu()>=cost){
			char c;
			printf("\n\tGo'Y' de thanh toan hoac go 'N' de duoc hoan` tien`: "); scanf("%s",&c);
			if (c=='Y'|| c=='y'){
				system("cls");
				printf("\n\tThanh toan thanh cong!");
				int tienthua= xFilesodu() - cost;
				printf("\n\tTien thua: %d",tienthua);
				chia_tienthua(tienthua);
				nFilesodu(0);// sau khi thoi tien thi sodu trong may = 0
				nFilesodu_tamthoi(0);
				int z;
				z = thongke_pepsi();
				z--;
				tk_sl_pepsi(z);
									 FILE *f;
   					 f = fopen("admin\\lichsubansp.txt","a");
   					 if (f == NULL)
    				{
   					 printf("loi mo file lichsubansp.txt");
   					 exit(1);
    				}
					time_t now;// ham thoi gian trong may tinh
    				time(&now);// """"
    				fprintf(f,"\n da ban 1 Pepsi luc : %s",ctime(&now));  // xuat gia tri tgian khi ban sp
				}else {
					if(c=='N'||c=='n'){
						system("cls");
				printf("\t\n\n--------Hoan Tien--------");
				chia_tienthua(xFilesodu());
				nFilesodu(0);
				nFilesodu_tamthoi(0);
					}
				}
			}
		}
	}
			break;

			case 3:{
				if(thongke_7up()==0){
				system("cls");
				printf("\n\n\t-------->SOLD OUT<--------");
				printf("\n\n\t---------Tra tien---------");
				chia_tienthua(xFilesodu());
				nFilesodu(0);
				nFilesodu_tamthoi(0);
			}else {
			printf("\n\t----------------------------------------------------------------------");
			printf("\n\n\tBan dang chon mua 7up");
			int cost=gia_tien7up();
			printf("\n\n\t-------->Thanh` tien`: %d",cost);
			while(xFilesodu()<cost){
				system("cls");
				printf("\n\tBan khong du tien!");
				printf("\t\n\n--------Tra tien--------");
				chia_tienthua(xFilesodu());
				nFilesodu(0);
				nFilesodu_tamthoi(0);
				return 0;
			}
			while(xFilesodu()>=cost){
			char c;
			printf("\n\tGo'Y' de thanh toan hoac go 'N' de duoc hoan` tien`: "); scanf("%s",&c);
			if (c=='Y'|| c=='y'){
				system("cls");
				printf("\n\tThanh toan thanh cong!");
				int tienthua= xFilesodu() - cost;
				printf("\n\tTien thua: %d",tienthua);
				chia_tienthua(tienthua);
				nFilesodu(0);// sau khi thoi tien thi sodu trong may = 0
				nFilesodu_tamthoi(0);
				int z;
				z = thongke_7up();
				z--;
				tk_sl_7up(z);
					 FILE *f;
   					 f = fopen("admin\\lichsubansp.txt","a");
   					 if (f == NULL)
    				{
   					 printf("loi mo file lichsubansp.txt");
   					 exit(1);
    				}
					time_t now;// ham thoi gian trong may tinh
    				time(&now);// """"
    				fprintf(f,"\n da ban 1 7up luc : %s",ctime(&now));  // xuat gia tri tgian khi ban sp

				}else {
					if(c=='N'||c=='n'){
						system("cls");
				printf("\t\n\n--------Hoan Tien--------");
				chia_tienthua(xFilesodu());
				nFilesodu(0);
				nFilesodu_tamthoi(0);
					}
				}
			}
		}
	}
			break;

			case 4:{
				if(thongke_revive()==0){
				system("cls");
				printf("\n\n\t-------->SOLD OUT<--------");
				printf("\n\n\t---------Tra tien---------");
				chia_tienthua(xFilesodu());
				nFilesodu(0);
				nFilesodu_tamthoi(0);
			}else {
			printf("\n\t----------------------------------------------------------------------");
			printf("\n\n\tBan dang chon mua Revive");
			int cost=gia_tienrevive();
			printf("\n\n\t-------->Thanh` tien`: %d",cost);
			while(xFilesodu()<cost){
				system("cls");
				printf("\n\tBan khong du tien!");
				printf("\t\n\n--------Tra tien--------");
				chia_tienthua(xFilesodu());
				nFilesodu(0);
				nFilesodu_tamthoi(0);
				return 0;
			}
			while(xFilesodu()>=cost){
			char c;
			printf("\n\tGo'Y' de thanh toan hoac go 'N' de duoc hoan` tien`: "); scanf("%s",&c);
			if (c=='Y'|| c=='y'){
				system("cls");
				printf("\n\tThanh toan thanh cong!");
				int tienthua= xFilesodu() - cost;
				printf("\n\tTien thua: %d",tienthua);
				chia_tienthua(tienthua);
				nFilesodu(0); // sau khi thoi tien thi sodu trong may = 0
				nFilesodu_tamthoi(0);
				int z;
				z = thongke_revive();
				z--;
				tk_sl_revive(z);
					 FILE *f;
   					 f = fopen("admin\\lichsubansp.txt","a");
   					 if (f == NULL)
    				{
   					 printf("loi mo file lichsubansp.txt");
   					 exit(1);
    				}
					time_t now;// ham thoi gian trong may tinh
    				time(&now);// """"
    				fprintf(f,"\n da ban 1 Revive luc : %s",ctime(&now));  // xuat gia tri tgian khi ban sp
				}else {
					if(c=='N'||c=='n'){
						system("cls");
				printf("\t\n\n--------Hoan Tien--------");
				chia_tienthua(xFilesodu());
				nFilesodu(0);
				nFilesodu_tamthoi(0);
					}
				}
			}
		}
			break;
			default :
				printf("!!!!!!!  Ma so nhap khong chinh xac, moi ban nhap lai:  ");
				goto X;  // di den dong 677 de chay lai
				break;
		}
	}

	//input = ma so nuoc muon mua
	//output = tra tien thua + sp neu mua thanh cong, tra tien neu mua khong thanh cong, xuat lich su mua hang vao file
}


//----------------------------------------------------------------------------------------------------------------------------
int doanh_thu()  // ham tinh toan thong ke doanh thu cua may tu lan thong ke gan nhat
{
    int a,b,c,d,e,f,g,h,tongtien;
    a = xsl_coca_adtk() - thongke_coca();
    // a = so luong coca con lai o lan thong ke gan nhat - so luong coca con lai o hien tai
    b = xsl_pepsi_adtk() - thongke_pepsi();
    // b = so luong pepsi con lai o lan thong ke gan nhat - so luong pepsi con lai o hien tai
    c = xsl_7up_adtk() - thongke_7up();
    d = xsl_revive_adtk() - thongke_revive();

    tongtien = a*gia_tiencoca() + b*gia_tienpepsi() + c*gia_tien7up() + d*gia_tienrevive();
    // tong doanh thu: la doanh thu tinh tu thoi gian thong ke lan truoc den hien tai
    FILE *k;
    k = fopen("admin\\doanhthu.txt","a");
    if (k==NULL) // neu mo file that bai
    {
        printf("loi mo file doanhthu,txt");
        exit(1);
    }
    time_t now;// ham thoi gian thuc(tgian luc thuc hien theo tgian trong may)
    time(&now);// ham thoi gian thuc
    fprintf(k,"\n%s",ctime(&now)); // in gia tri tgian vao file
    fprintf(k,"\n\nDa ban duoc | %d : Coca \t %d : Pepsi \t %d : 7up \t %d : Revive",a,b,c,d);
    fprintf(k,"\n\nDoanh thu   | CoCa: %d VND ; Pepsi: %d VND ; 7Up: %d VND ; Revive: %d VND",a*gia_tiencoca(),b*gia_tienpepsi(),c*gia_tien7up(),d*gia_tienrevive());
    fputs("\n\n--------------------------------------------------------------------------------",k);
    fprintf(k,"\n Tong cong:  %d lon nuoc da ban   | DOANH THU :   %d VND.",a+b+c+d,tongtien);
    fputs("\n\n================================================================================",k);
    fclose(k);//dong file
    e = thongke_coca();     // so luong coca hien tai se dc gan cho 'e'
    nsl_coca_adtk(e);       // dua gia tri cua e vao file sl_coca_adtk  de su dung cho lan thong ke tiep theo
    f = thongke_pepsi();    // so luong coca hien tai se dc gan cho 'f'
    nsl_pepsi_adtk(f);      // dua gia tri cua e vao file sl_pepsi_adtk  de su dung cho lan thong ke tiep theo
    g = thongke_7up();
    nsl_7up_adtk(g);
    h = thongke_revive();
    nsl_revive_adtk(h);
	printf("\n%s",ctime(&now)); // in gia tri tgian len man hinh
    printf("\n\nDa ban duoc | %d : Coca \t %d : Pepsi \t %d : 7up \t %d : Revive",a,b,c,d);
    printf("\n\nDoanh thu   | CoCa: %d VND ; Pepsi: %d VND ; 7Up: %d VND ; Revive: %d VND",a*gia_tiencoca(),b*gia_tienpepsi(),c*gia_tien7up(),d*gia_tienrevive());
    printf("\n\n--------------------------------------------------------------------------------");
    printf("\n Tong cong:  %d lon nuoc da ban   | DOANH THU :   %d VND.",a+b+c+d,tongtien);
	printf("\n\n================================================================================");
// { dong 973 - 979 in cac gia tri can thiet len man hinh khi goi ham doanh_thu()
// input = so luong sp o lan thong ke truoc va so luong san pham con lai trong may ho hien tai
// output = thong ke so san pham da ban ke tu thoi diem thong ke gan nhat ( in ra mh va ghi vao file admin\\doanhthu.txt)
}
//---------------------------------------------------------------------------------
void lich_su_ban()  // ham dung de in gia tri lich su ban hang trong file admin\\lichsubansp.txt len man hinh
{
    FILE *f;
    f= fopen("admin\\lichsubansp.txt", "r");
    if(f==NULL)
    {
    	printf("loi mo file admin\\lichsubansp.txt ");
    	exit(1);  		// thoat ct vi loi
    }
    char c;
    while ((c = fgetc(f)) != EOF)  // fgetc(f) doc 1 gia tri tu file . fgetc(f) = EOF khi ket thuc file
    {
        printf("%c", c);
    }
    fclose(f);
    //input = du lieu trong file admin\\lichsubansp.txt
    // output = in input len man hinh

}
//-------------------------------------------------------------------------------
void napsp()  // ham danh cho admin update so luong nuoc vao may
{
	int a,b,c,d,a1,b1,c1,d1;
	printf("Nhap So San pham Coca, pepsi, 7Up, Revive can them vao may: \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    a1 = thongke_coca() + a;		//a1 =  so luong sp con trong may + so sp vua nhap vao
    nsl_coca_adtk(a1);		// gia tri trong file data\\sl_coca_adtk.txt duoc thay bang gia tri cua 'a1'
    tk_sl_coca(a1);			// gia tri trong file data\\cocacola.txt duoc thay bang gia tri cua a1
    b1 = thongke_pepsi() + b;
    nsl_pepsi_adtk(b1);
    tk_sl_pepsi(b1);
    c1 = thongke_7up() + c;
    nsl_7up_adtk(c1);
    tk_sl_7up(c1);
    d1 = thongke_revive() + d;
    nsl_revive_adtk(d1);
    tk_sl_revive(d1);
    printf("Nap san pham thanh cong.\n");
    printf(" So luong coca la: %d\n So luong pepsi la: %d\n So luong 7up la: %d\n So luong revive la: %d", thongke_coca(), thongke_pepsi(), thongke_7up(), thongke_revive());
    //input = a,b,c,d
    //output = gia tri trong cac file data\\sl_(x)_adtk.txt va data\\(y).txt 	(x,y = ten 4loai nuoc va in ra man hinh)
    
    }
//-------------------------------------------------------------------------------------------------------
int admin(){ // ham xuat  (password)
    FILE *f;
    f=fopen("admin\\account_admin.txt", "r");
    if (f==NULL){
        printf("loi mo account_admin.txt");
        exit(1);
    }
    int z;
    fscanf(f , "%d", &z);// gia tri cua file duoc gian lai cho 'z'
    fclose(f); // dong file
 return(z);
 //input = du lieu trong file admin\\account_admin.txt
 // output = gia tri "z"
}
//=======================================================================================================

int main ()
{
    solanchayct();
    int i = 0;
    int luachon;
    C:
    	 
    printf("\n\n\tMAY BAN NUOC TU DONG - NHOM 2 KY THUAT DIEU KHIEN VA TU DONG HOA K47\n\t-------------------------------------------------------------------\n\n\n\n\t1 - MUA NUOC\t|    2 - QUAN LY MAY BAN NUOC (chi danh` cho Admin)\n");
	printf("\n\n---> "); 
    A:
    scanf("%d",&luachon);
    switch(luachon){
    	case 1:
    		system("cls");

    	while (i<1)
    {
        int t;
        system("cls");  // lenh xoa man hinh
        nhaptien();   // goi ham nhap tien de so sanh 'n' la so tien vua nhap co dung voi yeu cau hay khong
           			 // va cho so tien vua nhap vao file sodutamthoi.txt sau do xuat gia tri cua file sodu.txt ra man hinh
        printf("\n\n\t1 - Xem MENU va chon mua nuoc\t  |\t2 - Nap them tien vao may");
        printf("\n-----> ");
        scanf("%d", &t);
        if (t ==1 )
            i = 2;
        else if(t == 2)
            i = 0;
    }
    system("cls"); // lenh xoa man hinh
    menu();  // in menu nuoc trong ham menu
	mua_nuoc();   // goi ham mua_nuoc()
	getch();
		break;
		case 2:
			{
				system("cls");
				int code;
				printf("\n\n\n\t\tNhap ma so quan li may ban nuoc \n\t\tHoac nhap 1 de quay lai:\n ====> \t ");
				B:
				scanf("%d",&code);
			   if(code == admin())
			   {
			   	system("cls");
			   	printf("\n\tADMIN - May ban nuoc tu dong.");
			   	printf("\n\n\t__________________________________________________________________________________________________________\n\n\t1 - THONG KE DOANH THU.\t\t|\t2 - XEM LICH SU BAN HANG.\t|\t3 - NAP SO LUONG VAO MAY.");
			   	int choose;
			   	printf("\n\n----> ");
			   	scanf("%d",&choose);
			   	while(choose == 1){
			   		doanh_thu();
			   		printf("\n\n\t\t\t--> Da thong ke doanh thu !");
			   		return 0;
				   }
				   while(choose==2){
				   	lich_su_ban();
				   	printf("\n\n\t--> Da xuat lich su ban san pham !");
				   	return 0;
				   }
				    while(choose==3){
				   	napsp();   // goi ham napsp()
				   	return 0;
				   }
			   }
			   else if(code==1)
			   {
			   	system("cls");
			   	goto C;		// ct se di den dong 1049 de tiep tuc thuc hien 
			   	}
			   else
			    {
			   system("cls");	
			   printf("\n\n\t MA SO SAI, MOI BAN NHAP LAI: ");
			   printf("\n\n\t HOAC NHAN PHIM 1 DE QUAY LAI: \n");
			   
			   goto B;  	// ct se di den dong 1083 de tiep tuc thuc hien
			   }
		break;
			}
			default: printf("\n\n\t MOI BAN LUA CHON LAI: ");
			goto A ; 		// ct se di den dong 1053 de tiep tuc thuc hien 
			break;
	}
}
