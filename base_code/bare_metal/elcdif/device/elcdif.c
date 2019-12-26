#include "elcdif.h"
#include "MCIMX6Y2.h"




/*���� elcdf ������*/
uint32_t s_frameBuffer[2][APP_IMG_HEIGHT][APP_IMG_WIDTH];




/* elcdif ��ʾ�ӿ��ⲿ���ų�ʼ��
*
*/
void lcdif_pin_config(void)
{
    IOMUXC_SetPinMux(IOMUXC_LCD_CLK_LCDIF_CLK, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_CLK_LCDIF_CLK, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA00_LCDIF_DATA00, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA00_LCDIF_DATA00, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA01_LCDIF_DATA01, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA01_LCDIF_DATA01, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA02_LCDIF_DATA02, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA02_LCDIF_DATA02, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA03_LCDIF_DATA03, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA03_LCDIF_DATA03, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA04_LCDIF_DATA04, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA04_LCDIF_DATA04, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA05_LCDIF_DATA05, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA05_LCDIF_DATA05, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA06_LCDIF_DATA06, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA06_LCDIF_DATA06, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA07_LCDIF_DATA07, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA07_LCDIF_DATA07, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA08_LCDIF_DATA08, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA08_LCDIF_DATA08, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA09_LCDIF_DATA09, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA09_LCDIF_DATA09, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA10_LCDIF_DATA10, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA10_LCDIF_DATA10, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA11_LCDIF_DATA11, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA11_LCDIF_DATA11, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA12_LCDIF_DATA12, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA12_LCDIF_DATA12, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA13_LCDIF_DATA13, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA13_LCDIF_DATA13, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA14_LCDIF_DATA14, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA14_LCDIF_DATA14, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA15_LCDIF_DATA15, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA15_LCDIF_DATA15, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA16_LCDIF_DATA16, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA16_LCDIF_DATA16, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA17_LCDIF_DATA17, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA17_LCDIF_DATA17, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA18_LCDIF_DATA18, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA18_LCDIF_DATA18, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA19_LCDIF_DATA19, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA19_LCDIF_DATA19, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA20_LCDIF_DATA20, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA20_LCDIF_DATA20, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA21_LCDIF_DATA21, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA21_LCDIF_DATA21, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA22_LCDIF_DATA22, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA22_LCDIF_DATA22, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_DATA23_LCDIF_DATA23, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_DATA23_LCDIF_DATA23, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_ENABLE_LCDIF_ENABLE, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_ENABLE_LCDIF_ENABLE, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_HSYNC_LCDIF_HSYNC, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_HSYNC_LCDIF_HSYNC, LCD_PAD_CONFIG_DATA);

    IOMUXC_SetPinMux(IOMUXC_LCD_VSYNC_LCDIF_VSYNC, 0U);
    IOMUXC_SetPinConfig(IOMUXC_LCD_VSYNC_LCDIF_VSYNC, LCD_PAD_CONFIG_DATA);
}





/*��ʼ�� elcdf ��ʱ��
*/
void lcdif_clock_init(void)
{
    /*���� PLL5  �����ʱ��*/
    CCM_ANALOG->PLL_VIDEO_NUM &= (0x3 << 30);   //����PLL ������Ƶ�ķ��ӼĴ���
    CCM_ANALOG->PLL_VIDEO_DENOM &= (0x3 << 30); //����PLL ������Ƶ�ķ�ĸ�Ĵ���

    /*
     * ����ʱ�ӷ�Ƶ
     *
     * ------------------------------------------------------------------------
     * |        ��Ƶ��       | PLL_VIDEO[POST_DIV_SELECT]  | MISC2[VIDEO_DIV] |
     * ------------------------------------------------------------------------
     * |         1           |            2                |        0         |
     * ------------------------------------------------------------------------
     * |         2           |            1                |        0         |
     * ------------------------------------------------------------------------
     * |         4           |            2                |        3         |
     * ------------------------------------------------------------------------
     * |         8           |            1                |        3         |
     * ------------------------------------------------------------------------
     * |         16          |            0                |        3         |
     * ------------------------------------------------------------------------
     */
    CCM_ANALOG->PLL_VIDEO = 0;
    CCM_ANALOG->PLL_VIDEO &= ~(0x3 << 19); // ����PLL_VIDEO[POST_DIV_SELECT]
    CCM_ANALOG->PLL_VIDEO |= (0x01 << 19); //���÷�Ƶϵ��Ϊ2

    CCM_ANALOG->MISC2 &= ~(0xC0000000); //����VIDEO_DIVλ
    CCM_ANALOG->MISC2 |= (0x3 << 30);// ���CCM_ANALOG->PLL_VIDEO�Ĵ�������ʱ�ӷ�Ƶ


    CCM_ANALOG->PLL_VIDEO &= ~(0x7F); // ����ʱ�ӷ�Ƶ
    CCM_ANALOG->PLL_VIDEO |= (0x1F);  //����ʱ�ӷ�ƵΪ 31(ʮ����)

    CCM_ANALOG->PLL_VIDEO |= 1 << 13; //ʹ��PLL5ʱ�����

    /*�ȴ�������Ч*/
    while ((CCM_ANALOG->PLL_VIDEO & CCM_ANALOG_PLL_VIDEO_LOCK_MASK) == 0)
    {
    }

    /*���ô�PLL5  �� elcdf ��ʱ����������ʱ��ѡ���ʱ�ӷ�Ƶ�Ĵ���*/
    CCM->CSCDR2 &= ~(0x07 << 15); //����
    CCM->CSCDR2 |= (0x02 << 15);  //����CSCDR2[LCDIF1_PRE_CLK_SEL] ѡ�� PLL5 ���ʱ��

    CCM->CSCDR2 &= ~(0x07 << 12); //����
    CCM->CSCDR2 |= (0x01 << 12);  //���� CSCDR2[LCDIF1_PRED]ʱ�ӷ�Ƶֵ

    CCM->CBCMR &= ~(0x07 << 23); //����CBCMR[LCDIF1_PODF] ʱ�ӷ�Ƶֵ
    CCM->CBCMR |= (0x01 << 23);

    CCM->CSCDR2 &= ~(0x07 << 9); //����
    CCM->CSCDR2 |= (0x00 << 9);  //ѡ�� CSCDR2[LCDIF1_CLK_SEL] ѡ�� PLL5 ���ʱ��
}





