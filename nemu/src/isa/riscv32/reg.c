/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {

/*

  union isa_gdb_regs copyofregs;
  // union isa_gdb_regs *mycopyofregs = (union isa_gdb_regs*)malloc(sizeof(union isa_gdb_regs));
  gdb_getregs(&copyofregs);

  for (size_t i = 0; i < 32; i++)
  {   
    if (!(i % 8))
    {
      printf("\n");
    }
    printf("%s:%x\t",regs[i],copyofregs.array[i]);

  }
*/


  // bool temp ;// printf("%s:%x\t",regs[i],isa_reg_str2val(regs[i], &temp));

  for (size_t i = 0; i < 32; i++)
  {   
    if (!(i % 8))
    {
      printf("\n");
    }
    
    printf("%s:%x\t",regs[i],gpr(i*8));

  }
  printf("\n");

}

word_t isa_reg_str2val(const char *s, bool *success) {
  return 0;
}
