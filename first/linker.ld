ENTRY(Reset_Handler)

MEMORY
{
  FLASH (rx) : ORIGIN = 0x8000000, LENGTH = 64K
  RAM (xrw)  : ORIGIN = 0x20000000, LENGTH = 20K
}

SECTIONS
{
  .text :
  {
    *(.isr_vector)
    *(.text)
    *(.rodata)
    . = ALIGN(4);
    _etext = .;
  } > FLASH

  .data :
  {
    _sdata = .;
    *(.data)
    . = ALIGN(4);
    _edata = .;
  } > RAM AT> FLASH

  .bss :
  {
    _sbss = .;
    *(.bss)
    . = ALIGN(4);
    _ebss = .;
  } > RAM
}
