/**
  *****************************************************************************
  * @file    udp_client.h
  * @author  Zorb
  * @version V1.0.0
  * @date    2018-09-04
  * @brief   udp客户端的实现
  *****************************************************************************
  * @history
  *
  * 1. Date:2018-09-04
  *    Author:Zorb
  *    Modification:建立文件
  *
  *****************************************************************************
  */
#ifndef _UDP_CLIENT_H
#define _UDP_CLIENT_H

/* 定义端口号 */
#define UDP_REMOTE_PORT    9000 /* 远端端口 */
#define UDP_LOCAL_PORT     900 /* 本地端口 */

#define UDP_DISC_PORT_LOCAL     9100
#define UDP_DISC_PORT_REMOTE    9100

#define UDP_MODBUS_PORT_LOCAL   9101
#define UDP_MODBUS_PORT_REMOTE  9101

/******************************************************************************
 * 描述  : 发送udp数据
 * 参数  : (in)pData 发送数据的指针
 * 返回  : 无
******************************************************************************/
void udp_disc_client_send(char *pData);

/******************************************************************************
 * 描述  : 创建udp客户端
 * 参数  : 无
 * 返回  : 无
******************************************************************************/
void udp_disc_client_init(void);

/******************************************************************************
 * 描述  : 发送udp数据
 * 参数  : (in)pData 发送数据的指针
 * 返回  : 无
******************************************************************************/
void udp_modbus_client_send(char *pData);

/******************************************************************************
 * 描述  : 发送udp数据
 * 参数  : (in)pData 发送数据的指针, (in)len 发送数据长度
 * 返回  : 无
******************************************************************************/
void udp_modbus_client_raw_send(char *pData, int len);

/******************************************************************************
 * 描述  : 创建udp客户端
 * 参数  : 无
 * 返回  : 无
******************************************************************************/
int udp_modbus_client_init(void);
;
#endif //_UDP_CLIENT_H

