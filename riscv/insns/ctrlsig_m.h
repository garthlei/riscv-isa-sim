if ((REG_G ^ DIFF ^ REG_D) == SIG) {
  REG_G = SIG;
  REG_D = ADJ;
} else {
  throw trap_control_flow_fault(insn.bits());
}
ENABLE_CRC;
