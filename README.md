# ค่า x อยู่ที่ไหนนะ
โครงงานนี้จัดทำขึ้นเพื่อทำเครื่องคิดเลขเกี่ยวกับ **รูปเรขาคณิต**(2D Shapes) และ **รูปทรงเรขาคณิต**(3D Shapes)
* โดยรูปเรขาคณิตที่เครื่องคิดเลขเราคิดได้ ได้แก่
  * สี่เหลี่ยมผืนผ้า
  * สามเหลี่ยมมุมฉาก
  * สามเหลี่ยมด้านเท่า
  * วงกลม
* รูปทรงเรขาคณิตที่คิดได้ ได้แก่
  * ทรงสี่เหลี่ยมมุมฉาก
  * ทรงกลม
  * ทรงกระบอก
  * ทรงกรวย
## การใช้งานเครื่องคิดเลข
\
การใช้เครื่องคิดเลขนี้ใช้ได้โดยการรันโค้ดผ่าน **Compiler** โดยตรงและหลังจากนั้นโปรแกรมก็จะแสดงผลดังรูป
\
\
![image](https://cdn.discordapp.com/attachments/972529031947878420/972829194864169022/unknown.png)
\
\
จากรูป โปรแกรมจะให้เลือกว่าคุณนั้นจะไปคำนวนรูปเรขาคณิตหรือรูปทรงเรขาคณิตอันไหน
* ตัวอย่าง
\
ทางเราต้องการจะเลือกสี่เหลี่ยมผืนผ้า เลยใส่เลข 1 ตามที่โปรแกรมบอก
\
![image](https://cdn.discordapp.com/attachments/972529031947878420/972830052720979968/unknown.png)
\
จากนั้นโปรแกรมจะแสดงรูปภาพ และถามว่าเรารู้อะไรบ้าง ให้เราทำการเลือกช้อยในสิ่งที่เรารู้
\
![image](https://cdn.discordapp.com/attachments/972529031947878420/972833962491777034/unknown.png)
\
จากตัวอย่างทางเรารู้ a และ b จึงเลือกช้อย 1 โปรแกรมจึงพาไปใส่ข้อมูลที่รู้ แล้วแสดงคำตอบออกมา
## ตัวอย่าง Code
```c
int main()
{
	printf("\n       Welcome to Geometry calculator \n");
    int X=1;
    char Calc_oprn;
 
 
    while(X)
    {
    	calculator_operations();
        printf("\n");
        printf("%s ", KEY);
        Calc_oprn=getche();
        
 		
        switch(Calc_oprn)
        {
            case '1': rectangle();
                      break;
 
            case '2': right_triangle();
                      break;
 
            case '3': equilateral_triangle();
                      break;
 
            case '4': parallelogram();
                      break;
 
            case '5': circle();
                      break;
 			case '6': rectangular_solid();
					  break;
			case '7': sphere();
					  break;
			case '8': right_circular_cylinder();
					  break;
			case '9': right_circular_cone();
					  break;
            case 'd': calculator_operations();
                      break;
 
            case 'q': exit(0);
                      break;
            case '0': system("cls");
                      break;
 
            default : system("cls");
 
    printf("\n**********ERROR");
    printf("***********\n");
    printf("\n*****Please Try Agian");
    printf("*****\n");
                      break;
        }
    }
}
```
code ในส่วนนี้ทำงานในเรื่องของการเลือกว่าต้องการคำนวนรูปหรือรูปทรงแบบใด
```c
void rectangle()
{ 
    double a,b;
    printf("\n\n           a\n **********************\n *                    *\n *                    *\n *                    * b\n *                    *\n **********************\n\n");
    printf("I know the 1 : a and b\n           2 : (a or b) and Area\n           3 : (a or b) and Perimeter\n           0 : Back\n\n");
    printf("Choose the option : ");
    oprn=getche();
    switch(oprn)
        {
            case '1': printf("\n\nEnter a : ");
					  scanf("%lf",&a);
					  printf("Enter b : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nArea : %.2lf\n",a*b);
					  printf("Perimeter : %.2lf\n",a*2+b*2);
					  printf("\n=====================\n");
                      break;
 
            case '2': printf("\n\nEnter (a or b) : ");
					  scanf("%lf",&a);
					  printf("Enter the Area : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nSize of another side : %.2lf\n",b/a);
					  printf("Perimeter : %.2lf\n",a*2+b/a*2);
					  printf("\n=====================\n");
                      break;
 
            case '3': printf("\n\nEnter (a or b) : ");
					  scanf("%lf",&a);
					  printf("Enter the Perimeter : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nSize of another side : %.2lf\n",(b-a*2)/2);
					  printf("Area : %.2lf\n",a*(b-a*2)/2);
					  printf("\n=====================\n");
                      break;
			case '0': break;
            default : system("cls");
 
    printf("\n**********ERROR");
    printf("***********\n");
    printf("\n*****Please Try Agian");
    printf("*****\n");
                      rectangle();
        }

}
```
ในส่วนตรงนี้จะเป็นส่วนของรูปเรขาคณิตและรูปทรงเรขาคณิตซึ่งจะคล้ายกันทั้งหมดจึงยกตัวอย่างมาแค่อย่างเดียว
\
โดยในโค้ดจะประกอบด้วยรูปภาพที่จะแสดง, สูตรคำนวน, การเลือกเคสที่เรารู้
> จบการนำเสนอครับ โค้ดดูเต็มได้ที่ใน GitHup เลยครับ
#### ผู้จัดทำ
1. 64070145  นายณัฐ 		ไทยวัฒนานนท์ 
2. 64070177  นายปฏิภาณ	พูลปั้น
3. 64070218 น.ส.กานต์รวี      พราวพิชญ์พัชร
