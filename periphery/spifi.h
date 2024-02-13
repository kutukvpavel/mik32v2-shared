#ifndef SPIFI_H_INCLUDED
#define SPIFI_H_INCLUDED

//CTRL
#define SPIFI_CONFIG_CTRL_TIMEOUT_S				  0
#define SPIFI_CONFIG_CTRL_TIMEOUT_M         (0xFFFF << SPIFI_CONFIG_CTRL_TIMEOUT_S)
#define SPIFI_CONFIG_CTRL_TIMEOUT(v)			  (((v) << SPIFI_CONFIG_CTRL_TIMEOUT_S) & SPIFI_CONFIG_CTRL_TIMEOUT_M)
#define SPIFI_CONFIG_CTRL_CSHIGH_S				  16
#define SPIFI_CONFIG_CTRL_CSHIGH_M          (0xF << SPIFI_CONFIG_CTRL_CSHIGH_S)
#define SPIFI_CONFIG_CTRL_CSHIGH(v)				  (((v) << SPIFI_CONFIG_CTRL_CSHIGH_S) & SPIFI_CONFIG_CTRL_CSHIGH_M)
#define SPIFI_CONFIG_CTRL_CACHE_EN_S        20
#define SPIFI_CONFIG_CTRL_CACHE_EN_M        (0x1 << SPIFI_CONFIG_CTRL_CACHE_EN_S)
#define SPIFI_CONFIG_CTRL_D_CACHE_DIS_S		  21
#define SPIFI_CONFIG_CTRL_D_CACHE_DIS_M		  (0x1 << SPIFI_CONFIG_CTRL_D_CACHE_DIS_S)
#define SPIFI_CONFIG_CTRL_INTEN_S				    22
#define SPIFI_CONFIG_CTRL_INTEN_M				    (0x1 << SPIFI_CONFIG_CTRL_INTEN_S)
#define SPIFI_CONFIG_CTRL_MODE3_S				    23
#define SPIFI_CONFIG_CTRL_MODE3_M				    (0x1 << SPIFI_CONFIG_CTRL_MODE3_S)
#define SPIFI_CONFIG_CTRL_SCK_DIV_S				  24
#define SPIFI_CONFIG_CTRL_SCK_DIV_M         (0x7 << SPIFI_CONFIG_CTRL_SCK_DIV_S)
#define SPIFI_CONFIG_CTRL_SCK_DIV(v)			  (((v) << SPIFI_CONFIG_CTRL_SCK_DIV_S) & SPIFI_CONFIG_CTRL_SCK_DIV_M)
#define SPIFI_CONFIG_CTRL_PREFETCH_DIS_S		27
#define SPIFI_CONFIG_CTRL_PREFETCH_DIS_M		(0x1 << SPIFI_CONFIG_CTRL_PREFETCH_DIS_S)
#define SPIFI_CONFIG_CTRL_DUAL_S				    28
#define SPIFI_CONFIG_CTRL_DUAL_M				    (0x1 << SPIFI_CONFIG_CTRL_DUAL_S)
#define SPIFI_CONFIG_CTRL_RFCLK_S				    29
#define SPIFI_CONFIG_CTRL_RFCLK_M				    (0x1 << SPIFI_CONFIG_CTRL_RFCLK_S)
#define SPIFI_CONFIG_CTRL_FBCLK_S				    30
#define SPIFI_CONFIG_CTRL_FBCLK_M				    (0x1 << SPIFI_CONFIG_CTRL_FBCLK_S)
#define SPIFI_CONFIG_CTRL_DMAEN_S				    31
#define SPIFI_CONFIG_CTRL_DMAEN_M				    (0x1 << SPIFI_CONFIG_CTRL_DMAEN_S)