/* ��ʼ�� LCD_DISP,���� ��ʾ�� */
void BOARD_InitLcd(void)
{
    volatile uint32_t i = 0x100U; //�����趨elcdf��λ�źŵĳ���ʱ��

    GPIO5->GDIR |= (1 << 9); //����GPIO5_09Ϊ���ģʽ
    GPIO5->DR &= ~(1 << 9);  //����GPIO5_09�����ƽΪ�͵�ƽ

    /*�ȴ�һ��ʱ�䣬elcdf��λ�źű���һ��ʱ��*/
    while (i--)
    {
    }
    GPIO5->DR |= (1 << 9); //����GPIO5_09�����ƽΪ�ߵ�ƽ�� ���elcdf��λ

    /* ���� LCD D�ı����������Ϊ�ߵ�ƽ */
    CCM_CCGR1_CG13(0x3);     //����GPIO1��ʱ��
    GPIO1->GDIR |= (1 << 8); //����GPIO1_08Ϊ���ģʽ
    GPIO1->DR |= (1 << 8);   //����GPIO1_08�����ƽΪ�ߵ�ƽ
}




/*��λ elcdf*/
void ELCDIF_Reset(void)
{
    volatile uint32_t i = 0x100;

    /* Disable the clock gate. */
    LCDIF->CTRL_CLR = LCDIF_CTRL_CLKGATE_MASK;
    /* Confirm the clock gate is disabled. */
    while (LCDIF->CTRL & LCDIF_CTRL_CLKGATE_MASK)
    {
    }

    /* Reset the block. */
    LCDIF->CTRL_SET = LCDIF_CTRL_SFTRST_MASK;
    /* Confirm the reset bit is set. */
    while (!(LCDIF->CTRL & LCDIF_CTRL_SFTRST_MASK))
    {
    }

    /* Delay for the reset. */
    while (i--)
    {
    }

    /* Bring the module out of reset. */
    LCDIF->CTRL_CLR = LCDIF_CTRL_SFTRST_MASK;
    /* Disable the clock gate. */
    LCDIF->CTRL_CLR = LCDIF_CTRL_CLKGATE_MASK;
}



