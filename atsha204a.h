#ifndef __ATSHA204A_H_
#define __ATSHA204A_H_

#include <linux/i2c.h>
#include <linux/input.h>

#define ATSHA204A_I2C_NAME "ATSHA204A"
#define DEVICE_NAME  "atsha204a"   
#define PIO_BASE_ADDRESS             (0x01c20800)
#define PIO_RANGE_SIZE               (0x400)



#ifndef TRUE
#define TRUE            (1)
#endif

#ifndef FALSE
#define FALSE           (0)
#endif


#ifndef NULL
#define NULL            (0)
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*����*/
unsigned char EDesEn_Crypt(unsigned char *pDataBuffer, const unsigned char *IN_KEY);
unsigned char Dm2016_En_Crypt(unsigned char *pDataBuffer, const unsigned char *IN_KEY);
/*����ֵ: 0      ��ʱpDataBuffer��ָ������ݻ������ڵ�ֵΪ��Ч��������                             */
/*        ��0    �����������ݻ�������ֵ��Ч��                                                      */

/*����˵��                                                                                           */
/*	pDataBuffer: ���ݻ�����������������8���ֽڣ�byte����                                             */
/*               ���ñ�����ʱ��������Ϊ�û���������ݣ�����Ϊ8���ֽڣ��������8���ֽڣ���������Ч��*/
/*               �������8���ֽ���ֻȡǰ8���ֽڣ�                                                    */
/*               ��������ʱ��������Ϊ�����Ľ����ǰ8���ֽ���Ч��                                   */

/*IN_KEY��       �û��趨����Կ����128λ��128 bits,16 bytes��,�粻��128λ����������Ч��            */
/*               �����128λ��ȡǰ128 λ���м���                                                     */


#ifdef __cplusplus
}
#endif


#endif /* ifndef __ATSHA204A_H_ */