//CMD
#define SPIFI_CONFIG_CMD_DATALEN_S			        0
#define SPIFI_CONFIG_CMD_DATALEN_M              (0x3FFF << SPIFI_CONFIG_CMD_DATALEN_S)
#define SPIFI_CONFIG_CMD_DATALEN(v)			        (((v) << SPIFI_CONFIG_CMD_DATALEN_S) & SPIFI_CONFIG_CMD_DATALEN_M)
#define SPIFI_CONFIG_CMD_POLL_INDEX_S		        0 
#define SPIFI_CONFIG_CMD_POLL_INDEX_M		        (0b111 << SPIFI_CONFIG_CMD_POLL_INDEX_S) 
#define SPIFI_CONFIG_CMD_POLL_INDEX(v)          (((v) << SPIFI_CONFIG_CMD_POLL_INDEX_S) & SPIFI_CONFIG_CMD_POLL_INDEX_M)
#define SPIFI_CONFIG_CMD_POLL_REQUIRED_VALUE_S  3 
#define SPIFI_CONFIG_CMD_POLL_REQUIRED_VALUE_M	(1 << SPIFI_CONFIG_CMD_POLL_REQUIRED_VALUE_S) 
#define SPIFI_CONFIG_CMD_POLL_REQUIRED_VALUE(v)	(((v) << SPIFI_CONFIG_CMD_POLL_REQUIRED_VALUE_S) & SPIFI_CONFIG_CMD_POLL_REQUIRED_VALUE_M)
#define SPIFI_CONFIG_CMD_POLL_S				          14
#define SPIFI_CONFIG_CMD_POLL_M				          (0x1 << SPIFI_CONFIG_CMD_POLL_S)
#define SPIFI_CONFIG_CMD_DOUT_S				          15
#define SPIFI_CONFIG_CMD_DOUT_M				          (0x1 << SPIFI_CONFIG_CMD_DOUT_S)
#define SPIFI_CONFIG_CMD_INTLEN_S			          16
#define SPIFI_CONFIG_CMD_INTLEN_M			          (0x7 << SPIFI_CONFIG_CMD_INTLEN_S)
#define SPIFI_CONFIG_CMD_INTLEN(v)			        (((v) << SPIFI_CONFIG_CMD_INTLEN_S) & SPIFI_CONFIG_CMD_INTLEN_M)
#define SPIFI_CONFIG_CMD_FIELDFORM_S		        19
#define SPIFI_CONFIG_CMD_FIELDFORM_M		        (0x3 << SPIFI_CONFIG_CMD_FIELDFORM_S)
#define SPIFI_CONFIG_CMD_FIELDFORM(v)			      (((v) << SPIFI_CONFIG_CMD_FIELDFORM_S) & SPIFI_CONFIG_CMD_FIELDFORM_M)
#define SPIFI_CONFIG_CMD_FRAMEFORM_S		        21
#define SPIFI_CONFIG_CMD_FRAMEFORM_M		        (0x7 << SPIFI_CONFIG_CMD_FRAMEFORM_S)
#define SPIFI_CONFIG_CMD_FRAMEFORM(v)			      (((v) << SPIFI_CONFIG_CMD_FRAMEFORM_S) & SPIFI_CONFIG_CMD_FRAMEFORM_M)
#define SPIFI_CONFIG_CMD_OPCODE_S			          24
#define SPIFI_CONFIG_CMD_OPCODE_M			          (0xFF << SPIFI_CONFIG_CMD_OPCODE_S)
#define SPIFI_CONFIG_CMD_OPCODE(v)              (((v) << SPIFI_CONFIG_CMD_OPCODE_S) & SPIFI_CONFIG_CMD_OPCODE_M)

#define SPIFI_CONFIG_CMD_FRAMEFORM_RESERVED			      0
#define SPIFI_CONFIG_CMD_FRAMEFORM_OPCODE_NOADDR	    1
#define SPIFI_CONFIG_CMD_FRAMEFORM_OPCODE_1ADDR		    2
#define SPIFI_CONFIG_CMD_FRAMEFORM_OPCODE_2ADDR		    3
#define SPIFI_CONFIG_CMD_FRAMEFORM_OPCODE_3ADDR		    4	
#define SPIFI_CONFIG_CMD_FRAMEFORM_OPCODE_4ADDR		    5
#define SPIFI_CONFIG_CMD_FRAMEFORM_NOOPCODE_3ADDR	    6
#define SPIFI_CONFIG_CMD_FRAMEFORM_NOOPCODE_4ADDR	    7