/*�� elcdf ��ʼ��Ϊ rgb 888 ģʽ
*/
void ELCDIF_RgbModeInit(void)
{

    CCM_CCGR3_CG5(0x3); //����GPIO5��ʱ��
    /* Reset. */
    ELCDIF_Reset();


    LCDIF->CTRL &= ~(0x300); //������ɫ��ʽ���� CTRL �Ĵ��� ��ɫ����ΪRGB888
    LCDIF->CTRL |= (0x3 << 8);

    LCDIF->CTRL &= ~(0xC00); //�������ݿ��Ϊ24λ��
    LCDIF->CTRL |= (0x3 << 10);

    LCDIF->CTRL |= (0x20000); // ѡ�� RGB ģʽ
    LCDIF->CTRL |= (0x80000); // ѡ�� RGB ģʽ ������ʾ
    LCDIF->CTRL |= (0x20);    //����elcdf�ӿ�Ϊ��ģʽ



    LCDIF->CTRL1 &= ~(0xF0000);   //����32λ������Чλ
    LCDIF->CTRL1 |= (0x07 << 16); // ����32λ��Чλ�ĵ�24λ��Ч��


    // LCDIF->TRANSFER_COUNT = 0;//����ֱ������üĴ���
    LCDIF->TRANSFER_COUNT |= APP_IMG_HEIGHT << 16; //����һ�� ������  480
    LCDIF->TRANSFER_COUNT |= APP_IMG_WIDTH << 0;   //����һ�� ������  800



    LCDIF->VDCTRL0 |= LCDIF_VDCTRL0_ENABLE_PRESENT_MASK;         //����ʹ���ź�
    LCDIF->VDCTRL0 |= LCDIF_VDCTRL0_VSYNC_PERIOD_UNIT_MASK;      //����VSYNC���� �ĵ�λΪ��ʾʱ�ӵ�ʱ������
    LCDIF->VDCTRL0 |= LCDIF_VDCTRL0_VSYNC_PULSE_WIDTH_UNIT_MASK; //����VSYNC �����ȵĵ�λΪ��ʾʱ�ӵ�ʱ������


    LCDIF->VDCTRL0 |= (1 << 24);    //���� ����ʹ���źŵ���Ч��ƽΪ�ߵ�ƽ
    LCDIF->VDCTRL0 &= ~(0x8000000); //���� VSYNC ��Ч��ƽΪ�͵�ƽ
    LCDIF->VDCTRL0 &= ~(0x4000000); //����HSYNC��Ч��ƽΪ�͵�ƽ
    LCDIF->VDCTRL0 |= (0x2000000);  // ������ʱ�ӵ��½���������ݣ���ʱ�ӵ������ز������ݡ�

    LCDIF->VDCTRL0 |= APP_VSW;


    //     ����ʾʱ��Ϊ��λ�����ڡ�

    LCDIF->VDCTRL1 = APP_VSW + APP_IMG_HEIGHT + APP_VFP + APP_VBP; //����VSYNC �ź�����

    LCDIF->VDCTRL2 |= (APP_HSW << 18);                               //HSYNC �ź���Ч��ƽ����
    LCDIF->VDCTRL2 |= (APP_HFP + APP_HBP + APP_IMG_WIDTH + APP_HSW); //HSYNC �ź�����

    LCDIF->VDCTRL3 |= (APP_HBP + APP_HSW) << 16;
    LCDIF->VDCTRL3 |= (APP_VBP + APP_VSW);

    LCDIF->VDCTRL4 |= (0x40000);
    LCDIF->VDCTRL4 |= (APP_IMG_WIDTH << 0);

    LCDIF->CUR_BUF = (uint32_t)s_frameBuffer[0];
    LCDIF->NEXT_BUF = (uint32_t)s_frameBuffer[0];
}

// void APP_ELCDIF_Init(void)
// {
//     lcdif_pin_config();
//     ELCDIF_RgbModeInit(APP_ELCDIF);
// }




void APP_FillFrameBuffer(uint32_t frameBuffer[APP_IMG_HEIGHT][APP_IMG_WIDTH])
{
    /* Background color. */
    static const uint32_t bgColor = 0U;
    /* Foreground color. */
    static uint8_t fgColorIndex = 0U;
    static const uint32_t fgColorTable[] = {0x000000FFU, 0x0000FF00U, 0x0000FFFFU, 0x00FF0000U,
                                            0x00FF00FFU, 0x00FFFF00U, 0x00FFFFFFU};
    uint32_t fgColor = fgColorTable[fgColorIndex];

    /* Position of the foreground rectangle. */
    static uint16_t upperLeftX = 0U;
    static uint16_t upperLeftY = 0U;
    static uint16_t lowerRightX = (APP_IMG_WIDTH - 1U) / 2U;
    static uint16_t lowerRightY = (APP_IMG_HEIGHT - 1U) / 2U;

    static int8_t incX = 1;
    static int8_t incY = 1;

    /* Change color in next forame or not. */
    static unsigned char changeColor = false;

    uint32_t i, j;

    /* Background color. */
    for (i = 0; i < APP_IMG_HEIGHT; i++)
    {
        for (j = 0; j < APP_IMG_WIDTH; j++)
        {
            frameBuffer[i][j] = bgColor;
        }
    }

    /* Foreground color. */
    for (i = upperLeftY; i < lowerRightY; i++)
    {
        for (j = upperLeftX; j < lowerRightX; j++)
        {
            frameBuffer[i][j] = fgColor;
        }
    }

    /* Update the format: color and rectangle position. */
    upperLeftX += incX;
    upperLeftY += incY;
    lowerRightX += incX;
    lowerRightY += incY;

    changeColor = false;

    if (0U == upperLeftX)
    {
        incX = 1;
        changeColor = true;
    }
    else if (APP_IMG_WIDTH - 1 == lowerRightX)
    {
        incX = -1;
        changeColor = true;
    }

    if (0U == upperLeftY)
    {
        incY = 1;
        changeColor = true;
    }
    else if (APP_IMG_HEIGHT - 1 == lowerRightY)
    {
        incY = -1;
        changeColor = true;
    }

    if (changeColor)
    {
        fgColorIndex++;

        if (ARRAY_SIZE(fgColorTable) == fgColorIndex)
        {
            fgColorIndex = 0U;
        }
    }
}

