
#include <stdio.h>
int main() {

    int i ;//ตัวเเปรเก็บค่าลูป
    int number = 0 ;//ตัวเเปรเก็บค่าจำนวนที่รับเข้ามา
    int j ;//ตัวเเปรเก็บค่าลูป 
    bool loop = true ;
    do{
        printf( "Input Number : " ) ;//เเสดงข้อความออกหน้าจอ
        scanf( "%d" , & number) ;//่อ่านค่าจำนวนที่ผู้ใช้ป้อน
        if( number >= 10 ) {//เช็คค่าที่รับมาว่ามากกว่าหรือเท่ากับ 10 หรือไม่
            for( i = number ; i >= 1 ; --i ) {//เริ่มลูปสำหรับสร้างดาว
                for( j = 1 ; j <= number - i ; ++j ) {//ลูปสร้างช่องว่าง
                    printf( " " ) ;//เเสดงช่องว่าง
                }//end for
                for( j = 1 ; j <= i ; ++ j ){//ลูปสร้างดาว
                    printf( "* " ) ;//เเสดงดาว
                }//end for
                printf( "\n" ) ;//ขึ้นบบรทัด
            }//end for
            
        }//end if
        else if( number < 0 ) {//เช็คว่าจำนวนน้อยกว่า 0 หรือไม่
            printf( "Input More Than 0" ) ;//เเสดงข้อความให้ใส่ค่ามากกว่า 0 
            break;
        }//end else if
        else if( number > 0 ) {//เช็คว่าจำนวนมากกว่า 0 หรือไม่
            for( int i = 0 ; i < number ; i++ ) {//เริ่มลูปสำหรับสร้างรูปพีระมิด
                for( int space = 1 ; space <= number - i ; space++ ) {//ลูปสร้างช่องว่าง
                    printf( "  " ) ;//เเสดงช่องว่าง
                }//end for
                int coef = 1 ;//ตัวเเปรเก็บค่าโดยสาร
                for( int j = 0 ; j <= i ; j++ ) {//สร้างลูปตัวเลขโดยสาร
                    printf( "%3d " , coef ) ;//เเสดงค่าตัวเลขโดยสาร
                    coef = coef * ( i - j ) /  (j + 1 ) ;//คำนวณค่าเลขโดยสารถัดไป
                }//end for
                printf( "\n" ) ;//ขึ้นบรรทัด
            }//end for
            break;
        }//end else if
        else{//กรณีที่ไม่เข้าเงื่อนไขใดเลย
            printf( "Error" ) ;//เเสดงข้อความว่าเกิดข้อผิดพลาด
            loop = false ;
            scanf( "%*s" ) ;
        }//end else
        } while ( !loop ) ;
        return 0 ;
    }//end main