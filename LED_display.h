#define AM33XX_CONTROL_PADCONF_MUX_PBASE	0x44e10000
#define AM33XX_CONTROL_PADCONF_MUX_SIZE  0x44e11FFF-0x44E10000

#define GPMC_AD2 0x0808 
#define GPMC_AD3 0x080C 
#define GPMC_AD6 0x0818 
#define GPMC_AD7 0x081C 
#define GPMC_AD8 0x0820 
#define GPMC_AD9 0x0824 
#define GPMC_AD10 0x0828 
#define GPMC_AD11 0x082C
#define GPMC_AD12 0x0830 
#define GPMC_AD13 0x0834 
#define GPMC_AD14 0x0838 
#define GPMC_AD15 0x083C 
#define GPMC_CSN2 0x0884 
#define GPMC_CLK 0x088C 
#define GPMC_ADVN_ALE 0x0890 
#define GPMC_OEN_REN 0x0894 
#define GPMC_WEN 0x0898 
#define GPMC_BEN0_CLE 0x089C 


#define MUX_MODE_7_GPIO_OUTPUT 7
#define OMAP_MUX_TERMINATOR 0xFF

#define GPIO_IOC_MAGIC  'k'
#define DISPLAY_SET _IOW(GPIO_IOC_MAGIC,1,int)
#define GPIO_IOC_MAXNR 3

struct omap_mux
{
	u16	reg_offset;
	u16	value;
};