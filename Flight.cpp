#include<iostream>
using namespace std
// khai bao cau truc
struct Flight()
{
        char flightSchedule[50];
        char flightNumber[50];
        int numOfSeatsInTheFlight;
        char toWhichCity[50];
        char fromWhichCity[50];
        char gate[10];
}
typedef Flight FL;
//them struct khach hang
struct customer()
{
	char tenKH[20];
	char soghe[20];
	bool gioitinh;
	char cmnd[20];
}
typedef customer KH;
KH nhapKH();
bool themKH(KH kh);
bool xoaKH(char* khID);
void inKH(KH kh);
void inDSKH();
void docKH (char* fileKH);
void ghiKH(char* fileKH);
int main(){
         docKH(fileKH); // doc du lieu tu file customer.dat dua vao trong dsKH
        printf("888       888          888                                                888                   888888b.          d8888 888     888              d8888 d8b         888 d8b                           \n");
	printf("888   o   888          888                                                888                   888  88b         d88888 888      888            d88888 Y8P         888 Y8P                           \n");
	printf("888  d8b  888          888                                                888                   888  .88P       d88P888 888     888            d88P888             888                               \n");
	printf("888 d888b 888  .d88b.  888  .d8888b  .d88b.  88888b.d88b.   .d88b.        888888  .d88b.        8888888K.      d88P 888 Y88b   d88P           d88P 888 888 888d888 888 888 88888b.   .d88b.  .d8888b \n");
	printf("888d88888b888 d8P  Y8b 888 d88P     d88  88b 888  888  88b d8P  Y8b       888    d88  88b       888  Y88b     d88P  888  Y88b d88P           d88P  888 888 888P    888 888 888  88b d8P  Y8b 88K     \n");
	printf("88888P Y88888 88888888 888 888      888  888 888  888  888 88888888       888    888  888       888    888   d88P   888   Y88o88P           d88P   888 888 888     888 888 888  888 88888888  Y8888b.\n");
	printf("8888P   Y8888 Y8b.     888 Y88b.    Y88..88P 888  888  888 Y8b.           Y88b.  Y88..88P       888   d88P  d8888888888    Y888P           d8888888888 888 888     888 888 888  888 Y8b.          X88\n");
	printf("888P     Y888   Y8888  888  .Y8888P   Y88P   888  888  888 .Y8888         Y888     Y88P         8888888P  d88P     888     Y8P            d88P     888 888 888     888 888 888  888   Y8888   88888P'\n");
	
	printf("\n\t\t\t\t\t+++++++++++++ Welcome to BAV AirLines +++++++++++++\n\nTo Further Proceed, Please enter a value.");
	printf("\n***** Default Username && Password is root-root ***** Using Default Credentials will restrict you to just view the list of Passengers....\n");
	
	
	
	
	printf(" 		(a) Press 0 to Exit.\n");
	printf("		(b) Press 1 to Login as admin.\n");
	printf("		(c) Press 2 to Register as admin.\n");
	printf("		(d) Press 3 to Login as Passenger.\n");
	printf("		(e) Press 4 to Register as Passenger.\n");
	printf("		(f) Press 5 to Display the User Manual.\n");
	printf("		Enter the desired option:     ");
        scanf("%d",&key);
        switch(key){
        	case 0:{
        		printf("\n...THOAT CHUONGW TRINH...\n");
        		exit(0);				
			}   		        	        		
        	case 1:{
        		int slKH=0;
        		printf("******************************************************\n");          	
				printf("**            ...THEM KHACH HANG...                 **\n");
				printf("******************************************************\n");        		
        		printf("Nhap so luong Khach Hang can them: ");
        		scanf("%d", &slKH);
        		for(int i=0; i<slKH; i++){
        			printf("Nhap khach hang so %d:\n", i+1);
        			themKH(nhapKH());
				}
				printf("\n...NHAP KHACH HANG THANH CONG !!!...\n");
				break;
			}
	}
