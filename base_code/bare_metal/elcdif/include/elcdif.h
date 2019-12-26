#ifndef elcdif_h
#define elcdif_h

#include "MCIMX6Y2.h"
#include "fsl_iomuxc.h"
#include "pad_config.h"


/*���� ��ʾ����Ϣ */
#define APP_IMG_HEIGHT 480    
#define APP_IMG_WIDTH 800
#define APP_HSW 41
#define APP_HFP 4
#define APP_HBP 8
#define APP_VSW 10
#define APP_VFP 4
#define APP_VBP 2

/* ���� elcdf ��ʾ��������*/
#define LCD_DISP_GPIO GPIO5
#define LCD_DISP_GPIO_PIN 9

/* ���� elcdf ����������� */
#define LCD_BL_GPIO GPIO1
#define LCD_BL_GPIO_PIN 8

#define false 0
#define true 1
#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))

/* �������ž�ʹ��ͬ����PAD���� */
#define LCD_PAD_CONFIG_DATA (SRE_1_FAST_SLEW_RATE |      \
                             DSE_6_R0_6 |                \
                             SPEED_3_MAX_200MHz |        \
                             ODE_0_OPEN_DRAIN_DISABLED | \
                             PKE_1_PULL_KEEPER_ENABLED | \
                             PUE_0_KEEPER_SELECTED |     \
                             PUS_0_100K_OHM_PULL_DOWN |  \
                             HYS_0_HYSTERESIS_DISABLED)
/* ����˵�� : */
/* ת������: ת�����ʿ�
        ����ǿ��: R0/6 
        �������� : max(200MHz)
        ��©����: �ر� 
        ��/����������: ʹ��
        ��/������ѡ��: ������
        ����/����ѡ��: 100Kŷķ����(ѡ���˱�������������Ч)
        �ͻ�������: ��ֹ */



void lcdif_pin_config(void);
void CLOCK_InitVideoPll(void);

void lcdif_clock_init(void);
void BOARD_InitLcd(void);
void APP_ELCDIF_Init(void);
void ELCDIF_RgbModeInit(void);
void APP_FillFrameBuffer(uint32_t frameBuffer[APP_IMG_HEIGHT][APP_IMG_WIDTH]);

#endif