#define SPIFI_CONFIG_CMD_FIELDFORM_ALL_SERIAL		      0
#define SPIFI_CONFIG_CMD_FIELDFORM_DATA_PARALLEL	    1
#define SPIFI_CONFIG_CMD_FIELDFORM_OPCODE_SERIAL	    2
#define SPIFI_CONFIG_CMD_FIELDFORM_ALL_PARALLEL		    3

//ADDR
//IDATA
//CLIMIT
//DATA

//MCMD
#define SPIFI_CONFIG_MCMD_POLL_S			    14
#define SPIFI_CONFIG_MCMD_POLL_M			    (0x1 << SPIFI_CONFIG_MCMD_POLL_S)
#define SPIFI_CONFIG_MCMD_DOUT_S			    15
#define SPIFI_CONFIG_MCMD_DOUT_M			    (0x1 << SPIFI_CONFIG_MCMD_DOUT_S)
#define SPIFI_CONFIG_MCMD_INTLEN_S			  16
#define SPIFI_CONFIG_MCMD_INTLEN_M			  (0x7 << SPIFI_CONFIG_MCMD_INTLEN_S)
#define SPIFI_CONFIG_MCMD_FIELDFORM_S		  19
#define SPIFI_CONFIG_MCMD_FIELDFORM_M		  (0x3 << SPIFI_CONFIG_MCMD_FIELDFORM_S)
#define SPIFI_CONFIG_MCMD_FRAMEFORM_S		  21
#define SPIFI_CONFIG_MCMD_FRAMEFORM_M		  (0x7 << SPIFI_CONFIG_MCMD_FRAMEFORM_S)
#define SPIFI_CONFIG_MCMD_OPCODE_S			  24
#define SPIFI_CONFIG_MCMD_OPCODE_M			  (0xFF << SPIFI_CONFIG_MCMD_OPCODE_S)

//STATUS
#define SPIFI_CONFIG_STAT_MCINIT_S		    0
#define SPIFI_CONFIG_STAT_MCINIT_M		    (0x1 << SPIFI_CONFIG_STAT_MCINIT_S)
#define SPIFI_CONFIG_STAT_CMD_S			      1 
#define SPIFI_CONFIG_STAT_CMD_M			      (0x1 << SPIFI_CONFIG_STAT_CMD_S)
#define SPIFI_CONFIG_STAT_RESET_S		      4
#define SPIFI_CONFIG_STAT_RESET_M		      (0x1 << SPIFI_CONFIG_STAT_RESET_S)
#define SPIFI_CONFIG_STAT_INTRQ_S		      5
#define SPIFI_CONFIG_STAT_INTRQ_M		      (0x1 << SPIFI_CONFIG_STAT_INTRQ_S)
#define SPIFI_CONFIG_STAT_VERSION_S		    24
#define SPIFI_CONFIG_STAT_VERSION_M		    (0xFF << SPIFI_CONFIG_STAT_VERSION_S)


#ifndef _ASSEMBLER_
    #include <inttypes.h> 
    typedef struct
    {
      volatile uint32_t CTRL;           //Offset: 0x000
      volatile uint32_t CMD;         	  //Offset: 0x004
      volatile uint32_t ADDR;         	//Offset: 0x008
      volatile uint32_t IDATA;        	//Offset: 0x00C   
      volatile uint32_t CLIMIT;         //Offset: 0x010 
      union
      {
            volatile uint32_t DATA;			//Offset: 0x014  
            volatile uint8_t  DATA8;		
            volatile uint16_t DATA16;		
            volatile uint32_t DATA32;		
      };  
	  
      volatile uint32_t MCMD;           //Offset: 0x018
      volatile uint32_t STAT;           //Offset: 0x01C
    }SPIFI_CONFIG_TypeDef;
#endif


#endif // SPIFI_H_INCLUDED
