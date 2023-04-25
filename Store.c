#include<stdio.h>
#include<string.h>
struct device {
	int number;
	/*Declared a number variable to make the choosing process for the device easier*/
	char name[50];
	char brand[50];
	int storage;
	int camera;
	char OS;
	int price;
};
void filetostruct(char f[50],tab){
	int a,b;
	char sentence[100];
	char delim[]=" ";
	int x;
	FILE *fp;
	fp=fopen(f,"r");
	
	for (a=0;a<100;a++){
		fscanf(fp,"%s",sentence);
		char *ptr = strtok(sentence,delim);
		for (b=0;b<7;b++){
			if (ptr!= NULL){
				x=atoi(ptr);
				tab[a].number=x ;
				ptr = strtok(NULL,delim);
			}
			if (ptr!= NULL){
				tab[a].name=ptr ;
				ptr = strtok(NULL,delim);
			}
			if (ptr!= NULL){
				tab[a].brand=ptr ;
				ptr = strtok(NULL,delim);
			}
			if (ptr!= NULL){
				x=atoi(ptr);
				tab[a].storage=x;
				ptr = strtok(NULL,delim);
			}
			if (ptr!= NULL){
				x=atoi(ptr);
				tab[a].camera=x;
				ptr = strtok(NULL,delim);
			}
			if (ptr!= NULL){
				tab[a].OS=ptr;
				ptr = strtok(NULL,delim);
			}
			if (ptr!= NULL){
				x=atoi(ptr);
				tab[a].price=x;
				ptr = strtok(NULL,delim);
			}
		}
	}
	
	fclose(fp);
}
int main(){
	int x,y;
	FILE *fp;
	struct device tab[100];
	char product[100];
	char answer[1];
	int i;
	char brandd[50];
	int storagee;
	
	
	
	printf("what is the product you want to buy ? \n");
	printf("1. Phone \n");
	printf("2. Laptop \n");
	printf("3. Console \n");
	printf("4. Printer \n");
	printf("5. Camera \n");
	printf("6. TV \n");
	printf("7. Tablet \n");
	scanf("%d",&x);
	
	switch (x) {
		case 1:
			filetostruct("Phone.txt",tab);
			fp=fopen("Phone.txt","r");
	
			
			while (!feof(fp)){
				fscanf(fp,"%s",product);
				printf("%s",product);
			}
			fclose(fp);
			printf("if you want to specify your options write Y, otherwise write N");
			scanf("%s",answer);
			if (strcmp(answer,"Y")==0){
				printf("specify by \n");
				printf("1. brand \n");
				printf("2. storage \n");
				printf("3. camera \n");
				printf("4. os \n");
				printf("5. Max Price \n");
				scanf("%d",y);
				switch (y){
					case 1:
						printf("what is the brand you want ?");
						scanf("%s",brandd);
						i=-1;
						while (strcmp(brandd,tab[i].brand)==0){
							i=i+1;
							//printf("%d",tab[i]); this is what we were looking for but i guess it dosen't work like that
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 2:
						printf("how much storage you need ?");
						scanf("%d",storagee);
						i=-1;
						while (storagee==tab[i].storage){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 3:
						printf("how many MP in the camera are you looking for ?");
						scanf("%d",cameraa);
						i=-1;
						while (cameraa==tab[i].camera){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 4:
						printf("what is the Operating system you would like to use ?");
						scanf("%s",oss);
						i=-1;
						while (strcmp(oss,tab[i].os)==0){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 5:
						printf("what is the amount of money you would not like to surpass ?");
						scanf("%d",pricee);
						i=-1;
						while ((pricee<tab[i].price)==true){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					default :
						printf("please stick to the instructions");
				}
			}
			
			
		case 2:
			filetostruct("Laptop.txt",tab);
			fp=fopen("Laptop.txt","r");
	
			
			while (!feof(fp)){
				fscanf(fp,"%s",product);
				printf("%s",product);
			}
			fclose(fp);
			printf("if you want to specify your options write Y, otherwise write N");
			scanf("%s",answer);
			if (strcmp(answer,"Y")==0){
				printf("specify by \n");
				printf("1. brand \n");
				printf("2. storage \n");
				printf("3. camera \n");
				printf("4. os \n");
				printf("5. Max Price \n");
				scanf("%d",y);
				switch (y){
					case 1:
						printf("what is the brand you want ?");
						scanf("%s",brandd);
						i=-1;
						while (strcmp(brandd,tab[i].brand)==0){
							i=i+1;
							//printf("%d",tab[i]); this is what we were looking for but i guess it dosen't work like that
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 2:
						printf("how much storage you need ?");
						scanf("%d",storagee);
						i=-1;
						while (storagee==tab[i].storage){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 3:
						printf("how many MP in the camera are you looking for ?");
						scanf("%d",cameraa);
						i=-1;
						while (cameraa==tab[i].camera){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 4:
						printf("what is the Operating system you would like to use ?");
						scanf("%s",oss);
						i=-1;
						while (strcmp(oss,tab[i].os)==0){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 5:
						printf("what is the amount of money you would not like to surpass ?");
						scanf("%d",pricee);
						i=-1;
						while ((pricee<tab[i].price)==true){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					default :
						printf("please stick to the instructions");
				}
			}
	
		case 3:
			filetostruct("Console.txt",tab);
			fp=fopen("Console.txt","r");
	
			
			while (!feof(fp)){
				fscanf(fp,"%s",product);
				printf("%s",product);
			}
			fclose(fp);
			printf("if you want to specify your options write Y, otherwise write N");
			scanf("%s",answer);
			if (strcmp(answer,"Y")==0){
				printf("specify by \n");
				printf("1. brand \n");
				printf("2. storage \n");
				printf("3. camera \n");
				printf("4. os \n");
				printf("5. Max Price \n");
				scanf("%d",y);
				switch (y){
					case 1:
						printf("what is the brand you want ?");
						scanf("%s",brandd);
						i=-1;
						while (strcmp(brandd,tab[i].brand)==0){
							i=i+1;
							//printf("%d",tab[i]); this is what we were looking for but i guess it dosen't work like that
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 2:
						printf("how much storage you need ?");
						scanf("%d",storagee);
						i=-1;
						while (storagee==tab[i].storage){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 3:
						printf("how many MP in the camera are you looking for ?");
						scanf("%d",cameraa);
						i=-1;
						while (cameraa==tab[i].camera){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 4:
						printf("what is the Operating system you would like to use ?");
						scanf("%s",oss);
						i=-1;
						while (strcmp(oss,tab[i].os)==0){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 5:
						printf("what is the amount of money you would not like to surpass ?");
						scanf("%d",pricee);
						i=-1;
						while ((pricee<tab[i].price)==true){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					default :
						printf("please stick to the instructions");
				}
			}
		
		case 4:
			filetostruct("Printer.txt",tab);
			fp=fopen("Printer.txt","r");
	
			
			while (!feof(fp)){
				fscanf(fp,"%s",product);
				printf("%s",product);
			}
			fclose(fp);
			printf("if you want to specify your options write Y, otherwise write N");
			scanf("%s",answer);
			if (strcmp(answer,"Y")==0){
				printf("specify by \n");
				printf("1. brand \n");
				printf("2. storage \n");
				printf("3. camera \n");
				printf("4. os \n");
				printf("5. Max Price \n");
				scanf("%d",y);
				switch (y){
					case 1:
						printf("what is the brand you want ?");
						scanf("%s",brandd);
						i=-1;
						while (strcmp(brandd,tab[i].brand)==0){
							i=i+1;
							//printf("%d",tab[i]); this is what we were looking for but i guess it dosen't work like that
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 2:
						printf("how much storage you need ?");
						scanf("%d",storagee);
						i=-1;
						while (storagee==tab[i].storage){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 3:
						printf("how many MP in the camera are you looking for ?");
						scanf("%d",cameraa);
						i=-1;
						while (cameraa==tab[i].camera){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 4:
						printf("what is the Operating system you would like to use ?");
						scanf("%s",oss);
						i=-1;
						while (strcmp(oss,tab[i].os)==0){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 5:
						printf("what is the amount of money you would not like to surpass ?");
						scanf("%d",pricee);
						i=-1;
						while ((pricee<tab[i].price)==true){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					default :
						printf("please stick to the instructions");
				}
			}
		
		case 5:
			filetostruct("Camera.txt",tab);
			fp=fopen("Camera.txt","r");
	
			
			while (!feof(fp)){
				fscanf(fp,"%s",product);
				printf("%s",product);
			}
			fclose(fp);
			printf("if you want to specify your options write Y, otherwise write N");
			scanf("%s",answer);
			if (strcmp(answer,"Y")==0){
				printf("specify by \n");
				printf("1. brand \n");
				printf("2. storage \n");
				printf("3. camera \n");
				printf("4. os \n");
				printf("5. Max Price \n");
				scanf("%d",y);
				switch (y){
					case 1:
						printf("what is the brand you want ?");
						scanf("%s",brandd);
						i=-1;
						while (strcmp(brandd,tab[i].brand)==0){
							i=i+1;
							//printf("%d",tab[i]); this is what we were looking for but i guess it dosen't work like that
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 2:
						printf("how much storage you need ?");
						scanf("%d",storagee);
						i=-1;
						while (storagee==tab[i].storage){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 3:
						printf("how many MP in the camera are you looking for ?");
						scanf("%d",cameraa);
						i=-1;
						while (cameraa==tab[i].camera){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 4:
						printf("what is the Operating system you would like to use ?");
						scanf("%s",oss);
						i=-1;
						while (strcmp(oss,tab[i].os)==0){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 5:
						printf("what is the amount of money you would not like to surpass ?");
						scanf("%d",pricee);
						i=-1;
						while ((pricee<tab[i].price)==true){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					default :
						printf("please stick to the instructions");
				}
			}
		
		case 6:
			filetostruct("TV.txt",tab);
			fp=fopen("TV.txt","r");
	
			
			while (!feof(fp)){
				fscanf(fp,"%s",product);
				printf("%s",product);
			}
			fclose(fp);
			printf("if you want to specify your options write Y, otherwise write N");
			scanf("%s",answer);
			if (strcmp(answer,"Y")==0){
				printf("specify by \n");
				printf("1. brand \n");
				printf("2. storage \n");
				printf("3. camera \n");
				printf("4. os \n");
				printf("5. Max Price \n");
				scanf("%d",y);
				switch (y){
					case 1:
						printf("what is the brand you want ?");
						scanf("%s",brandd);
						i=-1;
						while (strcmp(brandd,tab[i].brand)==0){
							i=i+1;
							//printf("%d",tab[i]); this is what we were looking for but i guess it dosen't work like that
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 2:
						printf("how much storage you need ?");
						scanf("%d",storagee);
						i=-1;
						while (storagee==tab[i].storage){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 3:
						printf("how many MP in the camera are you looking for ?");
						scanf("%d",cameraa);
						i=-1;
						while (cameraa==tab[i].camera){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 4:
						printf("what is the Operating system you would like to use ?");
						scanf("%s",oss);
						i=-1;
						while (strcmp(oss,tab[i].os)==0){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 5:
						printf("what is the amount of money you would not like to surpass ?");
						scanf("%d",pricee);
						i=-1;
						while ((pricee<tab[i].price)==true){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					default :
						printf("please stick to the instructions");
				}
			}
		
		case 7:
			filetostruct("Tablet.txt",tab);
			fp=fopen("Tablet.txt","r");
	
			
			while (!feof(fp)){
				fscanf(fp,"%s",product);
				printf("%s",product);
			}
			fclose(fp);
			printf("if you want to specify your options write Y, otherwise write N");
			scanf("%s",answer);
			if (strcmp(answer,"Y")==0){
				printf("specify by \n");
				printf("1. brand \n");
				printf("2. storage \n");
				printf("3. camera \n");
				printf("4. os \n");
				printf("5. Max Price \n");
				scanf("%d",y);
				switch (y){
					case 1:
						printf("what is the brand you want ?");
						scanf("%s",brandd);
						i=-1;
						while (strcmp(brandd,tab[i].brand)==0){
							i=i+1;
							//printf("%d",tab[i]); this is what we were looking for but i guess it dosen't work like that
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 2:
						printf("how much storage you need ?");
						scanf("%d",storagee);
						i=-1;
						while (storagee==tab[i].storage){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 3:
						printf("how many MP in the camera are you looking for ?");
						scanf("%d",cameraa);
						i=-1;
						while (cameraa==tab[i].camera){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 4:
						printf("what is the Operating system you would like to use ?");
						scanf("%s",oss);
						i=-1;
						while (strcmp(oss,tab[i].os)==0){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					case 5:
						printf("what is the amount of money you would not like to surpass ?");
						scanf("%d",pricee);
						i=-1;
						while ((pricee<tab[i].price)==true){
							i=i+1;
							printf("%d \t %s \t %s \t %d \t %d \t %s \t %d",tab[i].device->number,tab[i].device->name,tab[i].device->brand,tab[i].device->storage,tab[i].device->camera,tab[i].device->OS,tab[i].device->price);
						}
						
					default :
						printf("please stick to the instructions");
				}
			}
		
		default:
			printf("Please rerun the code and stick to the constructions");
	}
}
