ENTRY(Reset_Handler)

MEMORY
{
  FLASH(rw)     : ORIGIN = 0x08000000,   LENGTH = 1024K
  SRAM(rwx)     : ORIGIN = 0x20000000,   LENGTH = 128K
}

SECTIONS
{
  /* The startup code into "FLASH" FLASH type memory */
  .text :
  {    
  *(.isr_vector)   
	*(.text)
  *(.text.*)
  *(.init)
  *(.fini) 
	*(.rodata)
  *(.rodata.*)
  . = ALIGN(4);
	_etext = .;
  } >FLASH

 _la_data =LOADADDR(.data);

  /* Initialized data sections into "RAM" Ram type memory */
  .data : 
  {    
    _sdata = .;        /* create a global symbol at data start , Here since virtual address mentioned as SRAM so, _sdata and _edata belongs to SRAM addresses and not the FLASH addresses */
    *(.data)           /* .data sections */
    *(.data.*)
    . = ALIGN(4);
    _edata = .;        /* define a global symbol at data end */    
  } >SRAM AT> FLASH

  .bss :
  {
    /* This is used by the startup in order to initialize the .bss section */
    _sbss = .;         /* define a global symbol at bss start */
    __bss_start__ = _sbss;
    *(.bss)
    *(.bss.*)
    *(COMMON)
    . = ALIGN(4);
    _ebss = .;         /* define a global symbol at bss end */
    __bss_end__ = _ebss;
    . = ALIGN(4);
    end = .;
    __end__ = end;
  } >SRAM
  
}
