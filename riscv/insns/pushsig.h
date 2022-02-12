#define CFC_STACKSIZE 8

if (STACK_CFC.size() < CFC_STACKSIZE) {
  STACK_CFC.push(std::make_pair(REG_G, REG_D));
  REG_G = 0;
  REG_D = 0;
} else {
  throw trap_control_flow_fault(insn.bits());
}