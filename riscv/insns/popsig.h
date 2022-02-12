if (!STACK_CFC.empty()) {
  auto pair = STACK_CFC.top();
  STACK_CFC.pop();
  REG_G = pair.first;
  REG_D = pair.second;
} else {
  throw trap_control_flow_fault(insn.bits());
}