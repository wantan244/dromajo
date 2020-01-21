#ifndef BP_CONFIG_H
#define BP_CONFIG_H

  // TODO: This is out of date.  The actual map shouldn't matter much, but we should decide...
  // The overall memory map of the config link is:
  //   16'h0000 - 16'h001f: chip level config
  //   16'h0020 - 16'h003f: fe config
  //   16'h0040 - 16'h005f: be config
  //   16'h0060 - 16'h007f: me config
  //   16'h0080 - 16'h00ff: reserved
  //   16'h8000 - 16'h8fff: cce ucode
  // Specific cfg registers
  //   16'h0000      = clk_osc
  //   16'h0001      = reset
  //   16'h0002      = freeze
  //   16'h0040      = npc low  32 bits
  //   16'h0041      = npc high 32 bits
  //   16'h0060      = cce_mode
  //   16'h8000-8fff = cce ucode

  #include "encoding.h"

  #define bp_cfg_base_addr_gp           0x00200000
  #define bp_cfg_reg_reset_gp           0x0001
  #define bp_cfg_reg_freeze_gp          0x0002
  #define bp_cfg_reg_enter_debug_gp     0x0003
  #define bp_cfg_reg_exit_debug_gp      0x0004
  #define bp_cfg_reg_core_id_gp         0x0005
  #define bp_cfg_reg_did_gp             0x0006
  #define bp_cfg_reg_cord_gp            0x0007
  #define bp_cfg_reg_icache_id_gp       0x0021
  #define bp_cfg_reg_icache_mode_gp     0x0022
  #define bp_cfg_reg_npc_gp             0x0040
  #define bp_cfg_reg_ninstr_gp          0x0041
  #define bp_cfg_reg_dcache_id_gp       0x0042
  #define bp_cfg_reg_dcache_mode_gp     0x0043
  #define bp_cfg_reg_priv_gp            0x0044
  #define bp_cfg_reg_irf_x0_gp          0x0050
  /* ... */                             
  #define bp_cfg_reg_irf_x31_gp         0x006f
  #define bp_cfg_reg_cce_id_gp          0x0080
  #define bp_cfg_reg_cce_mode_gp        0x0081
  #define bp_cfg_reg_num_lce_gp         0x0082
  #define bp_cfg_reg_csr_begin_gp       0x6000
  #define bp_cfg_reg_csr_end_gp         0x6fff
  #define bp_cfg_mem_base_cce_ucode_gp  0x8000

#endif
