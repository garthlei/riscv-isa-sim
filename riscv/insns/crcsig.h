if (CRC_VALID && REG_CRC != CRC)
  throw trap_control_flow_fault(insn.bits());
