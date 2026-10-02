// ==== FUN_01e00174 @ 01e00174 ====

void FUN_01e00174(undefined4 param_1)

{
  BADSPACEBASE *in_sp;
  undefined1 local_18 [4];
  undefined4 uStack_14;
  undefined1 uStack_10;
  undefined4 uStack_c;
  
  local_18[0] = 4;
  uStack_14 = 0x50430000;
  uStack_10 = 0x80;
  uStack_c = param_1;
  FUN_01e36bcc(local_18);
  return;
}



// ==== FUN_01e001a0 @ 01e001a0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e001a0(uint param_1)

{
  if (_DAT_0000688c == 0x85) {
    DAT_00006a58 = 1;
    if ((&DAT_00006c06)[param_1] != '\0') {
      DAT_00004130 = (&DAT_0000797b)[param_1 * 0x20];
      func_0x021127a8(&DAT_00004160,param_1 * 0x20 + 0x797c,6);
      return;
    }
    DAT_00004130 = 5;
    if (param_1 != 0) {
      DAT_00004130 = (undefined1)param_1;
    }
    DAT_0000690c = 1;
    _DAT_0000688c = 0xc9;
  }
  else if (_DAT_0000688c == 200) {
    if (param_1 == 0) {
      param_1 = 5;
      if ((DAT_0000797b - 1 & 0xff) < 9) {
        param_1 = (uint)DAT_0000797b;
      }
    }
    DAT_00006a58 = 1;
    DAT_00004130 = (undefined1)param_1;
    DAT_0000690c = 0;
    _DAT_0000688c = 200;
  }
  else if (_DAT_0000688c < 200) {
    return;
  }
  _DAT_0000688c = _DAT_0000688c + 1;
  return;
}



// ==== FUN_01e00260 @ 01e00260 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e00260(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== thunk_FUN_01e00260 @ 01e00272 ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_01e00260(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e0036e @ 01e0036e ====

int FUN_01e0036e(int param_1,uint param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 1) = 1;
  iVar2 = *(int *)(param_1 + 4);
  *(short *)(param_1 + 2) = (short)param_2;
  *(int *)(param_1 + 8) = iVar2;
  bVar1 = param_4 < (param_2 & 0xffff);
  if (bVar1) {
    *(short *)(param_1 + 2) = (short)param_4;
    param_2 = param_4;
  }
  *(bool *)(param_1 + 0x16) = bVar1;
  if ((iVar2 != param_3) && ((param_2 & 0xffff) != 0)) {
    iVar2 = func_0x021127a8(iVar2,param_3,param_2 & 0xffff);
    return iVar2;
  }
  return iVar2;
}



// ==== FUN_01e003da @ 01e003da ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e003da(uint param_1,uint param_2)

{
  int iVar1;
  
  if ((_DAT_001e1800 & 8) == 0) {
    _DAT_001e1804 = (param_1 & 0xff) << 8 | param_2 & 0xff;
    CoreSynchronize();
    iVar1 = 0xb1df;
    do {
      if ((short)_DAT_001e1804 < 0) {
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0);
  }
  return;
}



// ==== FUN_01e00404 @ 01e00404 ====

void FUN_01e00404(undefined4 param_1)

{
  FUN_01e003da(0xe,param_1);
  return;
}



// ==== FUN_01e0040a @ 01e0040a ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e0040a(undefined4 param_1,uint param_2)

{
  func_0x0200206c(param_1);
  CoreSynchronize();
  FUN_01e00404(param_1);
  FUN_01e003da(0x11,param_2 & 0xff);
  FUN_01e003da(0x12,param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e0042c @ 01e0042c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e0042c(uint param_1)

{
  int iVar1;
  
  if ((_DAT_001e1800 & 8) == 0) {
    _DAT_001e1804 = (param_1 & 0xbf) << 8 | 0x4000;
    CoreSynchronize();
    iVar1 = 0xb1df;
    while (-1 < (short)_DAT_001e1804) {
      iVar1 = iVar1 + 1;
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 0;
}



// ==== FUN_01e004c8 @ 01e004c8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e004c8(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)(&DAT_00006ae0 + param_1) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (param_2 == 0) {
      _DAT_001e181c = param_3;
      *puVar1 = param_3;
      return;
    }
    *(undefined4 *)(((param_2 + -1) * 8 + 0x78609) * 4) = param_3;
    *(undefined4 *)(((int)puVar1 + param_2 + 0x27) * 4) = param_3;
  }
  return;
}



// ==== FUN_01e004fa @ 01e004fa ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e004fa(undefined4 param_1,uint param_2)

{
  func_0x0200206c(param_1);
  CoreSynchronize();
  FUN_01e00404(param_1);
  FUN_01e003da(0x14,param_2 & 0xff);
  FUN_01e003da(0x15,param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e00538 @ 01e00538 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e00538(int param_1)

{
  uint uVar1;
  int iVar2;
  
  func_0x0200206c();
  CoreSynchronize();
  uVar1 = FUN_01e0042c(9);
  uVar1 = uVar1 | 1 << param_1;
  iVar2 = FUN_01e0042c(10);
  FUN_01e003da(9,uVar1 & 0xff);
  FUN_01e003da(10,((iVar2 << 8 | uVar1) & 0xff00) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e006e4 @ 01e006e4 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e006e4(void)

{
  _DAT_00006892 = (ushort)DAT_00006e86;
  _DAT_00006894 = (ushort)DAT_00006e84;
  DAT_000067f0 = DAT_00006e87;
  DAT_000067f1 = DAT_00006e85;
  return;
}



// ==== FUN_01e00994 @ 01e00994 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e00994(void)

{
  if (_DAT_000068d6 != 0) {
    FUN_01e370ce();
    _DAT_000068d6 = 0;
  }
  DAT_0000682e = 0;
  DAT_00006ab4 = 0;
  DAT_00006ab8 = 0;
  _DAT_000068d4 = 0;
  return;
}



// ==== FUN_01e009c6 @ 01e009c6 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e009c6(void)

{
  if (_DAT_000068da != 0) {
    FUN_01e370ce();
    _DAT_000068da = 0;
  }
  return;
}



// ==== FUN_01e009e0 @ 01e009e0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e009e0(void)

{
  _DAT_001e1800 = 0;
  _DAT_001e1804 = 0;
  _DAT_001e5100 = 0;
  _DAT_001e5104 = 0;
  return;
}



// ==== FUN_01e009f6 @ 01e009f6 ====

void FUN_01e009f6(void)

{
  FUN_01e00174(0x40000c);
  return;
}



// ==== FUN_01e016e0 @ 01e016e0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e016e0(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 1 << param_1 + -3;
  if (param_2 == 0) {
    _DAT_001e5100 = _DAT_001e5100 & ~uVar1;
  }
  else {
    _DAT_001e5100 = _DAT_001e5100 | uVar1;
  }
  return;
}



// ==== FUN_01e016fe @ 01e016fe ====

undefined4 FUN_01e016fe(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x39) {
    uVar1 = (&DAT_01e21c90)[param_1 >> 4];
  }
  return uVar1;
}



// ==== FUN_01e01810 @ 01e01810 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e01810(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 < 0x38) {
    iVar1 = FUN_01e016fe();
    if (iVar1 != 0) {
      uVar2 = 1 << (param_1 & 0xf);
      if (param_2 != 0) {
        *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | uVar2;
        return;
      }
      *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & ~uVar2;
    }
    return;
  }
  if (param_1 < 0x3d) {
    return;
  }
  uVar2 = 1 << param_1 - 0x34;
  if (param_2 == 0) {
    _DAT_001e5100 = _DAT_001e5100 & ~uVar2;
  }
  else {
    _DAT_001e5100 = _DAT_001e5100 | uVar2;
  }
  return;
}



// ==== FUN_01e01c60 @ 01e01c60 ====

uint FUN_01e01c60(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  func_0x0200206c(param_1);
  CoreSynchronize();
  FUN_01e00404(param_1);
  uVar1 = FUN_01e0042c(0x14);
  iVar2 = FUN_01e0042c(0x15);
  uVar1 = iVar2 << 8 | uVar1;
  func_0x0200207e(uVar1);
  return uVar1;
}



// ==== FUN_01e01c8c @ 01e01c8c ====

int FUN_01e01c8c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)((int)(&DAT_00006ae0 + param_1) * 4);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (param_2 != 0) {
    iVar3 = *(int *)(((int)piVar1 + param_2 + 0x37) * 4);
    iVar2 = *(int *)(((int)piVar1 + param_2 + 0x27) * 4);
    if (iVar3 != 0) {
      if (iVar2 == iVar3) {
        FUN_01e004c8(param_1,iVar3 + 0x44);
        return *(int *)((*(int *)((int)(&DAT_00006ae0 + param_1) * 4) + 0x38 + param_2 + -1) * 4);
      }
      FUN_01e004c8(param_1);
      iVar2 = *(int *)((*(int *)((int)(&DAT_00006ae0 + param_1) * 4) + 0x38 + param_2 + -1) * 4) +
              0x44;
    }
    return iVar2;
  }
  return *piVar1;
}



// ==== FUN_01e01d94 @ 01e01d94 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e01d94(void)

{
  func_0x021127f0(2);
  func_0x02000114(0xaf,0xff);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== FUN_01e01dac @ 01e01dac ====

uint FUN_01e01dac(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  func_0x0200206c(param_1);
  CoreSynchronize();
  FUN_01e00404(param_1);
  uVar1 = FUN_01e0042c(0x11);
  iVar2 = FUN_01e0042c(0x12);
  uVar1 = iVar2 << 8 | uVar1;
  func_0x0200207e(uVar1);
  return uVar1;
}



// ==== FUN_01e01dd8 @ 01e01dd8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e01dd8(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  puVar1 = *(undefined4 **)((int)(&DAT_00006ae0 + param_1) * 4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    puVar2 = puVar1;
    if (param_2 != 0) {
      puVar2 = puVar1 + param_2 + 1;
    }
    uVar7 = *puVar2;
    uVar8 = puVar1[param_2 + 0x11];
  }
  iVar3 = _DAT_00004158 + (param_4 >> 6);
  uVar6 = param_4;
LAB_01e01e22:
  do {
    while( true ) {
      if (iVar3 + 1 < _DAT_00004158) {
        return 0;
      }
      uVar4 = FUN_01e01dac(param_2);
      if ((uVar4 & 0x39) == 0) break;
LAB_01e01e3c:
      uVar4 = uVar8;
      if (uVar6 < uVar8) {
        uVar4 = uVar6;
      }
      if (param_3 != 0) {
        uVar8 = func_0x021127a8(uVar7,param_3,uVar4);
        return uVar8;
      }
      param_3 = 0;
      *(uint *)((param_2 + 0x1e1808) * 4) = uVar4;
      uVar5 = FUN_01e01dac(param_2);
      FUN_01e0040a(param_2,uVar5 | 1);
      uVar6 = uVar6 - uVar4;
      if (uVar6 == 0) {
        return param_4;
      }
    }
    if ((uVar4 & 9) == 0) {
      if ((uVar4 & 5) == 0) {
        if ((uVar4 & 1) == 0) goto LAB_01e01e3c;
        goto LAB_01e01e22;
      }
      uVar4 = uVar4 & 0xfffffffc;
    }
    else {
      uVar4 = uVar4 & 0xfffffffa;
    }
    FUN_01e0040a(param_2,uVar4);
  } while( true );
}



// ==== FUN_01e01e86 @ 01e01e86 ====

void FUN_01e01e86(undefined4 param_1)

{
  FUN_01e01dd8(0,1,param_1);
  return;
}



// ==== FUN_01e01e8e @ 01e01e8e ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e01e8e(int param_1)

{
  undefined4 uVar1;
  BADSPACEBASE *in_sp;
  int *piVar2;
  undefined4 local_c;
  
  piVar2 = &local_c;
  uVar1 = 0;
  local_c = 0;
  if ((param_1 != 0) && (FUN_01e3776a(0x6c,&local_c), *piVar2 != 0)) {
    if (*(int *)(_DAT_000068e8 + 0x34) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 1;
      if (*(char *)(_DAT_000068e8 + 0x300) != '\0') {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



// ==== FUN_01e01ec6 @ 01e01ec6 ====

void FUN_01e01ec6(void)

{
  FUN_01e0040a(1,0x10);
  return;
}



// ==== FUN_01e01ee8 @ 01e01ee8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e01ee8(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  *(undefined1 *)(_DAT_000068e8 + 0x2b) = 1;
  if (param_1 == 0) {
    FUN_01e01ec6();
  }
  else {
    FUN_01e004fa(1,0x20);
  }
  iVar1 = _DAT_000068e8;
  puVar2 = (undefined1 *)(_DAT_000068e8 + 0x27);
  *(undefined1 *)(_DAT_000068e8 + 0x2a) = 0;
  *(undefined1 *)(iVar1 + 0x29) = 0;
  *(undefined1 *)(iVar1 + 0x28) = 0;
  *puVar2 = 0;
  *(undefined1 *)(iVar1 + 0x2b) = 1;
  *(undefined1 *)(iVar1 + 0x2c) = param_2;
  return;
}



// ==== FUN_01e01f22 @ 01e01f22 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e01f22(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e01f2a @ 01e01f2a ====

void FUN_01e01f2a(void)

{
  FUN_01e01f22(0x40);
  return;
}



// ==== FUN_01e01f2e @ 01e01f2e ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e01f2e(undefined2 param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    _DAT_00006d4a = (undefined2)param_2;
    DAT_00006d40 = DAT_00006d40 | 2;
    _DAT_00006d48 = param_1;
    _DAT_00006d4c = param_3;
  }
  return;
}



// ==== FUN_01e01f6c @ 01e01f6c ====

byte FUN_01e01f6c(int param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = DAT_00006cc5;
  if (0x21 < param_2) {
    cVar1 = DAT_00006cc5 == '\0';
    DAT_00006815 = cVar1;
  }
  bVar2 = *(byte *)(param_1 + 0x69c8) | (&DAT_000069c0)[param_1];
  if (cVar1 != '\0') {
    bVar2 = bVar2 & ~(*(byte *)(param_1 + 0x69c4) | *(byte *)(param_1 + 0x69c8));
  }
  return bVar2;
}



// ==== FUN_01e02210 @ 01e02210 ====

byte FUN_01e02210(void)

{
  return (&DAT_01e1b66d)[DAT_000069c2 & 0xffffff0f] & 0xf;
}



// ==== FUN_01e02674 @ 01e02674 ====

void FUN_01e02674(undefined1 *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    for (iVar1 = 0; iVar1 != -6; iVar1 = iVar1 + -1) {
      *param_1 = (&DAT_00006b4c)[iVar1];
      param_1 = param_1 + 1;
    }
    return;
  }
  for (iVar1 = 0; iVar1 != 6; iVar1 = iVar1 + 1) {
    param_1[iVar1] = (&DAT_00006b47)[iVar1];
  }
  return;
}



// ==== FUN_01e026b0 @ 01e026b0 ====

void FUN_01e026b0(uint param_1)

{
  for (; 0x3e < param_1; param_1 = param_1 + 1) {
    (&DAT_0000442c)[param_1] = 0;
  }
  return;
}



// ==== FUN_01e026ce @ 01e026ce ====

uint FUN_01e026ce(int param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 * 0xb6) / 0xff;
  if (DAT_00006dc8 == '\0') {
    if (DAT_00006dc1 != '\x01') {
      switch(DAT_00006dc1) {
      case '\x02':
      case '\x03':
      case '\x04':
      case '\x05':
      case '\x06':
      case '\a':
      case '\v':
      case '\x11':
      case '\x12':
        break;
      case '\b':
        goto switchD_01e026f4_caseD_8;
      case '\t':
        goto switchD_01e026f4_caseD_9;
      case '\n':
        goto switchD_01e026f4_caseD_a;
      case '\f':
        goto switchD_01e026f4_caseD_c;
      case '\r':
        goto switchD_01e026f4_caseD_d;
      case '\x0e':
      case '\x10':
        goto switchD_01e026f4_caseD_e;
      case '\x0f':
        goto switchD_01e026f4_caseD_f;
      default:
        goto switchD_01e026f4_default;
      }
    }
switchD_01e026f4_caseD_2:
    param_1 = param_1 * 0xb4;
  }
  else {
    if (DAT_00006dc1 == '\x01') goto switchD_01e026f4_caseD_2;
    switch(DAT_00006dc1) {
    case '\x02':
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
    case '\a':
    case '\v':
    case '\x11':
    case '\x12':
      goto switchD_01e026f4_caseD_2;
    case '\b':
switchD_01e026f4_caseD_8:
      param_1 = param_1 * 0xb7;
      break;
    case '\t':
switchD_01e026f4_caseD_9:
      param_1 = param_1 * 0xb8;
      break;
    case '\n':
switchD_01e026f4_caseD_a:
      param_1 = param_1 * 0xb5;
      break;
    case '\f':
switchD_01e026f4_caseD_c:
      param_1 = param_1 * 0xb9;
      break;
    case '\r':
switchD_01e026f4_caseD_d:
      param_1 = param_1 * 0xcc;
      break;
    case '\x0e':
    case '\x10':
switchD_01e026f4_caseD_e:
      param_1 = param_1 * 0xcf;
      break;
    case '\x0f':
switchD_01e026f4_caseD_f:
      param_1 = param_1 * 0xca;
      break;
    default:
      goto switchD_01e026f4_default;
    }
  }
  uVar1 = param_1 / 0xff;
switchD_01e026f4_default:
  return uVar1 & 0xffff;
}



// ==== FUN_01e0275e @ 01e0275e ====

void FUN_01e0275e(int param_1,uint param_2,uint param_3,byte param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  byte extraout_r1;
  byte extraout_r1_00;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;
  BADSPACEBASE *in_sp;
  undefined1 auStack_2c [4];
  
  pbVar13 = auStack_2c;
  DAT_000069f0 = 1;
  if ((param_1 == 0x30) && (DAT_00006dc8 == '\0')) {
    bVar5 = (byte)((int)(char)DAT_000069c0 << 2);
    bVar11 = DAT_000069c2 >> 2 & 0x10 |
             bVar5 & 4 | (byte)((DAT_000069c0 & 0xc) >> 2) | bVar5 & 8 | DAT_000069c0 >> 1 & 0x20;
    bVar5 = bVar11 | 0x40;
    DAT_0000442c = 0x2c;
    if (-1 < (char)DAT_000069c2) {
      bVar5 = bVar11;
    }
    DAT_0000442d = bVar5 | 0x80;
    if (-1 < (char)DAT_000069c0) {
      DAT_0000442d = bVar5;
    }
    DAT_0000442e = (DAT_000069c1 & 4) << 1 | DAT_000069c1 & 0x33 | DAT_000069c1 >> 1 & 4;
    DAT_0000442f = (&DAT_01e21c80)[DAT_000069c2 & 0xffffff0f] & 0xf;
    DAT_00004430 = 0;
    DAT_00004431 = DAT_000040fc;
    DAT_00004432 = 0;
    DAT_00004433 = DAT_000040fd;
    DAT_00004434 = 0;
    DAT_00004435 = DAT_000040fe;
    DAT_00004436 = 0;
    DAT_00004437 = DAT_000040ff;
  }
  else {
    DAT_0000442c = (byte)param_1;
    DAT_0000442e = DAT_00004134;
    DAT_0000442d = DAT_0000442c;
    bVar5 = FUN_01e01f6c(0,5);
    DAT_0000442f = bVar5 & 0xcf;
    bVar5 = FUN_01e01f6c(1,5);
    DAT_00004430 = bVar5 & 0x3f | 0x80;
    bVar5 = FUN_01e01f6c(2,5);
    DAT_00004431 = bVar5 & 0xcf;
    DAT_00004433 = DAT_000040fc >> 4;
    uVar12 = (uint)DAT_00004433;
    DAT_00004434 = param_4 & DAT_000040fd;
    DAT_00004437 = extraout_r1 & DAT_000040ff;
    DAT_00004436 = DAT_000040fe >> 4;
    uVar9 = (uint)DAT_00004436;
    if (DAT_000040fd == 0x80) {
      uVar12 = uVar12 | 0xfffffff0;
      DAT_00004433 = (byte)uVar12;
    }
    if (DAT_000040ff == 0x80) {
      uVar9 = uVar9 | 0xfffffff0;
      DAT_00004436 = (byte)uVar9;
    }
    if ((((byte)(DAT_000040fc << 4) != 0) || (uVar12 != 8)) ||
       (DAT_00004432 = 0, DAT_000040fd != 0x7f)) {
      DAT_00006835 = DAT_00006ec5 ^ 1;
      DAT_00004432 = DAT_000040fc << 4 | DAT_00006835 & 0xf;
      DAT_00004433 = (byte)uVar12 & 0xf | (DAT_00006835 ^ (DAT_000040fd ^ DAT_000040fc) >> 7) << 4;
    }
    if ((((byte)(DAT_000040fe << 4) != 0) || (uVar9 != 8)) ||
       (DAT_00004435 = 0, DAT_000040ff != 0x7f)) {
      DAT_00006836 = DAT_00006ec6 ^ 1;
      DAT_00004435 = DAT_000040fe << 4 | DAT_00006836 & 0xf;
      DAT_00004436 = (byte)uVar9 & 0xf | ((DAT_000040fd ^ DAT_000040fc) >> 7 ^ DAT_00006836) << 4;
    }
    DAT_00004438 = '\0';
    if (DAT_00006ad4 != 0) {
      DAT_00004438 = (char)((param_2 & 0x30) >> 4) + '\t';
    }
    if (0xd < param_3) {
      uVar12 = 0xd;
      if (DAT_00006ad4 == 0xfffffffe) {
        pbVar13[3] = DAT_00006cc4;
        for (iVar8 = 0; iVar8 != -2; iVar8 = iVar8 + -1) {
          bVar5 = 5;
          if (pbVar13[iVar8 + 3] != 0) {
            bVar5 = pbVar13[iVar8 + 3] - 1;
          }
          pbVar13[iVar8 + 2] = bVar5;
        }
        uVar10 = *(undefined4 *)(pbVar13 + 1);
        pbVar13[1] = pbVar13[3];
        pbVar13[3] = (byte)uVar10;
        for (iVar8 = 0; pbVar13 = pbVar13 + 1, iVar8 != 0x24; iVar8 = iVar8 + 0xc) {
          bVar6 = *pbVar13 * '\f';
          *pbVar13 = bVar6;
          uVar12 = (uint)bVar6;
          bVar5 = *(byte *)((uVar12 | 2) + 0x722e);
          bVar11 = *(byte *)((uVar12 | 1) + 0x722e);
          (&DAT_00004439)[iVar8] = *(undefined1 *)((bVar6 | 3) + 0x722e);
          bVar6 = *(byte *)(uVar12 + 0x722e);
          (&DAT_0000443a)[iVar8] = bVar5;
          bVar5 = bVar5 & bVar11;
          (&DAT_0000443b)[iVar8] = bVar5;
          uVar1 = *(undefined1 *)(uVar12 + 0x7233);
          uVar2 = *(undefined1 *)(uVar12 + 0x7232);
          uVar3 = *(undefined1 *)(uVar12 + 0x7236);
          uVar4 = *(undefined1 *)(uVar12 + 0x7237);
          (&DAT_0000443c)[iVar8] = bVar5 & bVar6;
          *(undefined1 *)(iVar8 + 0x443d) = uVar1;
          *(undefined1 *)(iVar8 + 0x443e) = uVar2;
          uVar7 = FUN_01e026ce((int)CONCAT11(uVar3,uVar4));
          uVar1 = *(undefined1 *)(uVar12 + 0x7234);
          uVar2 = *(undefined1 *)(uVar12 + 0x7235);
          (&DAT_0000443f)[iVar8] = (char)uVar7;
          *(char *)(iVar8 + 0x4440) = (char)((ushort)uVar7 >> 8);
          uVar7 = FUN_01e026ce((int)CONCAT11(uVar1,uVar2));
          *(byte *)(iVar8 + 0x4441) = extraout_r1_00 & (byte)uVar7;
          uVar1 = *(undefined1 *)(uVar12 + 0x7239);
          uVar2 = *(undefined1 *)(uVar12 + 0x7238);
          *(char *)(iVar8 + 0x4442) = (char)((ushort)uVar7 >> 8);
          uVar7 = FUN_01e026ce((int)CONCAT11(uVar2,uVar1));
          *(char *)(iVar8 + 0x4443) = (char)uVar7;
          *(char *)(iVar8 + 0x4444) = (char)((ushort)uVar7 >> 8);
        }
        uVar12 = 0x31;
      }
      if (uVar12 + 1 <= param_3) {
        for (; uVar12 < param_3; uVar12 = uVar12 + 1) {
          (&DAT_0000442c)[uVar12] = 0;
        }
      }
    }
  }
  return;
}



// ==== FUN_01e02f3a @ 01e02f3a ====

short FUN_01e02f3a(short *param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *param_1 + (ushort)*(byte *)(param_1 + 1) + (ushort)*(byte *)((int)param_1 + 3) +
          param_1[0xd];
  for (iVar2 = 0; iVar2 != 6; iVar2 = iVar2 + 1) {
    sVar1 = sVar1 + (ushort)*(byte *)((int)param_1 + iVar2 + 4);
  }
  for (iVar2 = 0; iVar2 != 0x10; iVar2 = iVar2 + 1) {
    sVar1 = sVar1 + (ushort)*(byte *)((int)param_1 + iVar2 + 10);
  }
  return (ushort)*(byte *)((int)param_1 + 0x10d) + sVar1 + (ushort)*(byte *)(param_1 + 0x86);
}



// ==== FUN_01e02f7e @ 01e02f7e ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e02f7e(undefined1 param_1)

{
  _DAT_00007978 = 0x55aa;
  DAT_0000797b = param_1;
  func_0x021127a8(0x797c,&DAT_00004160,6);
  return;
}



// ==== FUN_01e0302a @ 01e0302a ====

void FUN_01e0302a(void)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  BADSPACEBASE *in_sp;
  byte local_31 [37];
  
  sVar4 = 0;
  for (uVar5 = 0; uVar5 != 0xc; uVar5 = uVar5 + 1) {
    uVar1 = *(ushort *)((uVar5 & 0xfe) + 0x41c4);
    uVar3 = uVar1 >> 8;
    if ((uVar5 & 1) != 0) {
      uVar3 = uVar1;
    }
    local_31[uVar5] = (byte)uVar3;
    sVar4 = sVar4 + uVar3;
  }
  for (iVar6 = 0; iVar6 != 0x18; iVar6 = iVar6 + 1) {
    bVar2 = *(byte *)(iVar6 + 0x4290);
    local_31[iVar6 + 0xc] = bVar2;
    sVar4 = sVar4 + (ushort)bVar2;
  }
  local_31[0x24] = (byte)sVar4;
  FUN_01e3780a(0x25,local_31,0x25);
  return;
}



// ==== FUN_01e0308a @ 01e0308a ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0308a(void)

{
  DAT_00006924 = 0;
  if (_DAT_00006860 != 0) {
    FUN_01e370ce();
    _DAT_00006860 = 0;
  }
  return;
}



// ==== FUN_01e030ac @ 01e030ac ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e030ac(void)

{
  DAT_000067cf = 0;
  DAT_000067d0 = 0;
  DAT_00006930 = 0;
  DAT_00006934 = 0;
  DAT_000067d1 = 0;
  DAT_00006938 = 0;
  DAT_0000693c = 0;
  _DAT_00006868 = 0x10;
  DAT_000067d2 = 0;
  DAT_000067d3 = 0;
  DAT_000067d4 = 0;
  if (_DAT_0000686a != 0) {
    FUN_01e370ce();
    _DAT_0000686a = 0;
  }
  return;
}



// ==== FUN_01e030e6 @ 01e030e6 ====

void FUN_01e030e6(void)

{
  DAT_00006920 = 0;
  DAT_00006904 = 0;
  FUN_01e0308a();
  FUN_01e030ac();
  return;
}



// ==== thunk_EXT_FUN_0200010a @ 01e03104 ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e03108 @ 01e03108 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e03108(void)

{
  undefined2 uVar1;
  
  FUN_01e367de(s_G6470_BT_HCI_Destroy_01e1bac9);
  uVar1 = _DAT_00004140;
  if (1 < (byte)(DAT_00004130 - 5U)) {
    FUN_01e238b0(&DAT_01e1b234,0);
    uVar1 = _DAT_0000413e;
  }
  FUN_01e238b0(&DAT_01e1b1ac,uVar1,0x13);
  return;
}



// ==== FUN_01e03142 @ 01e03142 ====

bool FUN_01e03142(char *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  
  cVar2 = '\0';
  for (; param_2 != 0; param_2 = param_2 + -1) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    cVar2 = cVar2 + cVar1;
  }
  return cVar2 == '\0';
}



// ==== FUN_01e03d80 @ 01e03d80 ====

void FUN_01e03d80(void)

{
  DAT_00006827 = 0;
  DAT_00006828 = 0;
  DAT_00006829 = 1;
  DAT_0000682a = 0;
  DAT_0000682b = 0;
  DAT_0000682c = 0;
  DAT_000069b8 = 0;
  DAT_00004137 = 1;
  DAT_0000682d = 0;
  DAT_00006ab0 = 0;
  DAT_00006826 = 0;
  return;
}



// ==== FUN_01e03dba @ 01e03dba ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e03dba(undefined4 param_1)

{
  func_0x0200206c();
  CoreSynchronize();
  FUN_01e00404(0);
  FUN_01e003da(0,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e03e98 @ 01e03e98 ====

undefined4 FUN_01e03e98(void)

{
  undefined4 uVar1;
  
  func_0x0200206c();
  CoreSynchronize();
  FUN_01e00404(0);
  uVar1 = FUN_01e0042c(0x11);
  func_0x0200207e(uVar1);
  return uVar1;
}



// ==== FUN_01e03eb6 @ 01e03eb6 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e03eb6(undefined4 param_1)

{
  func_0x0200206c();
  CoreSynchronize();
  FUN_01e00404(0);
  FUN_01e003da(0x11,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e03ed4 @ 01e03ed4 ====

void FUN_01e03ed4(void)

{
  FUN_01e03eb6(0x48);
  return;
}



// ==== FUN_01e03ed8 @ 01e03ed8 ====

void FUN_01e03ed8(void)

{
  FUN_01e03eb6(0x40);
  return;
}



// ==== FUN_01e03edc @ 01e03edc ====

void FUN_01e03edc(void)

{
  FUN_01e03eb6(0x60);
  return;
}



// ==== FUN_01e03ee0 @ 01e03ee0 ====

void FUN_01e03ee0(void)

{
  FUN_01e03eb6(10);
  return;
}



// ==== FUN_01e03ee4 @ 01e03ee4 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e03ee4(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_01e03e98();
  if ((uVar1 & 5) != 0) {
    FUN_01e36848(4,s_<Error>___USB_ep0_TXCSRP_TxPktRd_01e19724);
    return;
  }
  uVar1 = (uint)*(ushort *)(param_1 + 2);
  if (uVar1 != 0) {
    uVar2 = uVar1;
    if (0x3f < uVar1) {
      uVar2 = 0x40;
    }
    if (_DAT_00006ae0 != (undefined4 *)0x0) {
      func_0x021127a8(*_DAT_00006ae0,*(undefined4 *)(param_1 + 8),uVar2);
      return;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar2;
    *(short *)(param_1 + 2) = (short)(uVar1 - uVar2);
    if (((uVar1 - uVar2 & 0xffff) != 0) || (*(char *)(param_1 + 0x106) != '\0')) {
      FUN_01e03eb6(2);
      return;
    }
  }
  FUN_01e03ee0();
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// ==== FUN_01e04640 @ 01e04640 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e04640(void)

{
  _DAT_001e504c = _DAT_001e504c | 0x800;
  _DAT_001e505c = _DAT_001e505c | 0x800;
  _DAT_001e5058 = _DAT_001e5058 | 0x800;
  _DAT_001e5040 = _DAT_001e5040 & 0x800;
  _DAT_001e5048 = _DAT_001e5048 & 0x800;
  return;
}



// ==== FUN_01e04660 @ 01e04660 ====

void FUN_01e04660(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 2) {
    uVar1 = func_0x02000058(0x809b);
    func_0x020000a0(0x809b,(uVar1 | 1 << param_1) & 0xff);
  }
  return;
}



// ==== FUN_01e04682 @ 01e04682 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e04682(void)

{
  uint uVar1;
  
  FUN_01e04640();
  _DAT_001e5050 = _DAT_001e5050 & 0xffffffdf | 2;
  _DAT_001e5054 = _DAT_001e5054 & 0xffffffdd;
  _DAT_001e504c = _DAT_001e504c | 0x2a2;
  _DAT_001e5040 = 0;
  _DAT_001e5048 = 0;
  _DAT_001e500c = _DAT_001e500c | 0x1100;
  _DAT_001e5000 = 0;
  _DAT_001e5008 = 0;
  _DAT_001e508c = _DAT_001e508c | 0xf;
  _DAT_001e5088 = _DAT_001e5088 & 0xfffffff0;
  _DAT_001e5080 = _DAT_001e5080 & 0xfffffff0;
  FUN_01e04660(0);
  uVar1 = func_0x02000058(0x8099);
  func_0x020000a0(0x8099,uVar1 & 0xfffffffe);
  uVar1 = func_0x02000058(0x809a);
  func_0x020000a0(0x809a,uVar1 & 0xfffffffe);
  _DAT_001e508c = _DAT_001e508c | 0x38;
  _DAT_001e5080 = _DAT_001e5080 & 0xffffffc7;
  _DAT_001e5088 = _DAT_001e5088 & 0xffffffc7;
  return;
}



// ==== thunk_EXT_FUN_0200010a @ 01e04800 ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e04804 @ 01e04804 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e04804(int param_1)

{
  if (param_1 == 0) {
    thunk_EXT_FUN_0200010a();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e0481a @ 01e0481a ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e0481a(void)

{
  func_0x02000058(5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e0485a @ 01e0485a ====

byte FUN_01e0485a(void)

{
  return (DAT_000069e8 | DAT_000069ec) & 1;
}



// ==== FUN_01e04878 @ 01e04878 ====

void FUN_01e04878(void)

{
  func_0x021127a8(0x1d418,&DAT_00004160,6);
  return;
}



// ==== FUN_01e048ba @ 01e048ba ====

void FUN_01e048ba(void)

{
  FUN_01e00174(0x40000b);
  return;
}



// ==== FUN_01e048c4 @ 01e048c4 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e048c4(void)

{
  _DAT_001e500c = _DAT_001e500c | 0x80;
  _DAT_001e501c = _DAT_001e501c | 0x80;
  _DAT_001e5018 = _DAT_001e5018 | 0x80;
  _DAT_001e5000 = _DAT_001e5000 & 0xffffff7f;
  _DAT_001e5008 = _DAT_001e5008 & 0xffffff7f;
  return;
}



// ==== FUN_01e048e4 @ 01e048e4 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e048e4(uint param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 < 7) {
    uVar1 = 1 << param_1 + 8;
    if (param_2 == 0) {
      _DAT_001e30e4 = _DAT_001e30e4 & ~uVar1;
    }
    else {
      _DAT_001e30e4 = _DAT_001e30e4 | uVar1;
    }
  }
  return;
}



// ==== FUN_01e04906 @ 01e04906 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e04906(uint param_1,int param_2)

{
  if (param_1 < 6) {
    if (param_2 == 0) {
      _DAT_001e30e4 = _DAT_001e30e4 & ~(1 << param_1);
    }
    else {
      _DAT_001e30e4 = _DAT_001e30e4 | 1 << param_1;
    }
  }
  return;
}



// ==== FUN_01e04926 @ 01e04926 ====

void FUN_01e04926(undefined4 param_1,undefined4 param_2)

{
  FUN_01e048e4(param_2,0,param_1);
  FUN_01e04906(param_1,0);
  return;
}



// ==== FUN_01e0493a @ 01e0493a ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0493a(void)

{
  _DAT_00006892 = 0;
  _DAT_00006894 = 0;
  FUN_01e04926(4,4);
  FUN_01e04926(1,1);
  return;
}



// ==== FUN_01e0495a @ 01e0495a ====

void FUN_01e0495a(void)

{
  if (DAT_00012d68 != '\x02') {
    DAT_00012c78 = 2;
    FUN_01e36848(2,s__Info____PMU_PWR_LDO15_01e19653);
    func_0x0200015c(0,4);
    func_0x02000114(0,0xf7);
    func_0x020001ea(1);
  }
  return;
}



// ==== FUN_01e04c96 @ 01e04c96 ====

void FUN_01e04c96(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  byte bVar2;
  
  switch(param_1) {
  case 0x18:
    DAT_00006841 = DAT_00006841 & ~(byte)((-1 << param_3) << param_2) |
                   (byte)((param_4 & ~(-1 << param_3)) << param_2);
    uVar1 = 0x18;
    bVar2 = DAT_00006841;
    break;
  default:
    goto switchD_01e04ca6_caseD_19;
  case 0x1a:
    DAT_00004100 = DAT_00004100 & ~(byte)((-1 << param_3) << param_2) |
                   (byte)((param_4 & ~(-1 << param_3)) << param_2);
    uVar1 = 0x1a;
    bVar2 = DAT_00004100;
    break;
  case 0x1b:
    DAT_0000683f = DAT_0000683f & ~(byte)((-1 << param_3) << param_2) |
                   (byte)((param_4 & ~(-1 << param_3)) << param_2);
    uVar1 = 0x1b;
    bVar2 = DAT_0000683f;
    break;
  case 0x1c:
    DAT_00006840 = DAT_00006840 & ~(byte)((-1 << param_3) << param_2) |
                   (byte)((param_4 & ~(-1 << param_3)) << param_2);
    uVar1 = 0x1c;
    bVar2 = DAT_00006840;
  }
  func_0x020000a0(uVar1,bVar2);
switchD_01e04ca6_caseD_19:
  return;
}



// ==== FUN_01e04fae @ 01e04fae ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e04fae(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  DAT_000069b8 = 1;
  if (param_2 == 2) {
    FUN_01e367de(s_>>>>>Set_Chip_Sleep__d_01e1bc08,param_1);
    if (DAT_000069e4 != '\0') {
      FUN_01e04804(3);
      DAT_000069e4 = '\0';
      FUN_01e0481a(7);
      FUN_01e367de(s_>>>>>>>>>SLEEP_36V_01e1ba35);
    }
    iVar2 = FUN_01e0485a();
    if ((iVar2 == 0) && ((_DAT_001e5044 & 0x15) == 0)) {
      cVar1 = '\n';
      while( true ) {
        DAT_000067ef = cVar1 + -1;
        if (cVar1 == '\0') break;
        FUN_01e04682();
        FUN_01e048c4();
        cVar1 = DAT_000069cf;
      }
      FUN_01e0493a();
      func_0x0200031a();
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    FUN_01e04878(4);
    FUN_01e048ba();
  }
  else if (param_2 == 1) {
    DAT_000067ee = (char)param_1;
    return;
  }
  return;
}



// ==== FUN_01e05048 @ 01e05048 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e05048(byte *param_1,int param_2)

{
  func_0x020030ce(0x73f8,0);
  _DAT_001e3504 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    _DAT_001e3500 = (uint)*param_1;
    param_1 = param_1 + 1;
  }
  CoreSynchronize();
  func_0x02002964(0x73f8);
  return 0;
}



// ==== FUN_01e0507e @ 01e0507e ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0507e(int param_1)

{
  DAT_00004130 = *(undefined1 *)(param_1 + 3);
  _DAT_0000413e = *(undefined2 *)(param_1 + 0x1a);
  func_0x021127a8(&DAT_00004160,param_1 + 4,6);
  return;
}



// ==== FUN_01e050aa @ 01e050aa ====

char FUN_01e050aa(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = '\0';
  for (uVar2 = 0; (int)(uVar2 & 0xffff) < param_2 + -1; uVar2 = uVar2 + 1) {
    cVar1 = cVar1 + *(char *)(param_1 + (uVar2 & 0xffff));
  }
  return cVar1;
}



// ==== FUN_01e050c8 @ 01e050c8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e050c8(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  
  DAT_00007d79 = 10;
  _DAT_000069d8 = 0x1bdd;
  _DAT_000069d4 = 0;
  DAT_00007d81 = 2;
  DAT_000067f6 = 0x32;
  DAT_000067f7 = 0x32;
  DAT_00007d7d = 0x32;
  DAT_00007d7e = 0x32;
  _DAT_000068b6 = 0;
  _DAT_00004144 = 100;
  _DAT_000068b8 = 0;
  _DAT_00004146 = 100;
  DAT_00007d84 = 0;
  DAT_00007d85 = 100;
  DAT_00007d88 = 0;
  DAT_00007d89 = 100;
  _DAT_00004148 = 10;
  _DAT_0000414a = 0x5a;
  _DAT_0000414c = 10;
  _DAT_0000414e = 0x5a;
  DAT_00007d8a = 10;
  DAT_00007d8b = 0x5a;
  DAT_00007d8c = 10;
  DAT_00007d8d = 0x5a;
  puVar3 = &DAT_01e1b32c;
  for (iVar2 = 0; iVar2 != 0x120; iVar2 = iVar2 + 0x90) {
    puVar4 = (undefined1 *)(iVar2 + 0x7e27);
    puVar5 = puVar3 + -8;
    iVar6 = 4;
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    puVar5 = (undefined1 *)(iVar2 + 0x7e2e);
    iVar6 = 4;
    puVar4 = puVar3;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    puVar3 = puVar3 + 4;
    *(undefined1 *)(iVar2 + 0x7e2c) = 1;
  }
  return;
}



// ==== FUN_01e0515e @ 01e0515e ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0515e(void)

{
  _DAT_000069d8 = 0;
  if (DAT_00007d79 != 0) {
    _DAT_000069d8 = ((uint)DAT_00007d79 * 64000 + 2000) / 0x5a;
  }
  _DAT_000069d4 = 0;
  DAT_000067f6 = DAT_00007d7d;
  DAT_000067f7 = DAT_00007d7e;
  _DAT_000068b6 = (ushort)DAT_00007d84;
  _DAT_000068b8 = (ushort)DAT_00007d88;
  _DAT_00004144 = (ushort)DAT_00007d85;
  _DAT_00004146 = (ushort)DAT_00007d89;
  _DAT_00004148 = (ushort)DAT_00007d8a;
  _DAT_0000414a = (ushort)DAT_00007d8b;
  _DAT_0000414c = (ushort)DAT_00007d8c;
  _DAT_0000414e = (ushort)DAT_00007d8d;
  return;
}



// ==== thunk_FUN_01e051d8 @ 01e051d2 ====

void thunk_FUN_01e051d8(int param_1)

{
  for (; param_1 != 0; param_1 = param_1 + -1) {
    nop();
  }
  return;
}



// ==== FUN_01e051d8 @ 01e051d8 ====

void FUN_01e051d8(int param_1)

{
  for (; param_1 != 0; param_1 = param_1 + -1) {
    nop();
  }
  return;
}



// ==== FUN_01e05278 @ 01e05278 ====

undefined4 FUN_01e05278(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0x1e3000;
  case 1:
    return 0x1e300c;
  case 2:
    return 0x1e3018;
  case 3:
    return 0x1e3024;
  case 4:
    return 0x1e3030;
  case 5:
    return 0x1e303c;
  default:
    return 0;
  }
}



// ==== FUN_01e052ca @ 01e052ca ====

undefined4 FUN_01e052ca(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0x1e3064;
  case 1:
    return 0x1e3074;
  case 2:
    return 0x1e3084;
  case 3:
    return 0x1e3094;
  case 4:
    return 0x1e30a4;
  case 5:
    return 0x1e30b4;
  default:
    return 0;
  }
}



// ==== FUN_01e0530a @ 01e0530a ====

void FUN_01e0530a(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_01e05278(param_2,param_1);
  uVar4 = FUN_01e052ca(param_1,uVar1);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  iVar3 = (int)uVar4;
  if ((iVar3 != 0) && (iVar2 != 0)) {
    *(uint *)(iVar2 + 0xc) = (uint)(param_3 * *(int *)(iVar3 + 8)) / 10000;
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar3 + 4) = 0;
  }
  return;
}



// ==== FUN_01e05334 @ 01e05334 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e05334(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 < 0x38) {
    iVar1 = FUN_01e016fe();
    if (iVar1 != 0) {
      uVar2 = 1 << (param_1 & 0xf);
      if (param_2 != 0) {
        *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | uVar2;
        return;
      }
      *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & ~uVar2;
    }
  }
  else if (0x3c < param_1) {
    _DAT_001e5100 = _DAT_001e5100 | 0x900;
    _DAT_001e1800 = _DAT_001e1800 & 0xfffffffe;
    FUN_01e016e0(param_1 - 0x38);
    return;
  }
  return;
}



// ==== FUN_01e0537e @ 01e0537e ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0537e(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 1 << param_1 + -5;
  if (param_2 == 0) {
    _DAT_001e5100 = _DAT_001e5100 & ~uVar1;
  }
  else {
    _DAT_001e5100 = _DAT_001e5100 | uVar1;
  }
  return;
}



// ==== FUN_01e0539c @ 01e0539c ====

void FUN_01e0539c(uint param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1 < 0x38) {
    puVar1 = (uint *)FUN_01e016fe();
    if (puVar1 != (uint *)0x0) {
      uVar2 = 1 << (param_1 & 0xf);
      if (param_2 == 0) {
        *puVar1 = *puVar1 & ~uVar2;
      }
      else if (param_2 == 1) {
        *puVar1 = *puVar1 | uVar2;
      }
      puVar1[2] = puVar1[2] & ~uVar2;
    }
  }
  else if (0x3c < param_1) {
    FUN_01e016e0(param_1 - 0x38,0);
    FUN_01e0537e(param_1 - 0x38,param_2);
    return;
  }
  return;
}



// ==== FUN_01e05688 @ 01e05688 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e05688(void)

{
  if (DAT_00006bc1 == '\x02') {
    if (DAT_00006bc4 == '\x01') {
      DAT_00004130 = 7;
    }
    else if (DAT_00006bc4 == '\x03') {
      DAT_00004130 = 3;
    }
    else if (DAT_00006bc4 == '\x04') {
      DAT_00004130 = 2;
    }
  }
  else if (DAT_00006bc1 == '\x01') {
    DAT_00004130 = 5;
  }
  else if (DAT_00006bc1 == '\0') {
    DAT_00004130 = 9;
  }
  _DAT_0000413e = *(undefined2 *)((uint)DAT_00004130 * 0x20 + 0x70a9);
  func_0x021127a8(&DAT_00004160,(uint)DAT_00004130 * 0x20 + 0x797c,6);
  return;
}



// ==== FUN_01e06c32 @ 01e06c32 ====

void FUN_01e06c32(undefined1 param_1)

{
  BADSPACEBASE *in_sp;
  undefined1 local_18 [4];
  undefined4 uStack_14;
  undefined1 uStack_10;
  undefined4 uStack_c;
  
  local_18[0] = 4;
  uStack_14 = 0x43484700;
  uStack_c = 0;
  uStack_10 = param_1;
  FUN_01e36bcc(local_18);
  return;
}



// ==== FUN_01e06c56 @ 01e06c56 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e06c56(void)

{
  FUN_01e04c96(0x18,4,1,0);
  FUN_01e04c96(0x18,1,1,0);
  FUN_01e04c96(0x18,0,1,0);
  FUN_01e04c96(0x1a,1,1,0);
  FUN_01e04c96(0x1a,0,1,0);
  FUN_01e04c96(0x18,6,1,1);
  FUN_01e06c32(1);
  if (_DAT_0001a4cc != 0) {
    FUN_01e370ce(_DAT_0001a4cc & 0xffff);
    _DAT_0001a4cc = 0;
  }
  if (_DAT_0001a4c8 != 0) {
    thunk_FUN_01e370f4(_DAT_0001a4c8 & 0xffff);
    _DAT_0001a4c8 = 0;
  }
  return;
}



// ==== thunk_EXT_FUN_0200010a @ 01e07258 ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e0725c @ 01e0725c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0725c(void)

{
  int iVar1;
  
  FUN_01e030ac();
  if ((DAT_00004130 == '\x04') || (_DAT_00004142 = 0x40, DAT_00004130 == '\x01')) {
    _DAT_00004142 = 0x800;
  }
  DAT_00004132 = 0xfe;
  DAT_00004133 = 0xfe;
  for (iVar1 = 0; iVar1 != 0x50; iVar1 = iVar1 + 10) {
    (&DAT_000073a8)[iVar1] = 0;
  }
  for (iVar1 = 0; iVar1 != 0x10; iVar1 = iVar1 + 4) {
    (&DAT_00006d00)[iVar1] = 0;
  }
  _DAT_00006872 = 0;
  DAT_00004131 = 1;
  if (_DAT_0000686a == 0) {
    _DAT_0000686a = FUN_01e370ba(&LAB_01e0d1c4,10);
  }
  return;
}



// ==== FUN_01e072d0 @ 01e072d0 ====

void FUN_01e072d0(void)

{
  if ((byte)(DAT_00004130 - 5U) < 2) {
    DAT_000067c7 = DAT_00004130 == '\x06';
    DAT_00008ea6 = 2;
    if (DAT_00004130 != '\x06') {
      DAT_00008ea6 = 1;
    }
  }
  DAT_000067c9 = 0;
  DAT_00006908 = 0;
  FUN_01e0725c();
  FUN_01e03d80();
  return;
}



// ==== thunk_EXT_FUN_0200010a @ 01e0732a ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e0732e @ 01e0732e ====

undefined4 FUN_01e0732e(int param_1,int param_2)

{
  undefined4 uVar1;
  
  func_0x020030ce(0x7448,0xffffffff);
  uVar1 = 0;
  if (2 < param_1 - 100U) {
                    /* WARNING: Could not recover jumptable at 0x01e0737e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)((uint)(byte)(&DAT_01e0731c)[param_1] * 2 + 0x1e07380))();
    return uVar1;
  }
  if (1 < param_1 - 200U) {
    if (param_1 == 0xcb) goto LAB_01e07430;
    if (param_1 != 0xcc) {
      if (param_1 == 0x40045601) {
        if (param_2 == 0) {
          thunk_EXT_FUN_0200010a();
        }
        uVar1 = func_0x021127a8(0x7098,param_2,0x10);
        return uVar1;
      }
      if (param_1 == 0x40045602) {
        uVar1 = func_0x021127a8(param_2,0x7098,0x10);
        return uVar1;
      }
      uVar1 = 0xffffffe7;
      goto LAB_01e07430;
    }
  }
  uVar1 = func_0x02000b22(param_1,param_2);
LAB_01e07430:
  func_0x02002964(0x7448);
  return uVar1;
}



// ==== FUN_01e0743a @ 01e0743a ====

void FUN_01e0743a(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  iVar1 = param_1[1];
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *param_1 = param_1;
  param_1[1] = param_1;
  return;
}



// ==== FUN_01e07448 @ 01e07448 ====

void FUN_01e07448(char *param_1)

{
  short sVar1;
  char *pcVar2;
  short sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  char cVar9;
  BADSPACEBASE *in_sp;
  char *local_20 [2];
  
  cVar9 = '\0';
  iVar6 = 0;
  iVar7 = 0;
  puVar8 = (undefined4 *)&DAT_000041a8;
LAB_01e0748c:
  puVar8 = (undefined4 *)*puVar8;
  if (puVar8 != (undefined4 *)&DAT_000041a8) {
    sVar1 = *(short *)((int)puVar8 + -10);
    if (sVar1 != 1) {
      if (sVar1 != 0x80) {
        if (sVar1 == 0x40) {
          iVar7 = iVar7 + 1;
        }
        else if (sVar1 == 0x20) {
          *(undefined4 **)(((int)local_20 + iVar6) * 4) = puVar8 + -4;
          iVar6 = iVar6 + 1;
          goto LAB_01e0748c;
        }
        cVar9 = cVar9 + '\x01';
        goto LAB_01e0748c;
      }
      *(undefined4 **)(((int)local_20 + iVar6) * 4) = puVar8 + -4;
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 1;
    }
    goto LAB_01e0748c;
  }
  sVar1 = *(short *)(param_1 + 6);
  if ((sVar1 == 0x80) || (sVar1 == 0x40)) {
    iVar7 = iVar7 + 1;
  }
  if (iVar6 == 0) {
    if (sVar1 == 1) {
      return;
    }
    if (sVar1 == 0x10) {
      sVar3 = 0x80;
    }
    else if ((sVar1 == 0x80) || (sVar1 == 0x20)) {
      sVar3 = 0x48;
    }
    else {
      sVar3 = 0x1a;
      if (sVar1 != 2) {
        sVar3 = 0x20;
      }
    }
    goto LAB_01e075c6;
  }
  if (iVar7 == 0) {
    if (iVar6 == 1) {
      if (sVar1 == 1) goto LAB_01e075a8;
      if (sVar1 == 2) {
        uVar5 = 0x1a;
      }
      else if (sVar1 == 0x10) {
        uVar5 = 0x80;
        param_1[8] = -0x80;
        param_1[9] = '\0';
        param_1 = local_20[0];
        if (*local_20[0] != '\x02') {
          uVar5 = 0x30;
        }
      }
      else {
        if (sVar1 != 0x40) {
          if (sVar1 == 0x20) {
            if (local_20[0] != param_1) {
              if (*local_20[0] == '\x02') {
                local_20[0][10] = '0';
                local_20[0][0xb] = '\0';
                uVar5 = 0x80;
              }
              else {
                local_20[0][3] = '\x01';
                uVar5 = 0x30;
              }
              *(undefined2 *)(local_20[0] + 8) = uVar5;
              sVar3 = 0x30;
              goto LAB_01e075c6;
            }
            if (*param_1 != '\x01') {
              if (*param_1 != '\x02') {
                return;
              }
              param_1[8] = -0x80;
              param_1[9] = '\x01';
              param_1[10] = '\0';
              param_1[0xb] = '\0';
              return;
            }
            goto LAB_01e075c2;
          }
          local_20[0][8] = -0x80;
          local_20[0][9] = '\0';
        }
        uVar5 = 0x20;
      }
      *(undefined2 *)(param_1 + 8) = uVar5;
LAB_01e075a8:
      local_20[0][3] = cVar9 + '\x01';
      return;
    }
    if (iVar6 != 2) {
      return;
    }
    if (*param_1 != '\x01') {
      if (*param_1 != '\x02') {
        return;
      }
      param_1[8] = -0x80;
      param_1[9] = '\0';
      param_1[10] = '0';
      param_1[0xb] = '\0';
      return;
    }
LAB_01e075c2:
    sVar3 = *(short *)(param_1 + 10);
    if (sVar3 == 0) {
      return;
    }
LAB_01e075c6:
    *(short *)(param_1 + 8) = sVar3;
    return;
  }
  if (iVar6 != 1) {
    return;
  }
  if (sVar1 != 1) {
    if (sVar1 == 0x10) {
      uVar5 = 0x80;
    }
    else {
      if ((sVar1 == 0x80) || (sVar1 == 0x20)) {
        if (local_20[0] != param_1) {
          pcVar2 = local_20[0];
          if (sVar1 != 0x80) {
            pcVar2 = param_1;
            param_1 = local_20[0];
          }
          param_1[8] = ' ';
          param_1[9] = '\0';
          param_1[10] = ' ';
          param_1[0xb] = '\0';
          local_20[0][3] = '\x01';
          pcVar2[8] = '@';
          pcVar2[9] = '\x01';
          pcVar2[10] = '\0';
          pcVar2[0xb] = '\0';
          return;
        }
        if (*param_1 != '\x01') {
          if (*param_1 != '\x02') {
            return;
          }
          goto LAB_01e07580;
        }
        goto LAB_01e075c2;
      }
      uVar5 = 0x1a;
      if (sVar1 != 2) {
        uVar5 = 0x20;
      }
    }
    *(undefined2 *)(param_1 + 8) = uVar5;
  }
  local_20[0][3] = cVar9 + '\x01';
  param_1 = local_20[0];
  if (sVar1 == 0x10) {
    if (*local_20[0] == '\x02') {
      uVar5 = 0x80;
      uVar4 = 0x15e;
    }
    else {
      uVar4 = 0x20;
      uVar5 = 0x20;
    }
    *(undefined2 *)(local_20[0] + 10) = uVar4;
    *(undefined2 *)(local_20[0] + 8) = uVar5;
    return;
  }
LAB_01e07580:
  builtin_strncpy(param_1 + 8,"^\x01^\x01",4);
  return;
}



// ==== FUN_01e075cc @ 01e075cc ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e075cc(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  iVar1 = _DAT_0000670c;
  if (_DAT_0000670c != param_1) {
    if ((_DAT_0000670c == 0) ||
       (pcVar2 = *(code **)(*(int *)(_DAT_0000670c + 0x18) + 4),
       iVar1 = (*pcVar2)(_DAT_0000670c,pcVar2), iVar1 == 0)) {
      iVar1 = param_1;
      if (param_1 != 0) {
        (*(code *)**(undefined4 **)(param_1 + 0x18))
                  (param_1,(code *)**(undefined4 **)(param_1 + 0x18));
        iVar1 = param_1;
      }
    }
    else {
      FUN_01e2e42c(DAT_0000413d);
      uVar3 = 0;
      iVar1 = _DAT_0000670c;
    }
  }
  _DAT_0000670c = iVar1;
  return uVar3;
}



// ==== FUN_01e0760c @ 01e0760c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0760c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _DAT_000041ac;
  iVar2 = param_1;
  *(int **)(param_1 + -4) = _DAT_000041ac;
  _DAT_000041ac = (int *)iVar2;
  *(undefined1 **)(param_1 + -8) = &DAT_000041a8;
  *piVar1 = param_1;
  return;
}



// ==== FUN_01e07624 @ 01e07624 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e07624(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  while (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)&DAT_000041a8;
    param_1 = (undefined4 *)0x0;
    while (puVar3 = (undefined4 *)*puVar3, puVar3 != (undefined4 *)&DAT_000041a8) {
      if ((((*(byte *)((int)puVar3 + -0xf) & 5) == 0) &&
          (*(byte *)((int)puVar3 + -0xe) < *(byte *)((int)puVar3 + -0xd))) &&
         ((param_1 == (undefined4 *)0x0 ||
          (*(byte *)((int)param_1 + 5) < *(byte *)((int)puVar3 + -0xb))))) {
        param_1 = puVar3 + -4;
      }
    }
    if (param_1 != (undefined4 *)0x0) goto LAB_01e076a8;
    puVar3 = (undefined4 *)&DAT_000041a8;
    bVar1 = false;
    while (bVar4 = bVar1, puVar3 = (undefined4 *)*puVar3, puVar3 != (undefined4 *)&DAT_000041a8) {
      *(undefined1 *)((int)puVar3 + -0xe) = 0;
      *(undefined1 *)((int)puVar3 + -0xb) = *(undefined1 *)(puVar3 + -3);
      bVar1 = true;
      if ((*(byte *)((int)puVar3 + -0xf) & 2) != 0) {
        bVar1 = bVar4;
      }
    }
    param_1 = (undefined4 *)0x0;
    if (!bVar4) {
      FUN_01e075cc();
      FUN_01e2e42c(DAT_0000413d,8);
      return;
    }
  }
  if (_DAT_0000670c != param_1) {
LAB_01e076a8:
    iVar2 = FUN_01e075cc(param_1);
    if (iVar2 != 1) {
      return;
    }
    FUN_01e0743a(param_1 + 4);
    *(char *)((int)param_1 + 5) = *(char *)((int)param_1 + 5) + -1;
    *(char *)((int)param_1 + 2) = *(char *)((int)param_1 + 2) + '\x01';
    puVar3 = (undefined4 *)&DAT_000041a8;
    while (puVar3 = (undefined4 *)*puVar3, puVar3 != (undefined4 *)&DAT_000041a8) {
      if (*(byte *)((int)puVar3 + -0xb) < *(byte *)(puVar3 + -3)) {
        *(byte *)((int)puVar3 + -0xb) = *(byte *)((int)puVar3 + -0xb) + 1;
      }
    }
    FUN_01e0760c();
  }
  FUN_01e2e414(DAT_0000413d,FUN_01e07624,0,*(undefined2 *)(param_1 + 2));
  return;
}



// ==== FUN_01e076ee @ 01e076ee ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e076ee(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  func_0x0200206c();
  FUN_01e0743a(param_1 + 0x10);
  if ((*(short *)(param_1 + 6) == 0x80) || (*(short *)(param_1 + 6) == 0x20)) {
    puVar1 = (undefined4 *)&DAT_000041a8;
    do {
      puVar1 = (undefined4 *)*puVar1;
      if (puVar1 == (undefined4 *)&DAT_000041a8) goto LAB_01e07728;
    } while ((*(short *)((int)puVar1 + -10) != 0x80) && (*(short *)((int)puVar1 + -10) != 0x20));
    FUN_01e07448(puVar1 + -4);
  }
LAB_01e07728:
  if (_DAT_0000670c == param_1) {
    pcVar2 = *(code **)(*(int *)(param_1 + 0x18) + 4);
    (*pcVar2)(param_1,pcVar2);
    _DAT_0000670c = 0;
    if (_DAT_000041a8 == &DAT_000041a8) {
      FUN_01e2e3b4(DAT_0000413d);
      DAT_0000413d = 0xff;
    }
    else {
      FUN_01e07624(0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e07764 @ 01e07764 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e07764(void)

{
  func_0x0200206c();
  DAT_00006f44 = 0;
  _DAT_00006afc = 0;
  FUN_01e076ee(0x6f48);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e07808 @ 01e07808 ====

void FUN_01e07808(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  BADSPACEBASE *in_sp;
  undefined1 auStack_1b [7];
  
  uVar3 = (uint)DAT_00004130;
  if (uVar3 - 5 < 2) {
    switch(*param_1) {
    case 0:
      goto switchD_01e0783c_caseD_0;
    default:
      goto switchD_01e0783c_caseD_1;
    case 2:
      if (DAT_0000690c == '\0') {
        if ((&DAT_00006c06)[uVar3] == '\0') {
          FUN_01e238b0(&DAT_01e1b20c);
          goto LAB_01e07af2;
        }
        FUN_01e28b28(&DAT_000041f0);
      }
      else {
        FUN_01e28b36(&DAT_000041f0);
        DAT_000041f6 = DAT_000041f6 + '\x01';
        DAT_000041f0 = DAT_000041f6 + DAT_000041f0;
        FUN_01e28b28(&DAT_000041f0);
      }
      goto switchD_01e0783c_caseD_2;
    case 4:
      puVar2 = &DAT_01e1b2b4;
LAB_01e07a52:
      FUN_01e238b0(puVar2);
      uVar1 = 5;
      break;
    case 6:
      puVar2 = &DAT_01e1b27c;
      uVar5 = 0;
LAB_01e07bd4:
      FUN_01e238b0(puVar2,1,uVar5);
LAB_01e07bd8:
      uVar1 = 7;
      break;
    case 8:
      uVar7 = 0x3fffffff;
      uVar5 = 0xffffffff;
LAB_01e07a6a:
      FUN_01e238b0(&DAT_01e1b214,uVar5,uVar7);
LAB_01e07a6e:
      uVar1 = 9;
      break;
    case 10:
      puVar2 = &DAT_01e1b2ac;
      uVar5 = 0x809ff;
      puVar9 = (undefined *)0x0;
LAB_01e07e66:
      FUN_01e238b0(puVar2,uVar5,puVar9);
LAB_01e07e6a:
      uVar1 = 0xb;
      break;
    case 0xc:
      func_0x021127b4(&DAT_00006cd0,0,0x10);
      DAT_00006cd0 = 1;
      DAT_000067cd = 1;
      FUN_01e238b0(&DAT_01e1b2dc,0x6c90,&DAT_00006cd0);
LAB_01e07c28:
      uVar1 = 0xd;
      break;
    case 0xe:
      puVar8 = &DAT_00006ce0;
      func_0x021127b4(&DAT_00006ce0,0,0x10);
      DAT_00006ce0 = 3;
      DAT_000067cd = 2;
      puVar2 = &DAT_01e1b2dc;
      uVar5 = 0x6c90;
LAB_01e07ab0:
      FUN_01e238b0(puVar2,uVar5,puVar8);
LAB_01e07ab4:
      uVar1 = 0xf;
      break;
    case 0x10:
      DAT_000067cd = 3;
      FUN_01e238b0(&DAT_01e1b2e4);
LAB_01e07c50:
      uVar1 = 0x11;
      break;
    case 0x12:
      DAT_000067cd = 4;
      FUN_01e238b0(&DAT_01e1b2e4);
LAB_01e07aca:
      uVar1 = 0x13;
      break;
    case 0x14:
      FUN_01e238b0(&DAT_01e1b2bc,0x30,0x30,0);
      goto LAB_01e07c76;
    case 0x16:
      FUN_01e238b0(&DAT_01e1b2c4,0x1e,0x42c5);
LAB_01e07c86:
      uVar1 = 0x17;
      break;
    case 0x18:
      puVar2 = &DAT_01e1b2cc;
LAB_01e07aec:
      uVar5 = 1;
LAB_01e07aee:
      FUN_01e238b0(puVar2,uVar5);
LAB_01e07af2:
      uVar1 = 0x19;
    }
    goto LAB_01e07e6c;
  }
  if ((uVar3 == 4) || (uVar3 == 1)) {
    switch(*param_1) {
    case 0:
      goto switchD_01e0783c_caseD_0;
    default:
      goto switchD_01e0783c_caseD_1;
    case 2:
      goto switchD_01e0783c_caseD_2;
    case 4:
      goto switchD_01e0783c_caseD_4;
    case 6:
      FUN_01e238b0(&DAT_01e1b284,0);
      goto LAB_01e07bd8;
    case 8:
      uVar5 = 0x7ffb9fff;
      uVar7 = 0x1dbff807;
      goto LAB_01e07a6a;
    case 10:
      FUN_01e238b0(&DAT_01e1b24c,0x2508);
      goto LAB_01e07e6a;
    case 0xc:
      if (uVar3 == 4) {
        pcVar4 = s_Xbox_Wireless_Controller_01e1bc99;
      }
      else {
        pcVar4 = s_Xiaomi_ControllerWireless_Contro_01e1b980 + 0x11;
      }
      puVar2 = &DAT_01e1b224;
      goto LAB_01e07c24;
    case 0xe:
      if (uVar3 == 4) {
        puVar8 = &DAT_01e1da58;
      }
      else {
        puVar8 = &DAT_01e20808;
      }
      puVar2 = &DAT_01e1b264;
      uVar5 = 1;
      goto LAB_01e07ab0;
    case 0x10:
      puVar2 = &DAT_01e1b254;
      uVar5 = 2;
      goto LAB_01e07c4c;
    case 0x12:
      FUN_01e238b0(&DAT_01e1b1fc,5);
      goto LAB_01e07aca;
    case 0x14:
      FUN_01e238b0(&DAT_01e1b22c,24000);
      goto LAB_01e07c76;
    case 0x16:
      puVar2 = &DAT_01e1b294;
      uVar5 = 0xb540;
      goto LAB_01e07c82;
    case 0x18:
      puVar2 = &DAT_01e1b26c;
      goto LAB_01e07aec;
    case 0x1a:
      FUN_01e238b0(&DAT_01e1b244,0x1000,0x12);
      goto LAB_01e07ca0;
    case 0x1c:
      FUN_01e238b0(&DAT_01e1b2a4,1);
      goto LAB_01e07b10;
    case 0x1e:
      FUN_01e238b0(&DAT_01e1b23c,0x168,0x12);
LAB_01e07b22:
      uVar1 = 0x1f;
      break;
    case 0x20:
      FUN_01e238b0(&DAT_01e1b25c,1);
      goto LAB_01e07de2;
    case 0x22:
      FUN_01e238b0(&DAT_01e1b274,0);
      uVar1 = 0x23;
      break;
    case 0x24:
      if (DAT_0000690c == '\0') {
        FUN_01e238b0(&DAT_01e1b234,0);
        goto LAB_01e07d30;
      }
      FUN_01e238b0(&DAT_01e1b234,3);
      goto LAB_01e07d54;
    case 0x26:
      FUN_01e238b0(&DAT_01e1b28c,1,&DAT_00004160,&DAT_000041f0);
      goto LAB_01e07d40;
    case 0x28:
      FUN_01e238b0(&switchD_01e0931a::caseD_a2,&DAT_00004160,0xcc18,1);
LAB_01e07d54:
      uVar1 = 0x29;
    }
    goto LAB_01e07e6c;
  }
  switch(*param_1) {
  case 0:
switchD_01e0783c_caseD_0:
    FUN_01e072d0();
    FUN_01e238b0(&DAT_01e1b21c);
    uVar1 = 1;
    break;
  default:
    goto switchD_01e0783c_caseD_1;
  case 2:
    if (uVar3 == 2) {
      DAT_00004372 = DAT_00004372 ^ 0xf0;
    }
    else {
      if (uVar3 != 7) goto switchD_01e0783c_caseD_2;
      DAT_00004372 = DAT_00004372 ^ 0xf;
    }
    FUN_01e29276();
switchD_01e0783c_caseD_2:
    FUN_01e238b0(&DAT_01e1b20c);
    uVar1 = 3;
    break;
  case 4:
switchD_01e0783c_caseD_4:
    puVar2 = &DAT_01e1b204;
    goto LAB_01e07a52;
  case 6:
    puVar2 = &DAT_01e1b29c;
    uVar5 = 0x9e8b33;
    goto LAB_01e07bd4;
  case 8:
    switch(uVar3) {
    case 2:
    case 9:
      pcVar4 = s_Xiaomi_Controller_01e1b7fc;
      break;
    default:
      pcVar4 = s_Pro_Controller_01e1b5a6;
      break;
    case 7:
      pcVar4 = s_Xbox_Wireless_Controller_01e1bc99;
      break;
    case 8:
      pcVar4 = s_Sony_PLAYSTATION_R_3_Controller_01e1c4f6;
    }
    FUN_01e238b0(&DAT_01e1b224,pcVar4);
    goto LAB_01e07a6e;
  case 10:
    if (uVar3 == 9) {
LAB_01e07c14:
      puVar9 = &DAT_01e1cd8e;
    }
    else if (uVar3 == 7) {
      puVar9 = &DAT_01e1beb1;
    }
    else {
      if (uVar3 == 2) goto LAB_01e07c14;
      puVar9 = &DAT_01e1b782;
    }
    puVar2 = &DAT_01e1b264;
    uVar5 = 1;
    goto LAB_01e07e66;
  case 0xc:
    puVar2 = &DAT_01e1b254;
    pcVar4 = (char *)0x2;
LAB_01e07c24:
    FUN_01e238b0(puVar2,pcVar4);
    goto LAB_01e07c28;
  case 0xe:
    FUN_01e238b0(&DAT_01e1b214,0xffffffff,0x3fffffff);
    uVar1 = 0x11;
    if (DAT_00004130 != 8) goto LAB_01e07ab4;
    break;
  case 0x10:
    puVar2 = &DAT_01e1b26c;
    uVar5 = 1;
LAB_01e07c4c:
    FUN_01e238b0(puVar2,uVar5);
    goto LAB_01e07c50;
  case 0x12:
    FUN_01e238b0(&DAT_01e1b23c,0x200,0x13);
    *param_1 = 0x13;
    return;
  case 0x14:
    FUN_01e238b0(&DAT_01e1b244,0x200,0xff);
LAB_01e07c76:
    uVar1 = 0x15;
    break;
  case 0x16:
    puVar2 = &DAT_01e1b24c;
    uVar5 = 0x2508;
LAB_01e07c82:
    FUN_01e238b0(puVar2,uVar5);
    goto LAB_01e07c86;
  case 0x18:
    puVar2 = &DAT_01e1b294;
    uVar5 = 0x2000;
    goto LAB_01e07aee;
  case 0x1a:
    FUN_01e238b0(&DAT_01e1b22c,0x2000);
LAB_01e07ca0:
    uVar1 = 0x1b;
    break;
  case 0x1c:
    if (DAT_0000690c != '\0') {
      FUN_01e238b0(&DAT_01e1b234,3);
      *param_1 = 0x21;
      DAT_000069b0 = 0;
      return;
    }
    if (DAT_000069b0 == '\0') {
      FUN_01e238b0(&DAT_01e1b234,0);
      uVar1 = 0x1f;
      if (DAT_00004130 == 8) break;
    }
    else {
      FUN_01e238b0(&DAT_01e1b28c,1,&DAT_00004160,&DAT_000041f0);
    }
LAB_01e07b10:
    uVar1 = 0x1d;
    break;
  case 0x1e:
    if (DAT_000069b0 == '\0') {
      FUN_01e238b0(&DAT_01e1b28c,1,&DAT_00004160,&DAT_000041f0);
      goto LAB_01e07b22;
    }
    DAT_00006a88 = 0;
    puVar8 = &DAT_00004160;
    for (iVar6 = 5; iVar6 != -1; iVar6 = iVar6 + -1) {
      uVar1 = *puVar8;
      puVar8 = puVar8 + 1;
      auStack_1b[iVar6 + 1] = uVar1;
    }
    FUN_01e36986(auStack_1b + 1,6);
    uVar5 = FUN_01e2e4b0(auStack_1b + 1,0xc80);
    FUN_01e3721e(0,&LAB_01e0ceca,4000);
    FUN_01e367de(s_SW_WKUP__d_01e1b452,uVar5);
    goto LAB_01e07de2;
  case 0x20:
    FUN_01e238b0(&switchD_01e0931a::caseD_a2,&DAT_00004160,0xcc18,1);
LAB_01e07de2:
    uVar1 = 0x21;
    break;
  case 0x24:
    FUN_01e238b0(&DAT_01e1b2b4);
LAB_01e07d30:
    uVar1 = 0x25;
    break;
  case 0x26:
    FUN_01e238b0(&DAT_01e1b27c,1,0);
LAB_01e07d40:
    uVar1 = 0x27;
    break;
  case 0x28:
    FUN_01e238b0(&DAT_01e1b2ac,0x809ff,0);
    goto LAB_01e07d54;
  case 0x2a:
    FUN_01e238b0(&DAT_01e1b2dc,0x6c90,0x4210);
    uVar1 = 0x2b;
    break;
  case 0x2c:
    FUN_01e238b0(&DAT_01e1b2dc,0x6c90,0x4220);
    uVar1 = 0x2d;
    break;
  case 0x2e:
    FUN_01e238b0(&DAT_01e1b2bc,0x30,0x30,0);
    uVar1 = 0x2f;
    break;
  case 0x30:
    FUN_01e238b0(&DAT_01e1b2c4,0x16,0x4262);
    uVar1 = 0x31;
    break;
  case 0x32:
    FUN_01e238b0(&DAT_01e1b2cc,1);
    uVar1 = 0x21;
    if (DAT_0000690c == '\0') goto LAB_01e07b10;
  }
LAB_01e07e6c:
  *param_1 = uVar1;
switchD_01e0783c_caseD_1:
  return;
}



// ==== FUN_01e07eaa @ 01e07eaa ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e07eaa(char param_1)

{
  DAT_000067c2 = 0x43;
  DAT_000067c3 = (char)_DAT_00004140;
  DAT_000067c4 = (char)(_DAT_00004140 + 0x2000 >> 8);
  DAT_000067c5 = param_1 + '\x04';
  DAT_000067c6 = 0;
  DAT_000067c7 = param_1;
  DAT_000067c8 = 0;
  return;
}



// ==== FUN_01e07edc @ 01e07edc ====

void FUN_01e07edc(void)

{
  FUN_01e23b42(CONCAT11(DAT_00008a07,DAT_00008a06) + 4);
  return;
}



// ==== FUN_01e07ef8 @ 01e07ef8 ====

void FUN_01e07ef8(undefined1 param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  DAT_000067c6 = 0x4a;
  DAT_000067c7 = 0;
  DAT_000067c8 = param_1;
  if (param_3 != 0) {
    puVar2 = &DAT_00008a0d;
    for (iVar3 = param_3; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    }
  }
  FUN_01e07eaa(param_3 + 1U & 0xff);
  FUN_01e07edc();
  return;
}



// ==== FUN_01e07f2e @ 01e07f2e ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e07f2e(int param_1)

{
  int iVar1;
  
  switch(DAT_00004130) {
  case '\x01':
    param_1 = param_1 * 10000;
    break;
  case '\x02':
  case '\a':
  case '\t':
    param_1 = param_1 * 3000;
    break;
  default:
    iVar1 = 3000;
    if (DAT_00004130 != '\x04') {
      iVar1 = 0x9c4;
    }
    param_1 = param_1 * iVar1;
  }
  _DAT_00006866 = (short)(param_1 / 0x32);
  return;
}



// ==== FUN_01e07f7a @ 01e07f7a ====

byte FUN_01e07f7a(void)

{
  return (DAT_00006904 | DAT_00006920) & 1;
}



// ==== FUN_01e07f98 @ 01e07f98 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e07f98(uint param_1)

{
  _DAT_0000685e = (undefined2)param_1;
  DAT_0000814e = (undefined1)_DAT_00006872;
  DAT_0000814f = (undefined1)((ushort)_DAT_00006872 >> 8);
  DAT_00008147 = 2;
  DAT_00008148 = (undefined1)_DAT_0000413e;
  DAT_00008149 = (undefined1)(_DAT_0000413e + 0x2000 >> 8);
  DAT_0000814a = (undefined1)(param_1 + 4);
  DAT_0000814b = (undefined1)(param_1 >> 8);
  DAT_0000814c = (undefined1)param_1;
  DAT_0000814d = DAT_0000814b;
  FUN_01e23b42(&DAT_00008148,(param_1 + 4 & 0xff | (param_1 >> 8 & 0xff) << 8) + 4 & 0xffff);
  return;
}



// ==== FUN_01e07fe8 @ 01e07fe8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e07fe8(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_01e07f7a();
  if (iVar1 == 0) {
    return;
  }
  switch(DAT_00004130) {
  case 1:
    uVar2 = 0;
    break;
  case 2:
  case 9:
    uVar2 = (uint)DAT_000067c5;
    break;
  default:
    if (DAT_00008151 == '1') {
      uVar2 = 0x16b;
    }
    else {
LAB_01e0804a:
      uVar2 = 0x32;
    }
    break;
  case 4:
  case 7:
    uVar2 = (uint)DAT_000067ce;
    break;
  case 8:
    if (DAT_00006ec3 == '\x02') {
      DAT_00006833 = 0;
      _DAT_00006872 = _DAT_00006874;
      uVar2 = 1;
    }
    else {
      if (DAT_00006ec3 != '\x01') {
        if (DAT_00006ec3 != '\0') goto LAB_01e08072;
        DAT_00006833 = 0;
        _DAT_00006872 = _DAT_00006876;
        goto LAB_01e0804a;
      }
      DAT_00006833 = 0;
      _DAT_00006872 = _DAT_00006874;
      uVar2 = 0x41;
    }
  }
  FUN_01e07f98(uVar2);
LAB_01e08072:
  DAT_00006928 = 1;
  if (DAT_000069a8 != '\0') {
    DAT_000069a8 = '\0';
  }
  return;
}



// ==== FUN_01e0808e @ 01e0808e ====

void FUN_01e0808e(void)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  
  DAT_000069f0 = 1;
  for (iVar4 = 0; iVar4 != 0xb; iVar4 = iVar4 + 1) {
    (&DAT_00008150)[iVar4] = 0;
  }
  DAT_00008150 = 0xa1;
  if (DAT_00006cc6 == '\0') {
    if ((DAT_000068f8 == '\0') && ((DAT_000069c1 & 0x10) != 0)) {
      DAT_00008151 = 2;
      DAT_00008152 = 0x80;
      DAT_00008153 = 0;
      DAT_000067c5 = 4;
      DAT_000068f8 = 1;
      return;
    }
    if (((DAT_000069c1 & 0x10) == 0) == 0xfffffffe) {
      DAT_00008151 = 2;
      DAT_00008152 = 0;
      DAT_00008153 = 0;
      DAT_000068f8 = '\0';
      DAT_000067c5 = 4;
    }
    else if ((DAT_00006aca == '\0') || (DAT_00006817 = DAT_00006cc7 + 1, (DAT_00006817 & 1) == 0)) {
      cVar7 = '\0';
      for (iVar4 = 0; iVar4 != 4; iVar4 = iVar4 + 1) {
        uVar2 = FUN_01e01f6c(cVar7,5);
        (&DAT_00006a8c)[iVar4] = uVar2;
        cVar7 = cVar7 + '\x01';
      }
      puVar5 = &DAT_00008151;
      DAT_00008151 = 7;
      DAT_00008152 = DAT_000040fc;
      DAT_00008153 = DAT_000040fd;
      DAT_00008154 = DAT_000040fe;
      DAT_00008155 = DAT_000040ff;
      uVar2 = FUN_01e02210();
      puVar5[5] = uVar2;
      bVar1 = DAT_00006a8e;
      uVar3 = (uint)DAT_00006a8c;
      bVar8 = (byte)(uVar3 << 3);
      bVar6 = (byte)((uVar3 & 0xfc) >> 2);
      puVar5[6] = DAT_00006a8e & 0x40 | (byte)((uVar3 & 0x40) << 1) | bVar8 & 0x10 | bVar8 & 8 |
                  bVar6 & 2 | bVar6 & 1;
      bVar6 = DAT_00006a8d << 2;
      bVar8 = bVar6 & 4 | (DAT_00006a8d & 4) << 4 | bVar6 & 0x80 | bVar6 & 0x20 | bVar6 & 8;
      bVar6 = bVar8 | 2;
      if (-1 < (int)uVar3) {
        bVar6 = bVar8;
      }
      puVar5[7] = bVar6 | bVar1 >> 7;
      DAT_00008159 = '\0';
      if (((int)uVar3 < 0) && (DAT_00008159 = -1, DAT_000074cd != '\0')) {
        DAT_00008159 = DAT_000074cd;
      }
      DAT_0000815a = '\0';
      if (((char)bVar1 < '\0') && (DAT_0000815a = -1, DAT_000074cc != '\0')) {
        DAT_0000815a = DAT_000074cc;
      }
      DAT_000067c5 = 0xc;
    }
    else {
      DAT_000067c5 = 6;
      DAT_00008151 = 6;
      DAT_00008152 = DAT_000067fd != '\0';
      DAT_00008153 = DAT_000067fb;
      DAT_00008154 = DAT_000067fc;
      DAT_00008155 = 0;
    }
    return;
  }
  DAT_00008151 = 0xcd;
  FUN_01e0275e(0x30,DAT_00006cc1,0x31);
  func_0x021127a8(&DAT_00008152,&DAT_0000442c,0x31);
  return;
}



// ==== FUN_01e08306 @ 01e08306 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e08306(void)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  switch(DAT_00004130) {
  case '\x01':
  case '\x04':
    goto switchD_01e08328_caseD_1;
  case '\x02':
    FUN_01e0808e();
    break;
  default:
    DAT_00008150 = 0xa1;
    DAT_000067e0 = DAT_000069c0 + '\x01';
    FUN_01e0275e(0x30,DAT_00006cc1,0x31);
    for (iVar5 = 0; iVar5 != 0x31; iVar5 = iVar5 + 1) {
      (&DAT_00008151)[iVar5] = (&DAT_0000442c)[iVar5];
    }
    break;
  case '\a':
    DAT_000069f0 = 1;
    for (iVar5 = 0; iVar5 != 0x11; iVar5 = iVar5 + 1) {
      (&DAT_00008150)[iVar5] = 0;
    }
    DAT_00008150 = 0xa1;
    if ((DAT_0000692c == '\0') && ((DAT_00006a8d & 0x10) != 0)) {
      DAT_0000692c = '\x01';
    }
    else {
      if (((DAT_00006a8d & 0x10) == 0) != 0xfffffffe) {
        DAT_00008150 = 0xa1;
        DAT_00008151 = 1;
        cVar3 = '\0';
        for (iVar5 = 0; iVar5 != 4; iVar5 = iVar5 + 1) {
          uVar2 = FUN_01e01f6c(cVar3,5);
          (&DAT_00006a8c)[iVar5] = uVar2;
          cVar3 = cVar3 + '\x01';
        }
        DAT_00008152 = -1;
        if (DAT_000040fc != -1) {
          DAT_00008152 = '\0';
        }
        uVar6 = (uint)DAT_000040fd;
        DAT_00008153 = DAT_000040fc;
        if ((uVar6 != 0) && (uVar6 != 0xff)) {
          uVar6 = uVar6 - 1;
        }
        DAT_00008156 = 0xff;
        DAT_00008154 = 0xff;
        if (uVar6 == 0) {
          DAT_00008154 = 0;
        }
        DAT_00008155 = (undefined1)uVar6;
        if (DAT_000040fe != -1) {
          DAT_00008156 = 0;
        }
        uVar6 = (uint)DAT_000040ff;
        DAT_00008157 = DAT_000040fe;
        if ((uVar6 != 0) && (uVar6 != 0xff)) {
          uVar6 = uVar6 - 1;
        }
        DAT_00008158 = 0xff;
        if (uVar6 == 0) {
          DAT_00008158 = 0;
        }
        DAT_00008159 = (undefined1)uVar6;
        uVar6 = (uint)(char)DAT_00006a8e;
        if ((int)uVar6 < 0) {
          if ((DAT_000074cc == 0) || (DAT_000074cc == 0xff)) {
            DAT_0000815a = -1;
            DAT_0000815b = 3;
          }
          else {
            DAT_0000815a = DAT_000074cc << 2;
            DAT_0000815b = DAT_000074cc >> 6;
          }
        }
        else {
          DAT_0000815b = 0;
          DAT_0000815a = '\0';
        }
        uVar7 = (uint)(char)DAT_00006a8c;
        if ((int)uVar7 < 0) {
          if ((DAT_000074cd == 0) || (DAT_000074cd == 0xff)) {
            DAT_0000815c = -1;
            DAT_0000815d = 3;
          }
          else {
            DAT_0000815c = DAT_000074cd << 2;
            DAT_0000815d = DAT_000074cd >> 6;
          }
        }
        else {
          DAT_0000815d = 0;
          DAT_0000815c = '\0';
        }
        cVar3 = FUN_01e02210();
        DAT_0000815e = cVar3 + '\x01';
        if (DAT_00004130 == '\a') {
          bVar1 = (byte)(uVar7 << 3);
          bVar4 = (byte)((uVar7 & 0xfc) >> 2);
          DAT_0000815f = (byte)uVar6 & 0x40 | (byte)((uVar7 & 0x40) << 1) | bVar1 & 0x10 | bVar1 & 8
                         | bVar4 & 1 | bVar4 & 2;
          DAT_00008160 = DAT_00006a8d << 2 & 8 | DAT_00006a8d << 2 & 0x20 | (DAT_00006a8d & 4) << 4;
          bVar4 = DAT_00006a8d & 1;
          DAT_000067ce = 0x12;
          iVar5 = 0x1a;
        }
        else {
          bVar4 = (byte)((uVar7 & 0xff) >> 1);
          DAT_0000815f = (byte)((uVar7 & 8) >> 3) |
                         (byte)((uVar7 & 2) << 1) |
                         bVar4 & 0x20 | DAT_00006a8d << 6 | (byte)((uVar7 & 1) << 3) | bVar4 & 2 |
                         (byte)(uVar6 >> 2) & 0x10;
          bVar4 = DAT_00006a8d >> 1 & 2 | (byte)((DAT_00006a8d & 8) >> 3);
          DAT_000067ce = 0x11;
          iVar5 = 0x19;
        }
        (&DAT_00008147)[iVar5] = bVar4;
        break;
      }
      DAT_0000692c = '\0';
    }
    DAT_00008151 = 2;
    DAT_000067ce = 3;
    DAT_00008152 = DAT_0000692c;
    break;
  case '\b':
    if (DAT_00006924 == '\0') {
      DAT_00008150 = 0xa1;
      DAT_0000442c = 1;
      cVar3 = '\0';
      DAT_0000442d = 0;
      for (iVar5 = 0; iVar5 != 4; iVar5 = iVar5 + 1) {
        uVar2 = FUN_01e01f6c(cVar3,5);
        (&DAT_00006a8c)[iVar5] = uVar2;
        cVar3 = cVar3 + '\x01';
      }
      bVar4 = 0;
      func_0x021127b4(&DAT_00006c64,0);
      if ((DAT_00006a8e & 8) != 0) {
        DAT_00006c67 = 0xff;
        bVar4 = 0x80;
      }
      if ((DAT_00006a8e & 1) != 0) {
        DAT_00006c66 = 0xff;
        bVar4 = bVar4 | 0x40;
      }
      if ((DAT_00006a8e & 4) != 0) {
        DAT_00006c65 = 0xff;
        bVar4 = bVar4 | 0x20;
      }
      if ((DAT_00006a8e & 2) != 0) {
        DAT_00006c64 = 0xff;
        bVar4 = bVar4 | 0x10;
      }
      DAT_0000442e = DAT_00006a8d >> 2 & 2 |
                     DAT_00006a8d & 4 | bVar4 | DAT_00006a8d & 1 | (DAT_00006a8d & 2) << 2;
      DAT_0000442f = 0;
      if ((DAT_00006a8c & 1) != 0) {
        DAT_00006c6f = 0xff;
        DAT_0000442f = 0x80;
      }
      if ((DAT_00006a8c & 4) != 0) {
        DAT_00006c6e = 0xff;
        DAT_0000442f = DAT_0000442f | 0x40;
      }
      if ((DAT_00006a8c & 8) != 0) {
        DAT_00006c6d = 0xff;
        DAT_0000442f = DAT_0000442f | 0x20;
      }
      if ((DAT_00006a8c & 2) != 0) {
        DAT_00006c6c = 0xff;
        DAT_0000442f = DAT_0000442f | 0x10;
      }
      if ((DAT_00006a8c & 0x40) != 0) {
        DAT_00006c6b = 0xff;
        DAT_0000442f = DAT_0000442f | 8;
      }
      if ((DAT_00006a8e & 0x40) != 0) {
        DAT_00006c6a = 0xff;
        DAT_0000442f = DAT_0000442f | 4;
      }
      if ((char)DAT_00006a8c < '\0') {
        DAT_00006c69 = 0xff;
        if (DAT_000074cd != 0) {
          DAT_00006c69 = DAT_000074cd;
        }
        DAT_0000442f = DAT_0000442f | 2;
      }
      if ((char)DAT_00006a8e < '\0') {
        DAT_00006c68 = 0xff;
        if (DAT_000074cc != 0) {
          DAT_00006c68 = DAT_000074cc;
        }
        DAT_0000442f = DAT_0000442f | 1;
      }
      DAT_00004430 = (undefined1)((DAT_000069c1 & 0x10) >> 4);
      DAT_00004431 = 0;
      DAT_00004432 = DAT_000040fc;
      DAT_00004433 = DAT_000040fd;
      DAT_00004434 = DAT_000040fe;
      DAT_00004435 = DAT_000040ff;
      _DAT_00004438 = 0;
      _DAT_00004436 = 0;
      func_0x021127a8(&DAT_0000443a,&DAT_00006c64,0xc);
      return;
    }
    break;
  case '\t':
    FUN_01e0808e();
    FUN_01e3722c(0,FUN_01e07fe8,6);
    goto switchD_01e08328_caseD_1;
  }
  FUN_01e07fe8();
switchD_01e08328_caseD_1:
  return;
}



// ==== FUN_01e088d6 @ 01e088d6 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e088d6(void)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  switch(DAT_000067c9) {
  case 1:
    if (DAT_00006908 == '\0') {
      if (DAT_00004130 != '\b') {
        FUN_01e238b0(&DAT_01e1b1cc,_DAT_0000413e);
      }
      DAT_000067d0 = 1;
    }
    break;
  case 2:
    puVar1 = &DAT_01e1b234;
    uVar2 = 0;
    goto LAB_01e0894e;
  case 3:
    FUN_01e238b0(&DAT_01e1b1f4,_DAT_0000413e,5);
    break;
  case 4:
    func_0x02003440(0x19);
    FUN_01e238b0(&DAT_01e1b1f4,_DAT_0000413e,5);
    uVar3 = 1;
    break;
  case 5:
    puVar1 = &DAT_01e1b1ec;
    uVar2 = _DAT_0000413e;
LAB_01e0894e:
    FUN_01e238b0(puVar1,uVar2);
  }
  DAT_000067c9 = uVar3;
  return;
}



// ==== thunk_EXT_FUN_0200010a @ 01e08972 ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e08976 @ 01e08976 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e08976(void)

{
  if ((DAT_0000690c != '\0') || (DAT_00004130 != DAT_0000797b)) {
    FUN_01e02f7e();
  }
  if (_DAT_0000685c != 0) {
    thunk_FUN_01e370f4();
    _DAT_0000685c = 0;
    DAT_0001d431 = 0;
  }
  return;
}



// ==== FUN_01e089bc @ 01e089bc ====

void FUN_01e089bc(undefined1 param_1,undefined1 param_2,undefined1 *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  DAT_000067c5 = 0x4a;
  DAT_000067c6 = 0;
  DAT_000067c7 = param_2;
  DAT_000067c8 = param_1;
  if (param_4 != 0) {
    puVar2 = &DAT_00008a0e;
    for (iVar3 = param_4; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar1 = *param_3;
      param_3 = param_3 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    }
  }
  FUN_01e07eaa(param_4 + 2U & 0xff);
  FUN_01e07edc();
  return;
}



// ==== FUN_01e089f8 @ 01e089f8 ====

void FUN_01e089f8(undefined4 param_1)

{
  BADSPACEBASE *in_sp;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined1 uStack_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  DAT_000065a1 = DAT_000065a1 + '\x01';
  uStack_e = 8;
  uStack_d = 0;
  uStack_c = 0xd;
  uStack_b = 0;
  uStack_a = 0x10;
  uStack_9 = 0;
  uStack_8 = 0;
  uStack_7 = 0;
  uStack_6 = (undefined1)param_1;
  uStack_5 = (undefined1)((uint)param_1 >> 8);
  FUN_01e089bc(DAT_000065a1,0x12,&uStack_e,10);
  return;
}



// ==== FUN_01e08a48 @ 01e08a48 ====

undefined2 FUN_01e08a48(int param_1)

{
  return *(undefined2 *)(param_1 + 0x8c54);
}



// ==== FUN_01e08a68 @ 01e08a68 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e08a68(char param_1)

{
  DAT_000067c2 = 0x43;
  DAT_000067c3 = (char)_DAT_0000413e;
  DAT_000067c4 = (char)(_DAT_0000413e + 0x2000 >> 8);
  DAT_000067c5 = param_1 + '\b';
  DAT_000067c6 = 0;
  DAT_000067c7 = param_1 + '\x04';
  DAT_000067c8 = 0;
  return;
}



// ==== FUN_01e08a9c @ 01e08a9c ====

void FUN_01e08a9c(void)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_00008a0a == '\x01') {
    uVar1 = (uint)DAT_00008a08;
    for (uVar2 = 0; (uVar2 & 0xff) < (uVar1 + 0xfffe & 0xffff); uVar2 = uVar2 + 1) {
      *(undefined1 *)((uVar2 + 0xb & 0xff) + 0x8a03) =
           *(undefined1 *)((uVar2 + 0xc & 0xff) + 0x8a03);
    }
  }
  DAT_00006938 = 1;
  FUN_01e23b42(CONCAT11(DAT_00008a07,DAT_00008a06) + 4);
  return;
}



// ==== FUN_01e08b06 @ 01e08b06 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x01e08b12) */

undefined8 FUN_01e08b06(void)

{
  return 0xff000073a8;
}



// ==== FUN_01e08b26 @ 01e08b26 ====

char FUN_01e08b26(uint param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  pcVar2 = &DAT_000073a8;
  cVar1 = '\0';
  uVar3 = 0;
  while( true ) {
    if (uVar3 < 7) {
      return -1;
    }
    if ((*(ushort *)(pcVar2 + 4) == param_1) && (*pcVar2 == '\x01')) break;
    pcVar2 = pcVar2 + 10;
    cVar1 = cVar1 + '\x01';
    uVar3 = uVar3 + 1;
  }
  return cVar1;
}



// ==== FUN_01e08b50 @ 01e08b50 ====

char FUN_01e08b50(uint param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  pcVar2 = &DAT_000073a8;
  cVar1 = '\0';
  uVar3 = 0;
  while( true ) {
    if (uVar3 < 7) {
      return -1;
    }
    if ((*(ushort *)(pcVar2 + 2) == param_1) && (*pcVar2 == '\x01')) break;
    pcVar2 = pcVar2 + 10;
    cVar1 = cVar1 + '\x01';
    uVar3 = uVar3 + 1;
  }
  return cVar1;
}



// ==== FUN_01e08b7a @ 01e08b7a ====

void FUN_01e08b7a(int param_1,undefined1 param_2,int param_3)

{
  undefined2 uVar1;
  
  DAT_0000224b = 0xc0;
  DAT_0000224c = 0;
  DAT_0000224d = 5;
  DAT_0000224f = 0;
  DAT_00002250 = 6;
  DAT_00002251 = 0;
  uVar1 = *(undefined2 *)(param_1 * 10 + 0x6db5);
  DAT_00002252 = (undefined1)uVar1;
  DAT_00002253 = (undefined1)((ushort)uVar1 >> 8);
  DAT_00002257 = 0;
  DAT_00002256 = 0;
  DAT_00002255 = 0;
  DAT_00002254 = 0;
  if (param_3 != 0) {
    DAT_000067ca = 0x4f;
    DAT_000067d2 = 1;
    DAT_000067d3 = 2;
    DAT_000067d4 = (undefined1)param_3;
    DAT_000067d5 = (undefined1)((uint)param_3 >> 8);
  }
  DAT_0000224e = param_2;
  FUN_01e08a68();
  FUN_01e08a9c();
  return;
}



// ==== FUN_01e08bdc @ 01e08bdc ====

void FUN_01e08bdc(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  puVar2 = &DAT_00008c55;
  for (; param_1 = param_1 + 1, param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    *param_1 = uVar1;
  }
  return;
}



// ==== FUN_01e08c72 @ 01e08c72 ====

void FUN_01e08c72(int param_1)

{
  if ((&DAT_01e21c69)[param_1] == 0xff) {
    DAT_00006830 = 0;
  }
  else {
    DAT_00006830 = (&DAT_01e21c69)[param_1] | DAT_00006ec0;
  }
  return;
}



// ==== FUN_01e08ca4 @ 01e08ca4 ====

void FUN_01e08ca4(undefined1 param_1)

{
  if (DAT_000069ce == '\0') {
    DAT_000069b8 = 1;
    FUN_01e030e6();
    FUN_01e03108();
    DAT_000067ee = param_1;
  }
  return;
}



// ==== FUN_01e08ccc @ 01e08ccc ====

void FUN_01e08ccc(void)

{
  int iVar1;
  char cVar2;
  
  if (DAT_00006ec2 == -8) {
    if ((DAT_000087ca == 'B') && (DAT_000087cb == -1)) {
      for (iVar1 = 0; iVar1 != 0x1f; iVar1 = iVar1 + 1) {
        *(undefined1 *)(iVar1 + 0x6e82) = (&DAT_01e1a790)[iVar1];
      }
      return;
    }
  }
  else {
    if (DAT_00006ec2 == -0x11) {
      DAT_00006831 = DAT_000087d0;
      return;
    }
    if (DAT_00006ec2 == -0xc) {
      if ((DAT_000087ca == 'B') && (DAT_000087cb == '\b')) {
        DAT_00006e8c = 0;
        FUN_01e08ca4(8);
        return;
      }
    }
    else if (DAT_00006ec2 == '\x01') {
      for (iVar1 = 0; iVar1 != 0x1e; iVar1 = iVar1 + 1) {
        *(undefined1 *)(iVar1 + 0x6e83) = (&DAT_000087ca)[iVar1];
      }
      FUN_01e006e4();
      for (cVar2 = '\0'; cVar2 != '\x04'; cVar2 = cVar2 + '\x01') {
        FUN_01e08c72();
      }
      return;
    }
  }
  return;
}



// ==== FUN_01e08d88 @ 01e08d88 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e08d88(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  cVar1 = DAT_00006ec1;
  uVar2 = (uint)DAT_000087c8;
  if (uVar2 - 0x52 < 2) {
    DAT_00006832 = DAT_000087c9;
    FUN_01e08ccc();
    DAT_00008150 = 0;
    for (iVar3 = 0; iVar3 != 0x40; iVar3 = iVar3 + 1) {
      (&DAT_00008151)[iVar3] = (&DAT_0000442c)[iVar3];
    }
    DAT_00006833 = 2;
    DAT_00006924 = 1;
    _DAT_00006862 = 1;
    return;
  }
  if (uVar2 == 0xa2) {
    DAT_00006832 = DAT_000087c9;
    FUN_01e08ccc();
  }
  else if (uVar2 == 0x4b) {
    switch(DAT_000087c9) {
    case 0xef:
      for (iVar3 = 0; iVar3 != 0x40; iVar3 = iVar3 + 1) {
        if ((iVar3 - 0x11U & 0xff) < 0x10) {
          if (cVar1 == -0x50) {
            puVar4 = &DAT_01e1b6dc + iVar3;
            goto LAB_01e08dfe;
          }
          if (cVar1 == -0x80) {
            puVar4 = &DAT_01e1b6ac + iVar3;
            goto LAB_01e08dfe;
          }
          if (cVar1 == -0x70) {
            puVar4 = &DAT_01e1b6bc + iVar3;
            goto LAB_01e08dfe;
          }
          if (cVar1 == -0x60) {
            puVar4 = &DAT_01e1b6cc + iVar3;
            goto LAB_01e08dfe;
          }
          if (cVar1 == 'p') {
            puVar4 = &DAT_01e1b69c + iVar3;
            goto LAB_01e08dfe;
          }
        }
        else {
          puVar4 = &DAT_01e1f694 + iVar3;
LAB_01e08dfe:
          (&DAT_0000442c)[iVar3] = *puVar4;
        }
      }
      DAT_00004433 = cVar1;
      break;
    default:
      for (iVar3 = 0; iVar3 != 0x40; iVar3 = iVar3 + 1) {
        (&DAT_0000442c)[iVar3] = (&DAT_01e1a7c6)[iVar3];
      }
      DAT_0000442c = 1;
      break;
    case 0xf2:
      for (iVar3 = 0; iVar3 != 0x11; iVar3 = iVar3 + 1) {
        (&DAT_0000442c)[iVar3] = (&DAT_01e1b7a4)[iVar3];
      }
      DAT_00004430 = DAT_00006b47;
      DAT_00004431 = DAT_00006b48;
      DAT_00004432 = DAT_00006b49;
      DAT_00004433 = DAT_00006b4a;
      DAT_00004434 = DAT_00006b4b;
      DAT_00004435 = DAT_00006b4c;
      break;
    case 0xf5:
      for (iVar3 = 0; iVar3 != 8; iVar3 = iVar3 + 1) {
        (&DAT_0000442c)[iVar3] = *(undefined1 *)(iVar3 + 0x6be2);
      }
      break;
    case 0xf7:
      for (iVar3 = 0; iVar3 != 0x10; iVar3 = iVar3 + 1) {
        (&DAT_0000442c)[iVar3] = (&DAT_01e1b69d)[iVar3];
      }
      DAT_0000442c = 0xf7;
      DAT_0000442d = 0;
      DAT_0000442e = 2;
      DAT_0000442f = 0xa8;
      DAT_00004430 = 2;
      DAT_00004431 = 0;
      DAT_00004432 = 2;
      DAT_00004433 = '\x03';
      DAT_00004434 = 0xff;
      DAT_00004435 = 0x14;
      DAT_00004436 = 0x33;
      DAT_00004437 = 0;
      break;
    case 0xf8:
      for (iVar3 = 0; iVar3 != 0x40; iVar3 = iVar3 + 1) {
        (&DAT_0000442c)[iVar3] = (&DAT_01e1f654)[iVar3];
      }
      DAT_0000442c = 0xf8;
      DAT_0000442d = 1;
      DAT_0000442e = 0;
      DAT_0000442f = 0;
    }
    DAT_00008150 = 0xa3;
    for (iVar3 = 0; iVar3 != 0x40; iVar3 = iVar3 + 1) {
      (&DAT_00008151)[iVar3] = (&DAT_0000442c)[iVar3];
    }
    DAT_00006833 = 1;
    DAT_00006924 = 1;
    _DAT_00006862 = 1;
    return;
  }
  return;
}



// ==== FUN_01e08f94 @ 01e08f94 ====

void FUN_01e08f94(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  DAT_0000768c = 0x12;
  DAT_0000768d = DAT_00006bc6;
  iVar3 = -8;
  for (iVar2 = 0; iVar2 != 0x18; iVar2 = iVar2 + 6) {
    uVar1 = *(undefined2 *)(&DAT_00006bd2 + iVar3);
    (&DAT_0000768e)[iVar2] = (char)((ushort)uVar1 >> 8);
    (&DAT_0000768f)[iVar2] = (char)uVar1;
    uVar1 = *(undefined2 *)(&DAT_00006bda + iVar3);
    (&DAT_00007690)[iVar2] = (char)((ushort)uVar1 >> 8);
    (&DAT_00007691)[iVar2] = (char)uVar1;
    uVar1 = *(undefined2 *)(iVar3 + 0x6be2);
    (&DAT_00007692)[iVar2] = (char)((ushort)uVar1 >> 8);
    (&DAT_00007693)[iVar2] = (char)uVar1;
    iVar3 = iVar3 + 2;
  }
  iVar3 = 0;
  for (iVar2 = 0; iVar2 != 0xe; iVar2 = iVar2 + 7) {
    uVar1 = *(undefined2 *)(iVar3 + 0x6a30);
    (&DAT_000076a6)[iVar2] = (char)((ushort)uVar1 >> 8);
    (&DAT_000076a7)[iVar2] = (char)uVar1;
    uVar1 = *(undefined2 *)(iVar3 + 0x6a34);
    (&DAT_000076a8)[iVar2] = (char)((ushort)uVar1 >> 8);
    (&DAT_000076a9)[iVar2] = (char)uVar1;
    uVar1 = *(undefined2 *)(iVar3 + 0x6a38);
    (&DAT_000076aa)[iVar2] = (char)((ushort)uVar1 >> 8);
    (&DAT_000076ab)[iVar2] = (char)uVar1;
    (&DAT_000076ac)[iVar2] = *(undefined1 *)(iVar3 + 0x75c2);
    iVar3 = iVar3 + 1;
  }
  DAT_000076b4 = DAT_00006bc1;
  DAT_000076b5 = DAT_00006bc4;
  DAT_000076b6 = DAT_000068c8;
  for (iVar2 = -9; iVar2 != 0; iVar2 = iVar2 + 1) {
    (&DAT_000076c0)[iVar2] = *(undefined1 *)(iVar2 + 0x6bf3);
  }
  DAT_000076c0 = DAT_00006ac9;
  DAT_000076c1 = DAT_00006bc5;
  DAT_000076ef = '\0';
  for (iVar2 = 0; iVar2 != 99; iVar2 = iVar2 + 1) {
    DAT_000076ef = DAT_000076ef + (&DAT_0000768c)[iVar2];
  }
  FUN_01e3780a(0x26,&DAT_0000768c,100);
  return;
}



// ==== FUN_01e0914e @ 01e0914e ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e0914e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e0921e @ 01e0921e ====

void FUN_01e0921e(void)

{
  int iVar1;
  
  for (iVar1 = -6; iVar1 != 0; iVar1 = iVar1 + 1) {
    *(undefined1 *)(iVar1 + 0x6b59) = *(undefined1 *)(iVar1 + 0x7288);
  }
  return;
}



// ==== FUN_01e09242 @ 01e09242 ====

int FUN_01e09242(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar2 = &DAT_00004439;
  for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 + -1) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  }
  return param_2;
}



// ==== FUN_01e09264 @ 01e09264 ====

char FUN_01e09264(byte param_1)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = param_1;
  for (iVar1 = 0; iVar1 != 0x18; iVar1 = iVar1 + 1) {
    (&DAT_00004439)[bVar2] = *(undefined1 *)(iVar1 + 0x4290);
    bVar2 = bVar2 + 1;
  }
  return param_1 + 0x18;
}



// ==== FUN_01e09296 @ 01e09296 ====

void FUN_01e09296(void)

{
  DAT_00004439 = 0x80;
  DAT_0000443a = DAT_00007280;
  return;
}



// ==== FUN_01e092bc @ 01e092bc ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x01e0944c) overlaps instruction at (ram,0x01e0944a)
    */
/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Removing unreachable block (ram,0x01e194b2) */
/* WARNING: Removing unreachable block (ram,0x01e194b4) */
/* WARNING: Removing unreachable block (ram,0x01e1895c) */
/* WARNING: Removing unreachable block (ram,0x01e1214e) */
/* WARNING: Removing unreachable block (ram,0x01e10b7a) */
/* WARNING: Removing unreachable block (ram,0x01e10b82) */
/* WARNING: Removing unreachable block (ram,0x01e10bce) */
/* WARNING: Removing unreachable block (ram,0x01e10c88) */
/* WARNING: Removing unreachable block (ram,0x01e10c90) */
/* WARNING: Removing unreachable block (ram,0x01e10be0) */
/* WARNING: Removing unreachable block (ram,0x01e10be4) */
/* WARNING: Removing unreachable block (ram,0x01e10c24) */
/* WARNING: Removing unreachable block (ram,0x01e10bf2) */
/* WARNING: Removing unreachable block (ram,0x01e10c28) */
/* WARNING: Removing unreachable block (ram,0x01e10c5c) */
/* WARNING: Removing unreachable block (ram,0x01e10c2c) */
/* WARNING: Removing unreachable block (ram,0x01e10c60) */
/* WARNING: Removing unreachable block (ram,0x01e10c7e) */
/* WARNING: Removing unreachable block (ram,0x01e10c94) */
/* WARNING: Removing unreachable block (ram,0x01e10c9c) */
/* WARNING: Removing unreachable block (ram,0x01e10bf0) */
/* WARNING: Removing unreachable block (ram,0x01e1c0ae) */
/* WARNING: Removing unreachable block (ram,0x01e1c0b0) */
/* WARNING: Removing unreachable block (ram,0x01e1c0b8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_01e092bc(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  uint5 uVar5;
  uint6 uVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined2 uVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  undefined4 uVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 uVar21;
  ushort uVar25;
  undefined4 *puVar26;
  undefined8 uVar23;
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint *extraout_r1_04;
  undefined4 extraout_r1_05;
  uint extraout_r1_06;
  ulonglong uVar24;
  undefined4 extraout_r1_07;
  undefined1 uVar27;
  byte bVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  char *pcVar32;
  uint uVar33;
  code *pcVar34;
  char cVar38;
  short sVar39;
  ulonglong in_r2_r3;
  ulonglong uVar35;
  uint uVar41;
  undefined8 uVar36;
  short sVar40;
  ulonglong uVar37;
  int iVar42;
  ushort *puVar43;
  uint uVar44;
  uint *puVar45;
  byte *pbVar46;
  ushort uVar47;
  ulonglong in_r4_r5;
  char *pcVar48;
  undefined1 *puVar49;
  int iVar50;
  undefined2 *puVar51;
  uint uVar52;
  char cVar55;
  ulonglong in_r6_r7;
  longlong lVar53;
  int iVar56;
  ulonglong uVar54;
  undefined8 in_r8_r9;
  longlong lVar57;
  uint *puVar58;
  byte *pbVar59;
  undefined *puVar60;
  uint *puVar61;
  ulonglong in_r10_r11;
  int *piVar62;
  longlong in_r12_r13;
  int iVar63;
  uint uVar64;
  ulonglong in_r14_r15;
  uint in_psr;
  BADSPACEBASE *in_sp;
  uint **ppuVar65;
  int in_cres;
  undefined1 uStack0000007f;
  undefined1 uStack00000081;
  undefined1 uStack00000082;
  uint *local_24;
  byte *pbStack_20;
  uint *puStack_1c;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 *puStack_8;
  ulonglong uVar22;
  
  puStack_8 = (undefined4 *)(in_r10_r11 >> 0x20);
  iVar11 = (int)in_r10_r11;
  uStack_10 = CONCAT44(iVar11,(int)((ulonglong)in_r8_r9 >> 0x20));
  uVar21 = (undefined4)in_r8_r9;
  pbVar59 = (byte *)(in_r6_r7 >> 0x20);
  uStack_18 = CONCAT44(uVar21,pbVar59);
  puVar12 = (uint *)in_r6_r7;
  puStack_1c = puVar12;
  pbVar46 = (byte *)(in_r4_r5 >> 0x20);
  pbStack_20 = pbVar46;
  ppuVar65 = &local_24;
  local_24 = (uint *)in_r4_r5;
  uVar20 = (uint)DAT_00007280;
  puVar26 = (undefined4 *)(uVar20 - 1);
  uVar37 = 0x67c000004130;
  uVar24 = CONCAT44(pbVar46,&DAT_01e1af45);
  if (puVar26 < (undefined4 *)0x3) {
    if (uVar20 == 0x10) {
      uVar22 = (ulonglong)DAT_00007281;
      if (DAT_00007281 == 0x80) {
LAB_01e09650:
        iVar11 = 0x1f;
      }
      else {
        if (DAT_00007281 == 0x10) {
          if ((DAT_00007285 != '\v') && (DAT_00007285 == '\x18')) goto LAB_01e09650;
        }
        else if (DAT_00007281 != 0x1b) goto switchD_01e0931a_caseD_7a;
        iVar11 = 0x12;
      }
      goto LAB_01e0968c;
    }
    if (uVar20 == 0x11) {
      if (DAT_00007281 == 0x26) {
        for (iVar11 = 0; iVar11 != 0x18; iVar11 = iVar11 + 1) {
          *(undefined1 *)(iVar11 + 0x4290) = *(undefined1 *)(iVar11 + 0x7288);
        }
        FUN_01e00174(0x400008);
      }
      goto LAB_01e09578;
    }
    if (uVar20 == 0x21) {
      uVar22 = (ulonglong)DAT_00007281;
      goto switchD_01e0931a_caseD_ab;
    }
    if (uVar20 != 0x22) {
      if (uVar20 == 0x30) goto LAB_01e09578;
      if (uVar20 != 0x40) {
        if (uVar20 == 0x50) {
          DAT_00004439 = 0xd0;
          DAT_0000443a = 0x50;
          DAT_0000443b = 0x8c;
          DAT_0000443c = 6;
          iVar11 = 4;
          goto LAB_01e0957e;
        }
        goto LAB_01e09578;
      }
      if (DAT_00007281 != 1) goto LAB_01e09578;
      iVar11 = 0x314;
      goto LAB_01e09572;
    }
    if (DAT_000069a4 != '\0') {
      DAT_000067c9 = 5;
    }
    goto LAB_01e09578;
  }
  puVar10 = (uint *)((int)puVar26 * 2);
  uVar22 = CONCAT44(puVar26,puVar10);
  uVar7 = SUB41(puVar10,0);
  puVar19 = (uint *)in_r2_r3;
  puVar45 = (uint *)(in_r2_r3 >> 0x20);
  iVar13 = (int)in_r14_r15;
  uVar20 = (uint)(in_r14_r15 >> 0x20);
  switch(DAT_00007280) {
  case 4:
    DAT_00004439 = 0x83;
    DAT_0000443a = 4;
    break;
  case 5:
  case 0x75:
  case 0x96:
  case 0xa3:
  case 0xad:
  case 0xca:
  case 0xd0:
  case 0xe1:
  case 0xea:
  case 0xef:
  case 0xf8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
  case 0x76:
  case 0x97:
  case 0xae:
  case 0xcb:
  case 0xf9:
    goto switchD_01e0931a_caseD_6;
  default:
    uVar18 = 1;
    iVar11 = FUN_01e26fcc();
    uVar21 = (undefined4)(uVar24 >> 0x20);
    if (iVar11 == 0) {
      FUN_01e367de((int)in_r12_r13 + 0x688);
    }
    else {
      ppuVar65[1] = (uint *)0x0;
      *ppuVar65 = (uint *)uVar18;
      FUN_01e26ff8((int)in_r12_r13 + 0x108);
    }
    puVar12 = (uint *)FUN_01e26eec(puVar12,uVar21);
    return puVar12;
  case 8:
  case 0x78:
  case 0x99:
  case 0xa6:
  case 0xb0:
  case 0xcd:
  case 0xe4:
  case 0xed:
  case 0xf2:
  case 0xfb:
    goto switchD_01e0931a_caseD_8;
  case 9:
    goto switchD_01e0931a_caseD_9;
  case 10:
    goto switchD_01e0931a_caseD_a;
  case 0xb:
    goto switchD_01e0931a_caseD_b;
  case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd:
    goto switchD_01e0931a_caseD_d;
  case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf:
  case 0:
    goto switchD_01e0931a_caseD_f;
  case 0x10:
    uVar5 = CONCAT14(DAT_fffffff9,&DAT_01e1af45);
    puVar16 = (undefined1 *)0xfffffff8;
    while( true ) {
      uVar24 = (ulonglong)uVar5;
      iVar11 = (int)in_r2_r3;
      if ((char)(uVar5 >> 0x20) != *(char *)((int)(in_r2_r3 >> 0x20) + iVar11)) break;
      puVar26 = (undefined4 *)((int)puVar26 + 1);
code_r0x01e095c8:
      if (puVar26 < (undefined4 *)0x5) {
        iVar11 = 3;
        FUN_01e09242((int)uVar24 + 3);
        goto LAB_01e0957e;
      }
      uVar5 = CONCAT14(*puVar16,(int)uVar24);
      puVar16 = puVar16 + -1;
      in_r2_r3 = CONCAT44(puVar26 + 0x19f0,iVar11);
    }
    goto LAB_01e095d8;
  case 0x11:
    uVar22 = (ulonglong)DAT_00007281;
  case 0xc5:
    switch((int)uVar22) {
    case 1:
LAB_01e095d8:
      FUN_01e0921e();
switchD_01e0931a_caseD_b7:
      iVar13 = (int)uVar37;
      iVar11 = 0x1a;
      FUN_01e09242((int)uVar24 + 0xe68);
      FUN_01e02674(iVar13 + 0x30c);
      break;
    case 2:
      iVar11 = 0x393;
      for (uVar22 = 0x4165; iVar13 = (int)(uVar22 >> 0x20), iVar13 != 6;
          uVar22 = CONCAT44((int)(uVar22 >> 0x20) + 1,(undefined1 *)uVar22 + -1)) {
        in_r2_r3 = CONCAT44(iVar13 + 0x67c0,iVar11);
switchD_01e0931a_caseD_7f:
        iVar11 = (int)in_r2_r3;
        *(undefined1 *)uVar22 = *(undefined1 *)((int)(in_r2_r3 >> 0x20) + iVar11);
      }
      in_r6_r7 = 0x300000000;
      FUN_01e09242(&DAT_01e1af45);
switchD_01e0931a_caseD_84:
      in_r2_r3 = 0x600000000;
      in_r10_r11 = 0;
switchD_01e0931a_caseD_87:
      uVar23 = 0;
      while (iVar11 = (int)(in_r10_r11 >> 0x20), iVar11 != 0x10) {
        in_r2_r3 = in_r2_r3 & 0xffffffff00000000;
        uVar20 = 0;
        if ((byte)((ulonglong)uVar23 >> 0x20) < 6) {
          uVar20 = (int)((ulonglong)uVar23 >> 0x20) + 1;
        }
        iVar13 = (int)(uVar37 >> 0x20) + 0x387;
        uVar33 = (uint)(in_r6_r7 >> 0x20);
        uVar44 = (uint)*(byte *)((uVar20 & 0xff) + iVar13);
        in_r6_r7 = (ulonglong)uVar44;
        if ((uVar33 & 0xff) < 6) {
          in_r6_r7 = CONCAT44(uVar33 + 1,uVar44);
        }
        bVar8 = (byte)(in_r6_r7 >> 0x20);
        uVar24 = (ulonglong)CONCAT14(bVar8,iVar13);
        in_r10_r11 = CONCAT44(iVar11,(uint)*(byte *)((uint)bVar8 + iVar13) ^ (uint)in_r6_r7);
code_r0x01e0939e:
        if ((byte)(in_r2_r3 >> 0x20) < 6) {
          in_r2_r3 = (ulonglong)((int)(in_r2_r3 >> 0x20) + 1);
        }
        iVar11 = (int)uVar37 + 0x30;
        iVar14 = (int)(in_r10_r11 >> 0x20);
        iVar13 = iVar14 + (int)uVar37;
        uVar44 = (uint)*(byte *)(iVar13 + 0xc00);
        in_r6_r7 = CONCAT44((int)(in_r6_r7 >> 0x20),uVar44);
        iVar11 = ((uint)*(byte *)((uint)(byte)in_r2_r3 + iVar11) ^
                 (uint)*(byte *)((uint)(byte)in_r2_r3 + (int)uVar24) ^ (uint)in_r10_r11 ^
                 (uint)*(byte *)((int)(uVar24 >> 0x20) + iVar11)) + uVar44;
        uVar23 = CONCAT44(uVar20,iVar11);
        *(char *)(iVar13 + 0xc0) = (char)iVar11;
        in_r2_r3 = in_r2_r3 << 0x20;
        in_r10_r11 = (ulonglong)(iVar14 + 1) << 0x20;
      }
      iVar13 = (int)uVar37;
      pbVar46 = (byte *)(iVar13 + 0x30c);
      for (iVar11 = 0; iVar11 != -0x10; iVar11 = iVar11 + -1) {
        *pbVar46 = *(byte *)(iVar11 + iVar13 + 0xc0f) ^ 0xaa;
        pbVar46 = pbVar46 + 1;
      }
      *(undefined2 *)(iVar13 + 0xe) = 0x30;
      func_0x01e0925a();
      iVar11 = 0x13;
      break;
    case 3:
      DAT_00004439 = 0x81;
      DAT_0000443a = 1;
      iVar11 = 3;
      DAT_0000443b = 3;
      break;
    case 4:
      puVar16 = (undefined1 *)0x4165;
      puVar26 = (undefined4 *)0x0;
      iVar11 = 0xac2;
      goto code_r0x01e095c8;
    default:
      uVar22 = CONCAT44(0x81,(int)uVar22);
      in_r2_r3 = 0x4439;
switchD_01e0931a_caseD_13:
      puVar16 = (undefined1 *)in_r2_r3;
      *puVar16 = (char)(uVar22 >> 0x20);
      puVar16[1] = 1;
      puVar16[2] = (char)uVar22;
      iVar11 = 3;
    }
    goto LAB_01e0957e;
  case 0x12:
    break;
  case 0x13:
    goto switchD_01e0931a_caseD_13;
  case 0x14:
  case 0x60:
  case 0x91:
  case 0xd3:
  case 0xd9:
switchD_01e0931a_caseD_14:
    FUN_01e24506((int)uVar22);
    goto LAB_01e25526;
  case 0x15:
    goto switchD_01e0931a_caseD_15;
  case 0x16:
  case 0x29:
  case 0x2e:
  case 0x62:
  case 0xdb:
    puRam01e1af61 = puVar10;
  case 0x2d:
    nop();
code_r0x01e0d3a2:
    if (puVar10 == (uint *)0x0) {
      iVar11 = (int)uVar24;
      *(undefined1 *)(iVar11 + 0x402) = 8;
      *(undefined1 *)(iVar11 + 0x403) = 0x52;
      *(undefined1 *)(iVar11 + 0x404) = 0;
      *(undefined1 *)(iVar11 + 0x405) = 0;
      uVar21 = *(undefined4 *)(iVar11 + 0x1bc);
      *(char *)(iVar11 + 0x406) = (char)((uint)uVar21 >> 0x18);
      *(char *)(iVar11 + 0x407) = (char)((uint)uVar21 >> 0x10);
      *(char *)(iVar11 + 0x408) = (char)((uint)uVar21 >> 8);
      *(char *)(iVar11 + 0x409) = (char)uVar21;
      uVar21 = 0xe;
      if (*(char *)(iVar11 + 0x1b4) == '\0') {
        uVar21 = 0;
      }
      FUN_01e09c7c(uVar21,8);
    }
    else {
      FUN_01e09bf0();
      uVar22 = (ulonglong)((int)uVar24 + 0x400);
code_r0x01e0d3ac:
      iVar11 = (int)uVar22;
      uVar22 = CONCAT44(8,iVar11);
      *(undefined1 *)(iVar11 + 2) = 8;
      uVar24 = (ulonglong)((int)uVar24 + 0x1b4);
code_r0x01e0d3b4:
      iVar11 = (int)uVar22;
      *(undefined1 *)(iVar11 + 3) = 0x52;
      uVar37 = uVar24 & 0xffffffff;
      *(undefined1 *)(iVar11 + 4) = 0;
      *(undefined1 *)(iVar11 + 5) = 1;
      uVar21 = *(undefined4 *)((char *)uVar24 + 8);
      *(char *)(iVar11 + 6) = (char)((uint)uVar21 >> 0x18);
      *(char *)(iVar11 + 7) = (char)((uint)uVar21 >> 0x10);
      *(char *)(iVar11 + 8) = (char)((uint)uVar21 >> 8);
      *(char *)(iVar11 + 9) = (char)uVar21;
      uVar21 = 0xe;
      if (*(char *)uVar24 == '\0') {
        uVar21 = 0;
      }
      FUN_01e09c7c(uVar21,8);
      *(char *)((int)uVar37 + 4) = (char)(uVar37 >> 0x20);
    }
    return (uint *)0x0;
  case 0x17:
  case 0xb6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x18:
    FUN_01e07eaa();
    puVar12 = (uint *)FUN_01e07edc();
    return puVar12;
  case 0x19:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1a:
  case 0x50:
  case 100:
  case 0xb9:
  case 0xbd:
    _DAT_0000413c = (int)puVar10 >> 0x10;
    _DAT_00004134 = (int)pbVar46 - iVar11 * (int)pbVar59;
    uVar33 = (int)puVar12 + (int)puVar26 * -2 & 0xffff;
    iVar11 = iVar11 * ((uint)puVar12 & 0xffff);
    uVar20 = FUN_01e252a2(&DAT_01e1af45);
    iVar13 = (int)uVar37;
    uVar44 = ((uint)in_r10_r11 - *(int *)(iVar13 + 0x10)) + iVar11;
    uVar22 = uVar37;
    if ((uVar33 == uVar20 - 1) &&
       (uVar22 = CONCAT44(1,iVar13), 0x270 < (uint)(*(int *)(iVar13 + 0x10) + *(int *)(iVar13 + 4)))
       ) {
      uVar22 = uVar37 & 0xffffffff;
    }
    uVar33 = (uint)(uVar24 >> 0x20);
    uVar37 = uVar22;
    if (uVar44 <= uVar33) {
      uVar37 = CONCAT44(((uVar33 - uVar44) / (uint)in_r10_r11) / uVar20 + (int)(uVar22 >> 0x20) + 1,
                        (int)uVar22);
    }
    iVar11 = FUN_01e25276((int)uVar24);
    uVar20 = (uint)uVar24;
    if (iVar11 != 0) {
      FUN_01e244e0(uVar20);
      uVar24 = CONCAT44((int)(uVar37 >> 0x20),uVar20) & 0xffffffffffff;
      uVar22 = (ulonglong)uVar20;
      goto switchD_01e0931a_caseD_14;
    }
    uVar24 = CONCAT44((int)(uVar37 >> 0x20),uVar20) & 0xffffffffffff;
    goto LAB_01e25526;
  case 0x1b:
    goto switchD_01e0931a_caseD_1b;
  case 0x1d:
    if (*(char *)(uVar20 + 0x1f8) == '\0') {
      uVar22 = (ulonglong)CONCAT14(*(undefined1 *)(uVar20 + 0x40a),(uint)*(byte *)(uVar20 + 0x2b4));
      in_r2_r3 = (ulonglong)(*(byte *)(uVar20 + 0x2b4) ^ 1) << 0x20;
      goto switchD_01e0931a_caseD_c0;
    }
    FUN_01e0dec0(0);
    goto LAB_01e0f9d6;
  case 0x1e:
    uVar24 = (ulonglong)(uint)((int)&DAT_01e1af45 + (int)puVar12) << 0x20;
    if (*(char *)(iVar13 + (int)puVar10) != -0x33) goto switchD_01e0a0d4_caseD_8;
    *(undefined1 *)(iVar13 + 0x310) = 1;
    *(undefined1 *)(iVar13 + 0x314) = 1;
    switch(*(undefined1 *)(iVar13 + 0x1dc6)) {
    case 0:
      uVar7 = 1;
      break;
    case 1:
      *(undefined1 *)(iVar13 + 0x56) = 2;
      goto switchD_01e0a25e_default;
    case 2:
      uVar7 = 3;
      break;
    case 3:
      uVar7 = 4;
      break;
    default:
      goto switchD_01e0a25e_default;
    }
    *(undefined1 *)(iVar13 + 0x56) = uVar7;
    *(undefined1 *)(iVar13 + 0x43) = uVar7;
switchD_01e0a25e_default:
    *(undefined2 *)(iVar13 + 0xd2) = 0x14d;
    *(undefined1 *)(iVar13 + 0x30) = *(undefined1 *)(iVar13 + 0x1dc7);
    *(undefined2 *)(iVar13 + 0xd4) = 0x14d;
    *(undefined1 *)(iVar13 + 0x31) = *(undefined1 *)(iVar13 + 0x1dc8);
    uStack_10._0_4_ = CONCAT13(*(undefined1 *)(iVar13 + 0x1dc9),(int3)((ulonglong)in_r8_r9 >> 0x20))
    ;
    uStack_10 = (ulonglong)(uint)uStack_10;
    uVar22 = CONCAT44(iVar13 + 0x1dc6,(uint)*(byte *)(iVar13 + 0x1dca));
switchD_01e0931a_caseD_6:
    iVar11 = (int)(uVar22 >> 0x20);
    in_r2_r3 = (ulonglong)*(byte *)(iVar11 + 6) << 0x20;
    uVar24 = CONCAT44((int)(uVar24 >> 0x20),(uint)*(byte *)(iVar11 + 7));
    uStack_10._0_6_ = CONCAT15(*(undefined1 *)(iVar11 + 5),CONCAT14((char)uVar22,(uint)uStack_10));
    uStack_10 = (ulonglong)(uint6)uStack_10;
switchD_01e0931a_caseD_b5:
    uStack_10 = CONCAT17((char)uVar24,CONCAT16((char)(in_r2_r3 >> 0x20),(uint6)uStack_10));
    uVar24 = CONCAT44((int)(uVar24 >> 0x20),iVar13 + 0x42a);
    puStack_8 = *(undefined4 **)((int)(uVar22 >> 0x20) + 8);
    iVar11 = func_0x021127b0(iVar13 + 0x42a,9);
    if (iVar11 != 0) {
      puVar12 = (uint *)func_0x021127a8((int)uVar24,9);
      return puVar12;
    }
    goto switchD_01e0a0d4_caseD_8;
  case 0x1f:
    goto switchD_01e0931a_caseD_1f;
  case 0x20:
    goto switchD_01e0931a_caseD_20;
  case 0x21:
    goto switchD_01e0931a_caseD_21;
  case 0x22:
    do {
      uVar20 = (int)(in_r14_r15 >> 0x20) + 1;
      in_r6_r7 = CONCAT44((int)(in_r6_r7 >> 0x20),uVar20) & 0xffffffff000000ff;
      FUN_01e0d4b0(uVar20 & 0xff);
switchD_01e0931a_caseD_23:
      uVar21 = (undefined4)((ulonglong)in_r12_r13 >> 0x20);
      iVar11 = (int)(uVar37 >> 0x20);
      uVar20 = (uint)*(byte *)((int)uVar24 + iVar11);
      uVar37 = CONCAT44(iVar11,uVar20);
      if (uVar20 == 0x12) {
        FUN_01e0d554(1);
        FUN_01e0d554(1);
      }
      uVar18 = FUN_01e0d554(0);
      in_r12_r13 = CONCAT44(uVar21,uVar18);
      uVar20 = FUN_01e0d5e4();
      if ((int)uVar24 == 0xc0) {
        uVar20 = (uint)*(byte *)((int)(uVar24 >> 0x20) + 5);
        FUN_01e0d46e();
        FUN_01e0d4b0((int)(in_r14_r15 >> 0x20));
        FUN_01e0d4b0(uVar20);
        FUN_01e0d46e();
        FUN_01e0d4b0((int)in_r6_r7);
        uVar20 = FUN_01e0d554(0);
        in_r10_r11 = (ulonglong)uVar20;
        uVar20 = FUN_01e0d5e4();
      }
      if ((int)in_r12_r13 == (int)in_r14_r15) {
        uVar20 = (uint)((int)uVar24 != 0xc0);
        in_r2_r3 = CONCAT44((int)(in_r2_r3 >> 0x20),(uint)in_r10_r11) & 0xffffffff000000ff;
        uVar7 = (undefined1)(in_r2_r3 >> 0x20);
        if ((((uint)in_r10_r11 & 0xff) == (uint)*(byte *)((int)(uVar24 >> 0x20) + 6)) ||
           (uVar20 != 0)) {
LAB_01e0daf4:
          DAT_00006822 = uVar7;
          uVar44 = (uint)uVar37;
          DAT_00006821 = (undefined1)uVar20;
LAB_01e0db02:
          if (uVar44 != 0) {
            uVar20 = 1;
          }
          lVar53 = CONCAT44(0x67c0,uVar20);
          if (uVar44 != 0) {
            DAT_00006824 = (undefined1)uVar20;
          }
          goto LAB_01e0dd58;
        }
      }
      do {
        while( true ) {
          iVar11 = (int)uVar24 + 0x10;
          in_r10_r11 = in_r10_r11 & 0xffffffff;
          uVar44 = (int)((ulonglong)in_r12_r13 >> 0x20) + 1;
          in_r12_r13 = (ulonglong)uVar44 << 0x20;
          if (uVar44 < 0x11) {
            uVar44 = (uint)DAT_00006dc1;
            goto LAB_01e0db02;
          }
          iVar13 = iVar11 + (int)(uVar37 >> 0x20);
          uVar24 = CONCAT44(iVar13,iVar11);
          uVar44 = (uint)*(byte *)(iVar13 + 4);
          puVar12 = (uint *)(in_r6_r7 >> 0x20);
          in_r6_r7 = CONCAT44(puVar12,(uint)*(byte *)(iVar13 + 3));
          if (iVar11 != 0x110) break;
          puVar12[2] = puVar12[2] & 0x8000;
          puVar12[5] = puVar12[5] & 0x8000;
          *puVar12 = *puVar12 & 0x8000;
          puVar12[2] = puVar12[2] & 0x8000;
          puVar12[2] = puVar12[2] & 0x8000;
          puVar12[5] = puVar12[5] & 0x8000;
          *puVar12 = *puVar12 | 0x8000;
          puVar12[2] = puVar12[2] & 0x8000;
          puVar12[2] = puVar12[2] & 0x8000;
          puVar12[5] = puVar12[5] & 0x8000;
          puVar12[4] = puVar12[4] | 0x8000;
          *puVar12 = *puVar12 | 0x8000;
          puVar12[2] = puVar12[2] & 0x8000;
          puVar12[4] = puVar12[4] | 0x8000;
          puVar12[4] = puVar12[4] | 0x8000;
          puVar12[4] = puVar12[4] | 0x8000;
          puVar12[4] = puVar12[4] | 0x8000;
          FUN_01e0d618();
          FUN_01e0d634(((uint)in_r6_r7 ^ 0x80) & 0xff);
          FUN_01e0d686();
          uVar20 = FUN_01e0d6e8();
          if (extraout_r1_06 == uVar44) {
            uVar37 = (ulonglong)*(byte *)((int)uVar24 + (int)(uVar37 >> 0x20));
            uVar7 = (char)(in_r2_r3 >> 0x20);
            goto LAB_01e0daf4;
          }
        }
        in_r14_r15 = (ulonglong)CONCAT14(*(undefined1 *)(iVar13 + 2),(uint)*(byte *)(iVar13 + 4));
        puVar12[0x12] = puVar12[0x12] & 0xffffff7f;
        puVar12[0x15] = puVar12[0x15] & 0xffffff7f;
        puVar12[0x13] = puVar12[0x13] | 0x80;
        puVar12[0x10] = puVar12[0x10] | 0x80;
        puVar12[0x12] = puVar12[0x12] & 0xffffff7f;
        puVar12[0x12] = puVar12[0x12] & 0x200;
        puVar12[0x15] = puVar12[0x15] & 0x200;
        puVar12[0x13] = puVar12[0x13] | 0x200;
        puVar12[0x10] = puVar12[0x10] | 0x200;
        puVar12[0x12] = puVar12[0x12] & 0x200;
        puVar12[0x14] = puVar12[0x14] & 0xffffff7f;
        puVar12[0x14] = puVar12[0x14] & 0x200;
        FUN_01e0d46e();
        iVar11 = FUN_01e0d4b0((int)(in_r14_r15 >> 0x20));
        uVar20 = 0;
      } while (iVar11 == 0);
      FUN_01e0d4b0((int)in_r6_r7);
      FUN_01e0d46e();
    } while( true );
  case 0x23:
    goto switchD_01e0931a_caseD_23;
  case 0x24:
    in_r2_r3 = (ulonglong)CONCAT14(*(undefined1 *)(iVar13 + (int)puVar45),puVar19);
    goto code_r0x01e0bfa0;
  case 0x25:
  case 0x71:
  case 0xa0:
  case 199:
  case 0xd7:
  case 0xdc:
  case 0xe8:
  case 0xf5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x26:
    uVar21 = 0xc;
    goto LAB_01e29208;
  case 0x27:
    while( true ) {
      puVar43 = (ushort *)in_r2_r3;
      if ((undefined4 *)uVar24 == puVar26) {
        return (uint *)(uint)*puVar43;
      }
      iVar11 = (int)(in_r2_r3 >> 0x20) + 1;
      in_r2_r3 = CONCAT44(iVar11,puVar43 + 4);
      if (9 < iVar11) break;
      uVar24 = (ulonglong)*(uint *)(puVar43 + 2);
    }
    return puVar10;
  case 0x28:
    puVar16 = (undefined1 *)((int)puVar10 + iVar13);
    uVar23 = 0x4000000ff;
    while( true ) {
      iVar11 = (int)((ulonglong)uVar23 >> 0x20);
      if (iVar11 == 0) break;
      puVar16[-3] = 0;
      puVar16[-1] = (char)uVar23;
      *puVar16 = (char)uVar23;
      puVar16 = puVar16 + 0xf4;
      uVar23 = CONCAT44(iVar11 + -1,(int)uVar23);
    }
    puVar12 = (uint *)switchD_01e0b670::caseD_38();
    return puVar12;
  case 0x2a:
    if (pbVar46[-0x10] != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2b:
    if (puVar26 == (undefined4 *)0x0) {
      halt_baddata();
    }
    if (puVar10 == (uint *)0x0) {
      halt_baddata();
    }
    if (puVar10 != (uint *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2c:
  case 0x32:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2f:
    puVar12 = (uint *)FUN_01e36848(2,s__Info____LL_E_HCI_EVENT_ENCRYPTI_01e1f231);
    if ((int)(uVar24 >> 0x20) == 6) {
      puVar12 = (uint *)FUN_01e36848();
    }
    return puVar12;
  case 0x30:
  case 0x3b:
  case 0x45:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x31:
    uVar22 = CONCAT44(puVar26,(int)puVar10 + -0x6d);
code_r0x01e0bfa0:
    uStack0000007f = (undefined1)(uVar22 >> 0x20);
    param_3 = (undefined1)uVar22;
    uStack00000081 = (undefined1)in_r2_r3;
    uStack00000082 = (undefined1)(in_r2_r3 >> 0x20);
    puVar12 = (uint *)switchD_01e0b670::caseD_38();
    return puVar12;
  case 0x33:
  case 0x4a:
LAB_01e25526:
    in_r2_r3 = (ulonglong)*(uint *)uVar24 << 0x20;
    uVar20 = FUN_01e244e0((uint *)uVar24);
    uVar22 = (ulonglong)((uVar20 & 0xff80) >> 7);
code_r0x01e25534:
    in_r6_r7 = (ulonglong)((int)(in_r2_r3 >> 0x20) + 0x158);
    if ((uint)uVar22 < (uint)(uVar24 >> 0x20)) {
      in_cres = 1;
    }
    else {
      in_cres = 0;
    }
switchD_01e0931a_caseD_9c:
    iVar11 = (int)uVar22;
    if (in_cres == 1) {
      iVar11 = iVar11 + (uint)*(ushort *)in_r6_r7;
    }
    uVar20 = iVar11 - (int)(uVar24 >> 0x20);
    uVar21 = FUN_01e244e0((int)uVar24);
    uVar22 = CONCAT44(~uVar20,uVar21) & 0xffffffff0000fe00;
    FUN_01e24506((int)uVar24,(uint)uVar22 | (uint)(uVar22 >> 0x20));
    FUN_01e244e0((int)uVar24);
    FUN_01e24506((int)uVar24,0xffff0040);
switchD_01e0931a_caseD_9:
    puVar10 = (uint *)uVar37;
    puVar51 = (undefined2 *)in_r6_r7;
    uVar21 = FUN_01e244e0((int)uVar24);
    uVar37 = (ulonglong)CONCAT24(*puVar51,uVar21) & 0xffff01ff0000fe00;
    FUN_01e24506((int)uVar24,(uint)uVar37 | (uint)(uVar37 >> 0x20));
    uVar20 = FUN_01e244e0((int)uVar24);
    puVar12 = (uint *)FUN_01e24506((int)uVar24,(uVar20 & 0xffff) + (int)(uVar24 >> 0x20));
    *puVar10 = *puVar10 | 4;
    return puVar12;
  case 0x34:
    nop();
    return puVar10;
  case 0x36:
    func_0x020000a0(0x13);
    iVar14 = (int)in_r10_r11;
    iVar11 = (int)uVar24;
    func_0x020000a0(0x14);
    iVar13 = 0x67c0;
    DAT_00006b1c = 1;
    DAT_00006b20 = 1;
    DAT_00006b24 = 1;
    if ((*(uint *)((int)(uVar37 >> 0x20) + -0x800) & 1) == 0) {
      FUN_01e14f26(1);
    }
    iVar50 = (int)uVar37;
    FUN_01e36a6a(0x1a,&LAB_01e14f60);
    *(code **)(iVar13 + 0x370) = FUN_01e14ede;
    if (*(char *)(iVar50 + 0x30c) != '\x01') {
      func_0x020000a0(0xa5);
    }
    func_0x020000a0(0x809b);
    func_0x020000a0(0x32);
    uVar15 = *(undefined4 *)(iVar50 + 0x28);
    uVar21 = FUN_01e15790(uVar15);
    *(undefined4 *)(iVar50 + 0x1c) = uVar21;
    uVar18 = FUN_01e15790(1);
    *(undefined4 *)(iVar50 + 0x20) = uVar18;
    FUN_01e151ea();
    uVar21 = FUN_01e151ea(uVar21);
    ppuVar65[1] = (uint *)uVar15;
    pcVar48 = s__Info____PMU_Prepare____d_us____R_01e1f01c;
    *ppuVar65 = (uint *)uVar21;
    FUN_01e36848(s__Info____PMU_Prepare____d_us____R_01e1f01c);
    func_0x020000a0(0x36);
    func_0x020000a0(0x37);
    *ppuVar65 = (uint *)*(undefined4 *)(iVar50 + 0x1c);
    FUN_01e36848(2,iVar14 + 0x3902);
    iVar14 = *(int *)(iVar50 + 0x1c) + *(int *)(iVar50 + 0x20);
    iVar13 = FUN_01e15790(0x47e);
    iVar14 = iVar14 + iVar13;
    *(int *)(iVar50 + 0x24) = iVar14;
    iVar13 = FUN_01e15790(0x5dc);
    iVar14 = iVar14 + iVar13;
    *(int *)(iVar50 + 0x24) = iVar14;
    iVar13 = FUN_01e15790(0x5dc);
    *(int *)(iVar50 + 0x24) = iVar14 + iVar13;
    uVar21 = FUN_01e151ea(iVar14 + iVar13);
    *ppuVar65 = (uint *)uVar21;
    FUN_01e36848(2,pcVar48 + 0x125);
    func_0x020000a0(0x74);
    func_0x02000114(0x17);
    if (*(char *)(iVar11 + 0xc) == '\0') {
      thunk_EXT_FUN_0200010a();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x37:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x38:
    *(undefined1 *)(iVar13 + (int)puVar10) = 0;
    uVar22 = 0x248;
  case 0x3d:
    uVar7 = (undefined1)(uVar22 >> 0x20);
    *(undefined1 *)(iVar13 + (int)uVar22) = uVar7;
    *(undefined1 *)(iVar13 + 0x38) = uVar7;
    *(short *)(iVar13 + 0xde) = (short)(uVar22 >> 0x20);
    if (*(char *)(iVar13 + 0x6a6) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(iVar13 + 0x188) = 1;
    puVar12 = (uint *)switchD_01e0b670::caseD_38();
    return puVar12;
  case 0x39:
    if (puVar10 != (uint *)0x0) goto code_r0x01e0d3ac;
    goto code_r0x01e0d3b4;
  case 0x3a:
  case 0x44:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3c:
    *(undefined1 *)(iVar13 + 0x15b9) = uVar7;
    FUN_01e0515e();
    FUN_01e09dba();
    puVar12 = (uint *)switchD_01e0b670::caseD_38();
    return puVar12;
  case 0x3f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x40:
  case 0x54:
    while( true ) {
      iVar13 = (int)(in_r2_r3 >> 0x20);
      uVar24 = CONCAT44((int)(uVar24 >> 0x20),iVar13) & 0xffffffff00000007;
      iVar14 = (int)uVar24;
      iVar50 = (int)(uVar24 >> 0x20) + 1;
      uVar24 = CONCAT44(iVar50,iVar14);
      iVar11 = (int)in_r6_r7;
      uVar20 = iVar13 + 1;
      if (((uint)in_r2_r3 & 1 << iVar14) != 0) {
        iVar11 = (int)uVar37;
        *(char *)((int)puVar10 + iVar11 + 0x90) = (char)iVar50 + -1;
        *(char *)((int)puVar10 + iVar11 + 0xe0) = (char)(in_r6_r7 >> 0x20);
        uVar37 = CONCAT44((int)(uVar37 >> 0x20),iVar11 + 1);
        iVar11 = uVar20 * 2;
        uVar24 = (ulonglong)uVar20 << 0x20;
      }
      if (0x24 < (int)uVar20) break;
      if (uVar20 == 0) {
        uVar37 = uVar37 & 0xffffffff;
      }
      else if (uVar20 == 0xb) {
        uVar37 = CONCAT44(2,(int)uVar37);
      }
      *(char *)((int)puVar10 + iVar13 + 0x69) = (char)(uVar24 >> 0x20);
      iVar14 = (int)(uVar37 >> 0x20) + iVar11 + 2;
      in_r6_r7 = CONCAT44(iVar14,iVar11 + 2);
      *(char *)((int)puVar10 + iVar13 + 0xb9) = (char)iVar14;
      in_r2_r3 = CONCAT44(uVar20,(uint)*(byte *)((int)puVar26 + ((int)uVar20 >> 3)));
    }
    for (iVar11 = 0; iVar11 != 3; iVar11 = iVar11 + 1) {
      uVar7 = *(undefined1 *)((int)&DAT_01e1aa72 + iVar11);
      cVar55 = (char)iVar11 + '%';
      *(char *)((int)puVar10 + iVar11 + 0x8d) = cVar55;
      *(undefined1 *)((int)puVar10 + iVar11 + 0xdd) = uVar7;
      *(char *)((int)puVar10 + iVar11 + 0xb5) = cVar55;
      *(undefined1 *)((int)puVar10 + iVar11 + 0x105) = uVar7;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x41:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x42:
    if (puVar26 == (undefined4 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (puVar10 != (uint *)0x0) {
      if (puVar26 == (undefined4 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x43:
    *(char *)(iVar13 + (int)puVar10) = (char)puVar26;
    *(char *)((int)puVar10 + iVar13 + -4) = (char)puVar26;
    puVar12 = (uint *)switchD_01e0b670::caseD_38();
    return puVar12;
  case 0x46:
    *(undefined1 *)(iVar13 + 0x15bd) = *(undefined1 *)(iVar13 + (int)puVar10);
    *(undefined1 *)(iVar13 + 0x15be) = *(undefined1 *)(iVar13 + 0x6a7);
    puVar12 = (uint *)switchD_01e0b670::caseD_38();
    return puVar12;
  case 0x47:
    *(char *)((int)puVar19 + 6) = (char)puVar10[1];
    *(undefined1 *)((int)puVar19 + 7) = *(undefined1 *)((int)puVar10 + 5);
    *(undefined1 *)(puVar19 + 1) = *(undefined1 *)((int)puVar10 + 6);
    *(undefined1 *)((int)puVar19 + 5) = *(undefined1 *)((int)puVar10 + 7);
    puVar12 = (uint *)switchD_01e0b670::caseD_38();
    return puVar12;
  case 0x49:
    goto switchD_01e0931a_caseD_49;
  case 0x4b:
    if (((uint)puVar26 & (uint)puVar10) != 0) goto LAB_01e19388;
    uVar20 = FUN_01e190c2(&stack0x00000008);
    uVar22 = (ulonglong)uVar20;
    goto switchD_01e0931a_caseD_15;
  case 0x4d:
    while( true ) {
      iVar13 = (int)(uVar22 >> 0x20);
      iVar11 = (int)uVar22 + 1;
      uVar22 = CONCAT44(iVar13,iVar11);
      if (iVar11 == 0) break;
      iVar14 = (int)in_r2_r3;
      iVar11 = iVar11 + (int)puVar12;
      in_r2_r3 = CONCAT44(iVar11,iVar14);
      *(undefined1 *)(iVar11 + iVar14) = *(undefined1 *)(iVar11 + iVar13);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4f:
    if (pbVar46 == (byte *)0x0) {
      puVar12 = (uint *)FUN_01e09a12(5,*(undefined1 *)(puVar26 + ((uint)puVar12 | 1)));
      return puVar12;
    }
    *(uint **)pbVar59 = puVar19;
    puVar12 = (uint *)FUN_01e09a12(9,*(undefined1 *)(puVar26 + ((uint)puVar12 | 1)));
    return puVar12;
  case 0x51:
switchD_01e0931a_caseD_51:
    puVar60 = (undefined *)in_r10_r11;
    iVar11 = (int)uVar22;
    iVar13 = (int)(in_r14_r15 >> 0x20);
    if (iVar11 == 0) {
      if (*(char *)(iVar13 + 0x1b0) == '\0') {
        if (*(char *)(iVar13 + 0x10f) != '\0') goto LAB_01e1281a;
        *(undefined4 *)(iVar13 + 0x1ac) = 0;
        cVar55 = *(char *)(iVar13 + 0x26e6);
        if (cVar55 == '\x01') {
          FUN_01e0e500();
          FUN_01e0e918();
          FUN_01e0eeca();
          iVar11 = (int)(in_r14_r15 >> 0x20);
          *(undefined1 *)(iVar11 + 0x230) = 1;
          iVar11 = func_0x021127b0(iVar11 + 0x846,0x24);
          iVar13 = (int)(in_r14_r15 >> 0x20);
          if (iVar11 == 0) {
            iVar11 = *(int *)(iVar13 + 0x19c);
            if (iVar11 == 0) {
              cVar55 = *(char *)(iVar13 + 0x26e6);
              puVar60 = &DAT_01e1af10;
              goto LAB_01e130e2;
            }
          }
          else {
            iVar11 = 10;
            *(undefined4 *)(iVar13 + 0x19c) = 10;
          }
          *(int *)(iVar13 + 0x19c) = iVar11 + -1;
          pcVar48 = (char *)(iVar13 + 0x84a);
          if (*pcVar48 == '\x03') {
            uVar37 = ZEXT48(pcVar48);
          }
          else {
            if (*pcVar48 != '\x01') goto LAB_01e1307c;
            uVar37 = CONCAT44(2,pcVar48);
          }
          *(undefined1 *)uVar37 = (char)(uVar37 >> 0x20);
LAB_01e1307c:
          puVar12 = (uint *)func_0x021127a8(iVar13 + 0x86a,9);
          return puVar12;
        }
LAB_01e130e2:
        if (cVar55 == '\x02') {
          FUN_01e0e500();
          FUN_01e0e918();
          FUN_01e0eeca();
          iVar11 = func_0x021127b0((int)(in_r14_r15 >> 0x20) + 0x846,0x24);
          iVar13 = (int)(in_r14_r15 >> 0x20);
          if (iVar11 == 0) {
            iVar11 = *(int *)(iVar13 + 0x19c);
            if (iVar11 == 0) {
              cVar55 = *(char *)(iVar13 + 0x26e6);
              goto LAB_01e131ac;
            }
          }
          else {
            iVar11 = 10;
            *(undefined4 *)(iVar13 + 0x19c) = 10;
          }
          *(int *)(iVar13 + 0x19c) = iVar11 + -1;
          pcVar48 = (char *)(iVar13 + 0x1084a);
          if (*pcVar48 == '\x03') {
            uVar37 = ZEXT48(pcVar48);
          }
          else {
            if (*pcVar48 != '\x01') goto LAB_01e1313c;
            uVar37 = CONCAT44(2,pcVar48);
          }
          *(undefined1 *)uVar37 = (char)(uVar37 >> 0x20);
LAB_01e1313c:
          puVar12 = (uint *)func_0x021127a8(iVar13 + 0x1086a,9);
          return puVar12;
        }
LAB_01e131ac:
        if (cVar55 != '\x04') goto LAB_01e12c10;
        FUN_01e0e500();
        func_0x021127b4((int)(in_r14_r15 >> 0x20) + 0x60d,0x18);
        iVar11 = (int)(in_r14_r15 >> 0x20);
        uVar20 = *(uint *)(iVar11 + 0x194);
        if ((*(char *)(iVar11 + 0x198) == '\0') && ((uVar20 & 0x40000) != 0)) {
          *(undefined1 *)(iVar11 + 0x60d) = 0x80;
          *(undefined1 *)(iVar11 + 0x60e) = 0;
          uVar23 = 0x100000198;
        }
        else {
          if (((uVar20 & 0x40000) == 0) != 0xfffffffe) {
            puVar16 = (undefined1 *)(iVar11 + 0x60d);
            *puVar16 = *(undefined1 *)(iVar11 + 0x3af);
            *(undefined1 *)(iVar11 + 0x60e) = *(undefined1 *)(iVar11 + 0x3b0);
            *(undefined1 *)(iVar11 + 0x60f) = *(undefined1 *)(iVar11 + 0x3b6);
            uVar37 = CONCAT44(uVar20 >> 7,(uint)*(byte *)(iVar11 + 0x3b7)) & 0x2ffffffff;
            uVar7 = puVar60[((uint)(uVar37 >> 0x20) | uVar20 >> 9 & 1 | uVar20 >> 3 & 8 |
                            ((uVar20 & 0xff) >> 7) << 2) + 0x75d];
            *(char *)(iVar11 + 0x610) = (char)uVar37;
            *(undefined1 *)(iVar11 + 0x611) = uVar7;
            uVar37 = CONCAT44(uVar20,(uint)*(byte *)(iVar11 + 0x612) | uVar20 & 1) & 0x2ffffffff;
            uVar37 = CONCAT44(uVar20 << 1,(uint)uVar37 | (uint)(uVar37 >> 0x20) | uVar20 << 1 & 8) &
                     0x10ffffffff;
            uVar37 = CONCAT44(uVar20 >> 6,(uint)uVar37 | (uint)(uVar37 >> 0x20)) & 0x40ffffffff;
            *(byte *)(iVar11 + 0x612) =
                 (byte)uVar37 | (byte)(uVar37 >> 0x20) | (byte)((uVar20 >> 0xf) << 7);
            uVar37 = CONCAT44(uVar20 >> 0xf,uVar20) & 0xffffffff00000010;
            uVar24 = CONCAT44(uVar20 >> 8,puVar16) & 0x8ffffffff;
            iVar13 = (int)uVar24;
            uVar24 = CONCAT44((int)(uVar37 >> 0x20),(uint)uVar37 | (uint)(uVar24 >> 0x20)) &
                     0x2ffffffff;
            uVar37 = CONCAT44(uVar20 >> 9,uVar20) & 0x20ffffffff;
            uVar44 = (uint)uVar37;
            *(byte *)(iVar13 + 6) =
                 (byte)(uVar37 >> 0x20) |
                 (byte)uVar24 |
                 (byte)(uVar24 >> 0x20) |
                 *(byte *)(iVar11 + 0x613) | (byte)((uVar20 & 0x2000) >> 0xd) |
                 (byte)(uVar20 >> 8) & 4 | (byte)(uVar44 >> 0xb) & 0x40 |
                 (byte)((uVar44 & 0x20) << 2);
            cVar55 = '\0';
            if ((uVar20 & 0x40) == 0) {
              cVar55 = -1;
              if (*(char *)(iVar11 + 0xd0d) != '\0') {
                cVar55 = *(char *)(iVar11 + 0xd0d);
              }
            }
            *(char *)(iVar11 + 0x614) = cVar55;
            cVar55 = '\0';
            if ((uVar20 & 0x34) == 0) {
              cVar55 = -1;
              if (*(char *)(iVar11 + 0xd0c) != '\0') {
                cVar55 = *(char *)(iVar11 + 0xd0c);
              }
            }
            *(char *)(iVar13 + 8) = cVar55;
            iVar11 = func_0x021127b0(puVar16,0x18);
            iVar13 = (int)(in_r14_r15 >> 0x20);
            if (iVar11 != 0) {
              *(undefined4 *)(iVar13 + 0x19c) = 10;
              puVar12 = (uint *)func_0x021127a8(iVar13 + 0x625,0x18);
              return puVar12;
            }
            if (*(int *)(iVar13 + 0x19c) != 0) {
              *(int *)(iVar13 + 0x19c) = *(int *)(iVar13 + 0x19c) + -1;
              goto LAB_01e12c0c;
            }
            goto LAB_01e12c10;
          }
          *(undefined1 *)(iVar11 + 0x60d) = 0;
          *(undefined1 *)(iVar11 + 0x60e) = 0;
          uVar23 = 0x198;
        }
        *(char *)(iVar11 + (int)uVar23) = (char)((ulonglong)uVar23 >> 0x20);
      }
      else {
        *(undefined1 *)(iVar13 + 0x1b0) = 0;
        *(undefined1 *)(iVar13 + 0x60d) = 4;
        *(undefined1 *)(iVar13 + 0x60e) = 0x43;
        *(undefined1 *)(iVar13 + 0x60f) = 0;
        *(undefined1 *)(iVar13 + 0x610) = 0;
      }
LAB_01e12c0c:
      FUN_01e0e8de();
    }
    else {
      if (iVar11 == 1) {
        puVar12 = (uint *)func_0x021127a8(ppuVar65 + 4,4);
        return puVar12;
      }
      if (iVar11 == 0x10) {
        bVar8 = 0;
        if (*(char *)(iVar13 + 0x188) != '\0') {
          *(undefined1 *)(iVar13 + 0x60d) = 8;
          *(undefined1 *)(iVar13 + 0x60e) = 0x48;
          ppuVar65[5] = (uint *)0x50000;
          ppuVar65[6] = (uint *)0x90000;
          ppuVar65[7] = (uint *)0x60000;
          ppuVar65[8] = (uint *)0xa0000;
          ppuVar65[9] = (uint *)0x500000;
          ppuVar65[10] = (uint *)0x900000;
          ppuVar65[0xb] = (uint *)0x600000;
          ppuVar65[0xc] = (uint *)0xa00000;
          *(undefined1 *)(ppuVar65 + 0xd) = 0xe5;
          *(undefined1 *)((int)ppuVar65 + 0x35) = 0xe7;
          *(undefined1 *)((int)ppuVar65 + 0x36) = 0xe6;
          *(undefined1 *)((int)ppuVar65 + 0x37) = 0xe8;
          *(undefined1 *)(ppuVar65 + 0xe) = 0xf5;
          *(undefined1 *)((int)ppuVar65 + 0x39) = 0xf7;
          bVar8 = *(byte *)(iVar13 + 0x107);
          *(undefined1 *)((int)ppuVar65 + 0x3a) = 0xf6;
          *(undefined1 *)((int)ppuVar65 + 0x3b) = 0xf8;
          iVar11 = (uint)bVar8 * 8 + iVar13;
          uVar9 = *(undefined2 *)(iVar11 + 0xf34);
          uVar20 = *(uint *)(iVar11 + 0xf30);
          uVar1 = *(undefined2 *)(iVar11 + 0xf36);
          *(undefined1 *)(iVar13 + 0x60f) = 0xf7;
          *(char *)(iVar13 + 0x610) = (char)((ushort)uVar9 >> 8);
          *(char *)(iVar13 + 0x611) = (char)uVar9;
          *(char *)(iVar13 + 0x612) = (char)((ushort)uVar1 >> 8);
          *(char *)(iVar13 + 0x613) = (char)uVar1;
          if (uVar20 == 0) {
            *(undefined1 *)(iVar13 + 0x17) = 0;
LAB_01e12a62:
            *(undefined1 *)(iVar13 + 0x188) = 0;
            *(undefined1 *)(iVar13 + 0x60d) = 4;
            *(undefined1 *)(iVar13 + 0x60e) = 0x49;
            *(undefined1 *)(iVar13 + 0x60f) = 0;
            *(undefined1 *)(iVar13 + 0x610) = 0;
          }
          else {
            for (uVar37 = 0; uVar44 = (uint)(uVar37 >> 0x20), 6 < uVar44;
                uVar37 = CONCAT44((int)(uVar37 >> 0x20) + 1,(int)uVar37)) {
              uVar33 = *(uint *)((int)((int)ppuVar65 + uVar44 + 0x14) * 4);
              if ((uVar33 & uVar20) == uVar33) {
                *(undefined1 *)((uint)(byte)uVar37 + iVar13 + 0x614) =
                     *(undefined1 *)((int)ppuVar65 + uVar44 + 0x34);
                uVar31 = (int)uVar37 + 1;
                uVar37 = CONCAT44(uVar44,uVar31);
                uVar20 = uVar20 & ~uVar33;
                if (9 < (uVar31 & 0xff)) break;
              }
            }
            for (uVar37 = uVar37 & 0xffffffff; uVar44 = (uint)(uVar37 >> 0x20), 0x1e < uVar44;
                uVar37 = CONCAT44((int)(uVar37 >> 0x20) + 1,(int)uVar37)) {
              if ((uVar20 & 1 << uVar44) != 0) {
                uVar33 = (uint)uVar37;
                uVar31 = uVar33 + 1;
                uVar37 = CONCAT44(uVar44,uVar31);
                *(undefined *)((uVar33 & 0xff) + iVar13 + 0x614) = puVar60[uVar44 + 0xff3];
                if (9 < (uVar31 & 0xff)) break;
              }
            }
            *(byte *)(iVar13 + 0x17) = bVar8 + 1;
            if ((uVar37 & 0xff) == 0) goto LAB_01e12a62;
            *(char *)(iVar13 + 0x60d) = (char)uVar37 + '\b';
          }
          FUN_01e0e8de(0x1d);
          bVar8 = *(byte *)((int)(in_r14_r15 >> 0x20) + 0x188);
        }
        if (((bVar8 & 1) == 0) &&
           (iVar11 = (int)(in_r14_r15 >> 0x20), (*(byte *)(iVar11 + 0x184) & 1) == 0)) {
          uVar20 = iVar11 + 0x60d;
          uVar37 = (ulonglong)uVar20;
          func_0x021127b4(uVar20,0x18);
          puVar16 = (undefined1 *)uVar37;
          *puVar16 = 0x11;
          puVar16[1] = 7;
          puVar16[5] = 0x80;
          pbVar46 = (byte *)((ulonglong)in_r12_r13 >> 0x20);
          bVar8 = *pbVar46;
          puVar16[4] = 0x80;
          puVar16[3] = 0x80;
          puVar16[2] = 0x80;
          uVar7 = 0xff;
          iVar11 = (int)(in_r14_r15 >> 0x20);
          if ((0xc0 < bVar8) || (uVar7 = 0, bVar8 < 0x40)) {
            *(undefined1 *)(iVar11 + 0x60f) = uVar7;
          }
          uVar7 = 0xff;
          if ((0xc0 < pbVar46[1]) || (uVar7 = 0, pbVar46[1] < 0x40)) {
            *(undefined1 *)(iVar11 + 0x610) = uVar7;
          }
          uVar7 = 0xff;
          if ((0xc0 < pbVar46[2]) || (uVar7 = 0, pbVar46[2] < 0x40)) {
            *(undefined1 *)(iVar11 + 0x611) = uVar7;
          }
          uVar7 = 0xff;
          if ((0xc0 < pbVar46[3]) || (uVar7 = 0, pbVar46[3] < 0x40)) {
            *(undefined1 *)(iVar11 + 0x612) = uVar7;
          }
          uVar20 = *(uint *)(iVar11 + 0x27c);
          uVar24 = CONCAT44(uVar20 >> 1,
                            (uint)*(byte *)(iVar11 + 0x613) | uVar20 >> 1 & 1 | uVar20 << 1 & 2) &
                   0x4ffffffff;
          uVar24 = CONCAT44(uVar20 << 1,(uint)uVar24 | (uint)(uVar24 >> 0x20)) & 0x8ffffffff;
          bVar8 = (byte)(uVar20 >> 6);
          *(byte *)(iVar11 + 0x613) =
               (byte)uVar24 | (byte)(uVar24 >> 0x20) | bVar8 & 0x40 | bVar8 & 0x80;
          uVar24 = CONCAT44(uVar20 >> 6,uVar20) & 0xffffffff00000010;
          uVar54 = (ulonglong)CONCAT14(*(undefined1 *)(iVar11 + 0x614),uVar20 >> 8) &
                   0xffffffff00000008;
          uVar22 = CONCAT44(uVar20 >> 0xe,uVar20 >> 8) & 0x1ffffffff;
          uVar35 = CONCAT44(uVar20,(int)uVar22) & 0x60ffffffff;
          uVar21 = (undefined4)uVar35;
          *(byte *)(iVar11 + 0x614) =
               (byte)uVar24 | (byte)uVar54 |
               (byte)(uVar22 >> 0x20) | (byte)(uVar54 >> 0x20) | (byte)(uVar20 >> 0xe) & 2 |
               (byte)(uVar35 >> 0x20) | (byte)uVar20 & 0x80;
          uVar22 = CONCAT44(uVar21,uVar21) & 0x1ffffffff;
          uVar24 = CONCAT44((int)(uVar24 >> 0x20),
                            (uint)*(byte *)(iVar11 + 0x615) | (uint)(uVar22 >> 0x20) |
                            (uint)uVar22 & 2) & 0x10ffffffff;
          uVar44 = uVar20 >> 0x18;
          bVar8 = (byte)(uVar20 >> 0x18);
          *(byte *)(iVar11 + 0x615) =
               (byte)uVar24 | (byte)(uVar24 >> 0x20) | bVar8 & 0x20 | bVar8 & 0x40 |
               (byte)(uVar20 >> 0x15) & 0x80;
          uVar24 = CONCAT44(uVar44,(uint)*(byte *)(iVar11 + 0x616) | uVar44 & 1 | uVar44 & 2 |
                                   uVar44 & 4) & 0x8ffffffff;
          *(byte *)(iVar11 + 0x616) = (byte)uVar24 | (byte)(uVar24 >> 0x20);
          if ((uVar20 & 0x20) != 0) {
            *(undefined1 *)(iVar11 + 0x617) = 0xff;
          }
          if ((uVar20 & 0x100) == 0) {
            in_cres = 0;
          }
          else {
            in_cres = 1;
          }
          goto switchD_01e0931a_caseD_92;
        }
      }
      else if (iVar11 == 2) {
        if (*(char *)(iVar13 + 0x10f) == '\0') {
          *(undefined4 *)(iVar13 + 0x1ac) = 0;
          puVar12 = (uint *)func_0x021127a8(ppuVar65 + 4,4);
          return puVar12;
        }
LAB_01e1281a:
        uVar20 = *(int *)(iVar13 + 0x1ac) + 1;
        *(uint *)(iVar13 + 0x1ac) = uVar20;
        if (0x14 < uVar20) {
          *(undefined4 *)(iVar13 + 0x1ac) = 0;
          *(undefined1 *)(iVar13 + 0x1f) = 0;
        }
      }
    }
    goto LAB_01e12c10;
  case 0x52:
  case 0x66:
  case 0xde:
    goto switchD_01e0931a_caseD_52;
  case 0x53:
    if (puVar10 != (uint *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar12[2] = (int)puVar26 * 0x2000000 | (uint)*(byte *)((int)puVar19 + 2) << 0x10 |
                 (uint)*(byte *)((int)puVar19 + 1) << 8 | (uint)(byte)*puVar19;
    puVar12[2] = (uint)*(byte *)((int)puVar19 + 7) << 0x18 |
                 (uint)*(byte *)((int)puVar19 + 6) << 0x10 | (uint)*(byte *)((int)puVar19 + 5) << 8
                 | (uint)(byte)puVar19[1];
    puVar12[2] = (uint)*(byte *)((int)puVar19 + 0xb) << 0x18 |
                 (uint)*(byte *)((int)puVar19 + 10) << 0x10 | (uint)*(byte *)((int)puVar19 + 9) << 8
                 | (uint)(byte)puVar19[2];
    puVar12[2] = (uint)*(byte *)((int)puVar19 + 0xf) << 0x18 |
                 (uint)*(byte *)((int)puVar19 + 0xe) << 0x10 |
                 (uint)*(byte *)((int)puVar19 + 0xd) << 8 | (uint)(byte)puVar19[3];
    *puVar12 = 0x10;
    if (puVar45 == (uint *)0x0) {
      uVar20 = *puVar12 & 0xfffff7ff;
    }
    else {
      if (puVar45 != (uint *)0x1) {
        func_0x0200010a();
      }
      uVar20 = *puVar12 | 0x800;
    }
    puVar61 = ppuVar65[1];
    puVar45 = ppuVar65[0xc];
    puVar19 = ppuVar65[0xb];
    puVar10 = ppuVar65[10];
    puVar58 = *ppuVar65;
    *puVar12 = uVar20;
    do {
    } while ((*puVar12 & 0x15) != 0);
    puVar12[0xc] = (uint)puVar45;
    puVar12[7] = (uint)pbVar46[3] << 0x18 | (uint)pbVar46[2] << 0x10 | (uint)pbVar46[1] << 8 |
                 (uint)*pbVar46;
    puVar12[7] = (uint)pbVar46[7] << 0x18 | (uint)pbVar46[6] << 0x10 | (uint)pbVar46[5] << 8 |
                 (uint)pbVar46[4];
    puVar12[7] = (uint)pbVar46[0xb] << 0x18 | (uint)pbVar46[10] << 0x10 | (uint)pbVar46[9] << 8 |
                 (uint)pbVar46[8];
    puVar12[7] = (uint)pbVar46[0xc];
    puVar12[8] = (uint)*(byte *)uVar37;
    if (puVar61 == (uint *)0x0) {
      uVar20 = 0x10000;
      puVar45 = puVar58;
    }
    else {
      uVar20 = 0x40000;
      puVar45 = puVar10;
      puVar10 = puVar58;
    }
    puVar12[9] = (uint)puVar45;
    puVar12[10] = (uint)puVar10;
    *puVar12 = *puVar12 | uVar20;
    do {
    } while (-1 < (int)*puVar12);
    *puVar12 = *puVar12 | 0x40000000;
    *(char *)puVar19 = (char)(puVar12[0xd] >> 0x18);
    *(char *)((int)puVar19 + 1) = (char)(puVar12[0xd] >> 0x10);
    *(char *)((int)puVar19 + 2) = (char)(puVar12[0xd] >> 8);
    *(char *)((int)puVar19 + 3) = (char)puVar12[0xd];
    *(char *)(puVar19 + 1) = (char)(puVar12[0xe] >> 0x18);
    *(char *)((int)puVar19 + 5) = (char)(puVar12[0xe] >> 0x10);
    *(char *)((int)puVar19 + 6) = (char)(puVar12[0xe] >> 8);
    *(char *)((int)puVar19 + 7) = (char)puVar12[0xe];
    *(char *)(puVar19 + 2) = (char)(puVar12[0xf] >> 0x18);
    *(char *)((int)puVar19 + 9) = (char)(puVar12[0xf] >> 0x10);
    *(char *)((int)puVar19 + 10) = (char)(puVar12[0xf] >> 8);
    *(char *)((int)puVar19 + 0xb) = (char)puVar12[0xf];
    puVar12 = puVar12 + 0x10;
    *(char *)(puVar19 + 3) = (char)(*puVar12 >> 0x18);
    *(char *)((int)puVar19 + 0xd) = (char)(*puVar12 >> 0x10);
    *(char *)((int)puVar19 + 0xe) = (char)(*puVar12 >> 8);
    *(char *)((int)puVar19 + 0xf) = (char)*puVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x55:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x56:
    *(undefined1 *)(iVar13 + 0x25) = uVar7;
    *(undefined1 *)(iVar13 + 0x26) = uVar7;
    goto LAB_01e0c618;
  case 0x57:
    if (((int)puVar12 << 0x10 | 0xaf45U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (9 < (int)puVar19 + 1U) {
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x58:
    *(undefined1 *)(iVar13 + 0x25) = uVar7;
LAB_01e0c618:
    uVar22 = (ulonglong)*(uint *)(iVar13 + 0x1d0);
    uVar35 = 0x138;
    while( true ) {
      if ((short)uVar35 == 0) break;
      uVar22 = CONCAT44((uint)(uVar22 >> 0x20) ^ (uint)*(byte *)uVar22,(byte *)uVar22 + 1);
      for (uVar35 = CONCAT44(8,(int)uVar35 + -1); (uVar35 & 0xff00000000) != 0;
          uVar35 = CONCAT44((int)(uVar35 >> 0x20) + -1,(int)uVar35)) {
        uVar54 = uVar22 >> 0x20;
        uVar21 = (undefined4)uVar22;
        uVar24 = CONCAT44((int)(uVar24 >> 0x20),(int)(uVar22 >> 0x20) << 1) & 0xffffffff000001fe;
        uVar22 = CONCAT44((int)uVar24,uVar21) ^ 0x700000000;
        if (-1 < (char)uVar54) {
          uVar22 = CONCAT44((int)uVar24,uVar21);
        }
      }
    }
    *(char *)(iVar13 + 0x1afa) = (char)(uVar22 >> 0x20);
    *(undefined1 *)(iVar13 + 0x164) = 1;
    *(undefined2 *)(iVar13 + 0xa2) = 1;
switchD_01e0a0d4_caseD_8:
    iVar30 = (int)in_r10_r11;
    pcVar48 = (char *)in_r12_r13;
    iVar13 = *(ushort *)(pcVar48 + 0x10) + 0x2000;
    iVar50 = (int)(uVar37 >> 0x20);
    iVar14 = (int)(uVar24 >> 0x20);
    iVar11 = (int)in_r14_r15;
    if (1 < (byte)(*pcVar48 - 5U)) {
      if ((iVar14 != 4) || (iVar50 != iVar13)) goto switchD_01e0ab92_caseD_3;
      cVar55 = *(char *)(iVar11 + 0x249d);
      switch(cVar55) {
      case '\x02':
        uVar21 = 3;
LAB_01e0ac1e:
        FUN_01e09a12(uVar21,2);
      case '\x03':
      case '\x05':
      case '\x06':
      case '\a':
      case '\t':
        goto switchD_01e0ab92_caseD_3;
      case '\x04':
        if ((*(short *)(iVar11 + 0x249e) == 0xf) || (*(short *)(iVar11 + 0x249e) == 0xb)) {
          uVar21 = 5;
LAB_01e0b00a:
          FUN_01e09a12(uVar21,5);
          goto switchD_01e0ab92_caseD_3;
        }
        uVar21 = 4;
        break;
      case '\b':
        if (*(short *)(iVar11 + 0x24a2) == 0x2a00) {
          FUN_01e09a12(9,0xc);
          goto switchD_01e0ab92_caseD_3;
        }
        sVar39 = *(short *)(iVar11 + 0x249e);
        if (*(short *)(iVar11 + 0x24a2) == 0x2803) {
          if (sVar39 != 0xc) {
            if (sVar39 == 8) {
              FUN_01e09a12(9,8);
              goto switchD_01e0ab92_caseD_3;
            }
            if (sVar39 != 1) goto LAB_01e0b234;
          }
          FUN_01e09a12(9,0x16);
          goto switchD_01e0ab92_caseD_3;
        }
LAB_01e0b234:
        uVar21 = 8;
        break;
      case '\n':
        *(undefined2 *)(iVar11 + 0x9a) = *(undefined2 *)(iVar11 + 0x249e);
switchD_01e0b54a_caseD_2a:
        uVar21 = 10;
        break;
      default:
        if (cVar55 != '\x10') {
          if (cVar55 == '\x12') {
switchD_01e0ab92_caseD_12:
            iVar13 = iVar11 + 0x2498;
            *(undefined2 *)(iVar11 + 0x9a) = *(undefined2 *)(iVar11 + 0x249e);
            iVar11 = iVar11 + 0x6a4;
            func_0x021127b4(iVar11,0x1e);
            puVar12 = (uint *)func_0x021127a8(iVar11,*(byte *)(iVar13 + 1) - 3);
            return puVar12;
          }
          if (cVar55 == 'R') {
            iVar13 = iVar11 + 0x2498;
            *(undefined2 *)(iVar11 + 0x9a) = *(undefined2 *)(iVar11 + 0x249e);
            iVar11 = iVar11 + 0x6a4;
            func_0x021127b4(iVar11,0x1e);
            puVar12 = (uint *)func_0x021127a8(iVar11,*(byte *)(iVar13 + 1) - 3);
            return puVar12;
          }
          goto switchD_01e0ab92_caseD_3;
        }
        uVar22 = (ulonglong)CONCAT14(*(undefined1 *)(iVar11 + 0x24a3),iVar11 + 0x249e);
        in_r2_r3 = (ulonglong)*(byte *)(iVar11 + 0x24a2);
switchD_01e0931a_caseD_21:
        iVar11 = (int)in_r14_r15;
        pcVar48 = (char *)in_r12_r13;
        if ((ushort)((ushort)in_r2_r3 & 0xff | (ushort)((int)(uVar22 >> 0x20) << 8)) == 0x2800) {
          if (*(short *)uVar22 == 0xc) {
            FUN_01e09a12(0x11,0x15);
            goto switchD_01e0ab92_caseD_3;
          }
          if (*(short *)uVar22 == 1) {
            FUN_01e09a12(0x11,0xd);
            goto switchD_01e0ab92_caseD_3;
          }
        }
LAB_01e0b362:
        uVar21 = 0x10;
      }
      goto LAB_01e0b364;
    }
    if (iVar50 != iVar13) {
      if (iVar50 == *(ushort *)(pcVar48 + 0x10) + 0x1000) {
        FUN_01e367de((int)uVar37 + 0xfd7);
        FUN_01e367de((int)uVar37 + 0x2b1d);
      }
      goto switchD_01e0ab92_caseD_3;
    }
    if (iVar14 == 6) {
      switch(*(undefined1 *)(iVar11 + 0x249d)) {
      case 1:
        FUN_01e07ef8(2,6);
        puVar12 = (uint *)func_0x021127a8(iVar11 + 0x3a7,7);
        return puVar12;
      case 3:
        FUN_01e07ef8(3,0x10);
        break;
      case 4:
        FUN_01e07ef8(4,0x10);
        puVar12 = (uint *)func_0x021127a8(iVar11 + 0x4b0,8);
        return puVar12;
      case 8:
        puVar12 = (uint *)func_0x021127a8(iVar11 + 0x530,0x10);
        return puVar12;
      case 9:
        puVar12 = (uint *)func_0x021127a8(iVar11 + 0x38d,6);
        return puVar12;
      }
      goto switchD_01e0ab92_caseD_3;
    }
    if (iVar14 == 5) {
      if (*(char *)(iVar11 + 0x249d) == '\x13') {
        if (*(char *)(iVar11 + 0x24a1) == '\x01') {
          FUN_01e367de((int)uVar37 + 0x1888);
        }
      }
      else if (*(char *)(iVar11 + 0x249d) == '\x12') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto switchD_01e0ab92_caseD_3;
    }
    if (iVar14 != 4) goto switchD_01e0ab92_caseD_3;
    cVar55 = *(char *)(iVar11 + 0x249d);
    switch(cVar55) {
    case '\x02':
      FUN_01e09a12(3,2);
      *(undefined1 *)(iVar11 + 6) = 0x4a;
      *(undefined1 *)(iVar11 + 7) = 0;
      *(undefined1 *)(iVar11 + 8) = 0xb;
      *(undefined1 *)(iVar11 + 9) = 1;
      FUN_01e07eaa(2);
      FUN_01e07edc();
      break;
    case '\x03':
    case '\x05':
    case '\a':
    case '\t':
    case '\v':
    case '\r':
    case '\x0e':
    case '\x0f':
    case '\x11':
      break;
    case '\x04':
      uVar9 = *(undefined2 *)(iVar11 + 0x249e);
      cVar55 = *(char *)(iVar11 + 7);
      if (cVar55 == '\0') {
        FUN_01e09afc(uVar9,0x20);
      }
      else if (cVar55 == '\x02') {
        FUN_01e09afc(uVar9,0x28);
      }
      else if (cVar55 == '\x01') {
        FUN_01e09afc(uVar9,0x38);
      }
      break;
    case '\x06':
      uVar21 = 6;
      goto LAB_01e0b364;
    case '\b':
      sVar39 = *(short *)(iVar11 + 0x24a2);
      if (sVar39 == 0x2a50) {
        FUN_01e09a12(9,10);
        break;
      }
      if (sVar39 == 0x2a00) {
        FUN_01e09a12(9,0x14);
        break;
      }
      if ((sVar39 == 0x2803) && (*(short *)(iVar11 + 0x249e) != *(short *)(iVar11 + 0x24a0))) {
        cVar55 = *(char *)(iVar11 + 7);
        if ((cVar55 == '\0') || (cVar55 == '\x02')) {
          uVar21 = 0x38;
        }
        else {
          if (cVar55 != '\x01') break;
          uVar21 = 0x68;
        }
        FUN_01e09aba(*(short *)(iVar11 + 0x249e),uVar21);
        break;
      }
      goto LAB_01e0b234;
    case '\n':
      sVar39 = *(short *)(iVar11 + 0x249e);
      *(short *)(iVar11 + 0x9a) = sVar39;
      switch(sVar39) {
      case 0x2a:
      case 0x2b:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x35:
      case 0x36:
      case 0x38:
        goto switchD_01e0b54a_caseD_2a;
      case 0x2c:
      case 0x37:
        goto switchD_01e0b54a_caseD_2c;
      case 0x2d:
        cVar55 = *(char *)(iVar11 + 7);
        break;
      case 0x2e:
      case 0x39:
        goto switchD_01e0b54a_caseD_2e;
      default:
        if (sVar39 != 0x4a) {
          if (sVar39 == 7) {
            iVar11 = iVar11 + 0x6a4;
            func_0x021127b4(iVar11,0x1e);
            puVar12 = (uint *)func_0x021127a8(iVar11,8);
            return puVar12;
          }
          if (sVar39 == 0x14) {
            uVar21 = 0xb;
            goto LAB_01e0b00a;
          }
          if (sVar39 == 0x16) {
            FUN_01e09a12(0xb,6);
            goto switchD_01e0ab92_caseD_3;
          }
          if (sVar39 == 0x18) {
            FUN_01e09a12(0xb,7);
            goto switchD_01e0ab92_caseD_3;
          }
          if (sVar39 == 0x21) {
switchD_01e0b54a_caseD_2c:
            FUN_01e09a12(0xb,4);
          }
          else {
            if (sVar39 != 0x23) {
              if (sVar39 == 0x3f) goto switchD_01e0b54a_caseD_29;
              if (sVar39 == 0x42) goto switchD_01e0b54a_caseD_2c;
              if (sVar39 != 0x44) {
                if (sVar39 == 3) {
                  FUN_01e09a12(0xb,0x11);
                  goto switchD_01e0ab92_caseD_3;
                }
                goto switchD_01e0b54a_caseD_2a;
              }
            }
switchD_01e0b54a_caseD_2e:
            cVar55 = *(char *)(iVar11 + 7);
            if (cVar55 == '\x01') {
              FUN_01e09ede(iVar30 + 0xc5f);
              cVar55 = *(char *)(iVar11 + 7);
            }
            if (cVar55 == '\0') {
              FUN_01e09ede(iVar30 + 0x19f8);
              cVar55 = *(char *)(iVar11 + 7);
            }
            if (cVar55 == '\x02') {
              FUN_01e09ede(iVar30 + 0x1461);
            }
          }
          goto switchD_01e0ab92_caseD_3;
        }
      case 0x29:
      case 0x34:
switchD_01e0b54a_caseD_29:
        cVar55 = *(char *)(iVar11 + 7);
        if (cVar55 == '\x01') {
          FUN_01e09a12(0xb,2);
          cVar55 = *(char *)(iVar11 + 7);
        }
        if (cVar55 == '\0') {
          FUN_01e09a12(0xb,2);
          cVar55 = *(char *)(iVar11 + 7);
        }
      }
      if (cVar55 != '\x02') break;
      uVar21 = 0xb;
      goto LAB_01e0ac1e;
    case '\f':
      uVar20 = (uint)*(ushort *)(iVar11 + 0x249e);
      *(ushort *)(iVar11 + 0x9a) = *(ushort *)(iVar11 + 0x249e);
      if (((uVar20 - 0x2e < 0x17) && ((1 << uVar20 - 0x2e & 0x400801U) != 0)) || (uVar20 == 0x23)) {
        cVar55 = *(char *)(iVar11 + 7);
        uVar44 = (uint)*(ushort *)(iVar11 + 0x24a0);
        if (cVar55 == '\x01') {
          FUN_01e09f1e(uVar20,uVar44);
          cVar55 = *(char *)((int)in_r14_r15 + 7);
        }
        if (cVar55 == '\0') {
          FUN_01e09f1e(uVar20,uVar44 & 0xffff);
          cVar55 = *(char *)((int)in_r14_r15 + 7);
        }
        iVar11 = (int)in_r14_r15;
        pcVar48 = (char *)in_r12_r13;
        if (cVar55 == '\x02') {
          uVar22 = (ulonglong)uVar20;
switchD_01e0931a_caseD_a:
          iVar11 = (int)in_r14_r15;
          pcVar48 = (char *)in_r12_r13;
          FUN_01e09f1e((int)uVar22);
        }
        break;
      }
      uVar21 = 0xc;
LAB_01e0b364:
      FUN_01e09a4c(uVar21);
      break;
    case '\x10':
      if (*(short *)(iVar11 + 0x24a2) == 0x2800) {
        cVar55 = *(char *)(iVar11 + 7);
        if ((cVar55 == '\0') || (cVar55 == '\x02')) {
          FUN_01e09a7e(0x10);
        }
        else if (cVar55 == '\x01') {
          FUN_01e09a7e(*(undefined2 *)(iVar11 + 0x249e),0x18);
        }
        break;
      }
      goto LAB_01e0b362;
    case '\x12':
      goto switchD_01e0ab92_caseD_12;
    default:
      if (cVar55 == '\x1d') {
        FUN_01e09a12(0x1e,0);
      }
      else if (cVar55 == 'R') {
        iVar13 = iVar11 + 0x2498;
        *(undefined2 *)(iVar11 + 0x9a) = *(undefined2 *)(iVar11 + 0x249e);
        iVar11 = iVar11 + 0x6a4;
        func_0x021127b4(iVar11,0x1e);
        puVar12 = (uint *)func_0x021127a8(iVar11,*(byte *)(iVar13 + 1) - 3);
        return puVar12;
      }
    }
switchD_01e0ab92_caseD_3:
    iVar13 = (int)uVar37;
    if (*(char *)(iVar11 + 0x174) != '\0') {
      FUN_01e09f92();
      *(undefined1 *)(iVar11 + 0x17c) = 0;
    }
    puVar12 = (uint *)(uint)*(byte *)(iVar11 + 0x170);
    if (*(byte *)(iVar11 + 0x170) != 0) {
      iVar14 = 0x160;
      if (*(char *)(iVar11 + 0x160) == '\0') {
        FUN_01e08976();
        uVar23 = CONCAT44(iVar14,1);
        *(undefined1 *)(iVar11 + iVar14) = 1;
        FUN_01e0308a();
        switch(*pcVar48) {
        case '\x01':
        case '\x04':
          break;
        case '\x02':
        case '\t':
          *(undefined1 *)(iVar11 + 0x1990) = 0xa1;
          *(undefined1 *)(iVar11 + 0x1991) = 7;
          *(undefined2 *)(iVar11 + 0x1994) = 0x8080;
          *(undefined2 *)(iVar11 + 0x1992) = 0x8080;
          *(undefined1 *)(iVar11 + 0x1996) = 8;
          *(undefined1 *)(iVar11 + 0x199a) = 0;
          *(undefined1 *)(iVar11 + 0x1999) = 0;
          *(undefined1 *)(iVar11 + 0x1998) = 0;
          *(undefined1 *)(iVar11 + 0x1997) = 0;
          *(undefined1 *)(iVar11 + 5) = 0xc;
          break;
        default:
          *(char *)(iVar11 + 0x20) = (char)uVar23;
          for (iVar14 = 0; iVar14 != 0x32; iVar14 = iVar14 + 1) {
            uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),iVar14 + iVar11);
            *(undefined1 *)(iVar14 + iVar11 + 0x1990) = *(undefined1 *)(iVar14 + iVar13 + 0x3772);
          }
          cVar55 = pcVar48[4];
          *(undefined1 *)(iVar11 + 0x1992) = 1;
          *(char *)(iVar11 + 0x1993) = cVar55;
          break;
        case '\a':
          for (iVar14 = 0; iVar14 != 0x11; iVar14 = iVar14 + 1) {
            uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),iVar14 + iVar11);
            *(undefined1 *)(iVar14 + iVar11 + 0x1990) = *(undefined1 *)(iVar14 + iVar13 + 0x883);
          }
        }
        iVar13 = (int)((ulonglong)uVar23 >> 0x20);
        if (*(short *)(iVar11 + 0xa0) == 0) {
          uVar9 = FUN_01e370ba(&LAB_01e0cfe6);
          *(undefined2 *)(iVar11 + 0xa0) = uVar9;
        }
        *(undefined1 *)(iVar11 + iVar13 + 8) = 0;
        FUN_01e3722c(0,200);
        FUN_01e3721e(0,1000);
        FUN_01e07f2e(2);
      }
      if (*(char *)(iVar11 + 0x14c) != '\0') {
        *(undefined1 *)(iVar11 + 9) = 2;
      }
      *(undefined1 *)(iVar11 + 0x14c) = 0;
      puVar12 = (uint *)&DAT_00000004;
      *(undefined1 *)(iVar11 + 0x14) = 4;
    }
    return puVar12;
  case 0x59:
  case 0xaa:
    func_0x01e26fe2();
    goto switchD_01e0931a_caseD_52;
  case 0x5a:
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  case 0x5b:
    uVar24 = CONCAT44(pbVar46,&DAT_01e1af44);
    goto code_r0x01e25534;
  case 0x5c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5d:
    uVar7 = FUN_01e09dea((uint)*(byte *)((int)puVar10 + 2) |
                         (int)puVar26 * 0x10000 | (uint)*(byte *)((int)puVar10 + 1) << 8);
    *(undefined1 *)uVar24 = uVar7;
    puVar12 = (uint *)switchD_01e0b670::caseD_38();
    return puVar12;
  case 0x5e:
    *(undefined4 **)(&DAT_01e1af85 + (int)puVar19 * 8) = puVar26;
    uVar37 = ZEXT48(puVar10);
    (&DAT_01e1af89)[(int)puVar19 * 8] = 0;
    if (*(byte *)((int)puVar10 + 1) != 4) {
      uVar37 = CONCAT44(*(byte *)((int)puVar10 + 1) + 1,puVar10);
    }
    ((byte *)uVar37)[1] = (byte)(uVar37 >> 0x20);
    puVar26 = &DAT_01e1af45;
    local_24 = (uint *)(uint)*(byte *)uVar37;
    FUN_01e36848(2,s__Info____LL_procedure_start___d___01e198b9);
    puVar12 = (uint *)FUN_01e27048(puVar26);
    return puVar12;
  case 0x5f:
    goto switchD_01e0931a_caseD_5f;
  case 0x61:
    if (puVar10 == (uint *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (pbVar46 != (byte *)0x0) {
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 99:
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x65:
    return (uint *)((uint)pbVar46 & 0xff);
  case 0x67:
    EnableInterrupts(uVar20);
    uVar20 = (uint)((ulonglong)in_r12_r13 >> 0x20);
    pbStack_20 = (byte *)(0x200 - uVar20);
    pbVar17 = pbStack_20;
    if (0x1ff < uVar20) {
      pbVar17 = pbVar59 + uVar20;
    }
    FUN_01e19452((uint)((int)pbVar17 << 8) / (uint)pbVar46);
    uVar44 = (uint)(uVar24 >> 0x20);
    uVar20 = (uint)*(byte *)((int)uVar24 + 0x26e7);
    uVar24 = (ulonglong)CONCAT14(*(undefined1 *)((int)in_r6_r7 + 6),(int)in_r10_r11);
    uVar18 = (undefined4)(uVar37 >> 0x20);
    uVar33 = (uint)*(byte *)((int)in_r6_r7 + 5);
    uVar21 = thunk_FUN_01e17b66(0);
    uVar33 = uVar33 & 0xffff00ff | ((uint)(uVar24 >> 0x20) & 0xff) << 8;
    iVar11 = 0x200 - uVar33;
    *(int *)((int)ppuVar65 + 8) = iVar11;
    if (0x1ff < uVar33) {
      iVar11 = uVar33 + (int)(in_r6_r7 >> 0x20);
    }
    FUN_01e19452((uint)(iVar11 << 8) / uVar44);
    iVar13 = (int)uVar24;
    uVar15 = thunk_FUN_01e17b66(0);
    FUN_01e188bc(uVar21,uVar15);
    thunk_FUN_01e183b0();
    uVar31 = FUN_01e19416();
    uVar37 = CONCAT44(uVar20,uVar31) & 0xfffffffdffffffff;
    uVar29 = (int)in_r12_r13 + 0x32;
    uVar41 = (uint)((ulonglong)in_r12_r13 >> 0x20);
    iVar11 = (int)(uVar37 >> 0x20);
    uVar64 = (uint)in_r14_r15;
    uVar52 = (uint)uVar37;
    if (uVar41 < 0x201) {
      if (uVar41 == 0x200) {
        iVar14 = (int)(in_r14_r15 >> 0x20);
        if (iVar14 != 1) {
          in_r14_r15 = CONCAT44(iVar14,uVar18);
        }
        uVar37 = CONCAT44((int)in_r14_r15,uVar29);
      }
      else {
        uVar31 = (uint)((int)ppuVar65[1] << 8) / uVar44;
        if (0x100 < uVar52) {
          uVar31 = (uVar31 << 8) / uVar52;
        }
        if ((iVar11 == 0) && ((uVar20 | 2) != 3)) {
          iVar14 = 0x26e8;
        }
        else {
          iVar14 = 0x26ea;
        }
        uVar31 = ((uVar31 * (uVar29 & 0xffff) >> 8) * 0x7ff) / (uint)*(ushort *)(iVar14 + 0x67c0);
        uVar37 = CONCAT44(uVar64 - uVar31,uVar29);
        if (uVar64 <= uVar31) {
          uVar37 = (ulonglong)uVar29;
        }
      }
    }
    else {
      uVar41 = (uVar41 * 0x100 - 0x20000) / uVar44;
      if (0x100 < uVar31) {
        uVar41 = (uVar41 << 8) / uVar31;
      }
      if ((iVar11 == 0) && ((uVar20 | 2) != 3)) {
        iVar14 = 0x26e8;
      }
      else {
        iVar14 = 0x26ea;
      }
      uVar31 = ((uVar41 * (uVar29 & 0xffff) >> 8) * 0x7ff) / (uint)*(ushort *)(iVar14 + 0x67c0);
      uVar37 = CONCAT44(uVar31 + uVar64,uVar29);
      if (0x7ff - uVar64 <= uVar31) {
        uVar37 = CONCAT44(0x7ff,uVar29);
      }
    }
    uVar25 = (ushort)uVar37;
    uVar31 = (uint)(uVar37 >> 0x20);
    if (uVar33 < 0x201) {
      if (uVar33 == 0x200) {
        puVar12 = ppuVar65[3];
        if ((int)(in_r14_r15 >> 0x20) != 1) {
          puVar12 = *ppuVar65;
        }
        iVar14 = (int)ppuVar65[1];
        lVar53 = ZEXT48(ppuVar65[4]) << 0x20;
      }
      else {
        uVar44 = (uint)((int)ppuVar65[2] << 8) / uVar44;
        if (0x100 < uVar52) {
          uVar44 = (uVar44 << 8) / uVar52;
        }
        iVar14 = (int)ppuVar65[1];
        lVar53 = *(longlong *)(ppuVar65 + 3);
        if ((iVar11 == 0) && ((uVar20 | 2) != 3)) {
          iVar11 = 0x26ea;
        }
        else {
          iVar11 = 0x26e8;
        }
        uVar37 = (ulonglong)uVar31 << 0x20;
        uVar20 = ((uVar25 * uVar44 >> 8) * 0x7ff) / (uint)*(ushort *)(iVar11 + 0x67c0);
        puVar12 = (uint *)((uint)lVar53 - uVar20);
        if ((uint)lVar53 <= uVar20) {
          puVar12 = (uint *)0x0;
        }
      }
    }
    else {
      uVar44 = (uVar33 * 0x100 - 0x20000) / uVar44;
      if (0x100 < uVar52) {
        uVar44 = (uVar44 << 8) / uVar52;
      }
      iVar14 = (int)ppuVar65[1];
      lVar53 = *(longlong *)(ppuVar65 + 3);
      if ((iVar11 == 0) && ((uVar20 | 2) != 3)) {
        iVar11 = 0x26ea;
      }
      else {
        iVar11 = 0x26e8;
      }
      uVar37 = (ulonglong)uVar31 << 0x20;
      uVar20 = ((uVar25 * uVar44 >> 8) * 0x7ff) / (uint)*(ushort *)(iVar11 + 0x67c0);
      puVar12 = (uint *)(uVar20 + (int)lVar53);
      if (0x7ffU - (int)lVar53 <= uVar20) {
        puVar12 = (uint *)0x7ff;
      }
    }
    *(char *)(iVar13 + 5) = (char)(uVar37 >> 0x20);
    *(char *)((int)((ulonglong)lVar53 >> 0x20) + 1) = (char)(uVar37 >> 0x28);
    *(char *)(iVar14 + 1) = (char)((uint)puVar12 >> 8);
    *(char *)(iVar13 + 7) = (char)puVar12;
    return puVar12;
  case 0x68:
    FUN_01e24784();
    puVar12 = (uint *)*(undefined4 *)uVar24;
    if (((uint)puVar12 & 0x80) != 0) {
      puVar12 = (uint *)&DAT_001cfc70;
      _DAT_001cfc70 = _DAT_001cfc70 | 2;
    }
    return puVar12;
  case 0x69:
    _DAT_001e5040 = _DAT_001e5040 | 0x200;
    _DAT_001e5048 = _DAT_001e5048 & 0x200;
    thunk_FUN_01e051d8(10);
    *extraout_r1 = *extraout_r1 | 0x80;
    extraout_r1[2] = extraout_r1[2] & 0xffffff7f;
    thunk_FUN_01e051d8(0x14);
    *extraout_r1_00 = *extraout_r1_00 & 0x200;
    extraout_r1_00[2] = extraout_r1_00[2] & 0x200;
    thunk_FUN_01e051d8(10);
    *extraout_r1_01 = *extraout_r1_01 & 0xffffff7f;
    extraout_r1_01[2] = extraout_r1_01[2] & 0xffffff7f;
    puVar12 = (uint *)thunk_FUN_01e051d8(10);
    return puVar12;
  case 0x6a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6b:
    if (puVar10 != (uint *)0x0) {
      uVar24 = 0x1e1af45;
    }
    *(byte *)((int)uVar24 + 5) = (byte)(uVar24 >> 0x20) & puVar12[(int)puVar26 * 4] != 0;
    FUN_01e09dba();
    pbVar46 = (byte *)((ulonglong)in_r12_r13 >> 0x20);
    pcVar48 = (char *)in_r10_r11;
    iVar14 = (int)(in_r14_r15 >> 0x20);
    *(undefined1 *)(iVar14 + 0x40) = 0x10;
    uVar20 = *(byte *)(iVar14 + 0xa70) / 10;
    *(uint *)(iVar14 + 600) = uVar20;
    iVar11 = (((int)(short)(ushort)(*(byte *)(iVar14 + 0xa71) & *(byte *)(iVar14 + 0xa70)) +
              *(int *)(iVar14 + 0x25c)) * 5) / 10;
    *(int *)(iVar14 + 0x25c) = iVar11;
    *(int *)(iVar14 + 0x260) =
         ((*(int *)(iVar14 + 0x260) +
          (int)CONCAT11(*(undefined1 *)(iVar14 + 0xa72),*(undefined1 *)(iVar14 + 0xa73))) * 5) / 10;
    uVar44 = *(byte *)(iVar14 + 0xa78) / 10;
    *(uint *)(iVar14 + 0x264) = uVar44;
    *(int *)(iVar14 + 0x268) =
         ((*(int *)(iVar14 + 0x268) +
          (int)CONCAT11(*(undefined1 *)(iVar14 + 0xa76),*(undefined1 *)(iVar14 + 0xa77))) * 5) / 10;
    iVar13 = (((int)(short)(ushort)(*(byte *)(iVar14 + 0xa79) & *(byte *)(iVar14 + 0xa78)) +
              *(int *)(iVar14 + 0x26c)) * 5) / 10;
    sVar39 = (short)iVar13;
    *(int *)(iVar14 + 0x26c) = iVar13;
    cVar55 = *(char *)(iVar14 + 0x30a);
    if (cVar55 == '\0') {
      uVar20 = (uint)*pbVar46 + uVar20 / 8;
      uVar37 = CONCAT44(uVar20,8);
      if (0xfe < uVar20) {
        uVar37 = 0xff00000008;
      }
      if (uVar20 == 0) {
        uVar37 = uVar37 & 0xffffffff;
      }
      iVar13 = (uint)pbVar46[1] + (int)(short)iVar11 / (int)uVar37;
      *pbVar46 = (byte)(uVar37 >> 0x20);
      iVar11 = iVar13;
      if (0xfe < iVar13) {
        iVar11 = 0xff;
      }
      bVar8 = (byte)iVar11;
      if (iVar13 < 1) {
        bVar8 = 0;
      }
      pbVar46[1] = bVar8;
      *(undefined1 *)(iVar14 + 0x655) = 0;
      *(undefined1 *)(iVar14 + 0x657) = 0;
      *(undefined1 *)(iVar14 + 0x658) = 0;
      *(undefined1 *)(iVar14 + 0x659) = 0x50;
      *(undefined1 *)(iVar14 + 0x65a) = 0x50;
      *(undefined1 *)(iVar14 + 0x65b) = 100;
      FUN_01e0e0d2(pbVar46 + 1);
      cVar55 = *(char *)((int)(in_r14_r15 >> 0x20) + 0x30a);
    }
    if (cVar55 == '\0') {
      uVar20 = (uint)pbVar46[3] + (uVar44 & 0xffff) / 8;
      uVar37 = CONCAT44(uVar20,(int)sVar39 / 8);
      if (0xfe < uVar20) {
        uVar37 = CONCAT44(0xff,(int)sVar39 / 8);
      }
      if (uVar20 == 0) {
        uVar37 = uVar37 & 0xffffffff;
      }
      iVar13 = (uint)pbVar46[2] + (int)uVar37;
      pbVar46[3] = (byte)(uVar37 >> 0x20);
      iVar11 = iVar13;
      if (0xfe < iVar13) {
        iVar11 = 0xff;
      }
      bVar8 = (byte)iVar11;
      if (iVar13 < 1) {
        bVar8 = 0;
      }
      pbVar46[2] = bVar8;
      iVar11 = (int)(in_r14_r15 >> 0x20);
      *(undefined1 *)(iVar11 + 0x661) = 3;
      *(undefined1 *)(iVar11 + 0x663) = 5;
      *(undefined1 *)(iVar11 + 0x664) = 0x14;
      *(undefined1 *)(iVar11 + 0x665) = 0x50;
      *(undefined1 *)(iVar11 + 0x666) = 0x50;
      *(undefined1 *)(iVar11 + 0x667) = 100;
      FUN_01e0e0d2(pbVar46 + 3);
    }
    iVar11 = (int)(in_r14_r15 >> 0x20);
    if (*(char *)(iVar11 + 0x309) != '\0') {
      bVar8 = *(byte *)(iVar11 + 0x200);
      *(byte *)(iVar11 + 0x200) = bVar8 & 0xf0;
      uVar20 = *(uint *)(iVar11 + 0x244);
      uVar37 = CONCAT44(uVar20 >> 2,(uint)bVar8) & 0xfffffffffffffff0;
      uVar44 = (uint)(uVar37 >> 0x20);
      uVar37 = CONCAT44(uVar44,(uint)uVar37 | uVar44 & 1) & 0x2ffffffff;
      uVar37 = CONCAT44(uVar20 << 2,(uint)uVar37 | (uint)(uVar37 >> 0x20)) & 0x4ffffffff;
      bVar8 = (byte)uVar37 | (byte)(uVar37 >> 0x20);
      if ((uVar20 & 0xd) != 0) {
        *(byte *)(iVar11 + 0x200) = bVar8;
      }
      if ((uVar20 & 2) != 0) {
        *(byte *)(iVar11 + 0x200) = bVar8 | 8;
      }
    }
    if (*(char *)(iVar11 + 0x30a) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar8 = pbVar46[2];
    bVar28 = pbVar46[3];
    cVar55 = *pcVar48;
    *(char *)(iVar11 + 0x3b) = (char)((int)(bVar8 - 0x80) / 0x10);
    *(char *)(iVar11 + 0x3c) = (char)((int)(bVar28 - 0x80) / 0x10);
    if (cVar55 == '\x02') {
      *(char *)(iVar11 + 0x3b) = (char)((int)(bVar8 - 0x80) / 2);
      *(char *)(iVar11 + 0x3c) = (char)((int)(bVar28 - 0x80) / 2);
    }
    uVar7 = *(undefined1 *)(iVar11 + 0x200);
    *(bool *)(iVar11 + 0x3d) = (CONCAT14(uVar7,0x200) & 0x4400000000) != 0;
    pbVar46[2] = 0x80;
    pbVar46[3] = 0x80;
    uVar37 = (ulonglong)CONCAT14(uVar7,0x200) & 0xffffffbbffffffff;
    *(char *)(iVar11 + (int)uVar37) = (char)(uVar37 >> 0x20);
    if ((*(char *)(iVar11 + 0x248) == '\0') && ((*(byte *)(iVar11 + 0x203) & 10) == 8)) {
      for (iVar13 = 0; iVar13 != 2; iVar13 = iVar13 + 1) {
        iVar14 = iVar13 * 0x90 + iVar11;
        if (*(char *)(iVar14 + 0x166c) != '\0') {
          uVar20 = *(uint *)(iVar14 + 0x166e);
          uVar44 = *(uint *)((iVar13 + 0x1e1b31c) * 4);
          puVar16 = (undefined1 *)(iVar13 * 0x1f + iVar11 + 0x8f1);
          *puVar16 = (char)puVar16;
          if ((uVar44 & *(byte *)(((uVar44 & 0xff00) >> 8) + iVar11 + 0x200)) != 0) {
            *puVar16 = (char)uVar44;
            uVar44 = 0;
            do {
              uVar33 = uVar44;
              if (0x17 < uVar33) break;
              uVar44 = uVar33 + 1;
            } while ((uVar20 & 1 << uVar33) == 0);
            iVar14 = (uint)(*(ushort *)((int)&DAT_01e1e3dc + uVar33) >> 8) + iVar11;
            *(byte *)(iVar14 + 0x200) =
                 (byte)*(ushort *)((int)&DAT_01e1e3dc + uVar33) | *(byte *)(iVar14 + 0x200);
          }
        }
      }
    }
    else {
      func_0x021127b4(iVar11 + 0x8f0,0x3e);
    }
    FUN_01e0e402();
    uVar20 = 0;
    for (uVar44 = 0; iVar11 = (int)(in_r14_r15 >> 0x20), 10 < uVar44; uVar44 = uVar44 + 1) {
      uVar33 = *(uint *)((uVar44 + 0x1e1e40c) * 4);
      if ((uVar33 & *(byte *)(((uVar33 & 0xff00) >> 8) + iVar11 + 0x200)) != 0) goto LAB_01e116da;
      uVar20 = uVar20 + 1;
    }
    uVar20 = 0xff;
LAB_01e116da:
    if (((*(byte *)(iVar11 + 0x203) & 8) == 0) && ((uVar20 & 0xff) != 0xff)) {
      if (*(char *)(iVar11 + 0x254) == '\0') {
        *(undefined1 *)(iVar11 + 0x254) = 1;
        uVar37 = CONCAT44((uVar20 & 0xff) * 6,uVar20) & 0xffffffff000000ff;
        iVar13 = (int)(uVar37 >> 0x20) + iVar11;
        cVar55 = '\0';
        if ((byte)(*(char *)(iVar13 + 0x1622) + 1U) < 3) {
          cVar55 = *(char *)(iVar13 + 0x1622) + '\x01';
        }
        uVar21 = *(undefined4 *)((int)(&DAT_01e1e43c + (int)uVar37) * 4);
        *(char *)(iVar13 + 0x1622) = cVar55;
        *(char *)(iVar13 + 0x1621) = (char)((uint)uVar21 >> 0x18);
        *(char *)(iVar13 + 0x1620) = (char)((uint)uVar21 >> 0x10);
        *(char *)(iVar13 + 0x161f) = (char)((uint)uVar21 >> 8);
        *(char *)(iVar13 + 0x161e) = (char)uVar21;
        *(undefined *)(iVar13 + 0x1623) = (&DAT_01e1b212)[*(byte *)(iVar11 + 0x15c0)];
        FUN_01e09dba();
      }
    }
    else {
      *(undefined1 *)(iVar11 + 0x254) = 0;
    }
    iVar13 = (int)(in_r14_r15 >> 0x20);
    pcVar48 = (char *)(iVar13 + 0x12fc);
    uVar20 = *(uint *)(iVar13 + 0x244);
    uVar23 = CONCAT44(pbVar46,uVar20);
    for (iVar11 = 0; iVar11 != 0xc; iVar11 = iVar11 + 1) {
      iVar14 = iVar11 * 6 + iVar13;
      uVar44 = *(uint *)(iVar14 + 0x161e);
      if (*(byte *)(iVar14 + 0x1623) == 0) {
        uVar36 = CONCAT44(6,(uint)*(byte *)(iVar14 + 0x1622));
      }
      else {
        uVar36 = CONCAT44(0x21 / *(byte *)(iVar14 + 0x1623),(uint)*(byte *)(iVar14 + 0x1622));
      }
      uVar33 = (uint)((ulonglong)uVar36 >> 0x20);
      cVar55 = (char)((ulonglong)uVar36 >> 0x20);
      if ((int)uVar36 == 2) {
        iVar14 = iVar11 * 0x1c + iVar13;
        pcVar32 = (char *)(iVar14 + 0x12f8);
        if ((uVar44 == 0) || ((uVar20 & uVar44) != uVar44)) {
          *pcVar32 = cVar55;
        }
        else if (*pcVar32 == '\0') {
          *pcVar32 = '\0';
          *(char *)(iVar14 + 0x12f9) = *(char *)(iVar14 + 0x12f9) + '\x01';
        }
        uVar52 = *(ushort *)(iVar14 + 0x12fa) + 1;
        uVar31 = 0;
        if ((uVar52 & 0xffff) <= uVar33) {
          uVar31 = uVar52;
        }
        *(char *)(iVar14 + 0x12fa) = (char)uVar31;
        *(char *)(iVar14 + 0x12fb) = (char)(uVar31 >> 8);
        if ((uVar31 & 0xffff) == 1) {
          uVar37 = 0;
          pcVar32 = pcVar48;
          while( true ) {
            lVar53 = uVar37 << 0x20;
            iVar14 = (int)uVar37;
            if (iVar14 == 0x18) break;
            if ((uVar44 & 1 << iVar14) != 0) {
              lVar53 = CONCAT44(iVar14,2);
              if (*pcVar32 != '\x01') {
                lVar53 = CONCAT44(iVar14,1);
              }
              *pcVar32 = (char)lVar53;
            }
            pcVar32 = pcVar32 + 1;
            uVar37 = (ulonglong)((int)((ulonglong)lVar53 >> 0x20) + 1);
          }
        }
      }
      else if ((int)uVar36 == 1) {
        iVar14 = iVar11 * 0x1c + iVar13;
        if ((uVar44 == 0) || ((uVar20 & uVar44) != uVar44)) {
          *(char *)(iVar14 + 0x12f9) = cVar55;
        }
        else {
          *(char *)(iVar14 + 0x12f9) = (char)(uVar20 & uVar44);
          uVar52 = *(ushort *)(iVar14 + 0x12fa) + 1;
          uVar31 = 0;
          if ((uVar52 & 0xffff) <= uVar33) {
            uVar31 = uVar52;
          }
          *(char *)(iVar14 + 0x12fa) = (char)uVar31;
          *(char *)(iVar14 + 0x12fb) = (char)(uVar31 >> 8);
          if ((uVar31 & 0xffff) == 1) {
            for (iVar14 = 0; iVar14 != 0x18; iVar14 = iVar14 + 1) {
              if ((uVar44 & 1 << iVar14) != 0) {
                cVar55 = '\x02';
                if (pcVar48[iVar14] != '\x01') {
                  cVar55 = '\x01';
                }
                pcVar48[iVar14] = cVar55;
              }
            }
          }
        }
      }
      else {
        *(undefined1 *)(iVar11 * 0x1c + iVar13 + 0x12f9) = 0;
      }
      pcVar48 = pcVar48 + 0x1c;
    }
    if (*(char *)(iVar13 + 0x248) == '\0') {
      *(undefined1 *)(iVar13 + 0x38) = 0;
      *(undefined2 *)(iVar13 + 0xde) = 0;
      *(undefined4 *)(iVar13 + 0x24c) = 0;
      bVar8 = *(byte *)(iVar13 + 0x203);
LAB_01e11906:
      if ((bVar8 & 10) == 8) {
        uVar20 = iVar13 + 0x8f7;
        uVar23 = CONCAT44(pbVar46,1);
        lVar53 = 0x200000000;
        iVar11 = 0;
        while( true ) {
          iVar13 = (int)(in_r14_r15 >> 0x20);
          puVar60 = &DAT_01e1af10;
          uVar37 = (ulonglong)uVar20;
          if (iVar11 == 2) break;
          *(int *)((int)ppuVar65 + 0xc) = iVar11;
          iVar11 = iVar11 * 0x90;
          uVar44 = iVar11 + iVar13;
          lVar57 = (ulonglong)uVar44 << 0x20;
          if (*(char *)(uVar44 + 0x166c) == '\0') {
            uVar33 = *(uint *)(uVar44 + 0x1667);
            uVar24 = CONCAT44(0x67c0,uVar20);
            iVar13 = *(int *)((int)ppuVar65 + 0xc) * 0x1f + 0x67c0;
            pcVar48 = (char *)(*(int *)((int)ppuVar65 + 0xc) * 0x1f + 0x70b0);
            if ((uVar33 == 0) || (~uVar33 != uVar33)) {
              if (*pcVar48 == '\x01') {
                *pcVar48 = '\0';
              }
            }
            else if (*pcVar48 == '\0') {
              iVar14 = *(int *)((int)ppuVar65 + 0xc);
              lVar53 = CONCAT44((int)((ulonglong)lVar53 >> 0x20),iVar14 + 0x8f0);
              while( true ) {
                uVar44 = (uint)((ulonglong)lVar57 >> 0x20);
                iVar50 = (int)(uVar37 >> 0x20);
                if (iVar50 == 2) break;
                if (iVar14 != iVar50) {
                  func_0x021127b4((int)lVar53);
                  iVar14 = *(int *)((int)ppuVar65 + 0xc);
                }
                lVar53 = CONCAT44((int)((ulonglong)lVar53 >> 0x20),(int)lVar53 + 0x1f);
                uVar37 = CONCAT44((int)(uVar37 >> 0x20) + 1,(int)uVar37);
              }
              *pcVar48 = (char)uVar37;
              *(char *)(iVar13 + 0x8f1) = *(char *)(iVar13 + 0x8f1) + '\x01';
              uVar24 = uVar37;
            }
            uVar37 = uVar24;
            if ((*(byte *)(iVar13 + 0x8f1) & 1) == 0) {
              func_0x021127b4(iVar13 + 0x8f7);
              puVar16 = (undefined1 *)(iVar13 + 0x8f2);
              iVar11 = 5;
              do {
                *puVar16 = 0;
                puVar16 = puVar16 + 1;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
            else {
              *(byte **)((int)ppuVar65 + 4) = (byte *)(iVar13 + 0x8f1);
              pbVar59 = (byte *)(iVar13 + 0x8f2);
              iVar14 = iVar13 + 0x8f5;
              uVar37 = (ulonglong)CONCAT14(*pbVar59,(int)uVar37);
              uVar23 = CONCAT44(iVar13 + 0x8f3,(int)uVar23);
              *(int *)((int)ppuVar65 + 8) = iVar13 + 0x8f7;
              pbVar46 = (byte *)(uVar44 + 0x166b);
              do {
                while( true ) {
                  uVar33 = (uint)(uVar37 >> 0x20) & 0xff;
                  iVar13 = uVar33 * 8 + iVar11;
                  puVar16 = (undefined1 *)uVar37;
                  uVar31 = (uint)((ulonglong)lVar53 >> 0x20);
                  uVar20 = *(uint *)(iVar13 + 0x7e2e);
                  uVar44 = (uint)*(ushort *)(iVar13 + 0x7e34);
                  if (uVar44 < 0x10) {
                    uVar44 = 0xf;
                  }
                  uVar52 = (uint)*(ushort *)(iVar13 + 0x7e32);
                  if (uVar52 < 0x10) {
                    uVar52 = 0xf;
                  }
                  if ((byte)(pbVar46[2] + 1) <= uVar33) break;
                  lVar53 = (ulonglong)uVar31 << 0x20;
                  puVar49 = puVar16;
                  for (iVar13 = 0; iVar13 != 0x18; iVar13 = iVar13 + 1) {
                    uVar33 = uVar20 & 1 << iVar13;
                    if (uVar33 != 0) {
                      *puVar49 = (char)((ulonglong)lVar53 >> 0x20);
                    }
                    puVar49 = puVar49 + 1;
                    lVar53 = CONCAT44((int)((ulonglong)lVar53 >> 0x20),uVar33);
                  }
                  iVar13 = (int)((ulonglong)uVar23 >> 0x20);
                  uVar33 = CONCAT11(*(undefined1 *)(iVar13 + 1),pbVar59[1]) + 0xf;
                  pbVar59[1] = (byte)uVar33;
                  uVar37 = uVar37 & 0xffffffff;
                  *(char *)(iVar13 + 1) = (char)(uVar33 >> 8);
                  if ((uVar33 & 0xffff) <= uVar52) goto LAB_01e11af2;
                  pbVar59[1] = (byte)uVar52;
                  *(char *)(iVar13 + 1) = (char)(uVar52 >> 8);
                  for (iVar50 = 0; iVar50 != 0x18; iVar50 = iVar50 + 1) {
                    if ((uVar20 & 1 << iVar50) != 0) {
                      puVar16[iVar50] = (char)uVar23;
                    }
                  }
                  uVar20 = CONCAT11(*(undefined1 *)(iVar14 + 1),pbVar59[3]) + 0xf;
                  pbVar59[3] = (byte)uVar20;
                  *(char *)(iVar14 + 1) = (char)(uVar20 >> 8);
                  if ((uVar20 & 0xffff) < uVar44) goto LAB_01e11af2;
                  pbVar59[0x1d] = 0;
                  *(undefined1 *)(iVar13 + 1) = 0;
                  pbVar59[1] = 0;
                  *(undefined1 *)(iVar14 + 1) = 0;
                  pbVar59[3] = 0;
                  uVar37 = CONCAT44(*pbVar59 + 1,puVar16);
                  *pbVar59 = (byte)(*pbVar59 + 1);
                }
                lVar53 = CONCAT44(uVar31,(uint)*pbVar46);
                uVar37 = uVar37 & 0xffffffff;
                func_0x021127b4(*(undefined4 *)((int)ppuVar65 + 8));
                iVar13 = 5;
                pbVar17 = pbVar59;
                do {
                  *pbVar17 = (byte)(uVar37 >> 0x20);
                  pbVar17 = pbVar17 + 1;
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
              } while ((int)lVar53 == 1);
              **(undefined1 **)((int)ppuVar65 + 4) = 0;
            }
          }
LAB_01e11af2:
          uVar20 = (int)uVar37 + 0x1f;
          iVar11 = *(int *)((int)ppuVar65 + 0xc) + 1;
          in_r14_r15 = 0x67c000000000;
          uVar23 = CONCAT44(&DAT_000040fc,(int)uVar23);
        }
        goto LAB_01e11b8a;
      }
    }
    else {
      bVar8 = *(byte *)(iVar13 + 0x203);
      if ((bVar8 & 8) == 0) {
        uVar25 = *(ushort *)(iVar13 + 0xde);
        if (uVar25 >> 4 < 0x76007601) {
          uVar25 = uVar25 + 0xf;
          *(ushort *)(iVar13 + 0xde) = uVar25;
        }
        uVar20 = *(uint *)(iVar13 + 0x250);
        uVar44 = *(uint *)(iVar13 + 0x24c) ^ uVar20;
        if (uVar44 != 0) {
          *(uint *)(iVar13 + 0x24c) = uVar20;
          if ((uVar20 & uVar44) == 0) {
            uVar33 = (uint)*(byte *)(iVar13 + 0x308);
            *(ushort *)((uVar33 * 8 + iVar13 + 0x79a) * 2) = uVar25;
            if (uVar20 != 0) goto LAB_01e11b4c;
          }
          else {
            uVar33 = (uint)*(byte *)(iVar13 + 0x308);
            if ((uVar20 & uVar44) == 0) {
              iVar11 = uVar33 * 8 + iVar13;
              if (*(int *)((iVar11 + 0x3cc) * 4) != 0) {
                puVar16 = (undefined1 *)(iVar11 + 0xf36);
                goto LAB_01e11b46;
              }
            }
            else {
              puVar16 = (undefined1 *)(uVar33 * 8 + iVar13 + 0xf34);
LAB_01e11b46:
              *puVar16 = (char)uVar25;
              puVar16[1] = (char)(uVar25 >> 8);
LAB_01e11b4c:
              uVar33 = uVar33 + 1;
              *(char *)(iVar13 + 0x38) = (char)uVar33;
            }
            *(uint *)(((uVar33 & 0xff) * 8 + iVar13 + 0x3cc) * 4) = uVar20;
          }
          *(undefined2 *)(iVar13 + 0xde) = 0;
          if (0xf < (uVar33 & 0xff)) {
            *(undefined1 *)(iVar13 + 0x38) = 0;
            *(undefined2 *)(iVar13 + 0xde) = 0;
            *(undefined1 *)(iVar13 + 0x248) = 0;
            goto LAB_01e11906;
          }
        }
      }
      else {
        *(undefined1 *)(iVar13 + 0x38) = 0;
        *(undefined2 *)(iVar13 + 0xde) = 0;
        *(undefined4 *)(iVar13 + 0x24c) = 0;
      }
    }
    puVar60 = &DAT_01e1af10;
    func_0x021127b4(iVar13 + 0x8f0);
LAB_01e11b8a:
    for (iVar11 = 0; iVar11 != 0x18; iVar11 = iVar11 + 1) {
      iVar14 = iVar13 + 0x12f9;
      for (iVar50 = 0xc; iVar50 != 0; iVar50 = iVar50 + -1) {
        cVar55 = *(char *)(iVar14 + iVar11 + 3);
        if (cVar55 == '\x01') {
          iVar30 = (uint)(*(ushort *)(puVar60 + iVar11 + 0x34cc) >> 8) + iVar13;
          *(byte *)(iVar30 + 0x200) =
               *(byte *)(iVar30 + 0x200) & ~(byte)*(ushort *)(puVar60 + iVar11 + 0x34cc);
        }
        else if (cVar55 == '\x02') {
          iVar30 = (uint)(*(ushort *)(puVar60 + iVar11 + 0x34cc) >> 8) + iVar13;
          *(byte *)(iVar30 + 0x200) =
               *(byte *)(iVar30 + 0x200) | (byte)*(ushort *)(puVar60 + iVar11 + 0x34cc);
        }
        iVar14 = iVar14 + 0x1c;
      }
      for (iVar14 = 0xffc2; iVar14 != 0; iVar14 = iVar14 + 0x1f) {
        if (*(char *)(iVar11 + iVar13 + iVar14 + 0x935) == '\x02') {
          iVar50 = (uint)(*(ushort *)(puVar60 + iVar11 + 0x34cc) >> 8) + iVar13;
          *(byte *)(iVar50 + 0x200) =
               (byte)*(ushort *)(puVar60 + iVar11 + 0x34cc) | *(byte *)(iVar50 + 0x200);
        }
      }
    }
    puVar16 = (undefined1 *)*ppuVar65;
    uVar37 = CONCAT44(puVar16,(uint)(byte)puVar16[2]) & 0xffffffffffffff30;
    iVar11 = (int)(uVar37 >> 0x20);
    bVar8 = *(byte *)(iVar11 + 1);
    bVar28 = *(byte *)(iVar11 + 3);
    uVar37 = (ulonglong)CONCAT14(*puVar16,(int)uVar37) & 0xffffff30ffffffff;
    uVar24 = (ulonglong)CONCAT14(bVar28,(uint)bVar28) & 0xffffff10ffffff20;
    uVar22 = (ulonglong)CONCAT14(bVar8,(uint)bVar8) & 0xffffffffffffff40;
    iVar14 = (int)(char)(uVar22 >> 0x20);
    pcVar48 = (char *)((ulonglong)uVar23 >> 0x20);
    iVar11 = 0;
    while( true ) {
      iVar50 = (int)(uVar37 >> 0x20);
      cVar55 = (char)(uVar37 >> 0x20);
      iVar30 = (int)(uVar24 >> 0x20);
      cVar38 = (char)(uVar24 >> 0x20);
      if (iVar11 == 0x3e) break;
      pcVar48[0] = -0x80;
      pcVar48[1] = '\x03';
      pcVar48[2] = '\0';
      pcVar48[3] = '\0';
      if (iVar50 != 0) {
        pcVar48[1] = (char)uVar22;
      }
      if ((int)uVar22 != 0) {
        *pcVar48 = cVar55;
      }
      if (iVar14 < 0x1ff) {
        *pcVar48 = cVar38;
      }
      if ((int)uVar37 != 0) {
        pcVar48[3] = (char)uVar24;
      }
      if (iVar30 != 0) {
        pcVar48[2] = cVar55;
      }
      if ((int)uVar24 != 0) {
        pcVar48[2] = cVar38;
      }
      iVar11 = iVar11 + 0x1f;
    }
    for (iVar11 = 0; iVar11 != 0x150; iVar11 = iVar11 + 0x1c) {
      pcVar48[0] = -0x80;
      pcVar48[1] = '\x03';
      pcVar48[2] = '\0';
      pcVar48[3] = '\0';
      if (iVar50 != 0) {
        pcVar48[1] = (char)uVar22;
      }
      if ((int)uVar22 != 0) {
        *pcVar48 = cVar55;
      }
      if (iVar14 < 0x1ff) {
        *pcVar48 = cVar38;
      }
      if ((int)uVar37 != 0) {
        pcVar48[3] = (char)uVar24;
      }
      if (iVar30 != 0) {
        pcVar48[2] = cVar55;
      }
      if ((int)uVar24 != 0) {
        pcVar48[2] = cVar38;
      }
    }
    if ((*(char *)(iVar13 + 0x15c2) == '\x01') && (*pcVar48 != -0x80)) {
      *pcVar48 = *pcVar48;
    }
    if ((*(char *)(iVar13 + 0x15c3) == '\x01') && (pcVar48[1] != -0x80)) {
      pcVar48[1] = pcVar48[1];
    }
    if ((*(char *)(iVar13 + 0x15c6) == '\x01') && (pcVar48[2] != -0x80)) {
      pcVar48[2] = pcVar48[2];
    }
    if ((*(char *)(iVar13 + 0x15c7) == '\x01') && (pcVar48[3] != -0x80)) {
      pcVar48[3] = pcVar48[3];
    }
    FUN_01e0e36e();
    FUN_01e0e402();
    puVar12 = (uint *)func_0x021127a8((undefined1 *)((int)ppuVar65 + 0x10),4);
    return puVar12;
  case 0x6c:
    *(short *)(puVar45 + 3) = (short)puVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6d:
    puVar12 = (uint *)FUN_01e24506(0);
    return puVar12;
  case 0x6e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6f:
    *puStack_8 = 0;
    bVar8 = 0;
    if (*pbVar59 != 4) {
      bVar8 = *pbVar59 + 1;
    }
    *pbVar59 = bVar8;
    local_24 = (uint *)(uint)bVar8;
    puVar12 = (uint *)FUN_01e36848(2,0x8af8);
    return puVar12;
  case 0x70:
    EnableInterrupts(pbVar59);
    goto switchD_01e0931a_caseD_8;
  case 0x72:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x73:
switchD_01e0931a_caseD_73:
    bVar8 = (byte)uVar22;
LAB_01e0f776:
    *(byte *)((int)(in_r14_r15 >> 0x20) + 0x8e) = bVar8;
    goto LAB_01e0f9d6;
  case 0x74:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x79:
  case 0x7e:
  case 0x83:
  case 0x86:
    FUN_01e28494(pbVar46);
    *ppuVar65 = (uint *)(int)(uVar24 >> 0x20);
    goto switchD_01e0931a_caseD_b;
  case 0x7a:
switchD_01e0931a_caseD_7a:
    iVar11 = (int)uVar22;
    if (iVar11 != 0x20) {
      if (iVar11 == 0x26) {
        FUN_01e09242(&DAT_01e1b38d);
        uVar21 = 9;
        goto LAB_01e09676;
      }
      if (iVar11 == 0x28) goto LAB_01e0966e;
      if ((iVar11 != 0x3d) && (iVar11 != 0x46)) {
        if (iVar11 == 0x50) {
          iVar11 = 0x14;
          goto LAB_01e0968c;
        }
        if (iVar11 == 0) goto switchD_01e0931a_caseD_8;
        iVar11 = 0x19;
        FUN_01e09242(&DAT_01e1bcb2);
        iVar14 = (int)(uVar37 >> 0x20);
        iVar13 = (int)uVar37;
        uVar7 = *(undefined1 *)(iVar14 + 0xac1);
        uVar27 = *(undefined1 *)(iVar14 + 0xac2);
        *(undefined1 *)(iVar13 + 0x30a) = *(undefined1 *)(iVar14 + 0xac0);
        *(undefined1 *)(iVar13 + 0x30b) = uVar7;
        *(undefined1 *)(iVar13 + 0x30c) = uVar27;
        goto LAB_01e09690;
      }
      iVar11 = 0x20;
      goto LAB_01e0968c;
    }
LAB_01e0966e:
    FUN_01e09242();
    uVar21 = 7;
LAB_01e09676:
    iVar11 = FUN_01e09264(uVar21);
    goto LAB_01e09690;
  case 0x7b:
  case 0x80:
    goto switchD_01e0931a_caseD_7b;
  case 0x7c:
  case 0x81:
  case 0x89:
  case 0x8b:
  case 0x8d:
  case 0xa7:
  case 0xf3:
  case 0xfc:
    *(undefined1 *)*puVar12 = 1;
    FUN_01e36848(2,(int)puStack_8 + 0x135d);
    if (((*(ushort *)((int)uVar24 + 8) & 0x30) != 0x10) ||
       (puVar12 = (uint *)0x0, *(char *)((int)uVar24 + 10) != '\0')) {
      puVar12 = (uint *)FUN_01e28162();
    }
    return puVar12;
  case 0x7d:
    local_24 = puVar10;
    while( true ) {
      uVar20 = (uint)uVar24;
      thunk_FUN_01e051d8(10);
      puVar12 = (uint *)in_r2_r3;
      iVar11 = (int)(in_r2_r3 >> 0x20) + 1;
      in_r2_r3 = CONCAT44(iVar11,puVar12);
      if (iVar11 == 8) break;
      uVar24 = CONCAT44(*puVar12,uVar20) | 0x20000000000;
      uVar44 = *puVar12 & 0xfffffdff;
      if ((uVar20 >> iVar11 & extraout_r1_02) != 0) {
        uVar44 = (uint)(uVar24 >> 0x20);
      }
      *puVar12 = uVar44;
      puVar12[2] = puVar12[2] & 0x200;
      thunk_FUN_01e051d8(10);
      puVar12 = (uint *)in_r2_r3;
      *puVar12 = *puVar12 | 0x80;
      puVar12[2] = puVar12[2] & 0xffffff7f;
      thunk_FUN_01e051d8(0x14);
      puVar12 = (uint *)in_r2_r3;
      *puVar12 = *puVar12 & 0xffffff7f;
      puVar12[2] = puVar12[2] & 0xffffff7f;
    }
    puVar12[2] = puVar12[2] | 0x200;
    *puVar12 = *puVar12 & 0xffffff7f;
    puVar12[2] = puVar12[2] & 0xffffff7f;
    thunk_FUN_01e051d8(10);
    puVar12 = (uint *)in_r2_r3;
    *puVar12 = *puVar12 | 0x80;
    puVar12[2] = puVar12[2] & 0xffffff7f;
    thunk_FUN_01e051d8(10);
    thunk_FUN_01e051d8(10);
    *puVar12 = *puVar12 & 0xffffff7f;
    puVar12[2] = puVar12[2] & 0xffffff7f;
    thunk_FUN_01e051d8(10);
    puVar12[2] = puVar12[2] & 0x200;
    *puVar12 = *puVar12 & 0x200;
    puVar12[2] = puVar12[2] & 0x200;
    return (uint *)(~(extraout_r1_03 >> 9) & 1);
  case 0x7f:
    goto switchD_01e0931a_caseD_7f;
  case 0x82:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x84:
    goto switchD_01e0931a_caseD_84;
  case 0x85:
switchD_01e0931a_caseD_85:
    uVar22 = 0x1ec00000000;
    goto switchD_01e0931a_caseD_7b;
  case 0x87:
    goto switchD_01e0931a_caseD_87;
  case 0x88:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8a:
    if (((in_r4_r5 & 0x1e1af4500000000) != 0) || ((in_psr & 5) != 0)) {
      if ((in_psr & 4) == 0) {
        in_r2_r3 = in_r10_r11 & 0xffffffff;
        goto LAB_01e18b66;
      }
      if ((in_psr & 4) == 0) {
        in_r2_r3 = ZEXT48(puVar10);
        goto LAB_01e18b66;
      }
      if (pbVar59 == (byte *)(iVar13 + 1) && puVar12 == (uint *)0x0) {
        in_r2_r3 = in_r10_r11;
        if (((uint)puVar26 ^ (uint)puStack_8) == 0x80000000 && puVar10 == puVar12) {
          in_r2_r3 = 0;
        }
        goto LAB_01e18b66;
      }
      if ((byte *)(iVar13 + 1) == (byte *)0x67c0 && puVar10 == (uint *)0x0) goto LAB_01e18b66;
      if (puVar12 == (uint *)0x0 && pbVar59 == (byte *)0x0) {
        if (((uint)puVar10 | 0x67c0) == 0) {
          in_r2_r3 = (ulonglong)((uint)puVar10 & (uint)puVar12);
        }
        goto LAB_01e18b66;
      }
      in_r2_r3 = in_r10_r11;
      if (((uint)puVar10 | 0x67c0) == 0) goto LAB_01e18b66;
    }
    if (((in_psr & 2) >> 1 & ((int)puVar10 - (int)puVar12 | 0x67c0U - (int)pbVar59)) == 0) {
      uVar22 = in_r10_r11;
      in_r10_r11 = CONCAT44(puVar26,&DAT_00004130);
    }
    uStack_10 = uVar22 & 0xfffffffffffff;
    uVar37 = in_r10_r11 & 0xfffffffffffff;
    iVar11 = 0;
    uStack_18 = uVar37;
    uVar21 = FUN_01e1889a(&uStack_10);
    uVar44 = (uint)(uVar22 >> 0x20);
    uVar20 = (uint)(in_r10_r11 >> 0x20);
    *(ulonglong *)ppuVar65 = CONCAT44(extraout_r1_07,uVar21);
    if (iVar11 == 0) {
      iVar11 = FUN_01e1889a(ppuVar65 + 3);
      uVar37 = *(ulonglong *)((int)ppuVar65 + 0xc);
    }
    iVar13 = (int)(*(ulonglong *)((int)ppuVar65 + 0x14) >> 3);
    uVar24 = CONCAT44((uint)(*(ulonglong *)((int)ppuVar65 + 0x14) >> 0x23),iVar13) |
             0x80000000000000;
    *(ulonglong *)((int)ppuVar65 + 0x14) = uVar24;
    uVar37 = CONCAT44((uint)(uVar37 >> 0x23),(int)(uVar37 >> 3)) | 0x80000000000000;
    *(ulonglong *)((int)ppuVar65 + 0xc) = uVar37;
    if ((int)*(undefined8 *)ppuVar65 != iVar11) {
      if ((uint)((int)*(undefined8 *)ppuVar65 - iVar11) < 0x40) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar37 = 1;
      *(undefined8 *)((int)ppuVar65 + 0xc) = 1;
    }
    iVar11 = (int)(uVar24 >> 0x20);
    iVar14 = (int)uVar37;
    iVar50 = (int)(uVar37 >> 0x20);
    if ((longlong)((ulonglong)(uVar44 ^ uVar20) << 0x20) < 0) {
      iVar13 = iVar13 - iVar14;
      iVar11 = iVar11 - iVar50;
      lVar53 = CONCAT44(iVar11,iVar13);
      *(longlong *)((int)ppuVar65 + 0x14) = lVar53;
      if (iVar13 == 0 && iVar11 == 0) {
        in_r2_r3 = 0;
        goto LAB_01e18b66;
      }
      if (((in_psr & 2) >> 1 & (iVar11 - 0x7fffffU | iVar13 + 1U)) == 0) {
        FUN_01e1887c(iVar13);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_01e18a9c:
      iVar11 = (int)*(undefined8 *)ppuVar65;
    }
    else {
      uVar20 = iVar50 + iVar11;
      lVar53 = CONCAT44(uVar20,iVar14 + iVar13);
      *(longlong *)((int)ppuVar65 + 0x14) = lVar53;
      if ((uVar20 & 0x1000000) == 0) goto LAB_01e18a9c;
      lVar53 = CONCAT44((int)((ulonglong)(lVar53 << 1) >> 0x20),
                        (uint)(lVar53 << 1) | iVar14 + iVar13 & 1U);
      *(longlong *)((int)ppuVar65 + 0x14) = lVar53;
      iVar11 = (int)*(undefined8 *)ppuVar65 + 1;
    }
    if (iVar11 < 0x7ff) {
      if (iVar11 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar44 = (uint)lVar53 & 7;
      uVar33 = (int)(lVar53 << 3) + (uint)(4 < uVar44);
      uVar20 = uVar33 & 1;
      if (uVar44 != 4) {
        uVar20 = 0;
      }
      in_r2_r3 = (ulonglong)(uVar20 + uVar33);
    }
    else {
      in_r2_r3 = 0;
    }
LAB_01e18b66:
    return (uint *)in_r2_r3;
  case 0x8c:
    nop();
    if (pbVar46 != (byte *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8f:
  case 0x9a:
  case 0xb1:
  case 0xc2:
  case 0xce:
  case 0xfe:
    *(char *)((int)puVar12 + 0xe) = (char)(in_r4_r5 >> 0x20);
    goto switchD_01e0931a_caseD_20;
  case 0x90:
    if (DAT_00007281 == 0x30) goto switchD_01e0931a_caseD_85;
    if (DAT_00007281 != 0x31) goto LAB_01e09578;
    DAT_000069a8 = 1;
    DAT_000069a4 = '\x01';
    DAT_0000698c = 1;
    DAT_0000699c = 0;
    DAT_000067e7 = 0;
    DAT_000067e5 = 0;
    DAT_000067e6 = 0;
    DAT_000069a0 = 0;
    goto switchD_01e0931a_caseD_f;
  case 0x92:
switchD_01e0931a_caseD_92:
    iVar11 = (int)uVar37;
    if (in_cres == 1) {
      *(undefined1 *)((int)(in_r14_r15 >> 0x20) + 0x618) = 0xff;
    }
    iVar13 = func_0x021127b0(iVar11,0x18);
    if (iVar13 != 0) {
      puVar12 = (uint *)func_0x021127a8(iVar11 + 0x18,0x18);
      return puVar12;
    }
    goto LAB_01e12c10;
  case 0x93:
    *(short *)puVar19 = (short)in_r6_r7;
    iVar11 = (int)puVar19 + -2;
    goto code_r0x01e101a0;
  case 0x94:
    goto switchD_01e0931a_caseD_94;
  case 0x95:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x9b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x9c:
  case 0xe6:
    goto switchD_01e0931a_caseD_9c;
  case 0x9d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x9e:
    if (puVar10 == (uint *)0x12) {
      uVar22 = 1;
      goto switchD_01e0931a_caseD_9f;
    }
    goto LAB_01e0dbbe;
  case 0x9f:
switchD_01e0931a_caseD_9f:
    FUN_01e0d554((int)uVar22);
    FUN_01e0d554(1);
LAB_01e0dbbe:
    iVar11 = (int)in_r10_r11;
    uVar21 = (undefined4)in_r6_r7;
    FUN_01e0d728(ppuVar65);
    FUN_01e0d5e4();
    FUN_01e0d46e();
    FUN_01e0d4b0((int)(uVar24 >> 0x20));
    FUN_01e0d4b0((int)uVar24);
    FUN_01e0d5e4();
    FUN_01e0d46e();
    FUN_01e0d4b0(uVar21);
    if (*(char *)(iVar11 + 0x601) == '\x12') {
      FUN_01e0d554(1);
      FUN_01e0d554(1);
    }
    FUN_01e0d728((undefined1 *)((int)ppuVar65 + 6));
    FUN_01e0d5e4();
    if (9 < *(byte *)(iVar11 + 0x602)) {
      for (iVar13 = 0; iVar13 != 0xc; iVar13 = iVar13 + 2) {
        pbVar46 = (byte *)((int)ppuVar65 + iVar13);
        bVar8 = *pbVar46;
        *pbVar46 = pbVar46[1];
        pbVar46[1] = bVar8;
      }
    }
    cVar55 = *(char *)(iVar11 + 0x601);
    if (cVar55 == '\x12') {
LAB_01e0dc34:
      uVar21 = *ppuVar65;
      bVar8 = (byte)*(undefined4 *)((int)ppuVar65 + 2);
      *(byte *)ppuVar65 = bVar8;
      *(byte *)((int)ppuVar65 + 2) = (byte)uVar21;
      uVar21 = *(undefined4 *)((int)ppuVar65 + 1);
      bVar28 = (byte)*(undefined4 *)((int)ppuVar65 + 3);
      *(byte *)((int)ppuVar65 + 1) = bVar28;
      *(byte *)((int)ppuVar65 + 3) = (byte)uVar21;
      uVar21 = *(undefined4 *)((int)ppuVar65 + 6);
      *(byte *)((int)ppuVar65 + 6) = (byte)*(undefined4 *)((int)ppuVar65 + 8);
      *(byte *)((int)ppuVar65 + 8) = (byte)uVar21;
      iVar13 = 7;
      iVar14 = 6;
      iVar50 = 1;
      iVar30 = 0;
    }
    else {
      if (cVar55 != '\x10') {
        if (cVar55 != '\v') goto LAB_01e0dcd8;
        goto LAB_01e0dc34;
      }
      uVar21 = *ppuVar65;
      *(char *)ppuVar65 = (char)*(undefined4 *)((int)ppuVar65 + 2);
      bVar8 = (byte)uVar21;
      *(byte *)((int)ppuVar65 + 2) = bVar8;
      uVar21 = *(undefined4 *)((int)ppuVar65 + 1);
      *(byte *)((int)ppuVar65 + 1) = (byte)*(undefined4 *)((int)ppuVar65 + 3);
      bVar28 = (byte)uVar21;
      *(byte *)((int)ppuVar65 + 3) = bVar28;
      uVar21 = *(undefined4 *)((int)ppuVar65 + 6);
      *(byte *)((int)ppuVar65 + 6) = (byte)*(undefined4 *)((int)ppuVar65 + 8);
      *(byte *)((int)ppuVar65 + 8) = (byte)uVar21;
      iVar13 = 9;
      iVar14 = 8;
      iVar50 = 3;
      iVar30 = 2;
    }
    uVar21 = *(undefined4 *)((int)ppuVar65 + 7);
    *(byte *)((int)ppuVar65 + 7) = (byte)*(undefined4 *)((int)ppuVar65 + 9);
    *(byte *)((int)ppuVar65 + 9) = (byte)uVar21;
    *(byte *)((int)ppuVar65 + iVar30) = bVar8;
    *(byte *)((int)ppuVar65 + iVar50) = bVar8 & bVar28;
    *(byte *)((int)ppuVar65 + iVar14) = *(byte *)((int)ppuVar65 + iVar14);
    *(byte *)((int)ppuVar65 + iVar13) = *(byte *)((int)ppuVar65 + iVar13);
LAB_01e0dcd8:
    uVar37 = (ulonglong)(CONCAT14(DAT_00004130,_DAT_00004134 >> 0x10) & 0xff000000ff);
    FUN_01e0d764(ppuVar65);
    if (((int)(uVar37 >> 0x20) != 3) && ((int)uVar37 != 1)) {
      puVar12 = (uint *)func_0x021127a8(iVar11 + 0xa6e,0xc);
      return puVar12;
    }
    bVar8 = 0;
    if ((byte)(*(char *)(iVar11 + 0x504) + 1U) < 6) {
      bVar8 = *(char *)(iVar11 + 0x504) + 1;
    }
    *(byte *)(iVar11 + 0x54) = bVar8;
    lVar53 = (ulonglong)bVar8 << 0x20;
    while( true ) {
      iVar13 = (int)lVar53;
      uVar20 = (uint)((ulonglong)lVar53 >> 0x20);
      if (iVar13 == 0xc) break;
      *(undefined1 *)((uint)bVar8 * 0xc + iVar11 + 0xa6e + iVar13) =
           *(undefined1 *)((int)ppuVar65 + iVar13);
      lVar53 = CONCAT44(uVar20,iVar13 + 1);
    }
    if (uVar20 < 4) {
      lVar53 = 0x1000001f4;
      *(undefined1 *)(iVar11 + 500) = 1;
    }
LAB_01e0dd58:
    return (uint *)lVar53;
  case 0xa1:
    FUN_01e23d6e(pbVar46,0);
    return (uint *)uVar24;
  case 0xa2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa4:
    puVar12 = (uint *)func_0x021127a8(0xf);
    return puVar12;
  case 0xa8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xa9:
    puVar12 = (uint *)FUN_01e0d898();
    return puVar12;
  case 0xab:
switchD_01e0931a_caseD_ab:
    if ((int)uVar22 == 0x21) {
      iVar11 = 0x24;
      FUN_01e09242(&DAT_01e1cdd6);
      goto LAB_01e0957e;
    }
    goto LAB_01e09578;
  case 0xac:
    while (*(short *)((int)puVar12 + 0x1a) == 0) {
      do {
      } while (puVar10 == (uint *)0x0);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb2:
    goto switchD_01e0931a_caseD_b2;
  case 0xb3:
    uVar24 = 0x67c0;
    goto code_r0x01e0d3a2;
  case 0xb4:
    puVar12 = (uint *)thunk_EXT_FUN_0200010a();
    return puVar12;
  case 0xb5:
    goto switchD_01e0931a_caseD_b5;
  case 0xb7:
    goto switchD_01e0931a_caseD_b7;
  case 0xb8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xba:
    goto switchD_01e0931a_caseD_ba;
  case 0xbc:
    puVar12 = (uint *)0x1;
    if (puVar10 == (uint *)0x0) {
      FUN_01e0d898();
    }
    return puVar12;
  case 0xbe:
    while( true ) {
      uVar44 = (uint)(in_r6_r7 >> 0x20);
      uVar25 = (ushort)(in_r2_r3 >> 0x20);
      uVar20 = (uint)(in_r2_r3 >> 0x20);
      if ((uint)(uVar22 >> 0x20) < (uint)uVar22) {
        *(ushort *)(uVar24 >> 0x20) = uVar25;
        uVar22 = CONCAT44(uVar20,(uint)uVar22);
      }
      iVar11 = (int)uVar24;
      puVar43 = (ushort *)((int)in_r2_r3 + 0x3f2);
      uVar33 = (uint)*puVar43;
      uVar31 = (uint)uVar22;
      if (uVar31 < uVar33) {
        *puVar43 = uVar25;
        uVar33 = uVar20;
      }
      uVar25 = (ushort)(uVar22 >> 0x20);
      iVar13 = (int)(in_r14_r15 >> 0x20);
      if ((uVar44 & 1 << iVar11) == 0) {
        uVar24 = (ulonglong)CONCAT24(*(undefined2 *)(iVar13 + 0x3e2 + iVar11),uVar33);
      }
      else {
        uVar20 = (uint)uVar25 - (uVar33 & 0xffff) >> 1;
        uVar24 = CONCAT44(uVar20,uVar33);
        *(short *)((iVar13 + 0x3e2 + iVar11) * 2) = (short)uVar20;
      }
      sVar39 = (short)(uVar24 >> 0x20);
      uVar47 = sVar39 + 0x50;
      if (uVar47 < uVar31) {
        sVar40 = 0x100;
        if ((int)uVar31 < (int)(uVar25 - 0x32)) {
          sVar40 = (short)((int)((uVar31 - uVar47) * 0x100) /
                          (int)((uint)uVar25 + ((int)in_r12_r13 - (uint)uVar47)));
        }
        sVar40 = sVar40 + 0x200;
      }
      else {
        sVar40 = 0x200;
        uVar20 = (uint)(ushort)(sVar39 - 0x50);
        if (uVar31 < uVar20) {
          sVar40 = 0x100;
          if (((uint)uVar24 & 0xffff) + 0x32 < uVar31) {
            uVar24 = CONCAT44(uVar20 - 0x32,(uint)uVar24) & 0xffffffff0000ffff;
            sVar40 = (short)((int)((uVar20 - uVar31) * 0x100) /
                            ((int)(uVar24 >> 0x20) - (int)uVar24));
          }
          sVar40 = 0x200 - sVar40;
        }
      }
      *(short *)((iVar13 + 0x3fa + iVar11) * 2) = sVar40;
      iVar14 = iVar11 + 1;
      if (iVar14 == 4) break;
      uVar20 = FUN_01e0df90(*(undefined1 *)(iVar11 + 0x1e1b819));
      iVar11 = iVar14 * 2;
      in_r6_r7 = (ulonglong)uVar44 << 0x20;
      iVar13 = iVar11 + (int)(in_r14_r15 >> 0x20);
      puVar51 = (undefined2 *)(iVar13 + 0x3ea);
      uVar24 = CONCAT44(puVar51,iVar14);
      uVar20 = (uVar20 & 0xffff) + (uint)*(ushort *)(iVar11 + 0x4166) * 3 >> 2;
      in_r2_r3 = CONCAT44(uVar20,iVar13);
      uVar22 = (ulonglong)(CONCAT24(*puVar51,uVar20) & 0xffff0000ffff);
      *(short *)(iVar11 + 0x4166) = (short)uVar20;
    }
    uVar23 = 0x1fd00000000;
    in_r12_r13 = CONCAT44((int)((ulonglong)in_r12_r13 >> 0x20),&DAT_00004130);
    for (iVar11 = 0; iVar11 != 4; iVar11 = iVar11 + 1) {
      iVar14 = (int)((ulonglong)uVar23 >> 0x20);
      if ((byte)((byte)uVar23 | 2) == 2) {
        iVar50 = iVar11 * 2 + iVar13;
        *(short *)((iVar50 + iVar14) * 2) = 0x400 - *(short *)(iVar50 + iVar14);
      }
      uVar23 = CONCAT44(iVar14,(int)uVar23 + 1);
    }
    *(char *)(iVar13 + 0x3b1) = (char)*(undefined2 *)(iVar13 + 0x3fc);
    *(char *)(iVar13 + 0x3b2) = (char)((ushort)*(undefined2 *)(iVar13 + 0x3fc) >> 8);
    *(char *)(iVar13 + 0x3b3) = (char)*(undefined2 *)(iVar13 + 0x3fa);
    *(char *)(iVar13 + 0x3b4) = (char)((ushort)*(undefined2 *)(iVar13 + 0x3fa) >> 8);
    *(undefined2 *)(iVar13 + 0x3b8) = *(undefined2 *)(iVar13 + 0x400);
    *(undefined2 *)(iVar13 + 0x3ba) = *(undefined2 *)(iVar13 + 0x3fe);
    uVar25 = (ushort)((int)uVar37 << 2) ^ 0x3ff;
    if ((int)uVar37 == 0x80) {
      uVar25 = 0x200;
    }
    *(char *)(iVar13 + 0x3b1) = (char)uVar25;
    *(char *)(iVar13 + 0x3b2) = (char)(uVar25 >> 8);
    uVar20 = (uint)(in_r10_r11 >> 0x20);
    *(char *)(iVar13 + 0x3b4) = (char)(uVar20 >> 6);
    *(char *)(iVar13 + 0x3b3) = (char)(uVar20 << 2);
    uVar25 = (ushort)((int)in_r10_r11 << 2) ^ 0x3ff;
    if ((int)in_r10_r11 == 0x80) {
      uVar25 = 0x200;
    }
    *(ushort *)((iVar13 + 0x1dc) * 2) = uVar25;
    *(short *)((iVar13 + 0x1dd) * 2) = (short)((int)(uVar37 >> 0x20) << 2);
    in_r10_r11 = 0x1e1af10;
    if (*(char *)(iVar13 + 0x144) != '\0') {
      uVar22 = (ulonglong)*(byte *)(iVar13 + 0x10a);
      goto switchD_01e0931a_caseD_51;
    }
LAB_01e12c10:
    uVar22 = 0x21c;
switchD_01e0931a_caseD_b2:
    iVar11 = (int)(in_r14_r15 >> 0x20);
    if ((*(char *)(iVar11 + (int)uVar22) == '\0') || (iVar13 = FUN_01e0f4ec(0x20), iVar13 != 0)) {
LAB_01e12c26:
      *(undefined2 *)(iVar11 + 0xda) = 0;
    }
    else {
      iVar13 = *(ushort *)(iVar11 + 0xda) + 1;
      uVar37 = CONCAT44(iVar13,iVar13) & 0xffffffffffff;
      *(short *)(iVar11 + 0xda) = (short)uVar37;
      if (0x84 < (uint)(uVar37 >> 0x20)) {
        for (iVar13 = 0; iVar13 != 6; iVar13 = iVar13 + 1) {
          sVar39 = *(short *)(iVar11 + 0x468 + iVar13);
          *(short *)(((int)in_r12_r13 + 0x94 + iVar13) * 2) =
               sVar39 + (short)(((int)*(short *)(iVar11 + 0x45c + iVar13) - (int)sVar39) / 2);
        }
        iVar13 = FUN_01e0f4ec(0x20);
        if (iVar13 == 0) {
          FUN_01e0302a();
          *(undefined1 *)(iVar11 + 0x21c) = 0;
          if (*(char *)(iVar11 + 400) == '\0') {
            *(undefined1 *)(iVar11 + 0x1f8) = 1;
            *(undefined1 *)(iVar11 + 0x2e) = 0xd;
          }
          else {
            *(undefined1 *)(iVar11 + 400) = 0;
            *(undefined1 *)(iVar11 + 0x1b0) = 1;
          }
        }
        goto LAB_01e12c26;
      }
    }
    iVar13 = (int)((ulonglong)in_r12_r13 >> 0x20);
    uVar7 = 0;
    FUN_01e0530a(0,((uint)*(byte *)(iVar11 + 0x509) * 10000) / 0xff);
    if (*(short *)(iVar11 + 0xd2) == 0) {
      *(undefined1 *)(iVar11 + 0x30) = uVar7;
    }
    else {
      *(short *)(iVar11 + 0xd2) = *(short *)(iVar11 + 0xd2) + -1;
    }
    if (*(short *)(iVar11 + 0xd4) == 0) {
      uVar20 = 0;
      *(undefined1 *)(iVar11 + 0x31) = 0;
    }
    else {
      *(short *)(iVar11 + 0xd4) = *(short *)(iVar11 + 0xd4) + -1;
      uVar20 = (uint)*(byte *)(iVar11 + 0x301);
    }
    uVar37 = (ulonglong)CONCAT14(*(byte *)(iVar11 + 0x300),uVar20);
    if (*(byte *)(iVar11 + 0x300) < 3) {
      bVar8 = *(char *)(iVar11 + 0x302) + 1;
      *(byte *)(iVar11 + 0x32) = bVar8;
      uVar37 = (ulonglong)uVar20;
      if (10 < bVar8) {
        *(undefined1 *)(iVar11 + 0x33) = 8;
      }
    }
    else {
      *(undefined1 *)(iVar11 + 0x32) = 0;
      if (*(char *)(iVar11 + 0x303) != '\0') {
        *(char *)(iVar11 + 0x33) = *(char *)(iVar11 + 0x303) + -1;
        uVar37 = CONCAT44(0x80,uVar20);
      }
    }
    uVar20 = (uint)(uVar37 >> 0x20);
    if ((uint)uVar37 < 3) {
      bVar8 = *(char *)(iVar11 + 0x304) + 1;
      *(byte *)(iVar11 + 0x34) = bVar8;
      uVar37 = (ulonglong)uVar20 << 0x20;
      if (10 < bVar8) {
        *(undefined1 *)(iVar11 + 0x35) = 5;
      }
    }
    else {
      *(undefined1 *)(iVar11 + 0x34) = 0;
      if (*(char *)(iVar11 + 0x305) != '\0') {
        *(char *)(iVar11 + 0x35) = *(char *)(iVar11 + 0x305) + -1;
        uVar37 = CONCAT44(uVar20,0x32);
      }
    }
    bVar8 = *(byte *)(iVar11 + 0x15ba);
    uVar24 = (ulonglong)bVar8;
    uVar20 = (uint)(uVar37 >> 0x20);
    if ((bVar8 & 1) == 0) {
      if (uVar20 == 0) {
LAB_01e12d0c:
        uVar37 = uVar37 & 0xffffffff;
      }
      else {
        uVar24 = (ulonglong)CONCAT14(*(char *)(iVar11 + 0x306),(uint)bVar8);
        if ((*(short *)(iVar11 + 0xd6) != 0) && (*(char *)(iVar11 + 0x306) == '\0'))
        goto LAB_01e12d08;
LAB_01e12d10:
        uVar22 = uVar24 >> 0x20;
        uVar24 = CONCAT44(100,(int)uVar24);
        uVar37 = CONCAT44((uVar20 * (int)uVar22) / 100,(int)uVar37);
      }
    }
    else {
      if (uVar20 == 0) goto LAB_01e12d0c;
      uVar24 = (ulonglong)CONCAT14(*(char *)(iVar11 + 0x15bb),(uint)bVar8);
      if ((*(short *)(iVar11 + 0xd6) == 0) || (*(char *)(iVar11 + 0x15bb) != '\0'))
      goto LAB_01e12d10;
LAB_01e12d08:
      uVar37 = CONCAT44(uVar20 >> 2,(int)uVar37);
    }
    uVar20 = (uint)uVar37;
    uVar44 = (uint)(uVar37 >> 0x20);
    if ((uVar24 & 5) == 0) {
      if (uVar20 == 0) {
LAB_01e12d44:
        uVar37 = (ulonglong)uVar44 << 0x20;
      }
      else {
        uVar33 = (uint)*(byte *)(iVar11 + 0x307);
        if ((*(short *)(iVar11 + 0xd8) != 0) && (uVar33 == 0)) goto LAB_01e12d3e;
LAB_01e12d48:
        uVar37 = CONCAT44(uVar44,(uVar20 * uVar33) / 100);
      }
    }
    else {
      if (uVar20 == 0) goto LAB_01e12d44;
      uVar33 = (uint)*(byte *)(iVar11 + 0x15bc);
      if ((*(short *)(iVar11 + 0xd8) == 0) || (uVar33 != 0)) goto LAB_01e12d48;
LAB_01e12d3e:
      uVar37 = CONCAT44(uVar44,uVar20 >> 1);
    }
    uVar44 = 0;
    uVar20 = 0;
    if ((uVar37 & 0xff00000000) != 0) {
      uVar20 = (uint)(byte)((char)(((uint)(byte)(uVar37 >> 0x20) * 0xe1) / 0xff) + 0x1e) * 10000;
      uVar37 = CONCAT44(uVar20,(int)uVar37);
      uVar20 = uVar20 / 0xff;
    }
    if ((uVar37 & 0xff) != 0) {
      uVar44 = (((((uint)uVar37 & 0xff) * 0xe1) / 0xff + 0x1e & 0xff) * 10000) / 0xff;
    }
    FUN_01e0530a(4,uVar20);
    FUN_01e0530a(1,uVar44 & 0xffff);
    if (*(char *)(iVar11 + 0x20e) == '\0') {
LAB_01e12de4:
      *(undefined2 *)(iVar11 + 0xd0) = 0;
    }
    else {
      iVar14 = *(ushort *)(iVar11 + 0xd0) + 1;
      uVar37 = CONCAT44(iVar14,iVar14) & 0xffffffffffff;
      *(short *)(iVar11 + 0xd0) = (short)uVar37;
      if (0x13 < (uint)(uVar37 >> 0x20)) {
        FUN_01e04682();
        FUN_01e048c4();
        uVar7 = 0;
        FUN_01e0dec0(0);
        if (0x27 < *(ushort *)(iVar11 + 0xd0)) {
          FUN_01e04fae(*(undefined1 *)(iVar11 + 0x20e));
          *(undefined1 *)(iVar11 + 0x2e) = uVar7;
          goto LAB_01e12de4;
        }
      }
    }
    iVar14 = FUN_01e0e2f6();
    if (*(char *)(iVar11 + 0x608) == '\0') {
      if (*(char *)(iVar11 + 8) != '\0' || *(char *)(iVar11 + 0x210) != '\0') goto LAB_01e12e14;
    }
    else if (*(char *)(iVar11 + 0x210) != '\0') {
LAB_01e12e14:
      uVar25 = *(short *)(iVar11 + 0xce) + 1;
      *(ushort *)(iVar11 + 0xce) = uVar25;
      if (5 < uVar25) {
        uVar21 = 0;
        *(undefined2 *)(iVar11 + 0xce) = 0;
        if (iVar14 == 0) {
          uVar20 = 0;
          do {
            if (3 < uVar20) {
              iVar13 = FUN_01e0f4ec(0x200);
              if ((iVar13 == 0) &&
                 ((uint)*(byte *)(iVar11 + 0x37c) + (uint)*(byte *)(iVar11 + 0x37d) ==
                  -(uint)*(byte *)(iVar11 + 0x37e))) {
                uVar20 = *(uint *)(iVar11 + 0x214) + 1;
                *(uint *)(iVar11 + 0x214) = uVar20;
                if ((*(uint *)(iVar11 + 0x218) <= uVar20) && (*(uint *)(iVar11 + 0x218) != 0)) {
                  FUN_01e08ca4(0xc);
                }
                goto LAB_01e12efc;
              }
              break;
            }
            pcVar48 = (char *)(uVar20 + iVar13);
            uVar20 = uVar20 + 1;
          } while (0x7f < (byte)(*pcVar48 - 0x40U));
        }
        *(undefined4 *)(iVar11 + 0x214) = uVar21;
      }
      goto LAB_01e12efc;
    }
    *(undefined4 *)(iVar11 + 0x214) = 0;
    *(undefined2 *)(iVar11 + 0xce) = 0;
LAB_01e12efc:
    puVar12 = (uint *)FUN_01e37232(*(undefined1 *)(iVar11 + 0x20c));
    return puVar12;
  case 0xc0:
switchD_01e0931a_caseD_c0:
    iVar11 = (int)(in_r2_r3 >> 0x20);
    if ((int)(uVar22 >> 0x20) == 0) {
      iVar13 = FUN_01e07f7a();
      iVar14 = (int)(in_r14_r15 >> 0x20);
      if (iVar13 == 0) {
        if (*(char *)(iVar14 + 0x304) == '\0') {
          if (*(char *)(iVar14 + 8) == '\0' && *(char *)(iVar14 + 0x298) == '\0') {
            if ((*(char *)(iVar14 + 0x2b8) != '\0') || ((*(byte *)(iVar14 + 0x1fc) & 1) != 0))
            goto LAB_01e0f86c;
            if (*(char *)(iVar14 + 0x20a) == '\0') {
              if (iVar11 != -2) goto LAB_01e0f8ee;
              uVar21 = 10;
            }
            else {
              uVar21 = 4;
            }
          }
          else {
            if (*(char *)(iVar14 + 0x14c) != '\0') {
              uVar25 = *(short *)(iVar14 + 0x102) + 1;
              *(ushort *)(iVar14 + 0x102) = uVar25;
              if (uVar25 < 0x21) {
                if (0x10 < uVar25) {
LAB_01e0f8ee:
                  uVar21 = 0;
                  goto LAB_01e0f922;
                }
              }
              else {
                *(undefined2 *)(iVar14 + 0x102) = 0;
                *(char *)(iVar14 + 0x4f) = *(char *)(iVar14 + 0x40f) + '\x01';
              }
              cVar55 = *(char *)(iVar14 + 0x401);
              if (cVar55 == '\0') {
LAB_01e0f892:
                if (*(char *)(iVar14 + 0x402) != '\x01') {
                  if (*(char *)(iVar14 + 0x402) == '\x03') goto LAB_01e0f8a2;
                  goto LAB_01e0f89e;
                }
                goto LAB_01e0f8a6;
              }
              goto LAB_01e0f8b0;
            }
            cVar55 = *(char *)(iVar14 + 0x401);
            if (cVar55 == '\0') {
              if (*(char *)(iVar14 + 0x402) == '\x01') {
                uVar21 = 0xe;
              }
              else if (*(char *)(iVar14 + 0x402) == '\x03') {
                uVar21 = 0xb;
              }
              else {
                uVar21 = 9;
              }
              FUN_01e0dec0(uVar21);
              cVar55 = *(char *)((int)(in_r14_r15 >> 0x20) + 0x401);
            }
            if (cVar55 == '\x01') {
              FUN_01e0dec0(9);
              cVar55 = *(char *)((int)(in_r14_r15 >> 0x20) + 0x401);
            }
            if (cVar55 != '\x02') goto LAB_01e0f926;
            cVar55 = *(char *)((int)(in_r14_r15 >> 0x20) + 0x404);
            if (cVar55 == '\x01') {
              uVar21 = 0xe;
            }
            else if (cVar55 == '\x03') {
              uVar21 = 0xb;
            }
            else {
              uVar21 = 9;
            }
          }
        }
        else {
          cVar55 = *(char *)((int)in_r12_r13 + 6);
          if (cVar55 == '\x06') {
            FUN_01e0dec0(8);
            cVar55 = *(char *)((int)in_r12_r13 + 6);
          }
          if (cVar55 == '\x02') {
            FUN_01e0dec0(6);
            cVar55 = *(char *)((int)in_r12_r13 + 6);
          }
          if (cVar55 != '\x01') goto LAB_01e0f926;
LAB_01e0f8d2:
          uVar21 = 7;
        }
        goto LAB_01e0f922;
      }
      if ((*(char *)(iVar14 + 0x2b8) != '\0') || ((*(byte *)(iVar14 + 0x1fc) & 1) != 0)) {
LAB_01e0f86c:
        uVar21 = 0xc;
        goto LAB_01e0f922;
      }
      cVar55 = *(char *)(iVar14 + 0x401);
      if (cVar55 == '\0') {
        cVar55 = *(char *)(iVar14 + 0x403);
        if (cVar55 == '\x01') {
LAB_01e0f8a6:
          uVar21 = 6;
        }
        else if (cVar55 == '\x03') {
LAB_01e0f8a2:
          uVar21 = 7;
        }
        else {
          if (cVar55 != '\x04') goto LAB_01e0f892;
LAB_01e0f89e:
          uVar21 = 8;
        }
        FUN_01e0dec0(uVar21);
        cVar55 = *(char *)((int)(in_r14_r15 >> 0x20) + 0x401);
      }
LAB_01e0f8b0:
      if (cVar55 == '\x01') {
        FUN_01e0dec0(8);
        cVar55 = *(char *)((int)(in_r14_r15 >> 0x20) + 0x401);
      }
      if (cVar55 == '\x02') {
        cVar55 = *(char *)((int)(in_r14_r15 >> 0x20) + 0x404);
        if (cVar55 == '\x01') {
          uVar21 = 6;
        }
        else {
          if (cVar55 == '\x03') goto LAB_01e0f8d2;
          uVar21 = 8;
        }
        goto LAB_01e0f922;
      }
    }
    else {
      uVar21 = 0xd;
LAB_01e0f922:
      FUN_01e0dec0(uVar21);
    }
LAB_01e0f926:
    iVar11 = (int)(in_r14_r15 >> 0x20);
    if (((*(char *)(iVar11 + 0x28c) == '\0') && ((*(byte *)(iVar11 + 0x210) & 1) == 0)) &&
       ((*(byte *)(iVar11 + 0x1b8) & 1) == 0)) {
      if (*(char *)(iVar11 + 0x21c) != '\0') {
        uVar9 = 0;
        FUN_01e0dec0(0);
        iVar13 = (int)(in_r14_r15 >> 0x20);
        iVar11 = *(ushort *)(iVar13 + 0x104) + 1;
        uVar24 = CONCAT44(iVar11,iVar11) & 0xffffffffffff;
        *(short *)(iVar13 + 0x104) = (short)uVar24;
        if ((uint)(uVar24 >> 0x20) < 0x10) goto LAB_01e0f994;
        goto LAB_01e0f984;
      }
      if (*(char *)(iVar11 + 8) == '\0' && *(char *)(iVar11 + 0x304) == '\0') goto LAB_01e0f9d6;
      if (*(char *)(iVar11 + 0x304) == '\0') {
        cVar55 = *(char *)(iVar11 + 0x401);
        if (cVar55 == '\x02') {
          bVar8 = *(byte *)(iVar11 + 0x80e) | 0x10;
        }
        else {
          if (cVar55 != '\x01') {
            if (cVar55 != '\0') goto LAB_01e0f9d6;
            goto LAB_01e0f9bc;
          }
          bVar8 = *(byte *)(iVar11 + 0x80e) | 8;
        }
      }
      else {
LAB_01e0f9bc:
        bVar8 = *(byte *)(iVar11 + 0x80e) | 4;
      }
      goto LAB_01e0f776;
    }
    uVar9 = 0;
    FUN_01e0dec0(0);
    iVar13 = (int)(in_r14_r15 >> 0x20);
    iVar11 = *(ushort *)(iVar13 + 0x104) + 1;
    uVar24 = CONCAT44(iVar11,iVar11) & 0xffffffffffff;
    *(short *)(iVar13 + 0x104) = (short)uVar24;
    if ((uint)(uVar24 >> 0x20) < 0x20) {
LAB_01e0f984:
      iVar11 = (int)(in_r14_r15 >> 0x20);
      *(undefined2 *)(iVar11 + 0x104) = uVar9;
      bVar8 = *(char *)(iVar11 + 0x500) + 1;
      *(byte *)(iVar11 + 0x50) = bVar8;
    }
    else {
LAB_01e0f994:
      bVar8 = *(byte *)((int)(in_r14_r15 >> 0x20) + 0x500);
    }
    if ((bVar8 & 1) == 0) {
      uVar22 = (ulonglong)(*(byte *)((int)(in_r14_r15 >> 0x20) + 0x80e) | 0x1c);
      goto switchD_01e0931a_caseD_73;
    }
LAB_01e0f9d6:
    iVar11 = (int)(in_r14_r15 >> 0x20);
    if ((*(char *)(iVar11 + 0x1b8) == '\0') && (((*(byte *)(iVar11 + 0x2d0) ^ 1) & 1) == 0)) {
      in_r10_r11 = CONCAT44(iVar11 + 0x933,(int)in_r10_r11);
      iVar11 = 0;
      while( true ) {
        uVar21 = (undefined4)in_r12_r13;
        iVar13 = (int)(in_r14_r15 >> 0x20);
        if (iVar11 == 8) break;
        pcVar48 = (char *)(in_r10_r11 >> 0x20);
        iVar14 = iVar11 * 4 + iVar13;
        in_r10_r11 = CONCAT44(pcVar48,iVar14);
        uVar7 = *(undefined1 *)(iVar14 + 0x7e7);
        uVar27 = *(undefined1 *)(iVar14 + 0x7e6);
        uVar9 = *(undefined2 *)(iVar14 + 0x7e6);
        uVar2 = *(undefined1 *)(iVar14 + 0x7e5);
        *(undefined1 **)((int)ppuVar65 + 8) = (undefined1 *)(iVar14 + 0x7e4);
        uVar3 = *(undefined1 *)(iVar14 + 0x7e4);
        uVar44 = CONCAT22(uVar9,CONCAT11(uVar2,uVar3));
        uVar20 = *(uint *)(iVar14 + 0x7c4);
        bVar8 = *(byte *)(iVar13 + 0x2d4);
        uVar37 = CONCAT44(iVar11,(uint)bVar8);
        if ((uVar20 == uVar44) || (((bVar8 ^ 1) & 1) == 0)) {
          *(int *)((int)ppuVar65 + 0xc) = iVar11;
          iVar13 = iVar11 * 8;
          pbVar46 = (byte *)(iVar13 + 0x70f0);
          *(undefined1 *)(iVar13 + 0x70f1) = 0;
          *(undefined1 *)(iVar14 + 0x807) = uVar7;
          *(undefined1 *)(iVar14 + 0x806) = uVar27;
          *(undefined1 *)(iVar14 + 0x805) = uVar2;
          *(undefined1 *)(iVar14 + 0x804) = uVar3;
          bVar28 = *pbVar46;
          puVar43 = (ushort *)(_DAT_00006a98 + (uint)bVar28 * 0x20 + iVar11 * 4);
          uVar25 = *puVar43;
          bVar4 = *(byte *)((int)puVar43 + 3);
          uVar37 = (ulonglong)CONCAT14((char)puVar43[1],(uint *)(iVar14 + 0x7c4));
          iVar11 = 4;
          do {
            uVar47 = *puVar43;
            puVar43 = (ushort *)((int)puVar43 + 1);
            *(undefined1 *)uVar37 = (char)uVar47;
            uVar20 = (uint)(uVar37 >> 0x20);
            uVar37 = CONCAT44(uVar20,(undefined1 *)uVar37 + 1);
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          bVar28 = bVar28 + 1;
          *pbVar46 = bVar28;
          if (DAT_00006cc8 <= bVar28) {
            if (DAT_00006a9c == '\0') {
              *pbVar46 = DAT_00006cc8 - 1;
              pbVar46 = &DAT_0000680a;
            }
            *pbVar46 = 0;
          }
          if ((bVar8 & 1) == 0) {
            *(undefined1 *)(iVar13 + 0x70ef) = *(undefined1 *)(iVar13 + 0x70ee);
          }
          uVar20 = (uint)uVar25 | (uVar20 | (uint)bVar4 << 8) << 0x10;
          in_r12_r13 = 0x4130;
          uVar37 = (ulonglong)*(uint *)((int)ppuVar65 + 0xc) << 0x20;
          for (iVar11 = 0; iVar11 != 0x18; iVar11 = iVar11 + 8) {
            uVar33 = uVar44 >> iVar11;
            uVar24 = CONCAT44(uVar33,uVar33) & 0xffffffffff;
            uVar33 = uVar20 >> iVar11 & 0xff;
            uVar31 = (uint)(uVar24 >> 0x20);
            cVar38 = (char)uVar24;
            cVar55 = (char)(uVar20 >> iVar11);
            if (uVar31 < uVar33) {
              *pcVar48 = cVar55 - cVar38;
            }
            if (uVar33 < uVar31) {
              *pcVar48 = cVar38 - cVar55;
            }
            pcVar48 = pcVar48 + 1;
          }
        }
        in_r14_r15 = (ulonglong)uVar20 << 0x20;
        uVar22 = (ulonglong)(uint)((int)(uVar37 >> 0x20) << 3);
switchD_01e0931a_caseD_49:
        puVar12 = (uint *)(uVar37 >> 0x20);
        iVar11 = (int)uVar22;
        cVar55 = *(char *)(iVar11 + 0x70ef);
        if (cVar55 == '\0') {
          bVar28 = *(byte *)(iVar11 + 0x70f2);
          bVar8 = *(byte *)(iVar11 + 0x70f1);
          ppuVar65[3] = puVar12;
          if ((uint)bVar8 < (uint)bVar28) {
            bVar8 = bVar8 + 1;
            *(byte *)(iVar11 + 0x70f1) = bVar8;
          }
          iVar11 = 0;
          uVar24 = (ulonglong)CONCAT14(bVar8,(uint)bVar28);
          uVar22 = (ulonglong)bVar28 << 0x20;
          uVar37 = 0;
          uVar20 = 0;
          while( true ) {
            uVar7 = (undefined1)uVar37;
            iVar13 = (int)uVar22;
            if (iVar13 == 3) break;
            uVar52 = *(uint *)((int)in_r10_r11 + 0x804) >> iVar11;
            uVar44 = uVar52 & 0xff;
            uVar29 = (uint)(in_r14_r15 >> 0x20);
            uVar31 = uVar29 >> iVar11;
            uVar33 = uVar31 & 0xff;
            in_r14_r15 = CONCAT44(uVar29,uVar31) & 0xffffffff000000ff;
            iVar14 = (int)(in_r10_r11 >> 0x20);
            if (uVar44 < uVar33) {
              uVar52 = (uint)*(byte *)(iVar14 + iVar13);
              uVar31 = (uint)(uVar24 >> 0x20);
              if ((uVar24 & 0xff) == 0) {
                uVar52 = uVar52 + uVar44;
                uVar24 = (ulonglong)uVar31 << 0x20;
              }
              else {
                uVar52 = (uVar52 * uVar31) / (uint)(byte)uVar24 + uVar44;
              }
            }
            uVar44 = uVar52 & 0xff;
            if (uVar33 < uVar44) {
              uVar33 = (uint)(uVar24 >> 0x20);
              uVar52 = (uint)*(byte *)(iVar14 + iVar13);
              uVar31 = (uint)(uVar22 >> 0x20);
              if ((uVar22 & 0xff00000000) == 0) {
                uVar52 = uVar44 - uVar52;
                uVar22 = uVar22 & 0xffffffff;
                uVar24 = (ulonglong)uVar33 << 0x20;
              }
              else {
                uVar52 = uVar44 - (uVar33 * uVar52) / uVar31;
                uVar24 = CONCAT44(uVar33,uVar31);
              }
            }
            uVar37 = (ulonglong)((uint)uVar37 | (uVar52 & 0xff) << iVar11);
            uVar20 = uVar20 | (uVar52 & 0xff) / 5 << iVar11;
            iVar11 = iVar11 + 8;
            uVar22 = CONCAT44((int)(uVar22 >> 0x20),(int)uVar22 + 1);
          }
          puVar12 = ppuVar65[2];
          *(char *)((int)puVar12 + 3) = (char)(uVar37 >> 0x18);
          *(char *)((int)puVar12 + 2) = (char)(uVar37 >> 0x10);
          *(char *)((int)puVar12 + 1) = (char)(uVar37 >> 8);
          *(undefined1 *)puVar12 = uVar7;
          in_r14_r15 = 0x67c000000000;
          if (((uint)uVar37 == 0) && ((DAT_00006aa0 & 1) != 0)) {
            func_0x0200010a();
          }
          iVar11 = (int)(in_r14_r15 >> 0x20);
          in_r12_r13 = 0x4130;
          puVar12 = *(uint **)((int)ppuVar65 + 0xc);
          if (*(char *)(iVar11 + 0x2e4) == '\0') {
            uVar7 = 0;
          }
          else {
            uVar20 = 0;
          }
          *(undefined1 *)(iVar11 + 0x59) = uVar7;
          iVar11 = (int)in_r10_r11;
          *(char *)(iVar11 + 0x707) = (char)(uVar20 >> 0x18);
          *(char *)(iVar11 + 0x706) = (char)(uVar20 >> 0x10);
          *(char *)(iVar11 + 0x705) = (char)(uVar20 >> 8);
          *(char *)(iVar11 + 0x704) = (char)uVar20;
        }
        else {
          *(char *)(iVar11 + 0x70ef) = cVar55 + -1;
          in_r14_r15 = 0x67c000000000;
        }
        iVar11 = (int)puVar12 + 1;
        in_r10_r11 = CONCAT44((int)(in_r10_r11 >> 0x20) + 8,&DAT_01e1af10);
      }
      *(undefined1 *)(iVar13 + 0x2d4) = 0;
      func_0x02000ca0(iVar13 + 0x704);
      uVar37 = 0x1e500000000000;
      in_r12_r13 = CONCAT44(&DAT_001e5044,uVar21);
    }
    iVar11 = 0;
    uVar23 = 0x205;
    while( true ) {
      iVar14 = (int)in_r10_r11;
      iVar13 = (int)uVar23;
      if (iVar11 == 7) break;
      uVar20 = (uint)*(ushort *)(iVar14 + 0x60a + iVar11);
      FUN_01e01810(uVar20);
      FUN_01e05334(uVar20);
      FUN_01e0539c(uVar20);
      iVar11 = iVar11 + 1;
    }
    iVar11 = (int)(uVar37 >> 0x20);
    *(uint *)(iVar11 + 0x4c) = *(uint *)(iVar11 + 0x4c) | 0x800;
    *(uint *)(iVar11 + 0x5c) = *(uint *)(iVar11 + 0x5c) | 0x800;
    *(uint *)(iVar11 + 0x58) = *(uint *)(iVar11 + 0x58) | 0x800;
    *(uint *)(iVar11 + 0x48) = *(uint *)(iVar11 + 0x48) & 0x800;
    *(uint *)(iVar11 + 0x40) = *(uint *)(iVar11 + 0x40) | 0x800;
    *(uint *)(iVar11 + 0x48) = *(uint *)(iVar11 + 0x48) & 0x800;
    if ((*(uint *)((ulonglong)in_r12_r13 >> 0x20) & 0x15) == 0) {
      if ((*(byte *)((int)(in_r14_r15 >> 0x20) + iVar13 + 0x1f) & 1) == 0) {
        FUN_01e04804(2);
        *(undefined1 *)((int)(in_r14_r15 >> 0x20) + iVar13 + 0x1f) = 1;
        FUN_01e0481a(5);
        iVar11 = 0x23f7;
        goto LAB_01e0fd12;
      }
    }
    else {
      FUN_01e04804(3);
      *(undefined1 *)((int)(in_r14_r15 >> 0x20) + iVar13 + 0x1f) = 0;
      FUN_01e0481a(7);
      iVar11 = 0x23d0;
LAB_01e0fd12:
      FUN_01e367de(iVar11 + iVar14);
    }
    iVar11 = (int)(in_r14_r15 >> 0x20);
    cVar55 = '\x05';
    if (*(char *)(iVar11 + iVar13 + 0x1f) == '\0') {
      cVar55 = '\a';
    }
    in_r10_r11 = CONCAT44(&DAT_000040fc,iVar14);
    if (cVar55 == *(char *)(iVar11 + 0x40d)) {
      iVar14 = *(byte *)(iVar11 + 0x40e) + 1;
      uVar37 = CONCAT44(iVar14,iVar14) & 0xffffffffff;
      *(char *)(iVar11 + 0x4e) = (char)uVar37;
      if ((uint)(uVar37 >> 0x20) < 0x43) {
        if (*(char *)(iVar11 + iVar13 + 7) == '\0') goto LAB_01e1039e;
      }
      else {
        *(undefined1 *)(iVar11 + 0x4e) = 0x42;
        if (*(char *)(iVar11 + iVar13 + 7) == '\0') {
          *(undefined1 *)(iVar11 + iVar13 + 7) = 1;
          *(undefined1 *)(iVar11 + 700) = 0;
          *(undefined2 *)(iVar11 + 0xc4) = 0;
        }
      }
      uVar20 = 10;
      iVar13 = 0xffec;
      for (iVar11 = 0; iVar11 != 2; iVar11 = iVar11 + 1) {
        uVar44 = iVar11 + (int)in_r10_r11;
        uVar37 = (ulonglong)uVar44;
        uVar21 = FUN_01e0df90(*(undefined1 *)(uVar44 + 0xe));
        iVar50 = (int)(in_r14_r15 >> 0x20);
        iVar14 = iVar11 + iVar50;
        uVar6 = CONCAT24(*(undefined2 *)(iVar50 + 0x278 + iVar11),uVar21) & 0xffff0000ffff;
        uVar44 = (uint)uVar6;
        sVar39 = (short)(uVar6 >> 0x20);
        uVar21 = (undefined4)uVar37;
        if (*(char *)(iVar14 + 0xe02) == '\0') {
          uVar37 = uVar37 & 0xffffffff;
          uVar33 = (uint)(ushort)(sVar39 - 0x14);
          if (uVar44 < uVar33) {
            uVar31 = (uint)*(ushort *)(iVar50 + 0x274 + iVar11);
            uVar37 = CONCAT44(0xff,uVar21);
            if (uVar31 + 0x14 < uVar44) {
              iVar30 = (uVar33 - 0x14) - uVar31;
              iVar50 = uVar33 - uVar44;
              goto LAB_01e0fdf8;
            }
          }
        }
        else {
          uVar37 = uVar37 & 0xffffffff;
          uVar33 = (uint)(ushort)(sVar39 + 0x14);
          if (uVar33 < uVar44) {
            uVar31 = (uint)*(ushort *)(iVar50 + 0x270 + iVar11);
            uVar37 = CONCAT44(0xff,uVar21);
            if ((int)uVar44 < (int)(uVar31 - 0x14)) {
              iVar30 = uVar31 + (iVar13 - uVar33);
              iVar50 = uVar44 - uVar33;
LAB_01e0fdf8:
              uVar37 = CONCAT44((iVar50 * 0xff) / iVar30,uVar21);
            }
          }
        }
        if (((*(char *)in_r12_r13 == '\x03') && (iVar50 = FUN_01e07f7a(), iVar50 != 0)) ||
           ((*(char *)((int)in_r12_r13 + 6) == '\x01' &&
            (*(char *)((int)(in_r14_r15 >> 0x20) + 0x608) != '\0')))) {
          uVar24 = (ulonglong)
                   CONCAT14(*(undefined1 *)((int)uVar37 + 0x100),
                            (uint)*(byte *)((int)uVar37 + 0x102));
          if ((ushort)(uVar37 >> 0x20) < 0x11) goto LAB_01e0fe6c;
LAB_01e0fe60:
          uVar7 = (undefined1)(uVar37 >> 0x20);
          pbVar46 = (byte *)((int)uVar24 + (int)(in_r14_r15 >> 0x20) + 0x200);
          uVar23 = CONCAT44((uint)(uVar24 >> 0x20) | (uint)*pbVar46,pbVar46);
        }
        else {
          iVar50 = iVar11 * 2 + (int)in_r12_r13;
          uVar25 = (ushort)(uVar37 >> 0x20);
          uVar44 = ((uint)*(ushort *)(iVar50 + 0x56) * 7 + (uint)uVar25 * 3) / uVar20;
          *(short *)(iVar50 + 0x56) = (short)uVar44;
          if ((uVar25 != 0) && (uVar25 != 0xff)) {
            uVar37 = CONCAT44(uVar44,(int)uVar37);
          }
          uVar24 = (ulonglong)
                   CONCAT14(*(undefined1 *)((int)uVar37 + 0x100),
                            (uint)*(byte *)((int)uVar37 + 0x102));
          if (2 < (ushort)(uVar37 >> 0x20)) goto LAB_01e0fe60;
LAB_01e0fe6c:
          uVar7 = (undefined1)(uVar37 >> 0x20);
          pbVar46 = (byte *)((int)uVar24 + (int)(in_r14_r15 >> 0x20) + 0x200);
          uVar23 = CONCAT44((uint)*pbVar46 & ~(uint)(uVar24 >> 0x20),pbVar46);
        }
        *(undefined1 *)uVar23 = (char)((ulonglong)uVar23 >> 0x20);
        *(undefined1 *)(iVar14 + 0xdc) = uVar7;
      }
      iVar11 = (int)in_r12_r13;
      iVar14 = (int)(in_r14_r15 >> 0x20);
      uVar27 = (undefined1)*(undefined4 *)(iVar11 + 0x18);
      *(undefined1 *)(iVar14 + 0x66d) = uVar27;
      uVar7 = *(undefined1 *)(iVar11 + 0x1a);
      *(undefined1 *)(iVar14 + 0x66f) = uVar27;
      *(undefined1 *)(iVar14 + 0x670) = 0;
      *(undefined1 *)(iVar14 + 0x671) = uVar7;
      *(undefined1 *)(iVar14 + 0x672) = 100;
      uVar27 = *(undefined1 *)(iVar11 + 0x1c);
      uVar37 = 0;
      *(undefined1 *)(iVar14 + 0x66e) = uVar7;
      *(undefined1 *)(iVar14 + 0x673) = 100;
      iVar13 = iVar14 + 0x679;
      *(undefined1 *)(iVar14 + 0x679) = uVar27;
      uVar7 = *(undefined1 *)(iVar11 + 0x1e);
      *(undefined1 *)(iVar14 + 0x67b) = uVar27;
      *(undefined1 *)(iVar14 + 0x67c) = 0;
      *(undefined1 *)(iVar14 + 0x67d) = uVar7;
      *(undefined1 *)(iVar14 + 0x67e) = 100;
      *(undefined1 *)(iVar14 + 0x67a) = uVar7;
      *(undefined1 *)(iVar14 + 0x67f) = 100;
      FUN_01e0dfb4();
      FUN_01e0dfb4(iVar13);
      while (iVar11 = (int)uVar37, iVar11 != 2) {
        iVar13 = iVar11 + (int)in_r10_r11;
        iVar14 = (int)(in_r14_r15 >> 0x20);
        bVar8 = *(byte *)(iVar13 + 0x100);
        pbVar46 = (byte *)((uint)*(byte *)(iVar13 + 0x102) + iVar14 + 0x200);
        if (*(char *)(iVar11 + iVar14 + 0xd0c) == '\0') {
          bVar8 = *pbVar46 & ~bVar8;
        }
        else {
          bVar8 = bVar8 | *pbVar46;
        }
        *pbVar46 = bVar8;
        uVar37 = (ulonglong)(iVar11 + 1);
      }
      iVar13 = 0xffd8;
      for (iVar11 = 0; iVar11 != 4; iVar11 = iVar11 + 1) {
        uVar20 = FUN_01e0df90(*(undefined1 *)(iVar11 + (int)in_r10_r11 + 0x908));
        iVar14 = iVar11 * 2 + (int)in_r12_r13;
        iVar50 = (int)(in_r14_r15 >> 0x20);
        sVar39 = *(short *)(iVar50 + 0x41a + iVar11);
        bVar8 = *(byte *)(iVar50 + 0x405);
        uVar20 = (uVar20 & 0xffff) + (uint)*(ushort *)(iVar14 + 0x4e) >> 1;
        *(short *)(iVar14 + 0x4e) = (short)uVar20;
        uVar44 = (uint)(ushort)(sVar39 + (ushort)bVar8);
        if (uVar44 < uVar20) {
          uVar33 = (uint)*(ushort *)(iVar50 + 0x40a + iVar11);
          iVar14 = 0x7f;
          if ((int)uVar20 < (int)(uVar33 - 0x28)) {
            iVar14 = (int)((uVar20 - uVar44) * 0x7f) / (int)(uVar33 + (iVar13 - uVar44));
          }
LAB_01e0ff90:
          uVar37 = CONCAT44(iVar14 + 0x80,iVar14 + 0x80) & 0xffffffffffff;
          iVar14 = (int)(uVar37 >> 0x20);
          bVar28 = (byte)uVar37;
          if (iVar14 == 0xff) {
LAB_01e0ff9c:
            bVar28 = bVar28 ^ 0xff;
          }
          else if (iVar14 == 0x80) {
            bVar28 = 0x80;
          }
          else {
            if (iVar14 == 0) goto LAB_01e0ff9c;
            bVar28 = (bVar28 ^ 0xff) + 1;
          }
        }
        else {
          bVar28 = 0x80;
          uVar44 = (uint)(ushort)(sVar39 - (ushort)bVar8);
          if (uVar20 < uVar44) {
            uVar33 = (uint)*(ushort *)(iVar50 + 0x412 + iVar11);
            iVar14 = 0x80;
            if (uVar33 + 0x28 < uVar20) {
              iVar14 = (int)((uVar44 - uVar20) * 0x7f) / (int)((uVar44 - 0x28) - uVar33);
            }
            iVar14 = -iVar14;
            goto LAB_01e0ff90;
          }
        }
        *(byte *)(iVar11 + (int)(in_r10_r11 >> 0x20)) = bVar28;
      }
      iVar13 = (int)(in_r14_r15 >> 0x20);
      *(undefined1 *)(iVar13 + 0x655) = *(undefined1 *)(iVar13 + 0xf06);
      uVar7 = *(undefined1 *)((int)in_r12_r13 + 0x104);
      *(undefined1 *)(iVar13 + 0x657) = *(undefined1 *)(iVar13 + 0xf06);
      uVar9 = 0;
      *(undefined1 *)(iVar13 + 0x658) = 0;
      *(undefined1 *)(iVar13 + 0x659) = uVar7;
      *(undefined1 *)(iVar13 + 0x65a) = 100;
      *(undefined1 *)(iVar13 + 0x65b) = 100;
      iVar11 = iVar13 + 0x661;
      *(undefined1 *)(iVar13 + 0x661) = *(undefined1 *)(iVar13 + 0xf08);
      uVar7 = *(undefined1 *)((int)in_r12_r13 + 0x106);
      *(undefined1 *)(iVar13 + 0x663) = *(undefined1 *)(iVar13 + 0xf08);
      *(undefined1 *)(iVar13 + 0x664) = 0;
      *(undefined1 *)(iVar13 + 0x665) = uVar7;
      *(undefined1 *)(iVar13 + 0x666) = 100;
      *(undefined1 *)(iVar13 + 0x667) = 100;
      FUN_01e0e0d2((int)(in_r10_r11 >> 0x20) + 1);
      FUN_01e0e0d2(iVar11);
      iVar11 = (int)(in_r14_r15 >> 0x20);
      iVar13 = (int)((ulonglong)in_r12_r13 >> 0x20);
      if (*(char *)(iVar11 + 0x300) == '\0' && *(char *)(iVar11 + 0x301) == '\0') {
        uVar25 = *(short *)(iVar11 + 0x100) + 1;
        *(undefined2 *)(iVar11 + 0xfe) = uVar9;
        *(ushort *)(iVar11 + 0x100) = uVar25;
        in_r6_r7 = CONCAT44(iVar13 + -0x44,iVar13);
        if (5 < uVar25) goto LAB_01e10056;
      }
      else {
        iVar14 = *(ushort *)(iVar11 + 0xfe) + 1;
        uVar37 = CONCAT44(iVar14,iVar14) & 0xffffffffffff;
        *(short *)(iVar11 + 0xfe) = (short)uVar37;
        in_r6_r7 = CONCAT44(iVar13 + -0x44,iVar13);
        if ((uint)(uVar37 >> 0x20) < 0x14d) {
          *(undefined2 *)(iVar11 + 0x100) = 0;
        }
        else {
          *(undefined2 *)(iVar11 + 0xfe) = 0;
          *(undefined2 *)(iVar11 + 0x100) = 7;
LAB_01e10056:
          *(undefined2 *)(iVar11 + 0x100) = 0;
          bVar8 = *(byte *)(iVar11 + 0x40c);
          if (bVar8 < 4) {
            uVar20 = (uint)bVar8;
            iVar11 = iVar11 + 0x550;
            iVar13 = FUN_01e0e292();
            *(int *)((iVar11 + uVar20) * 4) = iVar13 << 1;
            *(char *)((int)(in_r14_r15 >> 0x20) + 0x4c) = (char)uVar20 + '\x01';
          }
          else {
            *(undefined1 *)(iVar11 + 0x4c) = 0;
            if (bVar8 == 4) {
              iVar11 = FUN_01e0e292();
              uVar20 = iVar11 << 1;
              iVar11 = FUN_01e0485a();
              iVar13 = (int)(in_r14_r15 >> 0x20);
              if (iVar11 == 0) {
                uVar44 = 0;
                for (iVar11 = 0; iVar11 != 4; iVar11 = iVar11 + 1) {
                  uVar31 = *(uint *)((iVar13 + 0x550 + iVar11) * 4);
                  uVar33 = uVar31;
                  if (uVar31 <= uVar20) {
                    uVar33 = uVar20;
                    uVar20 = uVar31;
                  }
                  uVar44 = uVar44 + uVar33;
                }
              }
              else {
                uVar44 = 0;
                for (iVar11 = 0; iVar11 != 4; iVar11 = iVar11 + 1) {
                  uVar31 = *(uint *)((iVar13 + 0x550 + iVar11) * 4);
                  uVar33 = uVar31;
                  if (uVar20 <= uVar31) {
                    uVar33 = uVar20;
                    uVar20 = uVar31;
                  }
                  uVar44 = uVar44 + uVar33;
                }
              }
              if (*(char *)(iVar13 + 700) == '\0') {
                *(undefined1 *)(iVar13 + 700) = 1;
                iVar11 = FUN_01e0e292();
                *(int *)((int)(in_r14_r15 >> 0x20) + 0x2c0) = iVar11 << 1;
              }
              uVar44 = uVar44 >> 2;
              iVar11 = (int)(in_r14_r15 >> 0x20);
              if ((*(uint *)in_r6_r7 & 0x15) == 0) {
                *(undefined1 *)(iVar11 + 0x22c) = 0;
                *(undefined1 *)(iVar11 + 0x228) = 0;
                *(undefined1 *)(iVar11 + 0x4a) = 0;
                uVar20 = *(uint *)(iVar11 + 0x2c0);
                if (uVar20 <= uVar44) {
LAB_01e10136:
                  uVar21 = 0;
                  uVar37 = (ulonglong)(iVar11 + 0x4b);
                  uVar24 = (ulonglong)uVar20;
                  goto LAB_01e1018c;
                }
                bVar8 = *(char *)(iVar11 + 0x40b) + 1;
                *(byte *)(iVar11 + 0x4b) = bVar8;
                uVar21 = 0;
                uVar37 = 0;
                uVar24 = (ulonglong)uVar20;
                if (9 < bVar8) {
                  *(uint *)(iVar11 + 0x2c0) = uVar44;
                  uVar20 = uVar44;
                  goto LAB_01e10136;
                }
              }
              else {
                if (*(char *)(iVar11 + 0x22c) == '\0') {
                  *(undefined1 *)(iVar11 + 0x22c) = 1;
                }
                if ((*(uint *)((int)(in_r6_r7 >> 0x20) + 4) & 8) == 0) {
                  *(undefined1 *)(iVar11 + 0x228) = 1;
                }
                uVar20 = *(uint *)(iVar11 + 0x2c0);
                if (uVar20 < uVar44) {
                  uVar20 = uVar20 + 1;
                  *(uint *)(iVar11 + 0x2c0) = uVar20;
                }
                if (*(char *)(iVar11 + 0x228) == '\0') {
                  uVar21 = 1;
                  uVar37 = (ulonglong)(iVar11 + 0x48U);
                  uVar24 = CONCAT44(1,uVar20);
                }
                else {
                  *(uint *)(iVar11 + 0x2c0) = uVar44;
                  uVar21 = 1;
                  uVar24 = (ulonglong)uVar44;
                  uVar37 = CONCAT44(1,iVar11 + 0x48U);
                }
LAB_01e1018c:
                *(undefined1 *)uVar37 = 0;
              }
              *(char *)(iVar11 + 0x2a) = (char)(uVar37 >> 0x20);
              *(char *)(iVar11 + 0x2b) = (char)(uVar24 >> 0x20);
              uVar22 = (ulonglong)CONCAT24((ushort)uVar24,uVar21);
              iVar11 = 0x19;
              if ((ushort)uVar24 < 0x5700001) {
                in_cres = 1;
              }
              else {
                in_cres = 0;
              }
code_r0x01e101a0:
              if (in_cres == 1) {
                iVar11 = 10;
              }
              in_r2_r3 = CONCAT44(0x32,iVar11);
switchD_01e0931a_caseD_94:
              uVar20 = (uint)(uVar22 >> 0x20);
              if (uVar20 < 0x6b00001) {
                in_r2_r3 = in_r2_r3 << 0x20;
              }
              uVar21 = 0x4b;
              if (uVar20 < 0x2480001) {
                uVar21 = (int)(in_r2_r3 >> 0x20);
              }
              uVar23 = CONCAT44(100,(int)uVar24);
              if (uVar20 < 0x1780001) {
                uVar23 = CONCAT44(uVar21,(int)uVar24);
              }
              pbVar46 = (byte *)in_r12_r13;
              bVar8 = *pbVar46;
              uVar44 = (uint)bVar8;
              uVar33 = (uint)bVar8;
              iVar11 = (int)(in_r14_r15 >> 0x20);
              *(char *)(iVar11 + 0x49) = (char)((ulonglong)uVar23 >> 0x20);
              uVar20 = (uint)bVar8;
              if ((bVar8 == 1) || (bVar8 == 4)) {
LAB_01e101ca:
                uVar33 = uVar20;
                uVar20 = (uint)uVar23;
                if (0x6ad < uVar20) goto LAB_01e10262;
                iVar11 = FUN_01e0485a();
                if (iVar11 == 0) {
                  iVar13 = (int)(in_r14_r15 >> 0x20);
                  *(undefined1 *)(iVar13 + 0x1fc) = 1;
                  iVar11 = *(byte *)(iVar13 + 0x407) + 1;
                  uVar37 = CONCAT44(iVar11,iVar11) & 0xffffffffff;
                  *(char *)(iVar13 + 0x47) = (char)uVar37;
                  if ((uint)(uVar37 >> 0x20) < 10) goto LAB_01e10268;
                  FUN_01e08ca4(0xb);
                  uVar33 = (uint)*(byte *)in_r12_r13;
                  uVar7 = 10;
                  goto LAB_01e10264;
                }
              }
              else {
                uVar20 = (uint)uVar23;
                if (*(char *)(iVar11 + 0x228) == '\0') {
                  bVar8 = 0x11;
                  if ((int)uVar22 == 0) {
                    bVar8 = 1;
                  }
                  pbVar46[4] = bVar8;
                  bVar28 = 0x80;
                  if (((uVar20 < 0x7ef) && (bVar28 = 0x60, uVar20 < 0x7bd)) &&
                     (bVar28 = 0x40, uVar20 < 0x713)) {
                    bVar28 = bVar8 | 0x20;
                    if (uVar20 < 0x7000001) {
                      bVar28 = bVar8;
                    }
                    pbVar46[4] = bVar28;
                    *(undefined1 *)(iVar11 + 0x2b8) = 0;
                    goto LAB_01e1021e;
                  }
                  pbVar46[4] = bVar28 | bVar8;
                  *(undefined1 *)(iVar11 + 0x2b8) = 0;
                }
                else {
                  pbVar46[4] = 0x81;
                  *(undefined1 *)(iVar11 + 0x2b8) = 0;
                  if (uVar20 < 0x713) {
LAB_01e1021e:
                    iVar11 = FUN_01e0485a();
                    uVar20 = uVar44;
                    if (iVar11 == 0) {
                      *(undefined1 *)((int)(in_r14_r15 >> 0x20) + 0x2b8) = 1;
                    }
                    goto LAB_01e101ca;
                  }
                }
LAB_01e10262:
                uVar20 = (uint)uVar23;
                uVar7 = 0;
LAB_01e10264:
                *(undefined1 *)((int)(in_r14_r15 >> 0x20) + 0x47) = uVar7;
              }
LAB_01e10268:
              if (((uVar33 < 10) && ((1 << uVar33 & 0x2e4U) != 0)) &&
                 ((*(undefined1 *)((int)(in_r14_r15 >> 0x20) + 0x2b8) = 0, uVar20 < 0x713 &&
                  (iVar11 = FUN_01e0485a(), iVar11 == 0)))) {
                *(undefined1 *)((int)(in_r14_r15 >> 0x20) + 0x2b8) = 1;
              }
            }
          }
        }
      }
      uVar20 = FUN_01e0df90(7);
      uVar37 = CONCAT44((uVar20 & 0xffff) - 0x2ab,uVar20) & 0xffffffff0000ffff;
      iVar11 = (int)uVar37;
      uVar20 = iVar11 - 0x137;
      puVar12 = (uint *)(in_r6_r7 >> 0x20);
      iVar13 = (int)(in_r14_r15 >> 0x20);
      if ((uint)(uVar37 >> 0x20) < 0x65) {
        puVar12[0x10] = puVar12[0x10] & 0xfffffffe;
LAB_01e102bc:
        puVar12[0x12] = puVar12[0x12] & 0xfffffffe;
        puVar12[0x10] = puVar12[0x10] & 0xffffffbf;
LAB_01e102c4:
        puVar12[0x12] = puVar12[0x12] & 0xffffffbf;
        *(undefined1 *)(iVar13 + 0x29c) = 0;
      }
      else {
        if (iVar11 - 0x239U < 0x71) {
          puVar12[0x10] = puVar12[0x10] | 1;
          goto LAB_01e102bc;
        }
        if (uVar20 < 0x101) {
          puVar12[0x10] = puVar12[0x10] & 0xfffffffe;
          puVar12[0x12] = puVar12[0x12] & 0xfffffffe;
          puVar12[0x10] = puVar12[0x10] | 0x40;
          goto LAB_01e102c4;
        }
        if (0x29b < iVar11 - 0xeaU) {
          *(undefined1 *)(iVar13 + 0x29c) = 1;
          *(undefined1 *)(iVar13 + 0x1f8) = 1;
          *(undefined1 *)(iVar13 + 0x2e) = 0x12;
        }
      }
      if ((*(uint *)in_r6_r7 & 0x15) == 0) {
        *(undefined2 *)(iVar13 + 0xfa) = 0;
        *puVar12 = *puVar12 & 0xfffffffe;
        puVar12[2] = puVar12[2] & 0xfffffffe;
      }
      else {
        iVar11 = *(ushort *)(iVar13 + 0xfa) + 1;
        uVar37 = CONCAT44(iVar11,iVar11) & 0xffffffffffff;
        *(short *)(iVar13 + 0xfa) = (short)uVar37;
        if ((uint)(uVar37 >> 0x20) < 0x85) {
          *puVar12 = *puVar12 | 1;
          puVar12[2] = puVar12[2] & 0xfffffffe;
          uVar23 = 0x2b4;
        }
        else {
          *(undefined2 *)(iVar13 + 0xfa) = 0x85;
          iVar11 = FUN_01e0ddf2(1);
          puVar12 = (uint *)(in_r6_r7 >> 0x20);
          iVar13 = (int)(in_r14_r15 >> 0x20);
          if (iVar11 == 0) {
            if (uVar20 + 1 < 0x1db) goto LAB_01e10398;
          }
          else if ((uVar20 + 1 < 0x1db) && ((puVar12[1] & 0xc) != 0)) {
LAB_01e10398:
            *(undefined2 *)(iVar13 + 0xfc) = 0;
            goto LAB_01e1039e;
          }
          iVar11 = *(ushort *)(iVar13 + 0xfc) + 1;
          uVar37 = CONCAT44(iVar11,iVar11) & 0xffffffffffff;
          *(short *)(iVar13 + 0xfc) = (short)uVar37;
          if ((uint)(uVar37 >> 0x20) < 0x85) goto LAB_01e1039e;
          *(undefined2 *)(iVar13 + 0xfc) = 0x85;
          *puVar12 = *puVar12 & 0xfffffffe;
          puVar12[2] = puVar12[2] & 0xfffffffe;
          uVar23 = 0x1000002b4;
        }
        *(char *)((int)(in_r14_r15 >> 0x20) + (int)uVar23) = (char)((ulonglong)uVar23 >> 0x20);
      }
    }
    else {
      *(char *)(iVar11 + 0x4d) = cVar55;
      *(undefined1 *)(iVar11 + iVar13 + 7) = 0;
      *(undefined1 *)(iVar11 + 0x4e) = 1;
    }
LAB_01e1039e:
    iVar11 = FUN_01e0e2f6();
    iVar13 = (int)in_r10_r11;
    pbVar46 = (byte *)in_r12_r13;
    iVar14 = (int)(in_r14_r15 >> 0x20);
    if ((*(short *)(iVar14 + 0xe6) == 3) || (*(short *)(iVar14 + 0xe6) == 4)) {
      if (iVar11 != 3) {
        bVar8 = *(byte *)(iVar14 + 0x210);
        if ((iVar11 == 2) && (bVar8 == 0)) {
          if (((*(byte *)(iVar14 + 0x201) & 0x30) == 0x30) &&
             (iVar11 = *(ushort *)(iVar14 + 0xe8) + 1,
             uVar37 = CONCAT44(iVar11,iVar11) & 0xffffffffffff,
             *(short *)(iVar14 + 0xe8) = (short)uVar37, 200 < (uint)(uVar37 >> 0x20))) {
            *(undefined2 *)(iVar14 + 0xd6) = 0x14;
            *(undefined1 *)(iVar14 + 0x23c) = 1;
            *(undefined2 *)(iVar14 + 0xd8) = 0x14;
            *(undefined1 *)(iVar14 + 0x240) = 1;
            uVar37 = ZEXT48((undefined2 *)(iVar14 + 0xd6));
            FUN_01e0e340(0);
            FUN_01e0e340(3);
            FUN_01e0e340(7);
            FUN_01e0e340(2);
            FUN_01e0e340(5);
            *(short *)((int)uVar37 + 0x10) = (short)(uVar37 >> 0x20);
          }
        }
        else {
          uVar37 = CONCAT44(1,(uint)bVar8);
          if (iVar11 == 1) {
            uVar37 = (ulonglong)bVar8;
          }
          if ((int)(uVar37 >> 0x20) == 0 && (int)uVar37 == 0) {
            if (((*(byte *)(iVar14 + 0x201) & 0x10) != 0) &&
               ((*(char *)(iVar14 + 0x20d) == '\x03' || (*(char *)(iVar14 + 0x20d) == '\0')))) {
              *(undefined1 *)(iVar14 + 0x2d) = 3;
              if (*(char *)(iVar14 + 0x29c) != '\0') {
                *(undefined2 *)(iVar14 + 0xcc) = 0;
              }
              FUN_01e001a0(*pbVar46);
              if ((*pbVar46 == 3) &&
                 ((iVar11 = (int)(in_r14_r15 >> 0x20), pbVar46[5] == 0 ||
                  ((*(byte *)(iVar11 + 0x201) & 0x10) != 0)))) {
                *(undefined1 *)(iVar11 + 0x1f0) = 1;
              }
            }
          }
          else if ((int)uVar37 == 0 && iVar11 == 0) {
            sVar39 = 0;
            *(undefined2 *)(iVar14 + 0xcc) = 0;
            if (*(short *)(iVar14 + 0xe6) == 3) {
              uVar22 = (ulonglong)*(byte *)(iVar14 + 0x20d);
switchD_01e0931a_caseD_ba:
              iVar13 = (int)in_r10_r11;
              pbVar46 = (byte *)in_r12_r13;
              iVar11 = (int)(in_r14_r15 >> 0x20);
              if (((int)uVar22 == 0) || ((*(byte *)(iVar11 + 0x298) & 1) == 0)) {
                *(undefined1 *)(iVar11 + 0x1f8) = 1;
                *(undefined1 *)(iVar11 + 0x2e) = 2;
              }
              else {
                uVar24 = 0;
                *(undefined2 *)(iVar11 + 0xe6) = 0;
                *(undefined1 *)(iVar11 + 8) = 1;
switchD_01e0931a_caseD_1b:
                iVar13 = (int)in_r10_r11;
                pbVar46 = (byte *)in_r12_r13;
                uVar7 = (undefined1)uVar24;
                thunk_FUN_01e00260();
                *(undefined1 *)((int)(in_r14_r15 >> 0x20) + 0x298) = uVar7;
              }
            }
            else {
              iVar11 = FUN_01e0485a();
              iVar14 = (int)(in_r14_r15 >> 0x20);
              if (iVar11 == 0) {
                if (*(ushort *)(iVar14 + 0xea) < 0x50) {
                  sVar39 = *(ushort *)(iVar14 + 0xea) + 1;
                }
                else {
                  *(undefined1 *)(iVar14 + 0x1f8) = 1;
                  *(undefined1 *)(iVar14 + 0x2e) = 3;
                }
              }
              *(short *)(iVar14 + 0xea) = sVar39;
              if (*(char *)(iVar14 + 0x298) != '\0') {
                *(undefined2 *)(iVar14 + 0xe6) = 0;
                *(undefined1 *)(iVar14 + 0x298) = 0;
                if (*(char *)(iVar14 + 0x20d) != '\n') {
                  *(undefined1 *)(iVar14 + 8) = 1;
                  thunk_FUN_01e00260();
                }
              }
            }
          }
        }
        goto LAB_01e10af4;
      }
      uVar37 = (ulonglong)CONCAT14(*(byte *)(iVar14 + 0x201),(uint)*(byte *)(iVar14 + 0x201)) &
               0xffffff31ffffffff;
      if ((int)(uVar37 >> 0x20) == 0x31) {
        iVar11 = *(ushort *)(iVar14 + 0xe8) + 1;
        uVar37 = CONCAT44(iVar11,iVar11) & 0xffffffffffff;
        *(short *)(iVar14 + 0xe8) = (short)uVar37;
        if (200 < (uint)(uVar37 >> 0x20)) {
          *(undefined1 *)(iVar14 + 0x2d) = 10;
          *(undefined1 *)(iVar14 + 0x298) = 1;
          *(undefined1 *)(iVar14 + 0x210) = 1;
          *(undefined1 *)(iVar14 + 0x21c) = 0;
          *(undefined2 *)(iVar14 + 0xe6) = 0;
        }
        goto LAB_01e10af4;
      }
      uVar21 = (undefined4)uVar37;
      uVar37 = CONCAT44(uVar21,uVar21) & 0xffffff32ffffffff;
      if ((int)(uVar37 >> 0x20) != 0x32) {
        if ((((uint)uVar37 & 0xffffff1c) == 0x1c) &&
           (iVar11 = *(ushort *)(iVar14 + 0xe8) + 1,
           uVar37 = CONCAT44(iVar11,iVar11) & 0xffffffffffff,
           *(short *)(iVar14 + 0xe8) = (short)uVar37, 200 < (uint)(uVar37 >> 0x20))) {
          *(undefined2 *)(iVar14 + 0xd6) = 0x14;
          *(undefined1 *)(iVar14 + 0x23c) = 1;
          *(undefined2 *)(iVar14 + 0xd8) = 0x14;
          *(undefined1 *)(iVar14 + 0x240) = 1;
          uVar37 = ZEXT48((undefined2 *)(iVar14 + 0xd6));
          *(undefined1 *)(iVar14 + 0x3a) = 0;
          *(undefined1 *)(iVar14 + 0x3e) = 0;
          *(undefined1 *)(iVar14 + 0x3f) = 0;
          *(undefined1 *)(iVar14 + 0x39) = 0;
          *(undefined1 *)(iVar14 + 0x45) = 0x28;
          *(undefined1 *)(iVar14 + 0x18) = 0;
          *(undefined1 *)(iVar14 + 0x41) = 0;
          *(undefined1 *)(iVar14 + 0x44) = 4;
          FUN_01e08f94();
          FUN_01e0e340(0);
          FUN_01e0e340(3);
          FUN_01e0e340(7);
          FUN_01e0e340(2);
          FUN_01e0e340(5);
          func_0x021127b4((int)(in_r14_r15 >> 0x20) + 0x15b8,0x1cf);
          FUN_01e050c8();
          FUN_01e09dba();
          *(short *)((int)uVar37 + 0x10) = (short)(uVar37 >> 0x20);
        }
        goto LAB_01e10af4;
      }
      iVar11 = *(ushort *)(iVar14 + 0xe8) + 1;
      uVar37 = CONCAT44(iVar11,iVar11) & 0xffffffffffff;
      *(short *)(iVar14 + 0xe8) = (short)uVar37;
      if ((uint)(uVar37 >> 0x20) < 0xc9) goto LAB_01e10af4;
      *(undefined1 *)(iVar14 + 0x2d) = 10;
      *(undefined1 *)(iVar14 + 0x298) = 1;
      *(undefined1 *)(iVar14 + 0x290) = 1;
      *(undefined1 *)(iVar14 + 0x28c) = 1;
      *(undefined2 *)(iVar14 + 0xe6) = 0;
    }
    else {
      cVar55 = *(char *)(iVar14 + 0x210);
      if (((iVar11 == 1) && (cVar55 != '\0')) && ((*(byte *)(iVar14 + 0x201) & 4) == 0)) {
        *(undefined1 *)(iVar14 + 0x210) = 0;
        cVar55 = '\0';
        *(undefined1 *)(iVar14 + 0x21c) = 1;
      }
      if (*(char *)(iVar14 + 0x608) == '\0') {
        if ((cVar55 != '\0' || *(char *)(iVar14 + 8) != '\0') || *(char *)(iVar14 + 0x21c) != '\0')
        goto LAB_01e10560;
LAB_01e10574:
        *(undefined1 *)(iVar14 + 0x2a0) = 0;
        *(undefined2 *)(iVar14 + 0xec) = 0;
      }
      else {
        if (cVar55 == '\0' && *(char *)(iVar14 + 0x21c) == '\0') goto LAB_01e10574;
LAB_01e10560:
        if (iVar11 == 0) {
          if (*(char *)(iVar14 + 0x2a0) == '\0') {
            sVar39 = 0;
            goto LAB_01e106c6;
          }
          FUN_01e08ca4(4);
        }
        else {
          if ((iVar11 != 1) || ((*(byte *)(iVar14 + 0x201) & 0x11) == 0)) goto LAB_01e10574;
          uVar25 = *(ushort *)(iVar14 + 0xec);
          if ((199 < uVar25) && ((*(byte *)(iVar14 + 0x2a0) & 1) == 0)) {
            *(undefined1 *)(iVar14 + 0x2a0) = 1;
            *(undefined1 *)(iVar14 + 0x2e) = 4;
            *(undefined1 *)(iVar14 + 0x1f8) = 1;
            FUN_01e030e6();
            FUN_01e03108();
            uVar25 = *(ushort *)((int)(in_r14_r15 >> 0x20) + 0xec);
          }
          sVar39 = uVar25 + 1;
LAB_01e106c6:
          *(short *)((int)(in_r14_r15 >> 0x20) + 0xec) = sVar39;
        }
      }
      iVar14 = (int)(in_r14_r15 >> 0x20);
      sVar39 = 0;
      if (*(char *)(iVar14 + 0x608) != '\0') {
        sVar39 = 0;
        if ((((iVar11 == 3) && (sVar39 = 0, *(char *)(iVar14 + 0x607) == '\0')) &&
            (sVar39 = 0, (*(byte *)(iVar14 + 0x201) & 0x10) == 0)) &&
           (sVar39 = 0, (*(byte *)(iVar14 + 0x200) & 3) == 3)) {
          if (0x84 < *(ushort *)(iVar14 + 0xee)) {
            FUN_01e367de(iVar13 + 0x5fc);
            FUN_01e01d94();
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          sVar39 = *(ushort *)(iVar14 + 0xee) + 1;
        }
      }
      *(short *)(iVar14 + 0xee) = sVar39;
      if (((*(char *)(iVar14 + 0x608) == '\0') ||
          (*(char *)(iVar14 + 0x607) != '\0' || *(char *)(iVar14 + 0x300) != '\0')) ||
         ((6 < pbVar46[6] || ((1 << (uint)pbVar46[6] & 0x46U) == 0)))) {
        sVar39 = 0;
        if ((iVar11 == 0) && (*(char *)(iVar14 + 0x2a8) != '\0')) {
          *(undefined1 *)(iVar14 + 0x3a) = 0;
          *(undefined1 *)(iVar14 + 0x2a8) = 0;
          *(undefined1 *)(iVar14 + 0x1f8) = 0;
          FUN_01e009f6();
        }
      }
      else {
        sVar39 = 0;
        if ((iVar11 == 2) && ((*(byte *)(iVar14 + 0x201) & 0x14) == 0)) {
          bVar8 = *(byte *)(iVar14 + 0x200);
          if ((bVar8 & 9) == 0) {
            if ((bVar8 & 1) == 0) {
              if ((bVar8 & 4) == 0) {
                uVar25 = *(ushort *)(iVar14 + 0xf0);
                if (uVar25 < 0x85) goto LAB_01e10890;
                *(undefined1 *)(iVar14 + 0x68) = 0;
                pbVar46[6] = 1;
                *(undefined1 *)(iVar14 + 0x308) = 1;
                *(undefined1 *)(iVar14 + 0x3a) = 0;
                *(undefined1 *)(iVar14 + 0x3e) = 0;
                *(undefined1 *)(iVar14 + 0x3f) = 0;
                *(undefined1 *)(iVar14 + 0x2a4) = 1;
                *(undefined1 *)(iVar14 + 0x67) = 1;
                *(undefined1 *)(iVar14 + 0x2a8) = 1;
                *(undefined1 *)(iVar14 + 0x1f8) = 1;
                goto LAB_01e10882;
              }
            }
            else {
              uVar25 = *(ushort *)(iVar14 + 0xf0);
              if (0x84 < uVar25) {
                *(undefined1 *)(iVar14 + 0x68) = 0;
                bVar8 = 2;
                goto LAB_01e10858;
              }
LAB_01e10890:
              sVar39 = uVar25 + 1;
            }
          }
          else {
            uVar25 = *(ushort *)(iVar14 + 0xf0);
            if (uVar25 < 0x85) goto LAB_01e10890;
            *(undefined1 *)(iVar14 + 0x68) = 0;
            bVar8 = 6;
LAB_01e10858:
            pbVar46[6] = bVar8;
            *(undefined1 *)(iVar14 + 0x3a) = 0;
            *(undefined1 *)(iVar14 + 0x3e) = 0;
            *(undefined1 *)(iVar14 + 0x3f) = 0;
            *(undefined1 *)(iVar14 + 0x2a4) = 1;
            *(undefined1 *)(iVar14 + 0x67) = 1;
            *(undefined1 *)(iVar14 + 0x2a8) = 1;
            *(undefined1 *)(iVar14 + 0x1f8) = 1;
LAB_01e10882:
            sVar39 = 0;
            FUN_01e00994();
            FUN_01e009c6();
            FUN_01e009e0();
          }
        }
      }
      iVar14 = (int)(in_r14_r15 >> 0x20);
      *(short *)(iVar14 + 0xf0) = sVar39;
      if ((*(char *)(iVar14 + 0x608) == '\0') && (*(char *)(iVar14 + 8) == '\x01')) {
        uVar20 = (uint)*(byte *)(iVar14 + 0x401);
        if ((iVar11 == 2) && (uVar20 == 2)) {
          bVar8 = *(byte *)(iVar14 + 0x200);
          uVar37 = (ulonglong)bVar8;
          if (((bVar8 & 4) != 0) ||
             (uVar24 = (ulonglong)CONCAT14(*(byte *)(iVar14 + 0x201),(uint)bVar8), uVar37 = uVar24,
             (*(byte *)(iVar14 + 0x201) & 0x15) == 0)) {
            uVar24 = (ulonglong)CONCAT14(*(byte *)(iVar14 + 0x201),(int)uVar37);
            if (((*(byte *)(iVar14 + 0x201) & 0x15) == 0) &&
               (((uVar37 & 8) != 0 ||
                (uVar24 = (ulonglong)CONCAT14(*(byte *)(iVar14 + 0x201),(int)uVar37),
                (*(byte *)(iVar14 + 0x201) & 0x15) == 0)))) goto LAB_01e108ea;
          }
          sVar39 = *(short *)(iVar14 + 0xf2);
          *(short *)(iVar14 + 0xf2) = sVar39 + 1;
          if (sVar39 == 0x8b) {
            if (((uVar24 & 8) == 0) && ((uVar24 & 0xffffff2000000000) != 0)) {
              *pbVar46 = 2;
              uVar7 = 4;
LAB_01e10a8a:
              *(undefined1 *)(iVar14 + 0x44) = uVar7;
              FUN_01e08f94();
              iVar11 = 0x2ac;
LAB_01e10a98:
              *(undefined1 *)((int)(in_r14_r15 >> 0x20) + iVar11) = 1;
            }
            else if ((uVar24 & 0xffffff2000000000) == 0) {
              if (((int)(uVar24 & 0xffffff20ffffff02) != 0) &&
                 ((int)((uVar24 & 0xffffff20ffffff02) >> 0x20) != 0)) {
                uVar7 = 3;
                *pbVar46 = 3;
                goto LAB_01e10a8a;
              }
            }
            else {
              *pbVar46 = 7;
              uVar7 = 1;
              *(undefined1 *)(iVar14 + 0x44) = 1;
              FUN_01e08f94();
              *(undefined1 *)((int)(in_r14_r15 >> 0x20) + 0x2ac) = uVar7;
            }
          }
          else if (sVar39 == 0x84) {
            *(undefined1 *)(iVar14 + 0x14c) = 0;
            FUN_01e030e6();
            FUN_01e03108();
          }
        }
        else {
LAB_01e108ea:
          if (iVar11 == 2) {
            iVar11 = FUN_01e07f7a();
            iVar14 = (int)(in_r14_r15 >> 0x20);
            if ((iVar11 != 0) && (uVar20 == 0)) {
              bVar8 = *(byte *)(iVar14 + 0x200);
              uVar37 = (ulonglong)bVar8;
              if (((bVar8 & 4) != 0) ||
                 (uVar24 = (ulonglong)CONCAT14(*(byte *)(iVar14 + 0x201),(uint)bVar8),
                 uVar37 = uVar24, (*(byte *)(iVar14 + 0x201) & 0x15) == 0)) {
                uVar24 = (ulonglong)CONCAT14(*(byte *)(iVar14 + 0x201),(int)uVar37);
                if (((*(byte *)(iVar14 + 0x201) & 0x15) == 0) &&
                   (((uVar37 & 8) != 0 ||
                    (uVar24 = (ulonglong)CONCAT14(*(byte *)(iVar14 + 0x201),(int)uVar37),
                    (*(byte *)(iVar14 + 0x201) & 0x15) == 0)))) goto LAB_01e1092e;
              }
              iVar11 = *(ushort *)(iVar14 + 0xf2) + 1;
              uVar37 = CONCAT44(iVar11,iVar11) & 0xffffffffffff;
              *(short *)(iVar14 + 0xf2) = (short)uVar37;
              if ((int)(uVar37 >> 0x20) == 0x85) {
                *(undefined1 *)(iVar14 + 0x3a) = 0;
                *(undefined1 *)(iVar14 + 0x3e) = 0;
                *(undefined1 *)(iVar14 + 0x3f) = 0;
                *(undefined2 *)(iVar14 + 0xd6) = 0x14;
                *(undefined1 *)(iVar14 + 0x23c) = 1;
                *(undefined2 *)(iVar14 + 0xd8) = 0x14;
                *(undefined1 *)(iVar14 + 0x240) = 1;
                if (((uVar24 & 8) == 0) && ((uVar24 & 0xffffff2000000000) != 0)) {
                  *(undefined1 *)(iVar14 + 0x42) = 4;
                }
                else if (((uVar24 & 1) == 0) || ((uVar24 & 0xffffff2000000000) == 0)) {
                  if (((int)(uVar24 & 0xffffff20ffffff02) != 0) &&
                     ((int)((uVar24 & 0xffffff20ffffff02) >> 0x20) != 0)) {
                    *(undefined1 *)(iVar14 + 0x42) = 3;
                  }
                }
                else {
                  *(undefined1 *)(iVar14 + 0x42) = 1;
                }
              }
              goto LAB_01e10a9c;
            }
LAB_01e1092e:
            if ((*(byte *)(iVar14 + 0x201) & 3) == 3) {
              sVar39 = *(short *)(iVar14 + 0xf2);
              *(short *)(iVar14 + 0xf2) = sVar39 + 1;
              if (sVar39 == 0x8b) {
                *(undefined1 *)(iVar14 + 0x14c) = 1;
                iVar11 = 0x2b0;
              }
              else {
                if (sVar39 != 0x84) goto LAB_01e10a9c;
                FUN_01e030e6();
                FUN_01e03108();
                iVar11 = 0x158;
              }
              goto LAB_01e10a98;
            }
          }
          iVar11 = (int)(in_r14_r15 >> 0x20);
          *(undefined2 *)(iVar11 + 0xf2) = 0;
          if (*(char *)(iVar11 + 0x2b0) != '\0') {
            *(undefined1 *)(iVar11 + 0x2b0) = 0;
            FUN_01e04878(7);
            thunk_EXT_FUN_0200010a();
          }
          iVar11 = (int)(in_r14_r15 >> 0x20);
          if (*(char *)(iVar11 + 0x2ac) != '\0') {
            bVar8 = *pbVar46;
            *(undefined1 *)(iVar11 + 0x2ac) = 0;
            if (*(char *)((uint)bVar8 + iVar11 + 0x446) == '\0') {
              uVar21 = 7;
            }
            else if (bVar8 == 3) {
              uVar21 = 8;
            }
            else {
              uVar21 = 1;
            }
            FUN_01e04878(uVar21);
            thunk_EXT_FUN_0200010a();
          }
        }
      }
LAB_01e10a9c:
      iVar11 = (int)(in_r14_r15 >> 0x20);
      if (((*(char *)(iVar11 + 0x608) == '\0') &&
          (*(char *)(iVar11 + 8) == '\0' && *(char *)(iVar11 + 0x210) == '\0')) &&
         (*(char *)(iVar11 + 0x20e) == '\0')) {
        iVar11 = FUN_01e0485a();
        iVar14 = (int)(in_r14_r15 >> 0x20);
        if ((iVar11 != 0 || *(char *)(iVar14 + 0x21c) != '\0') || *(char *)(iVar14 + 0x28c) != '\0')
        goto LAB_01e10ada;
        iVar11 = *(ushort *)(iVar14 + 0xf4) + 1;
        uVar37 = CONCAT44(iVar11,iVar11) & 0xffffffffffff;
        *(short *)(iVar14 + 0xf4) = (short)uVar37;
        if (0x41 < (uint)(uVar37 >> 0x20)) {
          *(undefined1 *)(iVar14 + 0x1f8) = 1;
          *(undefined1 *)(iVar14 + 0x2e) = 0xe;
        }
      }
      else {
LAB_01e10ada:
        *(undefined2 *)((int)(in_r14_r15 >> 0x20) + 0xf4) = 0;
      }
      iVar11 = (int)(in_r14_r15 >> 0x20);
      if (*(char *)(iVar11 + 0x2a4) != '\0') {
        *(undefined1 *)(iVar11 + 0x2a4) = 0;
        FUN_01e08f94();
      }
LAB_01e10af4:
      iVar14 = (int)(in_r14_r15 >> 0x20);
      if (*(char *)(iVar14 + 0x28c) == '\0') {
        if (*(char *)(iVar14 + 8) != '\0' || *(char *)(iVar14 + 0x304) != '\0') {
          if (*(short *)(iVar14 + 0xe4) == 0) {
            sVar39 = 0;
          }
          else {
            sVar39 = *(short *)(iVar14 + 0xe4) + -1;
            *(short *)(iVar14 + 0xe4) = sVar39;
          }
          if ((*(byte *)(iVar14 + 0x201) & 0x15) == 0) {
            *(undefined1 *)(iVar14 + 0x284) = 0;
            if (*(char *)(iVar14 + 0x288) != '\0') {
              *(undefined1 *)(iVar14 + 0x288) = 0;
              *(undefined2 *)(iVar14 + 0xe4) = 0;
              uVar20 = (uint)*(byte *)(iVar14 + 0x401);
              uVar37 = (ulonglong)CONCAT14(*(byte *)(iVar14 + 0x401),uVar20);
              if (uVar20 != 1) {
                uVar37 = (ulonglong)uVar20;
              }
              uVar7 = 1;
              if ((int)uVar37 != 0) {
                uVar7 = (undefined1)((int)(uVar37 >> 0x20) << 1);
              }
              *(undefined1 *)(iVar14 + 0x41) = uVar7;
              FUN_01e08f94();
              FUN_01e05688();
              if (*(char *)((uint)*pbVar46 + (int)(in_r14_r15 >> 0x20) + 0x446) == '\0') {
                uVar21 = 7;
              }
              else if (*pbVar46 == 3) {
                uVar21 = 8;
              }
              else {
                uVar21 = 1;
              }
              FUN_01e04878(uVar21);
              thunk_EXT_FUN_0200010a();
            }
          }
          else if (*(char *)(iVar14 + 0x284) == '\0') {
            *(undefined1 *)(iVar14 + 0x284) = 1;
            if (sVar39 == 0) {
              *(undefined2 *)(iVar14 + 0xe4) = 0x21;
            }
            else if (*(char *)(iVar14 + 0x288) == '\0') {
              uVar7 = 1;
              *(undefined1 *)(iVar14 + 0x288) = 1;
              iVar11 = FUN_01e07f7a();
              if (iVar11 != 0) {
                *(undefined1 *)((int)(in_r14_r15 >> 0x20) + 0x1f8) = uVar7;
                FUN_01e030e6();
                FUN_01e03108();
                *(undefined1 *)((int)(in_r14_r15 >> 0x20) + 0x158) = uVar7;
              }
            }
          }
        }
        iVar11 = FUN_01e07f7a();
        iVar13 = (int)(in_r14_r15 >> 0x20);
        if ((iVar11 != 0) || (*(char *)(iVar13 + 0x608) != '\0')) {
          FUN_01e0e36e();
          *(undefined4 *)(iVar13 + 0x27c) = 0;
          puVar12 = (uint *)func_0x021127a8(iVar13 + 0x280,4);
          return puVar12;
        }
LAB_01e120fe:
        iVar11 = FUN_01e07f7a();
        iVar13 = (int)(in_r14_r15 >> 0x20);
        if ((iVar11 == 0) ||
           ((((ulonglong)CONCAT14(*(undefined1 *)(iVar13 + 0x230),iVar11) ^ 0x100000000) &
            0x100000000) != 0)) {
          *(undefined1 *)(iVar13 + 0x234) = 0;
          *(undefined1 *)(iVar13 + 0x238) = 0;
LAB_01e12166:
          if (*(ushort *)(iVar13 + 0xd6) != 0) {
            uVar37 = (ulonglong)
                     CONCAT14(*(undefined1 *)(iVar13 + 0x23c),(uint)*(ushort *)(iVar13 + 0xd6)) &
                     0xffffff01ffffffff;
            uVar37 = CONCAT44(-(int)(uVar37 >> 0x20),(int)uVar37 + -1);
            goto LAB_01e121a0;
          }
          uVar37 = 0;
        }
        else {
          *(undefined1 *)(iVar13 + 0x234) = 0;
          if (*(int *)(iVar13 + 0x238) != 0) goto LAB_01e12166;
          *(undefined1 *)(iVar13 + 0x238) = 1;
          *(undefined2 *)(iVar13 + 0xd6) = 0x14;
          *(undefined1 *)(iVar13 + 0x23c) = 1;
          *(undefined2 *)(iVar13 + 0xd8) = 0x14;
          *(undefined1 *)(iVar13 + 0x240) = 1;
          uVar37 = 0xff00000013;
LAB_01e121a0:
          *(short *)(iVar13 + 0xd6) = (short)uVar37;
          *(undefined2 *)(iVar13 + 0xd2) = 6;
          *(char *)(iVar13 + 0x30) = (char)(uVar37 >> 0x20);
        }
        in_r12_r13 = 0x40fc00004130;
        if (*(ushort *)(iVar13 + 0xd8) == 0) {
          uVar37 = uVar37 & 0xffffffff;
        }
        else {
          iVar11 = *(ushort *)(iVar13 + 0xd8) - 1;
          uVar37 = CONCAT44(iVar11,(int)uVar37);
          *(short *)(iVar13 + 0xd8) = (short)iVar11;
          *(undefined2 *)(iVar13 + 0xd4) = 6;
          *(byte *)(iVar13 + 0x31) = -(*(byte *)(iVar13 + 0x240) & 1);
        }
        if ((short)uVar37 == 0) {
          *(byte *)(iVar13 + 0x15ba) = *(byte *)(iVar13 + 0x15ba) & 0xfe;
        }
        if ((short)(uVar37 >> 0x20) == 0) {
          *(byte *)(iVar13 + 0x15ba) = *(byte *)(iVar13 + 0x15ba) & 0xfd;
        }
        if ((((byte)(DAT_00004130 - 5U) < 2) && (((*(byte *)(iVar13 + 0x20c) ^ 1) & 1) == 0)) &&
           (*(char *)(iVar13 + 0x1b8) == '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_01e12c10;
      }
      if (*(char *)(iVar14 + 0x290) == '\0') goto LAB_01e10b48;
    }
    *(undefined1 *)(iVar14 + 0x290) = 0;
    uVar23 = 0x300fffffff8;
    while( true ) {
      iVar11 = (int)uVar23;
      iVar14 = (int)((ulonglong)uVar23 >> 0x20);
      if (iVar11 == 0) break;
      *(short *)(pbVar46 + iVar11 + 0x46) = (short)((ulonglong)uVar23 >> 0x20);
      (pbVar46 + iVar11 + 0x4e)[0] = 0;
      (pbVar46 + iVar11 + 0x4e)[1] = 1;
      uVar23 = CONCAT44(iVar14,iVar11 + 2);
    }
    for (uVar23 = CONCAT44(iVar14 + 0x3f,0xfffffffc); iVar11 = (int)uVar23, iVar11 != 0;
        uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),iVar11 + 2)) {
      *(short *)(pbVar46 + iVar11 + 0x24) = (short)((ulonglong)uVar23 >> 0x20);
      (pbVar46 + iVar11 + 0x28)[0] = 0xc0;
      (pbVar46 + iVar11 + 0x28)[1] = 0;
    }
LAB_01e10b48:
    FUN_01e0df90(*(undefined1 *)(iVar13 + 0x908));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc1:
    uVar22 = ZEXT48(puVar26) << 0x20;
    goto switchD_01e0931a_caseD_1f;
  case 0xc3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc4:
    while( true ) {
      iVar13 = (int)uVar22;
      iVar11 = iVar13 + 1;
      if (iVar11 == 6) break;
      uVar22 = CONCAT44((uint)(byte)s_G6470_usb_pause_01e1b63d[iVar13 + 0xc] +
                        (uint)(byte)s_G6470_usb_pause_01e1b63d[10],iVar11);
      uRam01e1afb7 = (undefined1)
                     ((uint)(byte)s_G6470_usb_pause_01e1b63d[iVar13 + 0xc] +
                     (uint)(byte)s_G6470_usb_pause_01e1b63d[10]);
    }
    return (uint *)0x6;
  case 0xc6:
    uVar20 = (int)puVar26 * 0x80;
    goto code_r0x01e0939e;
  case 200:
    DataCachePrefetch(0x67c0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xc9:
    puVar12[0xc] = (uint)puVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xcf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd2:
    SoftwareInterrupt(0);
    uVar37 = CONCAT44(*puVar10,puVar12);
    if (puVar19 != (uint *)0x0) {
      in_r2_r3 = CONCAT44(puVar45,(int)puVar19 + -1);
      ClearLock();
    }
    ClearLock();
    bVar8 = (byte)puVar10[1];
    uVar24 = (ulonglong)bVar8 << 0x20;
    uVar44 = (uint)bVar8;
    puVar19 = (uint *)((int)puVar10 + 5);
    uVar22 = CONCAT44(puVar12,puVar19);
    uVar20 = (uint)bVar8;
    iVar11 = (int)in_r2_r3;
    switch(bVar8) {
    case 0:
    case 0x49:
    case 0x59:
    case 0x5f:
    case 0x60:
    case 0x69:
    case 0x78:
    case 0x79:
    case 0x80:
    case 0x45:
    case 0x65:
      nop();
      halt_baddata();
    case 1:
    case 0x5a:
    case 0x61:
    case 0x7a:
    case 0x81:
      uVar22 = (ulonglong)(*puVar19 + 4);
    case 0x96:
      in_r2_r3 = (ulonglong)CONCAT14(*(undefined1 *)(bVar8 + 4),iVar11);
    case 0x8e:
    case 0x91:
    case 0x99:
    case 0x85:
    case 0xa5:
    case 0x26:
      if ((int)uVar22 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((int)(in_r2_r3 >> 0x20) != 0) {
        halt_baddata();
      }
      if ((int)in_r2_r3 != 0) {
        nop();
      }
      nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      halt_baddata();
    case 3:
    case 0x57:
    case 0x5e:
    case 0x77:
    case 0x7c:
    case 0x7e:
    case 0x83:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 4:
    case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 5:
    case 0x25:
      nop();
    case 0x4f:
    case 0x6f:
    case 0xe2:
      nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 7:
    case 0x27:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 10:
    case 0x2a:
    case 0x44:
    case 0x4d:
    case 100:
    case 0x6d:
      halt_baddata();
    case 0xc:
    case 0x12:
    case 0x18:
    case 0x1b:
    case 0x2f:
    case 0x32:
    case 0x56:
    case 0x5d:
    case 0x76:
    case 0x7d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xd:
    case 0x13:
    case 0x19:
    case 0x1c:
    case 0x30:
    case 0x33:
    case 0xf7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf:
    case 0x15:
    case 0x2c:
    case 0x5c:
    case 99:
      return puVar19;
    case 0x10:
    case 0x16:
    case 0x2d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x48:
    case 0x68:
    case 0xde:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x50:
    case 0x52:
    case 0x70:
    case 0x72:
    case 0xc9:
    case 0xcd:
    case 0xd1:
    case 0xd5:
    case 0xd9:
    case 0xdd:
    case 0xe1:
    case 0xe5:
      halt_baddata();
    case 0x53:
    case 0x73:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x54:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x58:
    case 0x7f:
      halt_baddata();
    case 0x74:
    case 0xae:
    case 0xb3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x84:
    case 0x8d:
    case 0xad:
    case 0xe6:
    case 0xee:
      halt_baddata();
    case 0x86:
    case 0xfb:
      if (puVar12 != (uint *)0x0) {
        CoreSynchronize();
      }
      CoreSynchronize();
      DataCachePrefetch((uint)bVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x87:
      nop();
      halt_baddata();
    case 0x88:
    case 0xbb:
    case 0xf6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x89:
    case 0xc0:
      do {
        iVar11 = *(int *)((int)(uVar37 >> 0x20) + 4);
        do {
          iVar13 = *(int *)(*(ushort *)(iVar11 + -0x20) + 0x14);
          uVar37 = (ulonglong)CONCAT24(*(undefined2 *)(iVar11 + -0x16),iVar13);
          if (iVar11 != 0) {
            uVar20 = (uint)*(ushort *)(iVar13 + 0x1e);
            if (*(int *)(uVar20 - 0x38) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (uVar20 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        } while (*(int *)(*(ushort *)(iVar11 + -0x20) + 0x24) == 0);
      } while( true );
    case 0x8a:
    case 0x93:
    case 0xb1:
    case 0xeb:
    case 0xf1:
      halt_baddata();
    case 0x8b:
    case 0x9d:
    case 0xab:
    case 0xec:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x8c:
    case 0x98:
    case 0x9c:
    case 0x9e:
    case 0xac:
    case 0xb4:
    case 0xb9:
    case 0xed:
      nop();
    case 0x4e:
    case 0x6e:
      nop();
      halt_baddata();
    case 0x90:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x92:
    case 0x9b:
      if (iVar11 == 0) {
        halt_baddata();
      }
    case 0x8f:
    case 0x9a:
    case 0xb2:
    case 0xef:
    case 0xf0:
      if (puVar19 == (uint *)0x0) {
        halt_baddata();
      }
      halt_baddata();
    case 0x94:
    case 0x95:
    case 0xf2:
    case 0xf3:
    case 0xf4:
    case 0xf5:
    case 0xfc:
    case 0xfd:
    case 0xfe:
    case 0xff:
      ClearLock();
      goto LAB_01e1c5ce;
    case 0x9f:
      nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa0:
    case 0xf8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa1:
    case 0xc1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa2:
    case 0xc2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa4:
      if ((int)(in_r2_r3 >> 0x20) != 0) {
        ClearLock();
      }
    case 6:
      ClearLock();
      halt_baddata();
    case 0xa6:
    case 0xa7:
    case 0xa9:
    case 0xba:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xa8:
    case 0xea:
      halt_baddata();
    case 0xaa:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xaf:
    case 0xb6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb7:
      uVar24 = (ulonglong)uVar20 << 0x20;
      in_r2_r3 = (ulonglong)*(uint *)(*puVar10 - 0x38);
    case 0x97:
    case 0xb5:
    case 0xb0:
      while( true ) {
        iVar11 = (int)uVar22;
        if (iVar11 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (iVar11 == 0) {
          halt_baddata();
        }
        uVar20 = (uint)(uVar24 >> 0x20);
        if (uVar20 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar24 = (ulonglong)uVar20 << 0x20;
        if (iVar11 != 0) break;
LAB_01e1c6d0:
        if ((int)in_r2_r3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      halt_baddata();
    case 0xb8:
      goto BYTE_01e1c5d4;
    case 0xbc:
    case 0xbd:
    case 0xbf:
    case 0xe8:
      goto switchD_01e1c570_caseD_bc;
    case 0xbe:
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    case 0xc6:
      goto switchD_01e1c570_caseD_c6;
    case 199:
    case 0xcb:
    case 0xcf:
    case 0xd3:
    case 0xd7:
    case 0xdb:
      halt_baddata();
    case 200:
    case 0xcc:
    case 0xd0:
    case 0xd4:
    case 0xd8:
    case 0xdc:
    case 0xe0:
    case 0xe4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xca:
      break;
    case 0xd2:
      uVar37 = in_r6_r7 & 0xffffffff;
      if (puVar12 == (uint *)0x0) {
        halt_baddata();
      }
      if (puVar12 == (uint *)0x0) {
        halt_baddata();
      }
      cVar55 = *(char *)(DAT_01e1af44 + 0xc);
      if (puVar19 != (uint *)0x0) {
        if (cVar55 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        halt_baddata();
      }
      if (cVar55 == '\0') {
        halt_baddata();
      }
      if (cVar55 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    case 0xce:
      if (puVar12 == (uint *)0x0) {
        halt_baddata();
      }
      if ((int)uVar37 != 0) {
        halt_baddata();
      }
      halt_baddata();
    case 0xd6:
      in_r6_r7 = (ulonglong)
                 CONCAT14(*(undefined1 *)((ushort)puVar12[3] - 3),(uint)(ushort)puVar12[3]);
      in_r2_r3 = (ulonglong)CONCAT14(*(undefined1 *)(uVar20 + 0xc),iVar11) ^ 1;
      uVar24 = (ulonglong)uVar20 << 0x20;
      goto switchD_01e0931a_caseD_f7;
    case 0xda:
      uVar37 = (ulonglong)(ushort)puVar12[3];
      if (puVar12 == (uint *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((ushort)puVar12[3] != 0) {
        halt_baddata();
      }
      break;
    case 0xdf:
    case 0xe3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xe9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xfa:
      halt_baddata();
    }
    if (puVar12 == (uint *)0x0) {
      halt_baddata();
    }
    if ((int)uVar37 == 0) {
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd4:
    while( true ) {
      uVar25 = *(ushort *)(in_r2_r3 >> 0x20);
      in_r2_r3 = CONCAT44((uint)uVar25 |
                          ((uint)in_r6_r7 & 0xffff00ff | ((uint)(uVar24 >> 0x20) & 0xff) << 8) <<
                          0x10,(int)in_r2_r3);
      if ((uVar25 & 0x67c0) != 0) {
        iVar11 = (int)uVar24;
        uVar24 = (ulonglong)(iVar11 + 0x15d2);
        puVar12 = (uint *)(uint)*(ushort *)(iVar11 + 0x15d4);
        cVar55 = *(char *)(iVar11 + 0x15d3);
code_r0x01e11f20:
        if ((*(char *)uVar24 != '\0' || cVar55 != '\0') || ((uint)puVar12 & 0xffff) != 0) {
          for (iVar11 = 0; iVar11 != 0x18; iVar11 = iVar11 + 1) {
            if (((uint)(in_r2_r3 >> 0x20) & 1 << iVar11) != 0) {
              iVar13 = (*(ushort *)(&DAT_00004130 + iVar11 + (int)(uVar22 >> 0x20)) >> 8) + uVar20;
              *(byte *)(iVar13 + (int)in_r2_r3) =
                   *(byte *)(iVar13 + (int)in_r2_r3) &
                   ~(byte)*(ushort *)(&DAT_00004130 + iVar11 + (int)(uVar22 >> 0x20));
            }
          }
        }
      }
      iVar11 = (int)uVar22 + 1;
      uVar22 = CONCAT44((int)(uVar22 >> 0x20),iVar11);
      if (iVar11 == 10) break;
      iVar11 = iVar11 * 8 + uVar20;
      in_r2_r3 = CONCAT44(iVar11 + 0x15ce,(int)in_r2_r3);
      uVar24 = (ulonglong)CONCAT14(*(undefined1 *)(iVar11 + 0x15d1),iVar11);
      in_r6_r7 = (ulonglong)*(byte *)(iVar11 + 0x15d0);
    }
    uStack_18 = CONCAT44(uVar21,0x67c0);
    in_r14_r15 = (ulonglong)uVar20 << 0x20;
    for (iVar11 = 0; iVar11 != 10; iVar11 = iVar11 + 1) {
      iVar13 = iVar11 * 8 + uVar20;
      iVar50 = CONCAT22(*(undefined2 *)(iVar13 + 0x15d4),
                        CONCAT11(*(undefined1 *)(iVar13 + 0x15d1),*(undefined1 *)(iVar13 + 0x15d2)))
      ;
      iVar14 = iVar11 + uVar20;
      if ((iVar50 != 0) && (*(int *)(iVar13 + 0x15ce) != -1)) {
        if (1 < *(byte *)(iVar14 + 0x63d)) {
          halt_baddata();
        }
        *(undefined1 *)(iVar14 + 0x63d) = 2;
        halt_baddata();
      }
      if ((iVar50 != 0) && (*(byte *)(iVar14 + 0x63d) == 2)) {
        *(undefined1 *)(iVar14 + 0x63d) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    goto LAB_01e120fe;
  case 0xd5:
    uVar22 = CONCAT44(puVar26,puVar10) & 0xffffffff000000ff;
code_r0x01e0efa0:
    iVar11 = (int)(uVar24 >> 0x20);
    cVar55 = *(char *)((int)(uVar22 >> 0x20) + iVar11 + (int)((ulonglong)in_r12_r13 >> 0x20));
    if (cVar55 == '\x03') {
      uVar22 = CONCAT44(0x1a0,(int)uVar22);
      *(char *)(iVar11 + 0x1a0) = (char)uVar37;
      goto LAB_01e0f252;
    }
    if (cVar55 == '\x01') goto LAB_01e0f094;
switchD_01e0ef78_caseD_7:
    while( true ) {
      while( true ) {
        do {
          uVar20 = (int)in_r14_r15 + 9;
          in_r14_r15 = (ulonglong)uVar20;
          iVar13 = (int)(in_r10_r11 >> 0x20);
          iVar11 = (int)in_r10_r11 + 1;
          in_r10_r11 = CONCAT44(iVar13,iVar11);
          if (uVar20 == 0x24) {
            return (uint *)uVar22;
          }
          iVar50 = (int)(uVar24 >> 0x20);
          iVar14 = uVar20 + iVar50;
          iVar30 = (int)in_r6_r7;
          uVar22 = (ulonglong)CONCAT14(*(char *)(iVar14 + iVar30),iVar14);
        } while (*(char *)(iVar14 + iVar30) == '\0');
        iVar56 = (int)(in_r6_r7 >> 0x20);
        bVar8 = *(byte *)(iVar14 + iVar56);
        iVar42 = (int)uVar24;
        iVar63 = (int)((ulonglong)in_r12_r13 >> 0x20);
        if (bVar8 != 0x13) break;
        uVar22 = (ulonglong)CONCAT14(*(char *)(iVar50 + iVar42),iVar14);
        if (*(char *)(iVar50 + iVar42) == '\0') {
          uVar22 = (ulonglong)CONCAT14(*(byte *)(iVar14 + iVar56),iVar14);
          cVar55 = *(char *)((uint)*(byte *)(iVar14 + iVar56) + iVar50 + iVar63);
          if (cVar55 == '\x03') goto LAB_01e0f252;
          if (cVar55 != '\x02') goto LAB_01e0ef5e;
          uVar22 = (ulonglong)CONCAT14(*(byte *)(iVar50 + 0x3b5),iVar14);
          if ((*(byte *)(iVar50 + 0x3b5) & 3) == 0) goto LAB_01e0f1e0;
        }
      }
      if (bVar8 != 0x12) goto LAB_01e0ef64;
      uVar22 = (ulonglong)CONCAT14(*(byte *)(iVar14 + iVar56),iVar14);
      cVar55 = *(char *)((uint)*(byte *)(iVar14 + iVar56) + iVar50 + iVar63);
      if (cVar55 == '\x03') goto LAB_01e0f252;
      if (cVar55 != '\x02') break;
      uVar22 = (ulonglong)CONCAT14(*(byte *)(iVar50 + 0x3ae),iVar14);
      if ((*(byte *)(iVar50 + 0x3ae) & 3) == 0) {
        uVar20 = FUN_01e0eada(0,iVar50 + 0x3ae);
        uVar22 = (ulonglong)uVar20;
      }
    }
    goto LAB_01e0ef5e;
  case 0xd6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xd8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xda:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xdd:
    _DAT_000044d4 = (short)puVar10;
    return puVar10;
  case 0xdf:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe0:
    if (puVar26 == &DAT_01e1af45) {
      puVar12 = (uint *)0x3c35e8a;
    }
    else {
      *puVar10 = (uint)&DAT_01e1af45;
      uStack_18 = CONCAT44(uVar21,&DAT_01e1af45);
      puVar12 = (uint *)FUN_01e36bcc();
    }
    return puVar12;
  case 0xe2:
    goto switchD_01e0931a_caseD_e2;
  case 0xe5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe9:
    uVar20 = *puVar10;
    puVar12 = (uint *)((int)puVar26 * 4);
    pbVar46 = (byte *)((int)puVar12 + uVar20 + 0x180);
    iVar11 = *(int *)pbVar46;
    iVar13 = uVar20 + 0x150;
    piVar62 = (int *)(uVar20 + 0x198);
    if (puVar19 == (uint *)0x0) {
      if (iVar11 != 0) {
        uVar25 = *(ushort *)(iVar11 + 0xc);
        puVar12 = (uint *)(uint)uVar25;
        if ((uVar25 & 0x25) == 0) {
          *(ushort *)(iVar11 + 0xc) = uVar25 & 0xfdff | (ushort)(*piVar62 != uVar20 + 0x198) << 9;
          puVar12 = (uint *)FUN_01e243dc(puVar10,puVar26);
        }
      }
    }
    else {
      if (iVar11 != 0) {
        if ((*(int *)(uVar20 + 0x1dc) != 0) &&
           (pcVar34 = *(code **)(*(int *)(uVar20 + 0x1dc) + 4), pcVar34 != (code *)0x0)) {
          (*pcVar34)(*(undefined4 *)(uVar20 + 0x1d8));
          iVar11 = *(int *)pbVar46;
        }
        thunk_FUN_01e16064(iVar11);
      }
      iVar11 = 0;
      if (*(char *)(uVar20 + 0x1f5) == '\0') {
        iVar11 = FUN_01e16146(iVar13 + 0x40);
      }
      if ((iVar11 == 0) && (*(char *)(uVar20 + 500) == '\0')) {
        iVar11 = FUN_01e16146(iVar13 + 0x48);
      }
      iVar14 = uVar20 + 0x60;
      if (iVar11 == 0) {
        puVar12 = (uint *)(*(ushort *)(uVar20 + 0x62) & 0xffffffbf);
        *(short *)(uVar20 + 0x62) = (short)puVar12;
        pbVar46[0] = 0;
        pbVar46[1] = 0;
        pbVar46[2] = 0;
        pbVar46[3] = 0;
      }
      else {
        *(ushort *)(iVar11 + 0xc) =
             *(ushort *)(iVar11 + 0xc) & 0xfdff | (ushort)(*piVar62 != iVar13 + 0x48) << 9;
        *(undefined8 *)((int)ppuVar65 + 0x84) = 0;
        *(undefined8 *)((int)ppuVar65 + 0x7c) = 0;
        func_0x021127b4((undefined1 *)((int)ppuVar65 + 0x1b),0x54);
        *(char *)((int)ppuVar65 + 0x1a) = (char)((*(ushort *)(iVar11 + 0xc) & 0x30) >> 4);
        if (*(char *)((int)piVar62 + 9) != '\0') {
          iVar11 = piVar62[3];
          *(char *)((int)ppuVar65 + 0x6f) = (char)iVar11;
          *(char *)((int)ppuVar65 + 0x70) = (char)((uint)iVar11 >> 8);
          *(char *)((int)ppuVar65 + 0x71) = (char)((uint)iVar11 >> 0x10);
          *(char *)((int)ppuVar65 + 0x72) = (char)((uint)iVar11 >> 0x18);
          bVar8 = *(byte *)((int)piVar62 + 10);
          *(byte *)((int)ppuVar65 + 0x73) = bVar8;
          if (*(char *)(iVar13 + 2) == '\x06') {
            *(byte *)((int)ppuVar65 + 0x73) = bVar8 | 0x80;
          }
          puVar12 = (uint *)func_0x021127a8((undefined1 *)((int)ppuVar65 + 0x74),8);
          return puVar12;
        }
        *(int *)pbVar46 = iVar11;
        FUN_01e243dc(puVar10,puVar26);
        uVar37 = (ulonglong)
                 (CONCAT24(*(ushort *)(iVar11 + 0xc) >> 3,(uint)*(ushort *)(iVar14 + 2)) &
                 0xffffffffffbf) & 0x40ffffffff;
        puVar12 = (uint *)(iVar14 + 5);
        *(ushort *)(iVar14 + 2) = (ushort)(uVar37 >> 0x20) | (ushort)uVar37;
        if (puVar26 == (undefined4 *)0x0) {
          puVar12 = (uint *)(iVar14 + 4);
        }
        *(byte *)puVar12 = (byte)*puVar12 & 0xfe;
        if (*(code **)(iVar11 + 8) != (code *)0x0) {
          puVar12 = (uint *)(**(code **)(iVar11 + 8))();
        }
      }
    }
    return puVar12;
  case 0xeb:
    in_r6_r7 = CONCAT44(pbVar59,puVar19);
    uVar24 = CONCAT44(puVar10,puVar26);
    goto switchD_01e0931a_caseD_e2;
  case 0xee:
    cVar55 = DAT_01e1af45._1_1_;
    if (puVar10 != (uint *)0x0) goto code_r0x01e11f20;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf6:
    FUN_01e36848(2,0x7eb7);
    uVar21 = FUN_01e28a6e((int)in_r6_r7);
LAB_01e29208:
    FUN_01e23d6e((int)(uVar24 >> 0x20),uVar21);
    return (uint *)uVar24;
  case 0xf7:
switchD_01e0931a_caseD_f7:
    if ((int)(uVar22 >> 0x20) == 0) {
switchD_01e1c570_caseD_bc:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar37 = in_r6_r7;
    if ((int)in_r6_r7 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
switchD_01e1c570_caseD_c6:
    uVar35 = uVar24 >> 0x20;
    uVar24 = uVar24 & 0xffffffff00000000;
    uVar44 = (uint)(uVar24 >> 0x20);
    if ((int)(uVar22 >> 0x20) != 0) {
      if ((int)uVar37 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar20 = *(uint *)((int)uVar35 + 0x3c);
      uVar22 = (ulonglong)uVar20;
      iVar11 = *(int *)((int)(uVar37 >> 0x20) + -0x30);
      in_r2_r3 = CONCAT44(iVar11,(int)in_r2_r3);
      if (uVar20 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar11 != 0) goto LAB_01e1c6d0;
      halt_baddata();
    }
LAB_01e1c5ce:
    if ((uVar44 != 0) && ((int)(in_r2_r3 >> 0x20) == 0)) {
      halt_baddata();
    }
BYTE_01e1c5d4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xfd:
    *puVar45 = *puVar19;
    puVar45[1] = puVar19[1];
    puVar45[2] = puVar19[2];
    puVar45[3] = puVar19[3];
    puVar45[4] = puVar19[4];
    puVar45[5] = puVar19[8];
    puVar45[6] = puVar19[9];
    puVar45[7] = puVar19[10];
    *puVar19 = *puVar19 & 0xffff0001;
    puVar19[1] = 0;
    puVar19[2] = 0;
    puVar19[3] = 0;
    puVar19[4] = 0;
    puVar19[10] = puVar19[10] & 0x1000000;
    puVar45[8] = _DAT_001e5008;
    puVar45[9] = _DAT_001e500c;
    puVar45[10] = _DAT_001e5010;
    puVar45[0xb] = _DAT_001e5014;
    puVar45[0xc] = _DAT_001e5048;
    puVar45[0xd] = _DAT_001e504c;
    puVar45[0xe] = _DAT_001e5050;
    puVar45[0xf] = _DAT_001e5054;
    puVar10[0x21] = _DAT_001e5088;
    puVar10[0x22] = _DAT_001e508c;
    puVar10[0x23] = _DAT_001e5090;
    puVar10[0x24] = _DAT_001e5094;
    puVar10[0x25] = _DAT_001e50c8;
    puVar10[0x26] = _DAT_001e50cc;
    puVar10[0x27] = _DAT_001e50d0;
    puVar10[0x28] = _DAT_001e50d4;
    puVar10[0x29] = _DAT_001e5100;
    puVar10[0x2a] = _DAT_001e1800;
    puVar10[0x2b] = _DAT_001e1804;
    puVar10[0x2c] = _DAT_001e5104;
    puVar10[0x2d] = _DAT_001e3100;
    _DAT_001e3100 = 0;
    puVar10[0x2e] = _DAT_001e19dc;
    puVar10[0x2f] = _DAT_001e19e0;
    puVar10[0x30] = _DAT_001e19e4;
    puVar10[0x31] = _DAT_001e19e8;
    _DAT_001e19dc = 0;
    _DAT_001e19e0 = 0;
    _DAT_001e19e4 = 0;
    _DAT_001e19e8 = 0;
    puVar10[0x32] = _DAT_001e3c00;
    puVar10[0x33] = _DAT_001e3c04;
    _DAT_001e3c00 = 0;
    _DAT_001e3c04 = 0;
    puVar10[0x34] = _DAT_001e5300;
    _DAT_001e5300 = 0;
    puVar10[0x35] = _DAT_001e3600;
    _DAT_001e3600 = 0x40;
    return puVar10 + 0x31;
  case 0xff:
    while( true ) {
      puVar12 = (uint *)*(int *)uVar22;
      iVar11 = (int)(uVar22 >> 0x20);
      if (iVar11 != 0) {
        (**(code **)(iVar11 + 0x10))(((int *)uVar22)[2]);
      }
      if (puVar12 == (uint *)((int)(uVar24 >> 0x20) + 0xc)) break;
      uVar22 = CONCAT44(puVar12[3],puVar12);
    }
    return puVar12;
  }
switchD_01e0931a_caseD_12:
  iVar11 = 2;
LAB_01e0957e:
  puVar12 = (uint *)FUN_01e026b0(iVar11 + 0xdU & 0xff);
  return puVar12;
LAB_01e0ef64:
  cVar55 = *(char *)((uint)bVar8 * 0xe + iVar50 + 0x26f8);
  uVar22 = (ulonglong)CONCAT14(cVar55,iVar14);
  uVar27 = (undefined1)(uVar37 >> 0x20);
  uVar7 = (undefined1)uVar37;
  cVar38 = (char)iVar14;
  switch(cVar55) {
  case '\0':
  case '\x01':
  case '\b':
    goto switchD_01e0ef78_caseD_0;
  case '\x02':
    uVar22 = (ulonglong)CONCAT14(*(byte *)(iVar14 + iVar56),iVar14);
    cVar55 = *(char *)((uint)*(byte *)(iVar14 + iVar56) + iVar50 + iVar63);
    if (cVar55 == '\x03') {
      *(undefined1 *)(iVar50 + 0x1a0) = uVar7;
      *(undefined1 *)(iVar14 + iVar30) = uVar7;
      *(undefined1 *)(iVar14 + iVar13) = uVar27;
      iVar11 = 0x3ae;
      goto LAB_01e0f292;
    }
    if (cVar55 != '\x01') {
      if ((cVar55 != '\x02') ||
         (uVar22 = (ulonglong)CONCAT14(*(undefined1 *)(iVar50 + 0x1a0),iVar14) ^ 0x100000000,
         (uVar22 & 0x100000000) == 0)) goto switchD_01e0ef78_caseD_7;
      pcVar48 = (char *)(iVar50 + 0x3ae);
LAB_01e0f2b8:
      *pcVar48 = cVar38 + 'F';
      uVar20 = FUN_01e0eada(1);
      uVar22 = (ulonglong)uVar20;
      goto switchD_01e0ef78_caseD_7;
    }
    goto LAB_01e0f094;
  case '\x03':
    uVar20 = (uint)*(byte *)(iVar14 + iVar56);
    cVar55 = *(char *)(uVar20 + iVar50 + iVar63);
    uVar22 = (ulonglong)CONCAT14(cVar55,iVar14);
    if (cVar55 != '\x03') {
      if (cVar55 == '\x02') {
        *(char *)(iVar50 + 0x3b5) = cVar38 + 'F';
        iVar11 = uVar20 * 0xe + iVar50;
        *(undefined1 *)(iVar11 + 0x26f7) = uVar7;
        *(undefined1 *)(iVar11 + 0x26f6) = 5;
        in_r12_r13 = CONCAT44(iVar63,0x8a1);
        uVar21 = 0;
        goto LAB_01e0f1e2;
      }
      if (cVar55 != '\x01') goto switchD_01e0ef78_caseD_7;
      puVar16 = (undefined1 *)(iVar14 + 0x84a);
      *puVar16 = 1;
      goto LAB_01e0f0a4;
    }
LAB_01e0f286:
    *(undefined1 *)((int)uVar22 + iVar30) = uVar7;
    *(undefined1 *)((int)uVar22 + iVar13) = uVar27;
    iVar11 = 0x3b5;
LAB_01e0f292:
    uVar22 = CONCAT44(iVar11,(uint)*(byte *)(iVar50 + iVar11)) & 0xfffffffffffffffd;
    *(byte *)(iVar50 + iVar11) = *(byte *)(iVar50 + iVar11) & 0xfd;
    goto switchD_01e0ef78_caseD_7;
  case '\x04':
    uVar22 = (ulonglong)CONCAT14(*(byte *)(iVar14 + iVar56),iVar14);
    cVar55 = *(char *)((uint)*(byte *)(iVar14 + iVar56) + iVar50 + iVar63);
    if (cVar55 == '\x03') {
      uVar22 = CONCAT44(0x1a0,iVar14);
      *(undefined1 *)(iVar50 + 0x1a0) = uVar7;
      goto LAB_01e0f286;
    }
    if (cVar55 != '\x01') {
      if (cVar55 != '\x02') goto switchD_01e0ef78_caseD_7;
      pcVar48 = (char *)(iVar50 + 0x3b5);
      goto LAB_01e0f2b8;
    }
LAB_01e0f094:
    *(char *)((int)(uVar24 >> 0x20) + 0x1b) = (char)(in_r6_r7 >> 0x20);
    break;
  case '\x05':
    bVar8 = *(byte *)(iVar14 + iVar56);
    uVar22 = (ulonglong)CONCAT14(bVar8,iVar14);
    cVar55 = *(char *)((uint)bVar8 + iVar50 + iVar63);
    if (cVar55 != '\x03') {
      if (cVar55 == '\x01') {
        *(undefined1 *)(iVar50 + 0x1a0) = 1;
        *(char *)(iVar50 + 0x1d) = cVar38;
        *(undefined1 *)(iVar14 + iVar13) = 1;
        iVar13 = (uint)bVar8 * 0xe + iVar50;
        uVar7 = *(undefined1 *)(iVar13 + 0x26ed);
        uVar27 = *(undefined1 *)(iVar13 + 0x26ec);
        puVar16 = (undefined1 *)(uVar20 + iVar50 + 0x84b);
        *puVar16 = uVar27;
        puVar16[1] = uVar7;
        uVar2 = *(undefined1 *)(iVar13 + 0x26ee);
        uVar44 = (uint)*(ushort *)(iVar13 + 0x26ee);
        puVar16 = (undefined1 *)(uVar20 + uVar44);
        *puVar16 = (char)(iVar50 + 0x84d);
        puVar16[1] = uVar2;
        iVar13 = (uint)*(byte *)(iVar50 + 0x10b) * 9;
        puVar16 = (undefined1 *)(iVar50 + 0x84b + iVar13);
        puVar16[1] = uVar7;
        *puVar16 = uVar27;
        in_r10_r11 = CONCAT44(0x84a,iVar11);
        puVar16 = (undefined1 *)(iVar13 + iVar50 + 0x84d);
        uVar22 = CONCAT44(puVar16,uVar44);
        puVar16[1] = uVar2;
        uVar37 = uVar37 & 0xffffffff00000000;
        *puVar16 = uVar2;
        uVar24 = CONCAT44(iVar50,0x1a4);
        goto switchD_01e0ef78_caseD_7;
      }
      pcVar48 = (char *)(iVar14 + 0x84a);
      uVar22 = (ulonglong)CONCAT14(*pcVar48,pcVar48);
      if (*pcVar48 != '\x02') goto switchD_01e0ef78_caseD_7;
      uVar20 = *(byte *)(iVar50 + 0x10d) + 1;
      uVar22 = CONCAT44(uVar20,pcVar48);
      *(char *)(iVar50 + 0x1d) = (char)uVar20;
      if ((uVar20 & 0xff) < 4) goto switchD_01e0ef78_caseD_7;
      *(char *)(iVar50 + 0x1d) = (char)pcVar48;
      *pcVar48 = (char)uVar20;
      uVar22 = (ulonglong)((uint)*(byte *)(iVar50 + 0x10b) * 9 + iVar50);
      goto LAB_01e0f256;
    }
LAB_01e0f252:
    *(char *)((int)uVar22 + (int)in_r6_r7) = (char)uVar37;
LAB_01e0f256:
    *(char *)((int)uVar22 + (int)(in_r10_r11 >> 0x20)) = (char)(uVar37 >> 0x20);
    goto switchD_01e0ef78_caseD_7;
  case '\x06':
    uVar22 = (ulonglong)CONCAT14(*(byte *)(iVar14 + iVar56),iVar14);
    cVar55 = *(char *)((uint)*(byte *)(iVar14 + iVar56) + iVar50 + iVar63);
    if (cVar55 != '\x01') {
      bVar8 = (byte)iVar11;
      if (cVar55 == '\x03') {
        *(undefined1 *)(iVar14 + iVar30) = uVar7;
        *(undefined1 *)(iVar14 + iVar13) = 3;
        *(undefined1 *)(iVar50 + iVar42) = uVar7;
        bVar8 = 3;
        if (*(char *)(iVar50 + (int)in_r12_r13) == '\0') {
          *(undefined1 *)(iVar50 + (int)in_r12_r13) = 3;
          bVar8 = 3;
          *(undefined1 *)(iVar50 + iVar30 + 0x1f) = 3;
        }
      }
      bVar8 = *(byte *)((uint)*(byte *)((uint)bVar8 * 9 + iVar50 + iVar56) + iVar50 + iVar63);
      uVar22 = (ulonglong)bVar8;
      if (bVar8 != 2) goto switchD_01e0ef78_caseD_7;
      if (*(char *)(iVar50 + iVar42) == '\0' && *(char *)(iVar50 + iVar30 + 0x1b) == '\0') {
        *(undefined1 *)(iVar50 + iVar42) = 1;
        *(undefined1 *)(iVar50 + 0x861) = 1;
        *(undefined1 *)(iVar50 + 0x864) = 0x13;
        *(undefined1 *)(iVar50 + 0x865) = 1;
        *(undefined2 *)(iVar50 + 0x866) = *(undefined2 *)(iVar50 + 0x13fb);
        *(undefined2 *)(iVar50 + 0x868) = *(undefined2 *)(iVar50 + 0x13fc);
      }
      *(short *)(iVar50 + 0x3b8) = *(short *)(iVar50 + 0x3b8) + -0x1e;
LAB_01e0f1e0:
      uVar21 = 1;
LAB_01e0f1e2:
      uVar20 = FUN_01e0ed96(uVar21,iVar50 + 0x3b5);
      uVar22 = (ulonglong)uVar20;
      goto switchD_01e0ef78_caseD_7;
    }
    break;
  case '\a':
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
  case '\x0e':
  case '\x0f':
    goto switchD_01e0ef78_caseD_7;
  case '\x10':
    uVar22 = (ulonglong)CONCAT14(*(byte *)(iVar14 + iVar56),iVar14);
    cVar55 = *(char *)((uint)*(byte *)(iVar14 + iVar56) + iVar50 + iVar63);
    if (cVar55 == '\x03') {
      puVar16 = (undefined1 *)(iVar14 + 0x846);
      *puVar16 = (char)puVar16;
      uVar22 = (ulonglong)CONCAT14(*(char *)(iVar14 + 0x84a),puVar16);
      if (*(char *)(iVar14 + 0x84a) == '\x02') {
        *(undefined1 *)(iVar14 + 0x84a) = 2;
      }
      goto switchD_01e0ef78_caseD_7;
    }
    if (cVar55 != '\x01') {
      if ((cVar55 == '\x02') &&
         (uVar22 = (ulonglong)CONCAT14(*(char *)(iVar50 + 0x10e),iVar14),
         *(char *)(iVar50 + 0x10e) == '\0')) {
        *(undefined1 *)(iVar50 + 0x1e) = 6;
        pcVar48 = (char *)(iVar14 + 0x84a);
        cVar55 = *pcVar48;
        uVar22 = (ulonglong)CONCAT14(cVar55,pcVar48);
        if (cVar55 == '\0') {
          uVar22 = CONCAT44(1,pcVar48);
          *pcVar48 = '\x01';
        }
        else if (cVar55 == '\x02') {
          *pcVar48 = '\x02';
        }
      }
      goto switchD_01e0ef78_caseD_7;
    }
    *(undefined1 *)(iVar50 + 0x1e) = 6;
    break;
  default:
    if (cVar55 == '@') {
      cVar55 = *(char *)((uint)*(byte *)(iVar14 + iVar56) + iVar50 + iVar63);
      uVar22 = (ulonglong)CONCAT14(cVar55,iVar14);
      if (cVar55 != '\x03') {
        if (cVar55 == '\x01') {
          *(undefined1 *)(iVar14 + iVar13) = 1;
          uVar20 = (uint)*(byte *)(iVar50 + 0x10c);
          if (uVar20 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar20 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar22 = 0;
          if ((uVar20 + 1 & 0xff) < 2) {
            uVar22 = (ulonglong)(uVar20 + 1);
          }
          *(char *)(iVar50 + 0x1c) = (char)uVar22;
          in_r12_r13 = CONCAT44(iVar63,0x8a1);
        }
        goto switchD_01e0ef78_caseD_7;
      }
      goto LAB_01e0f252;
    }
    if (cVar55 != 'P') goto switchD_01e0ef78_caseD_7;
    bVar8 = *(byte *)(iVar14 + iVar56);
    uVar22 = (ulonglong)CONCAT14(bVar8,iVar14);
    cVar55 = *(char *)((uint)bVar8 + iVar50 + iVar63);
    if (cVar55 == '\x03') goto LAB_01e0f286;
    if (cVar55 == '\x02') {
      *(byte *)(iVar50 + 0x3b5) = bVar8;
      uVar25 = *(ushort *)(iVar50 + 0x13ff);
      puVar16 = (undefined1 *)((uint)bVar8 * 0xe + iVar50 + (uint)uVar25);
      *puVar16 = 0xf4;
      puVar16[1] = (char)(uVar25 >> 8);
      uVar9 = *(undefined2 *)(iVar50 + 0x1400);
      puVar16[2] = (char)uVar9;
      puVar16[3] = (char)((ushort)uVar9 >> 8);
      uVar24 = CONCAT44(iVar50,0x1a4);
      goto LAB_01e0f1e0;
    }
LAB_01e0ef5e:
    if (cVar55 != '\x01') goto switchD_01e0ef78_caseD_7;
  }
  uVar20 = (uint)(uVar22 >> 0x20);
  puVar16 = (undefined1 *)((int)uVar22 + 0x84a);
  *puVar16 = 1;
LAB_01e0f0a4:
  iVar11 = uVar20 * 0xe + (int)(uVar24 >> 0x20);
  uVar7 = *(undefined1 *)(iVar11 + 0x26ed);
  puVar16[1] = *(undefined1 *)(iVar11 + 0x26ec);
  puVar16[2] = uVar7;
  uVar7 = *(undefined1 *)(iVar11 + 0x26ef);
  puVar16[3] = *(undefined1 *)(iVar11 + 0x26ee);
  uVar22 = (ulonglong)CONCAT14(uVar7,puVar16);
  puVar16[4] = uVar7;
  goto switchD_01e0ef78_caseD_7;
switchD_01e0ef78_caseD_0:
  uVar22 = (ulonglong)CONCAT14(*(undefined1 *)(iVar14 + iVar56),iVar14);
  goto code_r0x01e0efa0;
switchD_01e0931a_caseD_7b:
  iVar11 = (int)(uVar22 >> 0x20);
  *(undefined1 *)(iVar11 + 0x67c0) = 0;
  (&DAT_000067b8)[iVar11] = 0;
  if (*(char *)(iVar11 + 0x67a0) != '\0') {
    *(undefined1 *)(iVar11 + 0x67a0) = 0;
  }
switchD_01e0931a_caseD_d:
  iVar11 = 0x310;
LAB_01e09572:
  *(undefined1 *)(iVar11 + 0x67c0) = 1;
  goto LAB_01e09578;
switchD_01e0931a_caseD_f:
LAB_01e09578:
  FUN_01e09296();
  goto switchD_01e0931a_caseD_12;
switchD_01e0931a_caseD_8:
  iVar11 = 0x17;
LAB_01e0968c:
  FUN_01e09242();
LAB_01e09690:
  *(undefined1 *)((int)uVar37 + 0x30f) = *(undefined1 *)((int)(uVar37 >> 0x20) + 0xac5);
  goto LAB_01e0957e;
switchD_01e0931a_caseD_52:
  *ppuVar65 = (uint *)(int)(uVar37 >> 0x20);
  puVar12 = (uint *)FUN_01e36848(2);
  return puVar12;
switchD_01e0931a_caseD_20:
  *(undefined2 *)(puVar12 + 4) = 0x1b;
  return (uint *)0x1b;
switchD_01e0931a_caseD_b:
  puVar12 = (uint *)uVar24;
  FUN_01e23b66(0xf);
  return puVar12;
switchD_01e0931a_caseD_e2:
  if ((uint)in_r6_r7 < (uint)(in_r6_r7 >> 0x20)) {
    puVar45 = puVar45 + 0x322;
    func_0x020030ce(puVar45);
    func_0x02000bcc((int)(uVar24 >> 0x20),(int)uVar24);
    puVar12 = (uint *)uVar24;
    FUN_01e09b3c(0xffff,puVar12);
    func_0x02002964(puVar45);
    return puVar12;
  }
  func_0x02000a1e((uint)in_r6_r7);
  puVar12 = (uint *)func_0x021127a8((int)(uVar24 >> 0x20),(int)uVar24);
  return puVar12;
switchD_01e0931a_caseD_15:
  uVar24 = uVar22 & 0xffffffff;
LAB_01e19388:
  iVar11 = (int)uVar24;
  *(ulonglong *)ppuVar65 = uVar37;
  *(ulonglong *)(ppuVar65 + 3) = in_r6_r7;
  if (((in_psr & 2) >> 1 &
      ((int)in_r12_r13 + 1U | (int)((ulonglong)in_r12_r13 >> 0x20) - (int)in_r10_r11)) == 0) {
    iVar13 = FUN_01e190c2(ppuVar65 + 9);
    uVar37 = *(ulonglong *)((int)ppuVar65 + 0x24);
    iVar11 = iVar11 + iVar13;
  }
  else {
    uVar37 = *(ulonglong *)(ppuVar65 + 6);
  }
  *(int *)((int)ppuVar65 + 0x14) = iVar11;
  *(ulonglong *)((int)ppuVar65 + 0x18) = *(ulonglong *)((int)ppuVar65 + 0x2c) | 0x10000000000000;
  *(ulonglong *)((int)ppuVar65 + 0x24) = uVar37 | 0x10000000000000;
  uVar20 = ~(uint)(uVar37 >> 0xb) *
           (int)((*(ulonglong *)((int)ppuVar65 + 0x2c) | 0x10000000000000) >> 0x20);
  lVar53 = ((ulonglong)uVar20 << 0x20) +
           (uVar37 & 0x7ff) * 0x200000 * (*(ulonglong *)((int)ppuVar65 + 0x18) >> 0x20);
  uVar20 = (int)((ulonglong)lVar53 >> 0x20) + ~uVar20;
  uVar37 = CONCAT44(uVar20,(int)lVar53);
  *(ulonglong *)((int)ppuVar65 + 0x2c) = *(ulonglong *)((int)ppuVar65 + 0x18);
  iVar11 = *(int *)((int)ppuVar65 + 0x10) + *(int *)((int)ppuVar65 + 0x14) * 2 + -0x3ff;
  if ((uVar20 & 0x100000) == 0) {
    uVar37 = uVar37 >> 1 & 0xffffffff;
  }
  else {
    iVar11 = *(int *)((int)ppuVar65 + 0x10) + *(int *)((int)ppuVar65 + 0x14) * 2 + -0x3fe;
  }
  puVar12 = (uint *)*(undefined8 *)ppuVar65;
  if (iVar11 < 0x7ff) {
    if (iVar11 < 1) {
      if (1U - iVar11 < 0x40) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      puVar12 = (uint *)((uint)uVar37 | (uint)puVar12);
      if ((in_psr & 4) == 0) {
        puVar12 = (uint *)((int)puVar12 + 1);
      }
    }
  }
  return puVar12;
switchD_01e0931a_caseD_1f:
  iVar11 = (int)(uVar22 >> 0x20);
  *(uint *)(iVar11 + 8) = *(uint *)(iVar11 + 8) | 0x8000;
  *(uint *)(iVar11 + 0x10) = *(uint *)(iVar11 + 0x10) & 0x8000;
  *(uint *)(iVar11 + 0x14) = *(uint *)(iVar11 + 0x14) & 0x8000;
  *(uint *)(iVar11 + 0xc) = *(uint *)(iVar11 + 0xc) | 0x8000;
  in_r2_r3 = 8;
switchD_01e0931a_caseD_5f:
  for (; (in_r2_r3 & 0xff) != 0; in_r2_r3 = CONCAT44(uVar20,(int)in_r2_r3 + -1)) {
    puVar12 = (uint *)(uVar22 >> 0x20);
    *puVar12 = *puVar12 & 0x8000;
    puVar12[2] = puVar12[2] & 0x8000;
    thunk_FUN_01e051d8(0x15);
    uVar20 = extraout_r1_04[1];
    *extraout_r1_04 = *extraout_r1_04 | 0x8000;
    extraout_r1_04[2] = extraout_r1_04[2] & 0x8000;
    thunk_FUN_01e051d8(0x15);
    uVar20 = (uVar20 & 0x8000) >> 0xf | (int)(in_r2_r3 >> 0x20) << 1;
    uVar22 = CONCAT44(extraout_r1_05,uVar20);
  }
  return (uint *)(uint)(byte)(in_r2_r3 >> 0x20);
}



// ==== FUN_01e096a2 @ 01e096a2 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e096a2(void)

{
  func_0x021127a8(_DAT_00006990 + 0xb,&DAT_01e1b047,5);
  return;
}



// ==== FUN_01e096ce @ 01e096ce ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e096ce(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_01e1b5e2;
  if (DAT_000041b0 != '\x01') {
    puVar1 = &DAT_01e1b5f1;
  }
  func_0x021127a8(_DAT_00006990,puVar1,0xf);
  return;
}



// ==== FUN_01e097b2 @ 01e097b2 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e097b2(void)

{
  if (DAT_000041b0 != '\x01') {
    func_0x021127a8(_DAT_00006990,&DAT_01e1b10e,7);
    return;
  }
  if (DAT_000069c2 == '\x02') {
    DAT_000069a0 = 1;
    return;
  }
  if (DAT_000069a0 == '\0') {
    func_0x021127a8(_DAT_00006990 + 0xb,&DAT_01e1b047,5);
    return;
  }
  return;
}



// ==== FUN_01e098ba @ 01e098ba ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e098ba(int param_1,undefined1 param_2,undefined4 param_3,int param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (DAT_000068c6 == '\0') {
    _DAT_00006878 = (ushort)param_5;
    _DAT_0000687a = 0;
  }
  else {
    param_5 = (uint)_DAT_00006878;
  }
  uVar1 = *(ushort *)(param_1 * 10 + 0x6db5);
  uVar2 = (uint)uVar1;
  *(undefined1 *)(uVar2 + 0x67c0) = 0x4a;
  (&DAT_000067c1)[uVar2] = (char)(uVar1 >> 8);
  (&DAT_000067c2)[uVar2] = param_2;
  (&DAT_000067c3)[uVar2] = (char)((uint)param_3 >> 8);
  uVar3 = param_5 & 0xffff;
  (&DAT_000067c4)[uVar2] = (char)param_3;
  if (uVar3 < 0x40) {
    uVar2 = 0;
    uRam000067c0 = 0x4f;
    DAT_000067c3 = (char)param_5;
    DAT_000067c1 = DAT_000067c3 + '\x03';
    DAT_000067c2 = 0;
    if (uVar3 == 0) {
      DAT_00008a13 = 0;
    }
    else {
      for (; (uVar2 & 0xff) < uVar3; uVar2 = uVar2 + 1) {
        uVar5 = (uint)_DAT_0000687a;
        _DAT_0000687a = _DAT_0000687a + 1;
        *(undefined1 *)((uVar2 + 0x10 & 0xff) + 0x8a03) = *(undefined1 *)(param_4 + uVar5);
      }
      *(undefined1 *)((uVar2 + 0x10 & 0xff) + 0x8a03) = 0;
      _DAT_00006878 = 0;
    }
  }
  else {
    uVar1 = (ushort)(param_5 - 0x40);
    iVar4 = 0;
    DAT_00008a0f = 0;
    if ((param_5 - 0x40 & 0xffff) == 0) {
      DAT_00006803 = 0x50;
      DAT_00006804 = 0;
      DAT_00006805 = 0x40;
      for (iVar4 = 0; iVar4 != 0x40; iVar4 = iVar4 + 1) {
        uVar2 = (uint)_DAT_0000687a;
        _DAT_0000687a = _DAT_0000687a + 1;
        (&DAT_00008a13)[iVar4] = *(undefined1 *)(param_4 + uVar2);
      }
      DAT_00008a53 = 0;
      _DAT_00006878 = 0;
    }
    else {
      DAT_00006805 = 0x50;
      DAT_00006806 = 0;
      DAT_00006807 = 0x40;
      _DAT_00006878 = uVar1;
      for (; iVar4 != 0x40; iVar4 = iVar4 + 1) {
        uVar2 = (uint)_DAT_0000687a;
        _DAT_0000687a = _DAT_0000687a + 1;
        (&DAT_00008a13)[iVar4] = *(undefined1 *)(param_4 + uVar2);
      }
      DAT_00008a53 = 2;
      if (DAT_00004130 != '\b') {
        uVar1 = _DAT_0000687a;
      }
      DAT_00008a54 = (undefined1)(uVar1 >> 8);
      DAT_00008a55 = (undefined1)uVar1;
    }
  }
  FUN_01e08a68(DAT_00008a10 + '\x01');
  FUN_01e08a9c();
  return;
}



// ==== FUN_01e09a12 @ 01e09a12 ====

void FUN_01e09a12(undefined1 param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  DAT_000067c4 = 0x4a;
  DAT_000067c5 = 0;
  DAT_000067c6 = param_1;
  if (param_3 != 0) {
    puVar2 = &DAT_00008a0d;
    for (iVar3 = param_3; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    }
  }
  FUN_01e07eaa(param_3 + 1U & 0xff);
  FUN_01e07edc();
  return;
}



// ==== FUN_01e09a4c @ 01e09a4c ====

void FUN_01e09a4c(undefined1 param_1,undefined4 param_2)

{
  DAT_000067c4 = 0x4a;
  DAT_000067c5 = 0;
  DAT_000067c6 = 1;
  DAT_000067c8 = (undefined1)param_2;
  DAT_000067c9 = (undefined1)((uint)param_2 >> 8);
  DAT_000067ca = 10;
  DAT_000067c7 = param_1;
  FUN_01e07eaa(5);
  FUN_01e07edc();
  return;
}



// ==== FUN_01e09a7e @ 01e09a7e ====

void FUN_01e09a7e(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = 0;
  uVar3 = 0;
  do {
    if ((param_3 & 0x7f8) >> 3 <= (uVar3 & 0xff)) {
      FUN_01e09a4c(0x10,param_1);
      return;
    }
    uVar4 = uVar1 & 0xff;
    iVar2 = *(int *)((param_2 + uVar4) * 4);
    uVar1 = uVar1 + 2;
    uVar3 = uVar3 + 1;
  } while (param_1 != *(byte *)(iVar2 + 1));
  FUN_01e09a12(0x11,iVar2,*(undefined1 *)(param_2 + (uVar4 | 1) * 4));
  return;
}



// ==== FUN_01e09aba @ 01e09aba ====

void FUN_01e09aba(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = 0;
  uVar3 = 0;
  do {
    if ((param_3 & 0x7f8) >> 3 <= (uVar3 & 0xff)) {
      FUN_01e09a4c(8,param_1);
      return;
    }
    uVar4 = uVar1 & 0xff;
    iVar2 = *(int *)((param_2 + uVar4) * 4);
    uVar5 = (uint)*(byte *)(iVar2 + 1);
    uVar1 = uVar1 + 2;
    uVar3 = uVar3 + 1;
  } while ((uVar5 < param_1) || (2 < (int)(uVar5 - param_1)));
  FUN_01e09a12(9,iVar2,*(undefined1 *)(param_2 + (uVar4 | 1) * 4));
  return;
}



// ==== FUN_01e09afc @ 01e09afc ====

void FUN_01e09afc(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = 0;
  uVar3 = 0;
  do {
    if ((param_3 & 0x7f8) >> 3 <= (uVar3 & 0xff)) {
      FUN_01e09a4c(4,param_1);
      return;
    }
    uVar4 = uVar1 & 0xff;
    iVar2 = *(int *)((param_2 + uVar4) * 4);
    uVar1 = uVar1 + 2;
    uVar3 = uVar3 + 1;
  } while (param_1 != *(byte *)(iVar2 + 1));
  FUN_01e09a12(5,iVar2,*(undefined1 *)(param_2 + (uVar4 | 1) * 4));
  return;
}



// ==== FUN_01e09b3c @ 01e09b3c ====

void FUN_01e09b3c(byte param_1,byte *param_2,int param_3)

{
  while( true ) {
    param_3 = param_3 + -1;
    *param_2 = param_1 ^ *param_2;
    param_2 = param_2 + 1;
    if (param_3 == 0) break;
    param_1 = 0x21;
  }
  return;
}



// ==== FUN_01e09b98 @ 01e09b98 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e09b98(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_3 < _DAT_0001a7e8) {
    func_0x020030ce(0x7448,0xffffffff);
    func_0x02000bcc(param_1,param_3,param_2);
    FUN_01e09b3c(0xffff,param_1,param_2);
    func_0x02002964(0x7448);
    return param_2;
  }
  uVar1 = func_0x02000a1e(param_3);
  uVar1 = func_0x021127a8(param_1,uVar1,param_2);
  return uVar1;
}



// ==== FUN_01e09bf0 @ 01e09bf0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e09bf0(void)

{
  if (_DAT_00006ad8 != 0) {
    FUN_01e36848(2,s__Info____UPDATE_kill_update_task_01e1d670,s_dw_update_01e1b3f3);
    thunk_FUN_01e3d7dc(_DAT_00006ad8);
    _DAT_00006ad8 = 0;
    FUN_01e36f8a(s_dw_update_01e1b3f3);
    return;
  }
  FUN_01e36848(4,s_<Error>___UPDATE_TASK__s_not_run_01e1d4b6,s_dw_update_01e1b3f3);
  return;
}



// ==== FUN_01e09c3e @ 01e09c3e ====

uint FUN_01e09c3e(uint param_1)

{
  int iVar1;
  
  if (DAT_00006fc2 == '\0') {
    func_0x0200010a();
  }
  iVar1 = 0x100;
  if (DAT_00006fc2 != '\x01') {
    iVar1 = (uint)(DAT_00006fc2 == '\x10') << 0xc;
  }
  if (iVar1 != 0) {
    param_1 = (param_1 + iVar1) - 1 & -iVar1;
  }
  return param_1;
}



// ==== FUN_01e09c7c @ 01e09c7c ====

void FUN_01e09c7c(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  DAT_000067c4 = 0x4a;
  DAT_000067c5 = 0;
  DAT_000067c6 = 0x1b;
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + 0x67c0) = 0x4d;
    (&DAT_000067c1)[param_1] = (char)((uint)param_1 >> 8);
    puVar2 = &DAT_000067c2 + param_1;
    for (iVar3 = param_3; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    }
  }
  FUN_01e07eaa(param_3 + 3U & 0xff);
  FUN_01e07edc();
  return;
}



// ==== FUN_01e09dba @ 01e09dba ====

void FUN_01e09dba(void)

{
  DAT_00007d78 = 0x55;
  DAT_00007f46 = FUN_01e050aa(&DAT_00007d78,0x1cf);
  FUN_01e3780a(0x29,&DAT_00007d78,0x1cf);
  return;
}



// ==== FUN_01e09dea @ 01e09dea ====

char FUN_01e09dea(uint param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = '\x0f';
  if (param_1 != 0x8000) {
    if ((short)param_1 < 0) {
      cVar1 = '\x14';
      for (uVar2 = 0; 0x1e < uVar2; uVar2 = uVar2 + 1) {
        if ((param_1 & 0xffff7fff & 1 << uVar2) != 0) {
          return cVar1;
        }
        cVar1 = cVar1 + '\x01';
      }
    }
    else {
      cVar1 = '\0';
      for (uVar2 = 0; 0x1e < uVar2; uVar2 = uVar2 + 1) {
        if ((param_1 & 1 << uVar2) != 0) {
          return cVar1;
        }
        cVar1 = cVar1 + '\x01';
      }
    }
    cVar1 = -1;
  }
  return cVar1;
}



// ==== FUN_01e09ede @ 01e09ede ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e09ede(undefined4 param_1,undefined2 param_2)

{
  DAT_00006900 = 1;
  _DAT_00006850 = param_2;
  _DAT_000068fc = param_1;
  func_0x021127a8(0x6e64,param_1,0x16);
  return;
}



// ==== FUN_01e09f1e @ 01e09f1e ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e09f1e(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (_DAT_00006850 == 0) {
    FUN_01e09a4c(0xc,param_1);
    return;
  }
  _DAT_000068fc = (undefined1 *)(param_2 + param_3);
  uVar3 = 0;
  func_0x021127b4(0x6e64,0,0x1e);
  uVar2 = 0x16;
  if (DAT_00006900 == '\0') {
    uVar2 = 0;
  }
  do {
    if (uVar2 <= (uVar3 & 0xff)) goto LAB_01e09f8a;
    uVar1 = *_DAT_000068fc;
    _DAT_000068fc = _DAT_000068fc + 1;
    *(undefined1 *)((uVar3 & 0xff) + 0x6e64) = uVar1;
    _DAT_00006850 = _DAT_00006850 + -1;
    uVar3 = uVar3 + 1;
  } while (_DAT_00006850 != 0);
  uVar2 = uVar3 & 0xff;
LAB_01e09f8a:
  FUN_01e09a12(0xd,0x6e64,uVar2);
  return;
}



// ==== FUN_01e09f92 @ 01e09f92 ====

void FUN_01e09f92(int param_1,int param_2)

{
  undefined2 uVar1;
  
  *(short *)((param_1 * 10 + 0x6db8) * 2) = (short)param_2;
  DAT_000067c1 = 0x4a;
  DAT_000067c2 = 0;
  DAT_000067c3 = 4;
  DAT_000067c4 = DAT_00004131;
  DAT_000067c5 = 0;
  DAT_000067c6 = 4;
  DAT_000067c7 = 0;
  uVar1 = *(undefined2 *)(param_1 * 10 + 0x6db5);
  DAT_00004131 = DAT_00004131 + '\x01';
  DAT_000067c8 = (undefined1)uVar1;
  DAT_000067c9 = (undefined1)((ushort)uVar1 >> 8);
  DAT_000067ca = 0;
  DAT_000067cb = 0;
  if (param_2 != 0) {
    DAT_000067c8 = 0x4f;
    DAT_000067ce = 8;
    DAT_000067cf = 2;
    DAT_000067d0 = (undefined1)param_2;
    DAT_000067d1 = (undefined1)((uint)param_2 >> 8);
  }
  FUN_01e08a68();
  FUN_01e08a9c();
  DAT_00006934 = 0;
  return;
}



// ==== FUN_01e0a014 @ 01e0a014 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0a014(byte *param_1,undefined4 param_2)

{
  ushort *puVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  short sVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  char cVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined *puVar18;
  byte bVar19;
  short sVar20;
  byte *pbVar21;
  char cVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  char *pcVar25;
  BADSPACEBASE *in_sp;
  undefined4 *puVar26;
  undefined1 local_ec [184];
  
  puVar26 = (undefined4 *)local_ec;
  uVar9 = (uint)*param_1;
  *(undefined1 *)(uVar9 + 0x67c0) = 0x95;
  (&DAT_000067c1)[uVar9] = param_1[1];
  (&DAT_000067c2)[uVar9] = param_1[2];
  (&DAT_000067c3)[uVar9] = param_1[3];
  (&DAT_000067c4)[uVar9] = param_1[4];
  (&DAT_000067c5)[uVar9] = param_1[5];
  (&DAT_000067c6)[uVar9] = param_1[6];
  (&DAT_000067c7)[uVar9] = param_1[7];
  (&DAT_000067c8)[uVar9] = param_1[8];
  iVar10 = FUN_01e08a48(5);
  iVar11 = FUN_01e08a48(7);
  (&DAT_000067c9)[uVar9] = param_1[9];
  if (iVar11 == 1) {
    uVar9 = 10;
    DAT_00008c5f = 0;
  }
  else {
    DAT_00008c5f = param_1[10];
    uVar9 = 0xb;
  }
  pbVar21 = &DAT_00008c60;
  for (uVar15 = iVar10 - 2U & 0xffff; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pbVar21 = param_1[uVar9 & 0xffff];
    pbVar21 = pbVar21 + 1;
    uVar9 = uVar9 + 1;
  }
  uVar13 = 1;
  iVar10 = FUN_01e08a48(1);
  bVar5 = DAT_00008c5f;
  bVar19 = DAT_00008c5e;
  if (iVar10 != _DAT_0000413e + 0x2000) goto switchD_01e0a0d4_caseD_8;
  DAT_000067cf = uVar13;
  if (iVar11 == 1) {
    switch(DAT_00008c5d) {
    case '\x02':
      DAT_000067d0 = 1;
      uVar9 = FUN_01e08a48(0xe);
      if (((uVar9 < 0x14) && ((1 << uVar9 & 0xa0002U) != 0)) &&
         (iVar12 = FUN_01e08b06(), iVar12 != 0xff)) {
        iVar12 = iVar12 * 10;
        uVar7 = FUN_01e08a48(0x10);
        sVar20 = _DAT_00004142;
        *(undefined2 *)(&DAT_000073aa + iVar12) = uVar7;
        sVar6 = _DAT_00004142 + 1;
        *(short *)(&DAT_000073ac + iVar12) = _DAT_00004142;
        _DAT_00004142 = sVar6;
        (&DAT_000073a8)[iVar12] = (char)uVar7;
        uVar8 = FUN_01e08a48(0xe);
        *(undefined2 *)(&DAT_000073ae + iVar12) = uVar8;
        DAT_000067c1 = 0x4a;
        DAT_000067c2 = 0;
        DAT_000067c3 = 3;
        DAT_000067c4 = DAT_00008c5e;
        DAT_000067c5 = 0;
        DAT_000067c6 = 8;
        DAT_000067c7 = '\0';
        DAT_000067c8 = (undefined1)sVar20;
        DAT_000067c9 = (undefined1)((ushort)sVar20 >> 8);
        DAT_000067ca = (undefined1)uVar7;
        DAT_000067cb = (undefined1)((ushort)uVar7 >> 8);
        DAT_000067cf = 0;
        DAT_000067ce = 0;
        DAT_000067cd = 0;
        DAT_000067cc = 0;
        FUN_01e08a68(8);
        FUN_01e08a9c();
        uVar7 = _DAT_00006876;
        if (DAT_00004130 == 8) {
          uVar8 = FUN_01e08a48(0x10);
          uVar7 = uVar8;
          if ((*(short *)(&DAT_000073ae + iVar12) != 0x13) &&
             (uVar7 = _DAT_00006876, *(short *)(&DAT_000073ae + iVar12) == 0x11)) {
            _DAT_00006874 = uVar8;
          }
        }
        _DAT_00006876 = uVar7;
        DAT_00006934 = '\x01';
        DAT_000067d5 = 1;
      }
      break;
    case '\x03':
      iVar12 = FUN_01e08a48(0x12);
      if (iVar12 == 0) {
        uVar9 = 0xffffffff;
        puVar23 = (undefined1 *)0x6cfc;
        do {
          uVar9 = uVar9 + 1;
          if (3 < uVar9) goto LAB_01e0a388;
          puVar24 = puVar23 + 4;
          puVar1 = (ushort *)(puVar23 + 6);
          puVar23 = puVar24;
        } while (*puVar1 != (ushort)DAT_00008c5e);
        *puVar24 = 2;
LAB_01e0a388:
        FUN_01e08a48(0x10);
        iVar12 = FUN_01e08b26();
        if (iVar12 != 0xff) {
          uVar8 = FUN_01e08a48(0xe);
          uVar7 = _DAT_00006876;
          if (((DAT_00004130 == 8) &&
              (sVar20 = *(short *)(iVar12 * 10 + 0x6db7), uVar7 = uVar8, sVar20 != 0x13)) &&
             (uVar7 = _DAT_00006876, sVar20 == 0x11)) {
            _DAT_00006874 = uVar8;
          }
          _DAT_00006876 = uVar7;
          *(undefined2 *)((iVar12 * 10 + 0x6db5) * 2) = uVar8;
          DAT_00006934 = '\x01';
          DAT_000067d5 = (undefined1)iVar12;
        }
      }
      break;
    case '\x04':
      FUN_01e08a48(0xe);
      iVar12 = FUN_01e08b26();
      if (iVar12 != 0xff) {
        if ((DAT_00004130 < 8) && ((1 << (uint)DAT_00004130 & 0x92U) != 0)) {
          FUN_01e08b7a(DAT_00008c5e,0x2a0);
        }
        else {
          FUN_01e08b7a(DAT_00008c5e,0);
        }
      }
      break;
    case '\x05':
      FUN_01e08a48(0xe);
      iVar12 = FUN_01e08b26();
      if (iVar12 != 0xff) {
        if (DAT_0000690c == '\0') {
          DAT_0000693c = 1;
        }
        iVar12 = iVar12 * 10;
        if ((*(short *)(iVar12 + 0x6db7) == 0x13) && ((&DAT_000073a8)[iVar12] == '\x01')) {
          _DAT_00006872 = *(undefined2 *)(iVar12 + 0x6db5);
          DAT_00006930 = '\x01';
          DAT_00006920 = '\0';
          DAT_00006904 = 0;
        }
      }
      break;
    case '\x06':
      FUN_01e08a48(0x10);
      iVar12 = FUN_01e08b50();
      if (iVar12 != 0xff) {
        sVar20 = *(short *)(iVar12 * 10 + 0x6db7);
        if (sVar20 == 0x13) {
          DAT_000067d2 = 100;
          if (DAT_00004130 != 1) goto LAB_01e0a72a;
LAB_01e0a72c:
          DAT_000067d3 = 1;
        }
        else if ((sVar20 == 0x11) && (DAT_00004130 == 1)) {
LAB_01e0a72a:
          DAT_000067d2 = 2;
          goto LAB_01e0a72c;
        }
        iVar12 = iVar12 * 10;
        (&DAT_000073a8)[iVar12] = 0;
        if (DAT_00006940 != '\0') {
          DAT_00006940 = '\0';
          DAT_0000224b = 0xc0;
          DAT_0000224c = 0;
          DAT_0000224d = 7;
          DAT_0000224e = DAT_00008c5e;
          DAT_0000224f = 0;
          DAT_00002250 = 4;
          DAT_00002251 = 0;
          DAT_00002252 = (undefined1)*(undefined2 *)(iVar12 + 0x6db6);
          DAT_00002253 = (undefined1)((ushort)*(undefined2 *)(iVar12 + 0x6db6) >> 8);
          DAT_00002254 = (undefined1)*(undefined2 *)(iVar12 + 0x6db5);
          DAT_00002255 = (undefined1)((ushort)*(undefined2 *)(iVar12 + 0x6db5) >> 8);
          uVar17 = 4;
switchD_01e0a318_caseD_5:
          FUN_01e08a68(uVar17);
          FUN_01e08a9c();
        }
      }
      break;
    case '\a':
      FUN_01e08a48(0x10);
      iVar12 = FUN_01e08b50();
      if (iVar12 != 0xff) {
        (&DAT_000073a8)[iVar12 * 10] = 0;
        DAT_000067d3 = 1;
        DAT_000067d2 = 2;
      }
      break;
    case '\n':
      if (DAT_0000690c == '\0') {
        DAT_000067c9 = 1;
      }
      iVar12 = FUN_01e08a48(0xe);
      if (iVar12 == 3) {
        DAT_0000224b = 0xc0;
        DAT_0000224c = 0;
        DAT_0000224d = 0xb;
        DAT_0000224e = DAT_00008c5e;
        DAT_00002250 = 0xc;
        DAT_00002251 = 0;
        DAT_00002252 = 3;
        DAT_00002253 = 0;
        DAT_00002254 = 0;
        DAT_00002255 = 0;
        DAT_00002256 = 6;
        puVar23 = &DAT_00002257;
        iVar12 = 7;
        do {
          *puVar23 = 0;
          puVar23 = puVar23 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        FUN_01e08a68(0xc);
        FUN_01e08a9c();
        DAT_000067d0 = 1;
      }
      else if (iVar12 == 2) {
        DAT_000067c1 = 0x4a;
        DAT_000067c2 = 0;
        DAT_000067c3 = 0xb;
        DAT_000067c4 = DAT_00008c5e;
        DAT_000067c6 = 8;
        DAT_000067c7 = '\0';
        DAT_000067c8 = 2;
        DAT_000067c9 = 0;
        DAT_000067ca = 0;
        DAT_000067cb = 0;
        DAT_000067cc = 0x80;
        DAT_000067cd = 2;
        DAT_000067ce = 0;
        DAT_000067cf = 0;
        uVar17 = 8;
        goto switchD_01e0a318_caseD_5;
      }
    }
    goto switchD_01e0a0d4_caseD_8;
  }
  iVar12 = FUN_01e08b26(iVar11);
  if (iVar12 == 0xff) {
    return;
  }
  sVar20 = *(short *)(iVar12 * 10 + 0x6db7);
  if (sVar20 != 0x13) {
    if (sVar20 == 0x11) {
      FUN_01e08bdc(0x87bf,param_2);
      if (DAT_00004130 == 8) {
        FUN_01e08d88();
      }
      goto switchD_01e0a0d4_caseD_8;
    }
    DAT_00006940 = '\x01';
    if (DAT_00008c5d == '\x06') {
      DAT_000067d6 = '\0';
      if ((&DAT_00008c5f)[DAT_00008c61] != -1) {
        DAT_000067d6 = (&DAT_00008c5f)[DAT_00008c61];
      }
      sVar20 = CONCAT11(DAT_00008c66,DAT_00008c65);
      switch(DAT_00004130) {
      case 1:
        goto switchD_01e0a0d4_caseD_8;
      case 2:
      case 9:
        if ((sVar20 == 1) || (sVar20 == 0x2411)) {
          uVar17 = 0x2ab;
          iVar12 = 0x2512;
LAB_01e0a976:
          pcVar25 = s__Info____LL_ADV_>>>>>>>>>>>>ADV_>_01e1ef00 + iVar12;
        }
        else if (sVar20 == 0x12) {
          if (DAT_00004130 == 9) {
            uVar17 = 0x6e;
            pcVar25 = (char *)0x1e2006c;
          }
          else {
            uVar17 = 0x6e;
            pcVar25 = (char *)0x1e200da;
          }
        }
        else {
LAB_01e0ab24:
          uVar17 = 2;
          pcVar25 = (char *)0x1e1af1c;
        }
        break;
      default:
        if (DAT_00004130 == 8) {
          if (sVar20 != 0x2411) goto LAB_01e0ab24;
          uVar17 = 0xa5;
          pcVar25 = (char *)0x1e205b7;
        }
        else if (sVar20 == 0x2411) {
          uVar17 = 0x180;
          pcVar25 = (char *)0x1e209f5;
        }
        else if (sVar20 == 1) {
          uVar17 = 0x212;
          pcVar25 = (char *)0x1e20d70;
        }
        else {
          if (sVar20 != 0x12) goto LAB_01e0ab24;
          uVar17 = 0x92;
          pcVar25 = (char *)0x1e203f1;
        }
        break;
      case 4:
        if ((sVar20 == 1) || (sVar20 == 0x2411)) {
          uVar17 = 0x23a;
          iVar12 = 0x2082;
          goto LAB_01e0a976;
        }
        if (sVar20 != 0x12) goto LAB_01e0ab24;
        uVar17 = 0x85;
        pcVar25 = (char *)0x1e201c8;
        break;
      case 7:
        if ((sVar20 == 1) || (sVar20 == 0x2411)) {
          uVar17 = 0x2de;
          iVar12 = 0x2a81;
          goto LAB_01e0a976;
        }
        if (sVar20 != 0x12) goto LAB_01e0ab24;
        uVar17 = 0x85;
        pcVar25 = &DAT_01e2024d;
      }
      uVar16 = 7;
    }
    else {
      if (DAT_00008c5d != '\x04') {
        if (DAT_00008c5d != '\x02') goto switchD_01e0a0d4_caseD_8;
        uVar2 = *(ushort *)(iVar12 * 10 + 0x6db5);
        uVar9 = (uint)uVar2;
        *(undefined1 *)(uVar9 + 0x224a) = 0xc0;
        (&DAT_0000224b)[uVar9] = (char)(uVar2 >> 8);
        (&DAT_0000224c)[uVar9] = 3;
        (&DAT_0000224d)[uVar9] = bVar19;
        (&DAT_0000224e)[uVar9] = bVar5;
        (&DAT_0000224f)[uVar9] = 0;
        (&DAT_00002250)[uVar9] = 9;
        (&DAT_00002251)[uVar9] = 0;
        (&DAT_00002252)[uVar9] = 1;
        (&DAT_00002253)[uVar9] = 0;
        (&DAT_00002254)[uVar9] = 1;
        uVar3 = DAT_00008c66;
        uVar13 = DAT_00008c65;
        uVar17 = 10;
        if (((DAT_00008c62 == '5') && (DAT_00008c63 == '\x03')) && (DAT_00008c64 == '\x19')) {
          puVar23 = &DAT_00008a15;
          iVar12 = 5;
          do {
            *puVar23 = 0;
            puVar23 = puVar23 + 1;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
          if (DAT_00004130 - 1 < 9) {
            sVar20 = CONCAT11(uVar3,uVar13);
            switch(DAT_00004130) {
            case 1:
              if (sVar20 == 1) {
                DAT_000067cd = 2;
                DAT_000067c9 = 1;
LAB_01e0a922:
                DAT_000067cb = 1;
                DAT_000067ca = 0;
                DAT_000067c8 = 0;
                DAT_000067c7 = '\x01';
                DAT_000067c6 = 0;
                DAT_000067c5 = 2;
                DAT_000067c4 = 0;
                DAT_000067c3 = 2;
                DAT_000067c2 = 0;
                DAT_000067c1 = 0xd;
                uRam000067c0 = 0x4f;
                DAT_000067cc = 0;
                DAT_000067ce = 0;
                uVar17 = 0xe;
              }
              else if (sVar20 == 0x12) {
                uRam000067c0 = 0x55;
                DAT_000067c1 = 1;
                DAT_000067c2 = 0;
                DAT_000067c3 = 2;
              }
              else if (sVar20 == 0x2411) goto LAB_01e0aac4;
              break;
            default:
              if (sVar20 == 1) {
                DAT_000067cd = 1;
                DAT_000067c9 = 0;
                goto LAB_01e0a922;
              }
              if (sVar20 == 0x12) {
LAB_01e0aac4:
                uRam000067c0 = 0x55;
                DAT_000067c1 = 1;
                DAT_000067c2 = 0;
                DAT_000067c3 = 1;
              }
              else if (sVar20 == 0x2411) {
                uRam000067c0 = 0x55;
                DAT_000067c1 = 1;
                DAT_000067c2 = 0;
                DAT_000067c3 = 0;
              }
              break;
            case 5:
            case 6:
              break;
            }
          }
        }
        goto switchD_01e0a318_caseD_5;
      }
      DAT_000067d6 = '\0';
      if ((&DAT_00008c5f)[DAT_00008c61] != -1) {
        DAT_000067d6 = (&DAT_00008c5f)[DAT_00008c61];
      }
      iVar12 = CONCAT13(DAT_00008c65,CONCAT12(DAT_00008c64,CONCAT11(DAT_00008c63,DAT_00008c62)));
      switch(DAT_00004130) {
      case 1:
        goto switchD_01e0a0d4_caseD_8;
      case 2:
      case 9:
        if (iVar12 != 0x100) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar17 = 0x1f6;
        iVar12 = 0x2515;
        break;
      default:
        if (DAT_00004130 == 8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 4:
        if (iVar12 != 0x100) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar17 = 0x23a;
        iVar12 = 0x2082;
        break;
      case 7:
        if (iVar12 != 0x100) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar17 = 0x256;
        iVar12 = 0x22bc;
      }
      pcVar25 = s__Info____LL_ADV_>>>>>>>>>>>>ADV_>_01e1ef00 + iVar12;
      uVar16 = 5;
    }
    *puVar26 = uVar17;
    FUN_01e098ba(uVar16,CONCAT11(bVar19,bVar5),pcVar25);
    goto switchD_01e0a0d4_caseD_8;
  }
  FUN_01e08bdc(0x857b,param_2);
  switch(DAT_00004130) {
  case 1:
  case 4:
    break;
  case 2:
  case 9:
    if ((DAT_00008584 == -0x5e) && (DAT_00008585 == -0x33)) {
      DAT_00006ad0 = 1;
      DAT_00006ad4 = 1;
      switch(DAT_00008586) {
      case 0:
        DAT_00006803 = 1;
        DAT_00006816 = DAT_00006803;
        break;
      case 1:
        DAT_00006816 = 2;
        break;
      case 2:
        DAT_00006803 = 3;
        DAT_00006816 = DAT_00006803;
        break;
      case 3:
        DAT_00006803 = 4;
        DAT_00006816 = DAT_00006803;
      }
      _DAT_00006892 = 0x14d;
      DAT_000067f0 = DAT_00008587;
      _DAT_00006894 = 0x14d;
      DAT_000067f1 = DAT_00008588;
      *(byte *)((int)puVar26 + 0x17) = DAT_00008589;
      uVar4 = DAT_0000858d;
      uVar3 = DAT_0000858c;
      uVar13 = DAT_0000858b;
      *(byte *)((int)puVar26 + 0x18) = DAT_0000858a;
      *(undefined1 *)((int)puVar26 + 0x19) = uVar13;
      *(undefined1 *)((int)puVar26 + 0x1a) = uVar3;
      *(undefined1 *)((int)puVar26 + 0x1b) = uVar4;
      uVar13 = DAT_00008591;
      cVar14 = DAT_00008590;
      cVar22 = DAT_0000858f;
      *(undefined1 *)((int)puVar26 + 0x1c) = DAT_0000858e;
      *(char *)((int)puVar26 + 0x1d) = cVar22;
      *(char *)((int)puVar26 + 0x1e) = cVar14;
      *(undefined1 *)((int)puVar26 + 0x1f) = uVar13;
      iVar12 = func_0x021127b0(&DAT_00006bea,(undefined1 *)((int)puVar26 + 0x17),9);
      if (iVar12 != 0) {
        func_0x021127a8(&DAT_00006bea,(undefined1 *)((int)puVar26 + 0x17),9);
        return;
      }
    }
    break;
  default:
    if (DAT_00008584 != -0x5e) break;
    if (DAT_00008585 == '\x01') {
      for (iVar12 = 0; iVar12 != 0x4a; iVar12 = iVar12 + 1) {
        *(undefined1 *)(iVar12 + 0x7276) = (&DAT_00008585)[iVar12];
      }
      FUN_01e0914e();
      FUN_01e092bc();
      FUN_01e0275e(0x21,DAT_00006cc1,0xd);
      DAT_00008150 = 0xa1;
      for (iVar12 = 0; iVar12 != 0x4a; iVar12 = iVar12 + 1) {
        (&DAT_00008151)[iVar12] = (&DAT_0000442c)[iVar12];
      }
      goto LAB_01e0c654;
    }
    if (DAT_00008585 != '\x11') {
      if (DAT_00008585 == '\x10') {
        for (iVar12 = 0; iVar12 != 0x4a; iVar12 = iVar12 + 1) {
          *(undefined1 *)(iVar12 + 0x7276) = (&DAT_00008585)[iVar12];
        }
        FUN_01e0914e();
      }
      break;
    }
    func_0x021127b4(&DAT_00008147,0,0x218);
    FUN_01e0275e(0x31,DAT_00006cc1,0x40);
    DAT_00008150 = 0xa1;
    for (iVar12 = 0; uVar9 = _DAT_000067e4, iVar12 != 0x31; iVar12 = iVar12 + 1) {
      (&DAT_00008151)[iVar12] = (&DAT_0000442c)[iVar12];
    }
    if (DAT_0000698c == '\0') goto LAB_01e0c654;
    _DAT_00006990 = &DAT_00008182;
    _DAT_00006994 = &DAT_0000858f;
    _DAT_00006998 = 0x859f;
    DAT_000067e1 = DAT_0000858f;
    DAT_000067e2 = DAT_00008590;
    DAT_000067e3 = DAT_00008591;
    _DAT_000067e4 = CONCAT31(_DAT_000067e5,DAT_00008592);
    if (DAT_0000858f != '\x02') {
      if (DAT_0000858f == '\x01') {
        DAT_000067e7 = SUB41(uVar9,3);
        _DAT_000067e4 = (uint3)DAT_00008592;
        DAT_00008182 = 1;
        DAT_00008186 = 3;
        DAT_00008188 = 5;
        if (DAT_0000699c != '\0') {
          iVar12 = 0x19c9;
          uVar13 = 4;
          goto LAB_01e0c330;
        }
        DAT_00008189 = 6;
        _DAT_000067e4 = CONCAT13(DAT_000069c7 + 1U,_DAT_000067e4);
        if (1 < (byte)(DAT_000069c7 + 1U)) {
          _DAT_000067e4 = (uint)_DAT_000067e4;
          iVar12 = 0x1dc;
          goto LAB_01e0ba22;
        }
      }
      goto LAB_01e0c618;
    }
    DAT_0000699c = '\0';
    _DAT_000067e4 = _DAT_000067e4 & 0xffffff;
    DAT_00008182 = 0x2a;
    DAT_00008184 = 5;
    DAT_00008187 = 9;
    DAT_00008188 = 0x31;
    switch(DAT_000069c5) {
    case '\x1e':
      DAT_00008189 = 2;
      FUN_01e096a2();
      cRam000067e8 = '\0';
      bVar19 = DAT_000067e6 + 1;
      _DAT_000067e4 = CONCAT12(bVar19,_DAT_000067e4);
      uVar9 = _DAT_000067e4;
joined_r0x01e0c4a8:
      _DAT_000067e4 = uVar9;
      if (2 < bVar19) {
        DAT_000067e5 = (char)(uVar9 >> 8);
        DAT_000067e4 = (undefined1)uVar9;
        _DAT_000067e4 = CONCAT11(DAT_000067e5 + '\x01',DAT_000067e4);
        _DAT_000067e4 = CONCAT22((short)(uVar9 >> 0x10),_DAT_000067e4) & 0xff00ffff;
      }
      break;
    case '\x1f':
      FUN_01e096ce();
      goto LAB_01e0c36e;
    case ' ':
    case '\"':
      FUN_01e097b2();
      goto LAB_01e0c36e;
    case '!':
      FUN_01e096ce();
      DAT_00008182 = 0x2a;
LAB_01e0c36e:
      cRam000067e8 = (char)_DAT_000067e4 + cRam000067e8;
      uVar9 = _DAT_000067e4 >> 0x10;
      _DAT_000067e4 = CONCAT11(DAT_000067e5 + '\x01',(char)_DAT_000067e4);
      _DAT_000067e4 = CONCAT22((short)uVar9,_DAT_000067e4) & 0xff00ffff;
      break;
    case '#':
      if (DAT_00008590 == '\b') {
        DAT_00008186 = DAT_00008591;
        DAT_00008189 = 3;
        FUN_01e096a2();
        if (DAT_000069c3 != 0) {
          func_0x021127a8(((uint)DAT_000069c3 * 0x1f + 0xffe1 & 0xffff) + 0x835f,_DAT_00006994 + 6,
                          0x1f);
          return;
        }
      }
      else {
        DAT_00008189 = 4;
        FUN_01e096a2();
        if (DAT_000069c2 == '\x02') {
          _DAT_000067e4 = CONCAT11(1,DAT_000067e4);
          _DAT_000067e4 = CONCAT12(1,_DAT_000067e4);
        }
        else {
          _DAT_000067e4 = CONCAT12(cRam000069c6 + 1U,_DAT_000067e4);
          if (0x10 < (byte)(cRam000069c6 + 1U)) goto LAB_01e0c478;
        }
      }
      break;
    case '$':
    case '%':
    case '&':
    case '\'':
switchD_01e0b974_caseD_24:
      iVar12 = 0x19c9;
      uVar13 = 0;
LAB_01e0c330:
      *(undefined1 *)(iVar12 + 0x67c0) = uVar13;
      break;
    case '(':
      DAT_00008186 = 0;
      DAT_00008189 = 3;
      FUN_01e096a2();
      uVar9 = _DAT_000067e4 >> 0x10;
      _DAT_000067e4 = CONCAT11(0x32,DAT_000067e4);
      _DAT_000067e4 = CONCAT22((short)uVar9,_DAT_000067e4) & 0xff00ffff;
      break;
    default:
      switch(DAT_000069c5) {
      case '\0':
        DAT_00008189 = 0xb;
        break;
      case '\x01':
        DAT_00008189 = 0;
        if (DAT_00008590 == '\x01') {
          _DAT_000067e4 = CONCAT11(2,DAT_00008592);
          _DAT_000067e4 = (uint)_DAT_000067e4;
        }
        goto LAB_01e0c618;
      case '\x02':
        iVar12 = 0x19c9;
LAB_01e0ba22:
        uVar13 = 1;
        goto LAB_01e0c330;
      case '\x03':
        DAT_00008189 = 9;
        FUN_01e096a2();
        if (DAT_000069c2 == '\x06') {
          func_0x021127a8(&DAT_000041b0,_DAT_00006998,9);
          return;
        }
        if (DAT_000069c2 != '\x02') goto LAB_01e0c618;
        goto LAB_01e0c478;
      default:
        if (DAT_000069c5 != '2') {
          if (DAT_000069c5 != '<') {
            if (DAT_000069c5 != '=') goto switchD_01e0b974_caseD_24;
            DAT_00008189 = 7;
            FUN_01e096a2();
            goto LAB_01e0c478;
          }
          uRam00008183 = 0x41;
          DAT_00008189 = 7;
          FUN_01e096a2();
          bVar19 = cRam000069c6 + 1;
          _DAT_000067e4 = CONCAT12(bVar19,_DAT_000067e4);
          uVar9 = _DAT_000067e4;
          goto joined_r0x01e0c4a8;
        }
        DAT_00008189 = 5;
        FUN_01e096a2();
      }
      _DAT_000067e4 = CONCAT12(cRam000069c6 + 1U,_DAT_000067e4);
      if (2 < (byte)(cRam000069c6 + 1U)) {
LAB_01e0c478:
        uVar9 = _DAT_000067e4 >> 0x10;
        _DAT_000067e4 = CONCAT11(1,DAT_000067e4);
        _DAT_000067e4 = CONCAT22((short)uVar9,_DAT_000067e4) & 0xff00ffff;
      }
    }
LAB_01e0c618:
    uVar9 = 0;
    sVar20 = 0x138;
    pbVar21 = _DAT_00006990;
    while (sVar20 != 0) {
      bVar19 = *pbVar21;
      pbVar21 = pbVar21 + 1;
      sVar20 = sVar20 + -1;
      uVar9 = uVar9 ^ bVar19;
      for (cVar22 = '\b'; cVar22 != '\0'; cVar22 = cVar22 + -1) {
        cVar14 = (char)uVar9;
        uVar15 = (uVar9 & 0xff) << 1;
        uVar9 = uVar15 ^ 7;
        if (-1 < cVar14) {
          uVar9 = uVar15;
        }
      }
    }
    uRam000082ba = (undefined1)uVar9;
LAB_01e0c654:
    DAT_00006924 = 1;
    _DAT_00006862 = 1;
    break;
  case 7:
    if ((DAT_00008584 == -0x5e) && (DAT_00008585 == '\x03')) {
      DAT_000067f1 = 0xff;
      DAT_000067f0 = 0xff;
      if (DAT_00008589 < 0x65) {
        DAT_000067f0 = (undefined1)(((uint)DAT_00008589 * 0xff) / 100);
      }
      _DAT_00006892 = 2000;
      if (DAT_0000858a < 0x65) {
        DAT_000067f1 = (undefined1)(((uint)DAT_0000858a * 0xff) / 100);
      }
      _DAT_00006894 = 2000;
    }
    break;
  case 8:
    func_0x021127a8(0x87bf,0x857b,0x244);
    return;
  }
switchD_01e0a0d4_caseD_8:
  iVar12 = _DAT_00004140 + 0x2000;
  if (1 < (byte)(DAT_00004130 - 5)) {
    if ((iVar11 != 4) || (iVar10 != iVar12)) goto switchD_01e0ab92_caseD_3;
    switch(DAT_00008c5d) {
    case '\x02':
      puVar18 = &DAT_01e1af1a;
      uVar17 = 3;
LAB_01e0ac1e:
      FUN_01e09a12(uVar17,puVar18,2);
    case '\x03':
    case '\x05':
    case '\x06':
    case '\a':
    case '\t':
      goto switchD_01e0ab92_caseD_3;
    case '\x04':
      uVar9 = (uint)CONCAT11(DAT_00008c5f,DAT_00008c5e);
      if (uVar9 == 0xf) {
        puVar18 = &DAT_01e1b042;
      }
      else {
        if (uVar9 != 0xb) {
          uVar17 = 4;
          break;
        }
        puVar18 = &DAT_01e1b03d;
      }
      uVar17 = 5;
LAB_01e0b00a:
      FUN_01e09a12(uVar17,puVar18,5);
      goto switchD_01e0ab92_caseD_3;
    case '\b':
      if (CONCAT11(DAT_00008c63,DAT_00008c62) == 0x2a00) {
        FUN_01e09a12(9,&DAT_01e1b45e,0xc);
        goto switchD_01e0ab92_caseD_3;
      }
      uVar9 = (uint)CONCAT11(DAT_00008c5f,DAT_00008c5e);
      if (CONCAT11(DAT_00008c63,DAT_00008c62) == 0x2803) {
        if (uVar9 == 0xc) {
          puVar18 = &DAT_01e1baf5;
        }
        else {
          if (uVar9 == 8) {
            FUN_01e09a12(9,&DAT_01e1b314,8);
            goto switchD_01e0ab92_caseD_3;
          }
          if (uVar9 != 1) goto LAB_01e0b234;
          puVar18 = &DAT_01e1badf;
        }
        FUN_01e09a12(9,puVar18,0x16);
        goto switchD_01e0ab92_caseD_3;
      }
LAB_01e0b234:
      uVar17 = 8;
      break;
    case '\n':
      uVar9 = (uint)CONCAT11(DAT_00008c5f,DAT_00008c5e);
switchD_01e0b54a_caseD_2a:
      _DAT_0000685a = CONCAT11(DAT_00008c5f,DAT_00008c5e);
      uVar17 = 10;
      break;
    default:
      if (DAT_00008c5d != '\x10') {
        if (DAT_00008c5d == '\x12') {
switchD_01e0ab92_caseD_12:
          _DAT_0000685a = CONCAT11(DAT_00008c5f,DAT_00008c5e);
          func_0x021127b4(0x6e64,0,0x1e);
          func_0x021127a8(0x6e64,&DAT_00008c60,DAT_00008c59 - 3);
          return;
        }
        if (DAT_00008c5d == 'R') {
          _DAT_0000685a = CONCAT11(DAT_00008c5f,DAT_00008c5e);
          func_0x021127b4(0x6e64,0,0x1e);
          func_0x021127a8(0x6e64,&DAT_00008c60,DAT_00008c59 - 3);
          return;
        }
        goto switchD_01e0ab92_caseD_3;
      }
      uVar9 = (uint)CONCAT11(DAT_00008c5f,DAT_00008c5e);
      if (CONCAT11(DAT_00008c63,DAT_00008c62) == 0x2800) {
        if (uVar9 == 0xc) {
          FUN_01e09a12(0x11,&DAT_01e1ba20,0x15);
          goto switchD_01e0ab92_caseD_3;
        }
        if (uVar9 == 1) {
          FUN_01e09a12(0x11,&DAT_01e1b4d8,0xd);
          goto switchD_01e0ab92_caseD_3;
        }
      }
LAB_01e0b362:
      uVar17 = 0x10;
    }
    goto LAB_01e0b364;
  }
  if (iVar10 != iVar12) {
    if (iVar10 == _DAT_00004140 + 0x1000) {
      FUN_01e367de(s_______>>>>le_mtu_>_23_data_01e1bee7);
      FUN_01e367de(s_______>>>>L2CAP_Rx_L2CAP_PDU_LEN_01e1da2d,DAT_00008c59);
    }
    goto switchD_01e0ab92_caseD_3;
  }
  if (iVar11 == 6) {
    switch(DAT_00008c5d) {
    case '\x01':
      FUN_01e07ef8(2,&DAT_01e1b08e,6);
      func_0x021127a8(0x6b67,&DAT_00008c5d,7);
      return;
    case '\x03':
      FUN_01e07ef8(3,0x6ca0,0x10);
      break;
    case '\x04':
      FUN_01e07ef8(4,0x4230,0x10);
      func_0x021127a8(0x6c70,&DAT_00008c5e,8);
      return;
    case '\b':
      func_0x021127a8(0x6cf0,&DAT_00008c5e,0x10);
      return;
    case '\t':
      func_0x021127a8(0x6b4d,&DAT_00008c5f,6);
      return;
    }
    goto switchD_01e0ab92_caseD_3;
  }
  if (iVar11 == 5) {
    if (DAT_00008c5d == '\x13') {
      if (DAT_00008c61 == 1) {
        FUN_01e367de(&DAT_01e1c798);
      }
    }
    else if (DAT_00008c5d == '\x12') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto switchD_01e0ab92_caseD_3;
  }
  if (iVar11 != 4) goto switchD_01e0ab92_caseD_3;
  switch(DAT_00008c5d) {
  case '\x02':
    FUN_01e09a12(3,&DAT_01e1af18,2);
    DAT_000067c6 = 0x4a;
    DAT_000067c7 = '\0';
    DAT_000067c8 = 0xb;
    DAT_000067c9 = 1;
    FUN_01e07eaa(2);
    FUN_01e07edc();
    break;
  case '\x03':
  case '\x05':
  case '\a':
  case '\t':
  case '\v':
  case '\r':
  case '\x0e':
  case '\x0f':
  case '\x11':
    break;
  case '\x04':
    uVar7 = CONCAT11(DAT_00008c5f,DAT_00008c5e);
    if (DAT_000067c7 == '\0') {
      FUN_01e09afc(uVar7,0x42e4,0x20);
    }
    else if (DAT_000067c7 == '\x02') {
      FUN_01e09afc(uVar7,0x4328,0x28);
    }
    else if (DAT_000067c7 == '\x01') {
      FUN_01e09afc(uVar7,0x43f4,0x38);
    }
    break;
  case '\x06':
    uVar9 = (uint)CONCAT11(DAT_00008c5f,DAT_00008c5e);
    uVar17 = 6;
    goto LAB_01e0b364;
  case '\b':
    sVar20 = CONCAT11(DAT_00008c63,DAT_00008c62);
    if (sVar20 == 0x2a50) {
      FUN_01e09a12(9,&DAT_01e1b3d5,10);
      break;
    }
    if (sVar20 == 0x2a00) {
      FUN_01e09a12(9,&DAT_01e1b97d,0x14);
      break;
    }
    uVar9 = (uint)CONCAT11(DAT_00008c5f,DAT_00008c5e);
    if ((sVar20 != 0x2803) || (uVar9 == CONCAT11(DAT_00008c61,DAT_00008c60))) goto LAB_01e0b234;
    if (DAT_000067c7 == '\0') {
      uVar17 = 0x4384;
LAB_01e0b938:
      uVar16 = 0x38;
    }
    else {
      if (DAT_000067c7 == '\x02') {
        uVar17 = 0x43bc;
        goto LAB_01e0b938;
      }
      if (DAT_000067c7 != '\x01') break;
      uVar17 = 0x446c;
      uVar16 = 0x68;
    }
    FUN_01e09aba(uVar9,uVar17,uVar16);
    break;
  case '\n':
    _DAT_0000685a = CONCAT11(DAT_00008c5f,DAT_00008c5e);
    uVar9 = (uint)_DAT_0000685a;
    switch(uVar9) {
    case 0x29:
    case 0x34:
      goto switchD_01e0b54a_caseD_29;
    case 0x2a:
    case 0x2b:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x35:
    case 0x36:
    case 0x38:
      goto switchD_01e0b54a_caseD_2a;
    case 0x2c:
    case 0x37:
      goto switchD_01e0b54a_caseD_2c;
    case 0x2d:
      if (DAT_000067c7 != '\x02') goto switchD_01e0ab92_caseD_3;
      puVar18 = (undefined *)0x1e1af16;
      goto LAB_01e0b782;
    case 0x2e:
    case 0x39:
      goto switchD_01e0b54a_caseD_2e;
    }
    if (uVar9 != 0x4a) {
      if (uVar9 == 7) {
        func_0x021127b4(0x6e64,0,0x1e);
        func_0x021127a8(0x6e64,&DAT_01e1b30c,8);
        return;
      }
      if (uVar9 == 0x14) {
        puVar18 = &DAT_01e1b038;
        uVar17 = 0xb;
        goto LAB_01e0b00a;
      }
      if (uVar9 == 0x16) {
        FUN_01e09a12(0xb,&DAT_01e1b088,6);
        break;
      }
      if (uVar9 == 0x18) {
        FUN_01e09a12(0xb,&DAT_01e1b107,7);
        break;
      }
      if (uVar9 == 0x21) {
switchD_01e0b54a_caseD_2c:
        FUN_01e09a12(0xb,&DAT_01e1af88,4);
      }
      else {
        if (uVar9 != 0x23) {
          if (uVar9 == 0x3f) goto switchD_01e0b54a_caseD_29;
          if (uVar9 == 0x42) goto switchD_01e0b54a_caseD_2c;
          if (uVar9 != 0x44) {
            if (uVar9 == 3) {
              FUN_01e09a12(0xb,&DAT_01e1b771,0x11);
              break;
            }
            goto switchD_01e0b54a_caseD_2a;
          }
        }
switchD_01e0b54a_caseD_2e:
        if (DAT_000067c7 == '\x01') {
          FUN_01e09ede(&DAT_01e1fb5f,0x4c);
        }
        if (DAT_000067c7 == '\0') {
          FUN_01e09ede(&DAT_01e208f8,0xfd);
        }
        if (DAT_000067c7 == '\x02') {
          FUN_01e09ede(&DAT_01e20361,0x90);
        }
      }
      break;
    }
switchD_01e0b54a_caseD_29:
    if (DAT_000067c7 == '\x01') {
      FUN_01e09a12(0xb,&DAT_01e1af10,2);
    }
    if (DAT_000067c7 == '\0') {
      FUN_01e09a12(0xb,&DAT_01e1af12,2);
    }
    if (DAT_000067c7 != '\x02') break;
    puVar18 = &DAT_01e1af14;
LAB_01e0b782:
    uVar17 = 0xb;
    goto LAB_01e0ac1e;
  case '\f':
    _DAT_0000685a = CONCAT11(DAT_00008c5f,DAT_00008c5e);
    uVar9 = (uint)_DAT_0000685a;
    if (((uVar9 - 0x2e < 0x17) && ((1 << uVar9 - 0x2e & 0x400801U) != 0)) || (uVar9 == 0x23)) {
      uVar7 = CONCAT11(DAT_00008c61,DAT_00008c60);
      if (DAT_000067c7 == '\x01') {
        FUN_01e09f1e(uVar9,&DAT_01e1fb5f,uVar7);
      }
      if (DAT_000067c7 == '\0') {
        FUN_01e09f1e(uVar9,&DAT_01e208f8,uVar7);
      }
      if (DAT_000067c7 == '\x02') {
        FUN_01e09f1e(uVar9,&DAT_01e20361,uVar7);
      }
      break;
    }
    uVar17 = 0xc;
LAB_01e0b364:
    FUN_01e09a4c(uVar17,uVar9);
    break;
  case '\x10':
    uVar9 = (uint)CONCAT11(DAT_00008c5f,DAT_00008c5e);
    if (CONCAT11(DAT_00008c63,DAT_00008c62) == 0x2800) {
      if (DAT_000067c7 == '\0') {
        uVar17 = 0x41d0;
      }
      else {
        if (DAT_000067c7 != '\x02') {
          if (DAT_000067c7 == '\x01') {
            FUN_01e09a7e(uVar9,0x4278,0x18);
          }
          break;
        }
        uVar17 = 0x41e0;
      }
      FUN_01e09a7e(uVar9,uVar17,0x10);
      break;
    }
    goto LAB_01e0b362;
  case '\x12':
    goto switchD_01e0ab92_caseD_12;
  default:
    if (DAT_00008c5d == '\x1d') {
      FUN_01e09a12(0x1e,0,0);
    }
    else if (DAT_00008c5d == 'R') {
      _DAT_0000685a = CONCAT11(DAT_00008c5f,DAT_00008c5e);
      func_0x021127b4(0x6e64,0,0x1e);
      func_0x021127a8(0x6e64,&DAT_00008c60,DAT_00008c59 - 3);
      return;
    }
  }
switchD_01e0ab92_caseD_3:
  if (DAT_00006934 != '\0') {
    if ((DAT_00004130 < 8) && ((1 << (uint)DAT_00004130 & 0x92U) != 0)) {
      uVar17 = 0x2a0;
    }
    else {
      uVar17 = 0;
    }
    FUN_01e09f92(uVar17);
    DAT_0000693c = 0;
  }
  if (DAT_00006930 != '\0') {
    if (DAT_00006920 == '\0') {
      FUN_01e08976();
      DAT_00006920 = '\x01';
      FUN_01e0308a();
      switch(DAT_00004130) {
      case 1:
      case 4:
        break;
      case 2:
      case 9:
        DAT_00008150 = 0xa1;
        DAT_00008151 = 7;
        _DAT_00008154 = 0x8080;
        _DAT_00008152 = 0x8080;
        DAT_00008156 = 8;
        DAT_0000815a = 0;
        DAT_00008159 = 0;
        DAT_00008158 = 0;
        DAT_00008157 = 0;
        DAT_000067c5 = 0xc;
        break;
      default:
        DAT_000067e0 = 1;
        for (iVar10 = 0; iVar10 != 0x32; iVar10 = iVar10 + 1) {
          (&DAT_00008150)[iVar10] = (&DAT_01e1e682)[iVar10];
        }
        _DAT_00008152 = CONCAT11(DAT_00004134,1);
        break;
      case 7:
        for (iVar10 = 0; iVar10 != 0x11; iVar10 = iVar10 + 1) {
          (&DAT_00008150)[iVar10] = (&DAT_01e1b793)[iVar10];
        }
      }
      if (_DAT_00006860 == 0) {
        _DAT_00006860 = FUN_01e370ba(&LAB_01e0cfe6,0x32);
      }
      DAT_00006928 = 0;
      FUN_01e3722c(0,FUN_01e08306,200);
      FUN_01e3721e(0,&LAB_01e0cfa8,1000);
      FUN_01e07f2e(2);
    }
    if (DAT_0000690c != '\0') {
      DAT_000067c9 = 2;
    }
    DAT_0000690c = '\0';
    DAT_000067d4 = 4;
  }
  return;
}



// ==== FUN_01e0baf6 @ 01e0baf6 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e0baf6(void)

{
  ushort uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  byte unaff_r4;
  ushort *unaff_r5;
  ushort *puVar8;
  int unaff_r6;
  byte unaff_r7;
  int unaff_r8;
  byte *unaff_r12;
  int unaff_r13;
  int unaff_r14;
  byte unaff_r15;
  BADSPACEBASE *in_sp;
  
  if ((unaff_r7 | unaff_r4) != 3) {
    while( true ) {
      unaff_r15 = unaff_r15 + 1;
      puVar8 = unaff_r5 + 0x10;
      if (unaff_r15 < 0xf) break;
      uVar1 = *puVar8;
      uVar5 = FUN_01e05048(unaff_r5 + 0x11,0x1e);
      if (uVar1 != uVar5) {
        FUN_01e36848(4,unaff_r8 + 0x25ce);
        break;
      }
      iVar7 = func_0x021127b0(unaff_r5 + 0x18,unaff_r8 + 0x5e2,0xd);
      if (iVar7 == 0) {
        FUN_01e36848(2,unaff_r8 + unaff_r13);
        func_0x021127a8((undefined1 *)((int)in_sp + 0x80),puVar8,0x20);
        return;
      }
      iVar7 = func_0x021127b0(unaff_r5 + 0x18,unaff_r8 + 0x650,0xe);
      unaff_r5 = puVar8;
      if (iVar7 == 0) {
        FUN_01e36848(2,unaff_r8 + unaff_r6);
        func_0x021127a8((undefined1 *)((int)in_sp + 0x60),puVar8,0x20);
        return;
      }
    }
    if ((unaff_r7 | unaff_r4) != 3) {
      FUN_01e36848(4,unaff_r8 + 0x37a4);
      FUN_01e36848(4,unaff_r8 + 0x1f0e);
      if (*(int *)(unaff_r14 + 0x318) != 0) {
        thunk_FUN_01e3d7dc();
        *(undefined4 *)(unaff_r14 + 0x318) = 0;
      }
      uVar5 = FUN_01e09c3e(*(undefined4 *)(unaff_r14 + 0x1c0));
      if ((*(int *)(unaff_r14 + 0x318) == 0) || (*(uint *)(*(int *)(unaff_r14 + 0x318) + 4) < uVar5)
         ) {
        FUN_01e36848(4,unaff_r8 + 0x3a35);
        FUN_01e09bf0();
        uVar3 = 0xe;
        if (*(char *)(unaff_r14 + 0x1b4) == '\0') {
          uVar3 = 0;
        }
        iVar7 = unaff_r8 + 0x88;
      }
      else {
        *(uint *)in_sp = uVar5;
        FUN_01e36848(2,unaff_r8 + 0x3a01);
        func_0x020033fa(unaff_r8 + 0x4e3,1,0);
        func_0x020035ca(*(int *)(unaff_r14 + 0x318) + 0x60,0);
        uVar3 = 0xe;
        if (*(char *)(unaff_r14 + 0x1b4) == '\0') {
          uVar3 = 0;
        }
        iVar7 = unaff_r8 + 0x8c;
      }
      FUN_01e09c7c(uVar3,iVar7,4);
      if (*(char *)(unaff_r14 + 0x174) != '\0') {
        if ((*unaff_r12 < 8) && ((1 << (uint)*unaff_r12 & 0x92U) != 0)) {
          uVar6 = 0x2a0;
        }
        else {
          uVar6 = 0;
        }
        FUN_01e09f92(uVar6);
        *(undefined1 *)(unaff_r14 + 0x17c) = 0;
      }
      if (*(char *)(unaff_r14 + 0x170) != '\0') {
        if (*(char *)(unaff_r14 + 0x160) == '\0') {
          FUN_01e08976();
          *(undefined1 *)(unaff_r14 + 0x160) = 1;
          FUN_01e0308a();
          switch(*unaff_r12) {
          case 1:
          case 4:
            break;
          case 2:
          case 9:
            *(undefined1 *)(unaff_r14 + 0x1990) = 0xa1;
            *(undefined1 *)(unaff_r14 + 0x1991) = 7;
            *(undefined2 *)(unaff_r14 + 0x1994) = 0x8080;
            *(undefined2 *)(unaff_r14 + 0x1992) = 0x8080;
            *(undefined1 *)(unaff_r14 + 0x1996) = 8;
            *(undefined1 *)(unaff_r14 + 0x199a) = 0;
            *(undefined1 *)(unaff_r14 + 0x1999) = 0;
            *(undefined1 *)(unaff_r14 + 0x1998) = 0;
            *(undefined1 *)(unaff_r14 + 0x1997) = 0;
            *(undefined1 *)(unaff_r14 + 5) = 0xc;
            break;
          default:
            *(undefined1 *)(unaff_r14 + 0x20) = 1;
            for (iVar7 = 0; iVar7 != 0x32; iVar7 = iVar7 + 1) {
              *(undefined1 *)(iVar7 + unaff_r14 + 0x1990) =
                   *(undefined1 *)(iVar7 + unaff_r8 + 0x3772);
            }
            bVar2 = unaff_r12[4];
            *(undefined1 *)(unaff_r14 + 0x1992) = 1;
            *(byte *)(unaff_r14 + 0x1993) = bVar2;
            break;
          case 7:
            for (iVar7 = 0; iVar7 != 0x11; iVar7 = iVar7 + 1) {
              *(undefined1 *)(iVar7 + unaff_r14 + 0x1990) =
                   *(undefined1 *)(iVar7 + unaff_r8 + 0x883);
            }
          }
          if (*(short *)(unaff_r14 + 0xa0) == 0) {
            uVar4 = FUN_01e370ba(&LAB_01e0cfe6,0x32);
            *(undefined2 *)(unaff_r14 + 0xa0) = uVar4;
          }
          *(undefined1 *)(unaff_r14 + 0x168) = 0;
          FUN_01e3722c(0,FUN_01e08306,200);
          FUN_01e3721e(0,&LAB_01e0cfa8,1000);
          FUN_01e07f2e(2);
        }
        if (*(char *)(unaff_r14 + 0x14c) != '\0') {
          *(undefined1 *)(unaff_r14 + 9) = 2;
        }
        *(undefined1 *)(unaff_r14 + 0x14c) = 0;
        *(undefined1 *)(unaff_r14 + 0x14) = 4;
      }
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== caseD_1e @ 01e0c336 ====

/* WARNING: Control flow encountered bad instruction data */

void switchD_01e0b974::caseD_1e(void)

{
  undefined2 uVar1;
  int iVar2;
  byte *pbVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  byte bVar8;
  short sVar9;
  uint uVar10;
  int unaff_r5;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  byte *unaff_r12;
  int unaff_r14;
  
  *(undefined1 *)(unaff_r14 + 0x19c9) = 2;
  FUN_01e096a2();
  *(undefined1 *)(unaff_r14 + 0x28) = 0;
  bVar8 = *(byte *)(unaff_r14 + 0x26) + 1;
  *(byte *)(unaff_r14 + 0x26) = bVar8;
  if (2 < bVar8) {
    *(undefined1 *)(unaff_r14 + 0x26) = 0;
    *(char *)(unaff_r14 + 0x25) = *(char *)(unaff_r14 + 0x25) + '\x01';
  }
  pbVar3 = *(byte **)(unaff_r14 + 0x1d0);
  uVar7 = 0;
  sVar9 = 0x138;
  while (sVar9 != 0) {
    bVar8 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    sVar9 = sVar9 + -1;
    uVar7 = uVar7 ^ bVar8;
    for (cVar4 = '\b'; cVar4 != '\0'; cVar4 = cVar4 + -1) {
      cVar5 = (char)uVar7;
      uVar10 = (uVar7 & 0xff) << 1;
      uVar7 = uVar10 ^ 7;
      if (-1 < cVar5) {
        uVar7 = uVar10;
      }
    }
  }
  *(char *)(unaff_r14 + 0x1afa) = (char)uVar7;
  *(undefined1 *)(unaff_r14 + 0x164) = 1;
  *(undefined2 *)(unaff_r14 + 0xa2) = 1;
  iVar2 = *(ushort *)(unaff_r12 + 0x10) + 0x2000;
  if (1 < (byte)(*unaff_r12 - 5)) {
    if ((unaff_r5 != 4) || (unaff_r9 != iVar2)) goto switchD_01e0ab92_caseD_3;
    cVar4 = *(char *)(unaff_r14 + 0x249d);
    switch(cVar4) {
    case '\x02':
      iVar2 = unaff_r8 + 10;
      uVar6 = 3;
LAB_01e0ac1e:
      FUN_01e09a12(uVar6,iVar2,2);
    case '\x03':
    case '\x05':
    case '\x06':
    case '\a':
    case '\t':
      goto switchD_01e0ab92_caseD_3;
    case '\x04':
      uVar7 = (uint)*(ushort *)(unaff_r14 + 0x249e);
      if (uVar7 == 0xf) {
        iVar2 = unaff_r8 + 0x132;
      }
      else {
        if (uVar7 != 0xb) {
          uVar6 = 4;
          break;
        }
        iVar2 = unaff_r8 + 0x12d;
      }
      uVar6 = 5;
LAB_01e0b00a:
      FUN_01e09a12(uVar6,iVar2,5);
      goto switchD_01e0ab92_caseD_3;
    case '\b':
      if (*(short *)(unaff_r14 + 0x24a2) == 0x2a00) {
        FUN_01e09a12(9,unaff_r8 + 0x54e,0xc);
        goto switchD_01e0ab92_caseD_3;
      }
      uVar7 = (uint)*(ushort *)(unaff_r14 + 0x249e);
      if (*(short *)(unaff_r14 + 0x24a2) == 0x2803) {
        if (uVar7 == 0xc) {
          iVar2 = unaff_r8 + 0xbe5;
        }
        else {
          if (uVar7 == 8) {
            FUN_01e09a12(9,unaff_r8 + 0x404,8);
            goto switchD_01e0ab92_caseD_3;
          }
          if (uVar7 != 1) goto LAB_01e0b234;
          iVar2 = unaff_r8 + 0xbcf;
        }
        FUN_01e09a12(9,iVar2,0x16);
        goto switchD_01e0ab92_caseD_3;
      }
LAB_01e0b234:
      uVar6 = 8;
      break;
    case '\n':
      *(ushort *)(unaff_r14 + 0x9a) = *(ushort *)(unaff_r14 + 0x249e);
      uVar7 = (uint)*(ushort *)(unaff_r14 + 0x249e);
switchD_01e0b54a_caseD_2a:
      uVar6 = 10;
      break;
    default:
      if (cVar4 != '\x10') {
        if (cVar4 == '\x12') {
switchD_01e0ab92_caseD_12:
          *(undefined2 *)(unaff_r14 + 0x9a) = *(undefined2 *)(unaff_r14 + 0x249e);
          func_0x021127b4(unaff_r14 + 0x6a4,0,0x1e);
          func_0x021127a8(unaff_r14 + 0x6a4,unaff_r14 + 0x24a0,*(byte *)(unaff_r14 + 0x2499) - 3);
          return;
        }
        if (cVar4 == 'R') {
          *(undefined2 *)(unaff_r14 + 0x9a) = *(undefined2 *)(unaff_r14 + 0x249e);
          func_0x021127b4(unaff_r14 + 0x6a4,0,0x1e);
          func_0x021127a8(unaff_r14 + 0x6a4,unaff_r14 + 0x24a0,*(byte *)(unaff_r14 + 0x2499) - 3);
          return;
        }
        goto switchD_01e0ab92_caseD_3;
      }
      uVar7 = (uint)*(ushort *)(unaff_r14 + 0x249e);
      if (*(short *)(unaff_r14 + 0x24a2) == 0x2800) {
        if (uVar7 == 0xc) {
          FUN_01e09a12(0x11,unaff_r8 + 0xb10,0x15);
          goto switchD_01e0ab92_caseD_3;
        }
        if (uVar7 == 1) {
          FUN_01e09a12(0x11,unaff_r8 + 0x5c8,0xd);
          goto switchD_01e0ab92_caseD_3;
        }
      }
LAB_01e0b362:
      uVar6 = 0x10;
    }
    goto LAB_01e0b364;
  }
  if (unaff_r9 != iVar2) {
    if (unaff_r9 == *(ushort *)(unaff_r12 + 0x10) + 0x1000) {
      FUN_01e367de(unaff_r8 + 0xfd7);
      FUN_01e367de(unaff_r8 + 0x2b1d,*(undefined1 *)(unaff_r14 + 0x2499));
    }
    goto switchD_01e0ab92_caseD_3;
  }
  if (unaff_r5 == 6) {
    switch(*(undefined1 *)(unaff_r14 + 0x249d)) {
    case 1:
      FUN_01e07ef8(2,unaff_r8 + 0x17e,6);
      func_0x021127a8(unaff_r14 + 0x3a7,unaff_r14 + 0x249d,7);
      return;
    case 3:
      FUN_01e07ef8(3,unaff_r14 + 0x4e0,0x10);
      break;
    case 4:
      FUN_01e07ef8(4,unaff_r12 + 0x100,0x10);
      func_0x021127a8(unaff_r14 + 0x4b0,unaff_r14 + 0x249e,8);
      return;
    case 8:
      func_0x021127a8(unaff_r14 + 0x530,unaff_r14 + 0x249e,0x10);
      return;
    case 9:
      func_0x021127a8(unaff_r14 + 0x38d,unaff_r14 + 0x249f,6);
      return;
    }
    goto switchD_01e0ab92_caseD_3;
  }
  if (unaff_r5 == 5) {
    if (*(char *)(unaff_r14 + 0x249d) == '\x13') {
      if (*(char *)(unaff_r14 + 0x24a1) == '\x01') {
        FUN_01e367de(unaff_r8 + 0x1888);
      }
    }
    else if (*(char *)(unaff_r14 + 0x249d) == '\x12') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto switchD_01e0ab92_caseD_3;
  }
  if (unaff_r5 != 4) goto switchD_01e0ab92_caseD_3;
  cVar4 = *(char *)(unaff_r14 + 0x249d);
  switch(cVar4) {
  case '\x02':
    FUN_01e09a12(3,unaff_r8 + 8,2);
    *(undefined1 *)(unaff_r14 + 6) = 0x4a;
    *(undefined1 *)(unaff_r14 + 7) = 0;
    *(undefined1 *)(unaff_r14 + 8) = 0xb;
    *(undefined1 *)(unaff_r14 + 9) = 1;
    FUN_01e07eaa(2);
    FUN_01e07edc();
    break;
  case '\x03':
  case '\x05':
  case '\a':
  case '\t':
  case '\v':
  case '\r':
  case '\x0e':
  case '\x0f':
  case '\x11':
    break;
  case '\x04':
    uVar1 = *(undefined2 *)(unaff_r14 + 0x249e);
    cVar4 = *(char *)(unaff_r14 + 7);
    if (cVar4 == '\0') {
      FUN_01e09afc(uVar1,unaff_r12 + 0x1b4,0x20);
    }
    else if (cVar4 == '\x02') {
      FUN_01e09afc(uVar1,unaff_r12 + 0x1f8,0x28);
    }
    else if (cVar4 == '\x01') {
      FUN_01e09afc(uVar1,unaff_r12 + 0x2c4,0x38);
    }
    break;
  case '\x06':
    uVar7 = (uint)*(ushort *)(unaff_r14 + 0x249e);
    uVar6 = 6;
    goto LAB_01e0b364;
  case '\b':
    sVar9 = *(short *)(unaff_r14 + 0x24a2);
    if (sVar9 == 0x2a50) {
      FUN_01e09a12(9,unaff_r8 + 0x4c5,10);
      break;
    }
    if (sVar9 == 0x2a00) {
      FUN_01e09a12(9,unaff_r8 + 0xa6d,0x14);
      break;
    }
    uVar7 = (uint)*(ushort *)(unaff_r14 + 0x249e);
    if ((sVar9 != 0x2803) || (uVar7 == *(ushort *)(unaff_r14 + 0x24a0))) goto LAB_01e0b234;
    cVar4 = *(char *)(unaff_r14 + 7);
    if (cVar4 == '\0') {
      pbVar3 = unaff_r12 + 0x254;
LAB_01e0b938:
      uVar6 = 0x38;
    }
    else {
      if (cVar4 == '\x02') {
        pbVar3 = unaff_r12 + 0x28c;
        goto LAB_01e0b938;
      }
      if (cVar4 != '\x01') break;
      pbVar3 = unaff_r12 + 0x33c;
      uVar6 = 0x68;
    }
    FUN_01e09aba(uVar7,pbVar3,uVar6);
    break;
  case '\n':
    uVar7 = (uint)*(ushort *)(unaff_r14 + 0x249e);
    *(ushort *)(unaff_r14 + 0x9a) = *(ushort *)(unaff_r14 + 0x249e);
    switch(uVar7) {
    case 0x29:
    case 0x34:
      goto switchD_01e0b54a_caseD_29;
    case 0x2a:
    case 0x2b:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x35:
    case 0x36:
    case 0x38:
      goto switchD_01e0b54a_caseD_2a;
    case 0x2c:
    case 0x37:
      goto switchD_01e0b54a_caseD_2c;
    case 0x2d:
      if (*(char *)(unaff_r14 + 7) != '\x02') goto switchD_01e0ab92_caseD_3;
      iVar2 = unaff_r8 + 6;
      goto LAB_01e0b782;
    case 0x2e:
    case 0x39:
      goto switchD_01e0b54a_caseD_2e;
    }
    if (uVar7 != 0x4a) {
      if (uVar7 == 7) {
        func_0x021127b4(unaff_r14 + 0x6a4,0,0x1e);
        func_0x021127a8(unaff_r14 + 0x6a4,unaff_r8 + 0x3fc,8);
        return;
      }
      if (uVar7 == 0x14) {
        iVar2 = unaff_r8 + 0x128;
        uVar6 = 0xb;
        goto LAB_01e0b00a;
      }
      if (uVar7 == 0x16) {
        FUN_01e09a12(0xb,unaff_r8 + 0x178,6);
        break;
      }
      if (uVar7 == 0x18) {
        FUN_01e09a12(0xb,unaff_r8 + 0x1f7,7);
        break;
      }
      if (uVar7 == 0x21) {
switchD_01e0b54a_caseD_2c:
        FUN_01e09a12(0xb,unaff_r8 + 0x78,4);
      }
      else {
        if (uVar7 != 0x23) {
          if (uVar7 == 0x3f) goto switchD_01e0b54a_caseD_29;
          if (uVar7 == 0x42) goto switchD_01e0b54a_caseD_2c;
          if (uVar7 != 0x44) {
            if (uVar7 == 3) {
              FUN_01e09a12(0xb,unaff_r8 + 0x861,0x11);
              break;
            }
            goto switchD_01e0b54a_caseD_2a;
          }
        }
switchD_01e0b54a_caseD_2e:
        cVar4 = *(char *)(unaff_r14 + 7);
        if (cVar4 == '\x01') {
          FUN_01e09ede(unaff_r10 + 0xc5f,0x4c);
          cVar4 = *(char *)(unaff_r14 + 7);
        }
        if (cVar4 == '\0') {
          FUN_01e09ede(unaff_r10 + 0x19f8,0xfd);
          cVar4 = *(char *)(unaff_r14 + 7);
        }
        if (cVar4 == '\x02') {
          FUN_01e09ede(unaff_r10 + 0x1461,0x90);
        }
      }
      break;
    }
switchD_01e0b54a_caseD_29:
    cVar4 = *(char *)(unaff_r14 + 7);
    if (cVar4 == '\x01') {
      FUN_01e09a12(0xb,2);
      cVar4 = *(char *)(unaff_r14 + 7);
    }
    if (cVar4 == '\0') {
      FUN_01e09a12(0xb,unaff_r8 + 2,2);
      cVar4 = *(char *)(unaff_r14 + 7);
    }
    if (cVar4 != '\x02') break;
    iVar2 = unaff_r8 + 4;
LAB_01e0b782:
    uVar6 = 0xb;
    goto LAB_01e0ac1e;
  case '\f':
    uVar7 = (uint)*(ushort *)(unaff_r14 + 0x249e);
    *(ushort *)(unaff_r14 + 0x9a) = *(ushort *)(unaff_r14 + 0x249e);
    uVar1 = *(undefined2 *)(unaff_r14 + 0x24a0);
    if (((uVar7 - 0x2e < 0x17) && ((1 << uVar7 - 0x2e & 0x400801U) != 0)) || (uVar7 == 0x23)) {
      cVar4 = *(char *)(unaff_r14 + 7);
      if (cVar4 == '\x01') {
        FUN_01e09f1e(uVar7,unaff_r10 + 0xc5f,uVar1);
        cVar4 = *(char *)(unaff_r14 + 7);
      }
      if (cVar4 == '\0') {
        FUN_01e09f1e(uVar7,unaff_r10 + 0x19f8,uVar1);
        cVar4 = *(char *)(unaff_r14 + 7);
      }
      if (cVar4 == '\x02') {
        FUN_01e09f1e(uVar7,unaff_r10 + 0x1461,uVar1);
      }
      break;
    }
    uVar6 = 0xc;
LAB_01e0b364:
    FUN_01e09a4c(uVar6,uVar7);
    break;
  case '\x10':
    uVar7 = (uint)*(ushort *)(unaff_r14 + 0x249e);
    if (*(short *)(unaff_r14 + 0x24a2) == 0x2800) {
      cVar4 = *(char *)(unaff_r14 + 7);
      if (cVar4 == '\0') {
        pbVar3 = unaff_r12 + 0xa0;
      }
      else {
        if (cVar4 != '\x02') {
          if (cVar4 == '\x01') {
            FUN_01e09a7e(uVar7,unaff_r12 + 0x148,0x18);
          }
          break;
        }
        pbVar3 = unaff_r12 + 0xb0;
      }
      FUN_01e09a7e(uVar7,pbVar3,0x10);
      break;
    }
    goto LAB_01e0b362;
  case '\x12':
    goto switchD_01e0ab92_caseD_12;
  default:
    if (cVar4 == '\x1d') {
      FUN_01e09a12(0x1e,0,0);
    }
    else if (cVar4 == 'R') {
      *(undefined2 *)(unaff_r14 + 0x9a) = *(undefined2 *)(unaff_r14 + 0x249e);
      func_0x021127b4(unaff_r14 + 0x6a4,0,0x1e);
      func_0x021127a8(unaff_r14 + 0x6a4,unaff_r14 + 0x24a0,*(byte *)(unaff_r14 + 0x2499) - 3);
      return;
    }
  }
switchD_01e0ab92_caseD_3:
  if (*(char *)(unaff_r14 + 0x174) != '\0') {
    if ((*unaff_r12 < 8) && ((1 << (uint)*unaff_r12 & 0x92U) != 0)) {
      uVar6 = 0x2a0;
    }
    else {
      uVar6 = 0;
    }
    FUN_01e09f92(uVar6);
    *(undefined1 *)(unaff_r14 + 0x17c) = 0;
  }
  if (*(char *)(unaff_r14 + 0x170) != '\0') {
    if (*(char *)(unaff_r14 + 0x160) == '\0') {
      FUN_01e08976();
      *(undefined1 *)(unaff_r14 + 0x160) = 1;
      FUN_01e0308a();
      switch(*unaff_r12) {
      case 1:
      case 4:
        break;
      case 2:
      case 9:
        *(undefined1 *)(unaff_r14 + 0x1990) = 0xa1;
        *(undefined1 *)(unaff_r14 + 0x1991) = 7;
        *(undefined2 *)(unaff_r14 + 0x1994) = 0x8080;
        *(undefined2 *)(unaff_r14 + 0x1992) = 0x8080;
        *(undefined1 *)(unaff_r14 + 0x1996) = 8;
        *(undefined1 *)(unaff_r14 + 0x199a) = 0;
        *(undefined1 *)(unaff_r14 + 0x1999) = 0;
        *(undefined1 *)(unaff_r14 + 0x1998) = 0;
        *(undefined1 *)(unaff_r14 + 0x1997) = 0;
        *(undefined1 *)(unaff_r14 + 5) = 0xc;
        break;
      default:
        *(undefined1 *)(unaff_r14 + 0x20) = 1;
        for (iVar2 = 0; iVar2 != 0x32; iVar2 = iVar2 + 1) {
          *(undefined1 *)(iVar2 + unaff_r14 + 0x1990) = *(undefined1 *)(iVar2 + unaff_r8 + 0x3772);
        }
        bVar8 = unaff_r12[4];
        *(undefined1 *)(unaff_r14 + 0x1992) = 1;
        *(byte *)(unaff_r14 + 0x1993) = bVar8;
        break;
      case 7:
        for (iVar2 = 0; iVar2 != 0x11; iVar2 = iVar2 + 1) {
          *(undefined1 *)(iVar2 + unaff_r14 + 0x1990) = *(undefined1 *)(iVar2 + unaff_r8 + 0x883);
        }
      }
      if (*(short *)(unaff_r14 + 0xa0) == 0) {
        uVar1 = FUN_01e370ba(&LAB_01e0cfe6,0x32);
        *(undefined2 *)(unaff_r14 + 0xa0) = uVar1;
      }
      *(undefined1 *)(unaff_r14 + 0x168) = 0;
      FUN_01e3722c(0,FUN_01e08306,200);
      FUN_01e3721e(0,&LAB_01e0cfa8,1000);
      FUN_01e07f2e(2);
    }
    if (*(char *)(unaff_r14 + 0x14c) != '\0') {
      *(undefined1 *)(unaff_r14 + 9) = 2;
    }
    *(undefined1 *)(unaff_r14 + 0x14c) = 0;
    *(undefined1 *)(unaff_r14 + 0x14) = 4;
  }
  return;
}



// ==== caseD_38 @ 01e0c5ea ====

/* WARNING: Control flow encountered bad instruction data */

void switchD_01e0b670::caseD_38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e0d03c @ 01e0d03c ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x01e0d048) */

undefined8 FUN_01e0d03c(void)

{
  return 0xff00006d00;
}



// ==== FUN_01e0d05c @ 01e0d05c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e0d05c(undefined4 param_1,undefined1 *param_2)

{
  undefined2 uVar1;
  short sVar2;
  char *pcVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  
  if (_DAT_0000686c == 0) {
    _DAT_0000686e = _DAT_0000686e + 1;
    if ((3 < _DAT_0000686e) && (_DAT_0000686e = 0, DAT_00006a88 == '\0')) {
      DAT_00006a88 = 1;
      DAT_000069b0 = 0;
      FUN_01e238b0(&DAT_01e1b1ac,_DAT_0000413e,0x13);
      return 0;
    }
    uVar7 = (uint)DAT_00004132;
    _DAT_0000686c = 100;
    if (uVar7 == 0xfe) {
      uVar7 = FUN_01e08b06();
      DAT_00004132 = (byte)uVar7;
      if (uVar7 == 0xff) {
        return 0;
      }
      iVar6 = uVar7 * 10;
      sVar2 = _DAT_00004142 + 1;
      *(short *)(&DAT_000073ac + iVar6) = _DAT_00004142;
      _DAT_00004142 = sVar2;
      (&DAT_000073a8)[iVar6] = 1;
      *(short *)(&DAT_000073ae + iVar6) = (short)param_1;
    }
    *param_2 = (char)uVar7;
    uVar4 = (uint)DAT_00004133;
    if (uVar4 == 0xfe) {
      uVar4 = FUN_01e0d03c();
      DAT_00004133 = (byte)uVar4;
      if (uVar4 == 0xff) {
        return 0;
      }
    }
    DAT_0000224b = 0xc0;
    DAT_0000224c = 0;
    DAT_0000224d = 2;
    DAT_0000224e = DAT_00004131;
    DAT_0000224f = 0;
    _DAT_00006870 = (ushort)DAT_00004131;
    (&DAT_00006d00)[uVar4 * 4] = 1;
    *(ushort *)((uVar4 * 4 + 0x6a61) * 2) = (ushort)DAT_00004131;
    DAT_00002250 = 4;
    DAT_00002251 = 0;
    DAT_00002252 = (undefined1)((uint)param_1 >> 8);
    uVar1 = *(undefined2 *)(uVar7 * 10 + 0x6db6);
    DAT_00004131 = DAT_00004131 + 1;
    DAT_00002254 = (undefined1)uVar1;
    DAT_00002255 = (undefined1)((ushort)uVar1 >> 8);
    DAT_00002253 = DAT_00002252;
    FUN_01e08a68(4);
    FUN_01e08a9c();
    return 0;
  }
  pcVar3 = &DAT_00006d00;
  cVar5 = -1;
  uVar7 = 0;
  while( true ) {
    if (uVar7 < 3) {
      return 0;
    }
    if ((*(short *)(pcVar3 + 2) == _DAT_00006870) && (*pcVar3 == '\x02')) break;
    pcVar3 = pcVar3 + 4;
    cVar5 = cVar5 + -1;
    uVar7 = uVar7 + 1;
  }
  *pcVar3 = '\0';
  if (cVar5 == '\0') {
    return 0;
  }
  DAT_00004132 = 0xfe;
  DAT_00004133 = 0xfe;
  _DAT_0000686c = 0;
  _DAT_0000686e = 0;
  return 1;
}



// ==== FUN_01e0d46e @ 01e0d46e ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0d46e(void)

{
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  
  _DAT_001e5040 = _DAT_001e5040 | 0x200;
  _DAT_001e5048 = _DAT_001e5048 & 0x200;
  thunk_FUN_01e051d8(10);
  *extraout_r1 = *extraout_r1 | 0x80;
  extraout_r1[2] = extraout_r1[2] & 0xffffff7f;
  thunk_FUN_01e051d8(0x14);
  *extraout_r1_00 = *extraout_r1_00 & 0x200;
  extraout_r1_00[2] = extraout_r1_00[2] & 0x200;
  thunk_FUN_01e051d8(10);
  *extraout_r1_01 = *extraout_r1_01 & 0xffffff7f;
  extraout_r1_01[2] = extraout_r1_01[2] & 0xffffff7f;
  thunk_FUN_01e051d8(10);
  return;
}



// ==== FUN_01e0d4b0 @ 01e0d4b0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e0d4b0(uint param_1)

{
  uint uVar1;
  uint extraout_r1;
  uint extraout_r1_00;
  uint *puVar2;
  int iVar3;
  
  puVar2 = (uint *)&DAT_001e5040;
  _DAT_001e5040 = _DAT_001e5040 & 0xffffff7f;
  _DAT_001e5048 = _DAT_001e5048 & 0xffffff7f;
  for (iVar3 = 0; iVar3 != 8; iVar3 = iVar3 + 1) {
    uVar1 = *puVar2 & 0xfffffdff;
    if ((0x80U >> iVar3 & param_1) != 0) {
      uVar1 = *puVar2 | 0x200;
    }
    *puVar2 = uVar1;
    puVar2[2] = puVar2[2] & 0x200;
    thunk_FUN_01e051d8(10);
    *puVar2 = *puVar2 | 0x80;
    puVar2[2] = puVar2[2] & 0xffffff7f;
    thunk_FUN_01e051d8(0x14);
    *puVar2 = *puVar2 & 0xffffff7f;
    puVar2[2] = puVar2[2] & 0xffffff7f;
    thunk_FUN_01e051d8(10);
    param_1 = extraout_r1;
  }
  puVar2[2] = puVar2[2] | 0x200;
  *puVar2 = *puVar2 & 0xffffff7f;
  puVar2[2] = puVar2[2] & 0xffffff7f;
  thunk_FUN_01e051d8(10);
  *puVar2 = *puVar2 | 0x80;
  puVar2[2] = puVar2[2] & 0xffffff7f;
  thunk_FUN_01e051d8(10);
  thunk_FUN_01e051d8(10,puVar2[1]);
  *puVar2 = *puVar2 & 0xffffff7f;
  puVar2[2] = puVar2[2] & 0xffffff7f;
  thunk_FUN_01e051d8(10);
  puVar2[2] = puVar2[2] & 0x200;
  *puVar2 = *puVar2 & 0x200;
  puVar2[2] = puVar2[2] & 0x200;
  return ~(extraout_r1_00 >> 9) & 1;
}



// ==== FUN_01e0d554 @ 01e0d554 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e0d554(int param_1)

{
  uint uVar1;
  int extraout_r1;
  uint uVar2;
  uint *puVar3;
  char cVar4;
  
  puVar3 = (uint *)&DAT_001e5040;
  _DAT_001e5048 = _DAT_001e5048 | 0x200;
  uVar2 = 0;
  for (cVar4 = '\b'; cVar4 != '\0'; cVar4 = cVar4 + -1) {
    thunk_FUN_01e051d8(10,uVar2);
    *puVar3 = *puVar3 | 0x80;
    puVar3[2] = puVar3[2] & 0xffffff7f;
    thunk_FUN_01e051d8(10);
    uVar1 = puVar3[1];
    thunk_FUN_01e051d8(10);
    *puVar3 = *puVar3 & 0xffffff7f;
    puVar3[2] = puVar3[2] & 0xffffff7f;
    thunk_FUN_01e051d8(10);
    thunk_FUN_01e051d8(10);
    uVar2 = (uVar1 & 0x200) >> 9 | uVar2 << 1;
    param_1 = extraout_r1;
  }
  puVar3[2] = puVar3[2] & 0x200;
  if (param_1 == 0) {
    uVar1 = *puVar3 | 0x200;
  }
  else {
    uVar1 = *puVar3 & 0xfffffdff;
  }
  *puVar3 = uVar1;
  puVar3[2] = puVar3[2] & 0x200;
  thunk_FUN_01e051d8(10,uVar2);
  *puVar3 = *puVar3 | 0x80;
  puVar3[2] = puVar3[2] & 0xffffff7f;
  thunk_FUN_01e051d8(0x14);
  *puVar3 = *puVar3 & 0xffffff7f;
  puVar3[2] = puVar3[2] & 0xffffff7f;
  thunk_FUN_01e051d8(10);
  return uVar2 & 0xff;
}



// ==== FUN_01e0d5e4 @ 01e0d5e4 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0d5e4(void)

{
  uint *extraout_r1;
  uint *extraout_r1_00;
  
  _DAT_001e5040 = _DAT_001e5040 & 0x200;
  _DAT_001e5048 = _DAT_001e5048 & 0x200;
  thunk_FUN_01e051d8(10);
  *extraout_r1 = *extraout_r1 | 0x80;
  extraout_r1[2] = extraout_r1[2] & 0xffffff7f;
  thunk_FUN_01e051d8(0x14);
  *extraout_r1_00 = *extraout_r1_00 | 0x200;
  extraout_r1_00[2] = extraout_r1_00[2] & 0x200;
  thunk_FUN_01e051d8(10);
  return;
}



// ==== FUN_01e0d618 @ 01e0d618 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0d618(void)

{
  _DAT_001e5014 = _DAT_001e5014 & 0x8000;
  _DAT_001e5000 = _DAT_001e5000 & 0x8000;
  _DAT_001e5008 = _DAT_001e5008 & 0x8000;
  _DAT_001e5010 = _DAT_001e5010 | 0x8000;
  return;
}



// ==== FUN_01e0d634 @ 01e0d634 ====

void FUN_01e0d634(uint param_1)

{
  uint uVar1;
  uint extraout_r1;
  int iVar2;
  uint *puVar3;
  
  iVar2 = 0;
  puVar3 = (uint *)&DAT_001e5000;
  while( true ) {
    *puVar3 = *puVar3 & 0x8000;
    puVar3[2] = puVar3[2] & 0x8000;
    if (iVar2 == 8) break;
    uVar1 = *puVar3 & 0xffff7fff;
    if ((0x80U >> iVar2 & param_1) != 0) {
      uVar1 = *puVar3 | 0x8000;
    }
    *puVar3 = uVar1;
    puVar3[2] = puVar3[2] & 0x8000;
    thunk_FUN_01e051d8(0x15);
    *puVar3 = *puVar3 | 0x8000;
    puVar3[2] = puVar3[2] & 0x8000;
    thunk_FUN_01e051d8(0x15);
    iVar2 = iVar2 + 1;
    param_1 = extraout_r1;
  }
  thunk_FUN_01e051d8(0x15);
  return;
}



// ==== FUN_01e0d686 @ 01e0d686 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e0d686(void)

{
  uint *puVar1;
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (uint *)&DAT_001e5000;
  _DAT_001e5010 = _DAT_001e5010 & 0x8000;
  _DAT_001e5014 = _DAT_001e5014 & 0x8000;
  _DAT_001e5008 = _DAT_001e5008 | 0x8000;
  _DAT_001e500c = 0x8000;
  uVar3 = 0;
  for (uVar2 = 8; (uVar2 & 0xff) != 0; uVar2 = uVar2 - 1) {
    *puVar1 = *puVar1 & 0x8000;
    puVar1[2] = puVar1[2] & 0x8000;
    thunk_FUN_01e051d8(0x15);
    uVar4 = extraout_r1[1];
    *extraout_r1 = *extraout_r1 | 0x8000;
    extraout_r1[2] = extraout_r1[2] & 0x8000;
    thunk_FUN_01e051d8(0x15);
    uVar3 = (uVar4 & 0x8000) >> 0xf | uVar3 << 1;
    puVar1 = extraout_r1_00;
  }
  return uVar3 & 0xff;
}



// ==== FUN_01e0d6e8 @ 01e0d6e8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0d6e8(void)

{
  _DAT_001e5014 = _DAT_001e5014 & 0x8000;
  _DAT_001e5000 = 0x8000;
  _DAT_001e5008 = _DAT_001e5008 & 0x8000;
  _DAT_001e5010 = 0x8000;
  return;
}



// ==== FUN_01e0d728 @ 01e0d728 ====

void FUN_01e0d728(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    for (iVar2 = 0; iVar2 != 5; iVar2 = iVar2 + 1) {
      uVar1 = FUN_01e0d554(1);
      *(undefined1 *)(param_1 + iVar2) = uVar1;
    }
    uVar1 = FUN_01e0d554(0);
    *(undefined1 *)(param_1 + 5) = uVar1;
  }
  return;
}



// ==== FUN_01e0d74c @ 01e0d74c ====

void FUN_01e0d74c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    for (iVar2 = 0; iVar2 != 6; iVar2 = iVar2 + 1) {
      uVar1 = FUN_01e0d686();
      *(undefined1 *)(param_1 + iVar2) = uVar1;
    }
  }
  return;
}



// ==== FUN_01e0d764 @ 01e0d764 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0d764(undefined1 *param_1)

{
  ushort uVar1;
  short sVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_sp;
  short local_2c;
  short sStack_2a;
  
  if ((DAT_000069dc != '\0') || ((DAT_000069d0 & 1) != 0)) {
    return;
  }
  iVar5 = 0;
  do {
    if (iVar5 != 2) {
      if (iVar5 == 6) {
        if (DAT_00006ac0 != '\0' || DAT_00006ac1 != '\0') {
          return;
        }
        if (0x200 < (ushort)(local_2c + 0x100U)) {
          return;
        }
        if (0x200 < (ushort)(sStack_2a + 0x100U)) {
          return;
        }
        iVar5 = 0;
        while( true ) {
          if (iVar5 == 6) {
            if ((ushort)(_DAT_000068c6 + 1) < 0x191) {
              _DAT_000068c6 = _DAT_000068c6 + 1;
              return;
            }
            _DAT_000068c6 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          sVar2 = *(short *)(iVar5 + 0x6c3a);
          if ((*(short *)(iVar5 + 0x6c46) + -0x20 <= (int)sVar2) &&
             ((int)sVar2 <= *(short *)(iVar5 + 0x6c46) + 0x20)) break;
          *(short *)(iVar5 + 0x6c46) = sVar2;
          *(short *)((iVar5 + 0x6a09) * 2) = sVar2;
          *(short *)((iVar5 + 0x6a0f) * 2) = sVar2;
          _DAT_000068c6 = 0;
          iVar5 = iVar5 + 2;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar3 = *param_1;
      uVar4 = param_1[1];
      uVar1 = *(ushort *)(iVar5 + 0x41c4);
      *(ushort *)((iVar5 + 0x6c34) * 2) = CONCAT11(uVar3,uVar4);
      iVar6 = (uint)CONCAT11(uVar3,uVar4) - (uint)uVar1;
      *(short *)(((int)&local_2c + iVar5) * 2) = (short)iVar6;
      *param_1 = (char)((uint)iVar6 >> 8);
      param_1[1] = (char)iVar6;
    }
    param_1 = param_1 + 2;
    iVar5 = iVar5 + 1;
  } while( true );
}



// ==== FUN_01e0d898 @ 01e0d898 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0d898(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  BADSPACEBASE *in_sp;
  undefined1 *puVar20;
  undefined1 *puVar21;
  byte *pbVar22;
  undefined5 uVar23;
  undefined1 local_40 [12];
  
  puVar13 = local_40;
  puVar20 = local_40;
  cVar4 = -0x40;
  if (DAT_00006dc4 != '\x02') {
    if (DAT_00006dc4 == '\x01') {
      uVar8 = (uint)DAT_00006dc2;
      iVar12 = uVar8 * 0x10;
      uVar16 = (uint)(byte)(&DAT_01e1a547)[iVar12];
      iVar7 = CONCAT22(CONCAT11((&DAT_01e1a549)[iVar12],(&DAT_01e1a54a)[iVar12]),
                       *(undefined2 *)(&DAT_01e1a548 + iVar12));
      uVar19 = (uint)DAT_00006dc3;
      uVar18 = (byte)(&DAT_01e1a546)[iVar12] / uVar16;
      if (uVar8 == 0x11) {
        if (uVar19 < uVar18) {
          puVar13 = (undefined1 *)(iVar7 + (uVar16 * uVar19 & 0xff));
          FUN_01e0d618();
          FUN_01e0d634(puVar13[1]);
          FUN_01e0d634(*puVar13);
          FUN_01e0d6e8();
        }
      }
      else if (uVar19 < uVar18) {
        uVar11 = (uint)(byte)(&DAT_01e1a53e)[iVar12];
        FUN_01e0d46e(uVar11);
        FUN_01e0d4b0(uVar11);
        puVar13 = (undefined1 *)(iVar7 + (uVar16 * uVar19 & 0xff));
        if (uVar8 == 0x10) {
          FUN_01e0d4b0(puVar13[2]);
        }
        FUN_01e0d4b0(puVar13[1]);
        FUN_01e0d4b0(*puVar13);
        FUN_01e0d5e4();
      }
      if (DAT_00006dc3 < uVar18) {
        DAT_00006823 = DAT_00006dc3 + 1;
        return;
      }
      DAT_00006823 = 0;
      DAT_00006824 = 2;
      return;
    }
    if (DAT_00006dc4 != '\0') {
      return;
    }
    iVar12 = 0;
    DAT_000069b4 = 0;
    DAT_00006814 = 0;
    func_0x021127b4(0x722e,0,0x48);
    DAT_00006821 = 0;
    for (uVar19 = 0; uVar2 = DAT_00006821, uVar3 = DAT_00006822, cVar17 = DAT_00006dc1,
        0x10 < uVar19; uVar19 = uVar19 + 1) {
      bVar9 = (&DAT_01e1a540)[iVar12];
      bVar5 = (&DAT_01e1a53f)[iVar12];
      if (iVar12 == 0x110) {
        _DAT_001e5008 = _DAT_001e5008 & 0x8000;
        _DAT_001e5014 = _DAT_001e5014 & 0x8000;
        _DAT_001e5000 = 0x8000;
        _DAT_001e5010 = _DAT_001e5010 | 0x8000;
        FUN_01e0d618();
        FUN_01e0d634(bVar5 ^ 0x80);
        uVar6 = FUN_01e0d686();
        uVar23 = FUN_01e0d6e8(uVar6);
        uVar2 = (char)((uint5)uVar23 >> 0x20);
        uVar3 = (char)param_1;
        cVar17 = cRam01e1a64c;
        if ((uint)uVar23 == (uint)bVar9) break;
      }
      else {
        cVar1 = (&DAT_01e1a53e)[iVar12];
        _DAT_001e5048 = _DAT_001e5048 & 0x200;
        _DAT_001e5054 = _DAT_001e5054 & 0x200;
        _DAT_001e504c = _DAT_001e504c | 0x280;
        _DAT_001e5040 = _DAT_001e5040 | 0x280;
        _DAT_001e5050 = _DAT_001e5050 & 0x200;
        FUN_01e0d46e();
        iVar7 = FUN_01e0d4b0(cVar1);
        if (iVar7 != 0) {
          FUN_01e0d4b0(bVar5);
          FUN_01e0d46e();
          FUN_01e0d4b0(cVar1 + '\x01');
          cVar17 = (&DAT_01e1a53c)[iVar12];
          if (cVar17 == '\x12') {
            FUN_01e0d554(1);
            FUN_01e0d554(1);
          }
          uVar8 = FUN_01e0d554(0);
          FUN_01e0d5e4();
          uVar2 = uRam01e1a601;
          if (iVar12 == 0xc0) {
            FUN_01e0d46e();
            FUN_01e0d4b0(cVar1);
            FUN_01e0d4b0(uVar2);
            FUN_01e0d46e();
            FUN_01e0d4b0(cVar1 + '\x01');
            cVar4 = FUN_01e0d554(0);
            FUN_01e0d5e4();
          }
          if ((uVar8 == bVar9) &&
             ((uVar2 = iVar12 != 0xc0, uVar3 = (char)param_1, cVar4 == (&DAT_01e1a542)[iVar12] ||
              ((bool)uVar2)))) break;
        }
      }
      iVar12 = iVar12 + 0x10;
    }
    DAT_00006822 = uVar3;
    DAT_00006821 = uVar2;
    if (cVar17 == '\0') {
      return;
    }
    DAT_00006824 = 1;
    return;
  }
  puVar21 = local_40;
  if (DAT_00006dc1 == '\f') {
    if (DAT_00006dc2 == 0x11) {
      FUN_01e0d618();
      FUN_01e0d634(0xad);
      uVar19 = FUN_01e0d686();
      FUN_01e0d6e8();
      puVar13 = puVar20;
    }
    else {
      cVar4 = (&DAT_01e1a53e)[(uint)DAT_00006dc2 * 0x10];
      FUN_01e0d46e();
      FUN_01e0d4b0(cVar4);
      FUN_01e0d4b0(0x2d);
      FUN_01e0d46e();
      FUN_01e0d4b0(cVar4 + '\x01');
      uVar19 = FUN_01e0d554(0);
      FUN_01e0d5e4();
    }
    puVar21 = puVar13;
    if ((uVar19 & 1) == 0) {
      return;
    }
  }
  iVar12 = (uint)DAT_00006dc2 * 0x10;
  bVar5 = (&DAT_01e1a545)[iVar12];
  bVar9 = (&DAT_01e1a544)[iVar12];
  if (DAT_00006dc2 == 0x11) {
    FUN_01e0d618();
    FUN_01e0d634(bVar9 ^ 0x80);
    pbVar22 = puVar21;
    FUN_01e0d74c(puVar21);
    FUN_01e0d6e8();
    FUN_01e0d618();
    FUN_01e0d634(bVar5 ^ 0x80);
    FUN_01e0d74c(puVar21 + 6);
    FUN_01e0d6e8();
  }
  else {
    cVar4 = (&DAT_01e1a53e)[iVar12];
    FUN_01e0d46e();
    FUN_01e0d4b0(cVar4);
    FUN_01e0d4b0(bVar9);
    FUN_01e0d5e4();
    FUN_01e0d46e();
    FUN_01e0d4b0(cVar4 + '\x01');
    pbVar22 = puVar21;
    if (DAT_00006dc1 == '\x12') {
      FUN_01e0d554(1);
      FUN_01e0d554(1);
      pbVar22 = puVar21;
    }
    FUN_01e0d728(pbVar22);
    FUN_01e0d5e4();
    FUN_01e0d46e();
    FUN_01e0d4b0(cVar4);
    FUN_01e0d4b0(bVar5);
    FUN_01e0d5e4();
    FUN_01e0d46e();
    FUN_01e0d4b0(cVar4 + '\x01');
    if (DAT_00006dc1 == '\x12') {
      FUN_01e0d554(1);
      FUN_01e0d554(1);
    }
    FUN_01e0d728(pbVar22 + 6);
    FUN_01e0d5e4();
  }
  cVar17 = DAT_00004136;
  cVar4 = DAT_00004130;
  if (9 < DAT_00006dc2) {
    for (iVar12 = 0; iVar12 != 0xc; iVar12 = iVar12 + 2) {
      pbVar10 = pbVar22 + iVar12;
      bVar5 = *pbVar10;
      *pbVar10 = pbVar10[1];
      pbVar10[1] = bVar5;
    }
  }
  if (DAT_00006dc1 == '\x12') {
LAB_01e0dc34:
    uVar6 = *(undefined4 *)pbVar22;
    bVar5 = (byte)*(undefined4 *)(pbVar22 + 2);
    *pbVar22 = bVar5;
    pbVar22[2] = (byte)uVar6;
    uVar6 = *(undefined4 *)(pbVar22 + 1);
    bVar9 = (byte)*(undefined4 *)(pbVar22 + 3);
    pbVar22[1] = bVar9;
    pbVar22[3] = (byte)uVar6;
    uVar6 = *(undefined4 *)(pbVar22 + 6);
    pbVar22[6] = (byte)*(undefined4 *)(pbVar22 + 8);
    pbVar22[8] = (byte)uVar6;
    iVar12 = 7;
    iVar7 = 6;
    iVar14 = 1;
    iVar15 = 0;
  }
  else {
    if (DAT_00006dc1 != '\x10') {
      if (DAT_00006dc1 != '\v') goto LAB_01e0dcd8;
      goto LAB_01e0dc34;
    }
    uVar6 = *(undefined4 *)pbVar22;
    *pbVar22 = (char)*(undefined4 *)(pbVar22 + 2);
    bVar5 = (byte)uVar6;
    pbVar22[2] = bVar5;
    uVar6 = *(undefined4 *)(pbVar22 + 1);
    pbVar22[1] = (byte)*(undefined4 *)(pbVar22 + 3);
    bVar9 = (byte)uVar6;
    pbVar22[3] = bVar9;
    uVar6 = *(undefined4 *)(pbVar22 + 6);
    pbVar22[6] = (byte)*(undefined4 *)(pbVar22 + 8);
    pbVar22[8] = (byte)uVar6;
    iVar12 = 9;
    iVar7 = 8;
    iVar14 = 3;
    iVar15 = 2;
  }
  uVar6 = *(undefined4 *)(pbVar22 + 7);
  pbVar22[7] = (byte)*(undefined4 *)(pbVar22 + 9);
  pbVar22[9] = (byte)uVar6;
  pbVar22[iVar15] = bVar5;
  pbVar22[iVar14] = bVar5 & bVar9;
  pbVar22[iVar7] = pbVar22[iVar7];
  pbVar22[iVar12] = pbVar22[iVar12];
LAB_01e0dcd8:
  FUN_01e0d764(pbVar22);
  if ((cVar4 != '\x03') && (cVar17 != '\x01')) {
    func_0x021127a8(0x722e,pbVar22,0xc);
    return;
  }
  iVar12 = 0;
  DAT_00006814 = 0;
  if ((byte)(DAT_00006cc4 + 1U) < 6) {
    DAT_00006814 = DAT_00006cc4 + 1U;
  }
  uVar19 = (uint)DAT_00006814;
  for (; iVar12 != 0xc; iVar12 = iVar12 + 1) {
    *(byte *)(uVar19 * 0xc + 0x722e + iVar12) = pbVar22[iVar12];
  }
  if (uVar19 < 4) {
    DAT_000069b4 = 1;
  }
  return;
}



// ==== FUN_01e0ddf2 @ 01e0ddf2 ====

uint FUN_01e0ddf2(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0xffffffea;
  if (param_1 < 2) {
    uVar1 = func_0x02000058(0x8098);
    uVar1 = uVar1 >> param_1 & 1;
  }
  return uVar1;
}



// ==== FUN_01e0de0e @ 01e0de0e ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0de0e(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xffc0;
  for (iVar1 = -0x20; iVar1 != 0; iVar1 = iVar1 + 4) {
    *(undefined1 *)(iVar1 + 0x6f07) = param_2;
    *(undefined1 *)(iVar1 + 0x6f06) = 0;
    *(char *)(iVar1 + 0x6f05) = (char)((uint)param_1 >> 8);
    *(char *)(iVar1 + 0x6f04) = (char)param_1;
    *(undefined1 *)(iVar2 + 0x7130) = 0;
    *(undefined1 *)(iVar2 + 0x712f) = 0;
    *(undefined1 *)(iVar2 + 0x712e) = 0;
    *(undefined1 *)(iVar2 + 0x7132) = param_2;
    *(undefined1 *)(iVar1 + 0x6fc7) = 0;
    *(undefined1 *)(iVar1 + 0x6fc6) = 0;
    (&DAT_00006fc5)[iVar1] = 0;
    *(undefined1 *)(iVar1 + 0x6fc4) = 0;
    iVar2 = iVar2 + 8;
  }
  DAT_00006818 = 0;
  _DAT_00006a98 = &DAT_00006ee4;
  DAT_00006a94 = 1;
  DAT_00006a90 = 1;
  return;
}



// ==== FUN_01e0de78 @ 01e0de78 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0de78(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0x1f9;
  for (iVar2 = 0xffc0; iVar2 != 0; iVar2 = iVar2 + 8) {
    *(undefined1 *)(iVar2 + 0x7130) = 0;
    *(undefined1 *)(iVar2 + 0x712f) = 0;
    *(undefined1 *)(iVar2 + 0x712e) = 0;
    *(undefined1 *)(iVar2 + 0x7132) = 0x32;
    iVar3 = iVar1 * 4;
    (&DAT_000067c3)[iVar3] = 0;
    (&DAT_000067c2)[iVar3] = 0;
    (&DAT_000067c1)[iVar3] = 0;
    *(undefined1 *)(iVar3 + 0x67c0) = 0;
    iVar1 = iVar1 + 1;
  }
  DAT_00006818 = param_2;
  _DAT_00006a98 = param_1;
  DAT_00006a94 = 1;
  DAT_00006a90 = 1;
  return;
}



// ==== FUN_01e0dec0 @ 01e0dec0 ====

void FUN_01e0dec0(uint param_1)

{
  if (DAT_00006cca == param_1) {
    return;
  }
  DAT_0000681a = (undefined1)param_1;
  DAT_00006aa4 = 0;
  DAT_00006a9c = 1;
  switch(param_1) {
  case 0:
    FUN_01e0de0e(0);
    return;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    FUN_01e0de0e(0xffffff);
    DAT_00006aa4 = 1;
    return;
  case 9:
    FUN_01e0de78(&DAT_01e1f4d4);
    DAT_00006aa4 = 1;
    return;
  case 10:
    goto LAB_01e0df88;
  case 0xb:
    goto LAB_01e0df88;
  case 0xc:
    goto LAB_01e0df88;
  case 0xd:
    FUN_01e0de78(&DAT_01e20728);
    DAT_00006a9c = 0;
    return;
  case 0xe:
LAB_01e0df88:
    FUN_01e0de78();
switchD_01e0def0_default:
    return;
  default:
    goto switchD_01e0def0_default;
  }
  FUN_01e0de0e();
  return;
}



// ==== FUN_01e0df90 @ 01e0df90 ====

undefined2 FUN_01e0df90(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = (undefined2 *)&DAT_000075e0;
  iVar2 = 0;
  while( true ) {
    if (9 < iVar2) {
      return 0;
    }
    if (*(int *)(puVar1 + -2) == param_1) break;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + 1;
  }
  return *puVar1;
}



// ==== FUN_01e0dfb4 @ 01e0dfb4 ====

void FUN_01e0dfb4(byte *param_1,byte *param_2,byte param_3)

{
  uint uVar1;
  byte unaff_r4;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar7 = (uint)param_1[6];
  uVar10 = ((uint)*param_1 * 0xff) / uVar7;
  param_1[7] = param_3;
  uVar6 = ((uint)param_1[2] * 0xff) / uVar7;
  param_1[8] = (byte)uVar6;
  uVar11 = ((uint)param_1[3] * 0xff) / uVar7;
  param_1[9] = unaff_r4;
  uVar4 = ((uint)param_1[4] * 0xff) / uVar7;
  param_1[10] = (byte)uVar4;
  uVar3 = ((uint)param_1[5] * 0xff) / uVar7;
  bVar2 = (byte)uVar3;
  param_1[0xb] = bVar2;
  uVar1 = (uint)*param_2;
  if (uVar1 == 0) {
    return;
  }
  uVar7 = ((uint)param_1[1] * 0xff) / uVar7;
  uVar8 = uVar7 & 0xffff00ff;
  uVar9 = uVar7;
  if (uVar1 <= uVar8) {
    uVar9 = uVar1;
  }
  if (uVar8 < (uVar4 & 0xffff00ff)) {
    param_1[10] = (byte)uVar7;
    uVar4 = uVar7;
  }
  uVar7 = uVar4 & 0xffff00ff;
  if (uVar7 < (uVar6 & 0xffff00ff)) {
    param_1[8] = (byte)uVar4;
    uVar6 = uVar4;
  }
  if ((uVar3 & 0xffff00ff) < (uVar11 & 0xffff00ff)) {
    param_1[9] = bVar2;
    uVar11 = uVar3;
  }
  uVar4 = uVar6 & 0xffff00ff;
  if (uVar4 < (uVar10 & 0xffff00ff)) {
    param_1[7] = (byte)uVar6;
    uVar10 = uVar6;
  }
  uVar6 = uVar9 & 0xffff00ff;
  bVar5 = 0xff;
  if (uVar6 < uVar8) {
    if (uVar7 < uVar6) {
      bVar5 = bVar2 + (char)((int)((uVar6 - uVar7) * (~uVar3 & 0xff)) / (int)(uVar8 - uVar7));
    }
    else {
      if (uVar4 < uVar6) {
        if ((uVar3 & 0xff) != 0) {
          bVar5 = (char)(uVar11 & 0xffff00ff) +
                  (char)((int)((uVar6 - uVar4) * ((uVar3 & 0xffff00ff) - (uVar11 & 0xffff00ff))) /
                        (int)(uVar7 - uVar4));
          goto LAB_01e0e0ce;
        }
      }
      else {
        uVar7 = uVar10 & 0xffff00ff;
        if (uVar6 <= uVar7) {
          bVar5 = -((uVar9 & 0xff) == 0 || (uVar10 & 0xff) == 0);
          goto LAB_01e0e0ce;
        }
        if ((uVar11 & 0xff) != 0) {
          bVar5 = (byte)((int)((uVar6 - uVar7) * (uVar11 & 0xffff00ff)) / (int)(uVar4 - uVar7));
          goto LAB_01e0e0ce;
        }
      }
      bVar5 = 0;
    }
  }
LAB_01e0e0ce:
  *param_2 = bVar5;
  return;
}



// ==== FUN_01e0e0d2 @ 01e0e0d2 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e0e0d2(byte *param_1,byte param_2,byte param_3)

{
  param_1[7] = (byte)(((uint)*param_1 * 0x7f) / (uint)param_1[6]);
  param_1[8] = param_2;
  param_1[9] = param_2;
  param_1[10] = param_3;
  param_1[0xb] = param_1[5] * '\x7f';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e0e292 @ 01e0e292 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e0e292(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = FUN_01e0df90(0xf);
  iVar3 = FUN_01e0df90(0x50000f);
  uVar1 = _DAT_0000657e >> 4;
  FUN_01e19452(uVar1 & 0x1f);
  uVar4 = FUN_01e190f8(0x9999999a);
  uVar5 = FUN_01e193bc(0,uVar4);
  if ((uVar1 & 0x20) == 0) {
    uVar5 = uVar4;
  }
  FUN_01e188bc(uVar5,0);
  iVar6 = FUN_01e19416();
  return (uint)(iVar6 * iVar3) / uVar2;
}



// ==== FUN_01e0e2f6 @ 01e0e2f6 ====

char FUN_01e0e2f6(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  for (iVar1 = 0; iVar1 != 4; iVar1 = iVar1 + 1) {
    cVar2 = cVar2 + (&DAT_01e1b65d)
                    [(uint)(byte)(&DAT_000069c0)[iVar1] & ~(uint)(byte)(&DAT_01e1b810)[iVar1] & 0xf]
            + (&DAT_01e1b65d)
              [((uint)(byte)(&DAT_000069c0)[iVar1] & ~(uint)(byte)(&DAT_01e1b810)[iVar1]) >> 4];
  }
  return cVar2;
}



// ==== FUN_01e0e340 @ 01e0e340 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0e340(int param_1)

{
  _DAT_00007978 = 0;
  *(undefined2 *)(&DAT_00007978 + param_1 * 0x20) = 0;
  FUN_01e3780a(0x24,0x140);
  DAT_00006c06 = 0;
  (&DAT_00006c06)[param_1] = 0;
  return;
}



// ==== thunk_EXT_FUN_0200010a @ 01e0e36a ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e0e36e @ 01e0e36e ====

void FUN_01e0e36e(void)

{
  byte bVar1;
  
  DAT_000069c0 = DAT_000069c0 & 0xcf;
  DAT_000069c1 = DAT_000069c1 & 0x3f;
  DAT_000069c2 = DAT_000069c2 & 0xcf;
  DAT_000069c3 = DAT_000069c3 & 0xcf;
  bVar1 = 0x80;
  if ((0xc0 < DAT_000040fc) || (bVar1 = 0x40, DAT_000040fc < 0x40)) {
    DAT_000069c1 = DAT_000069c1 | bVar1;
  }
  bVar1 = 0x20;
  if ((0xc0 < DAT_000040fd) || (bVar1 = 0x10, DAT_000040fd < 0x40)) {
    DAT_000069c0 = DAT_000069c0 | bVar1;
  }
  bVar1 = 0x20;
  if ((0xc0 < DAT_000040fe) || (bVar1 = 0x10, DAT_000040fe < 0x40)) {
    DAT_000069c3 = DAT_000069c3 | bVar1;
  }
  bVar1 = 0x20;
  if ((0xc0 < DAT_000040ff) || (bVar1 = 0x10, DAT_000040ff < 0x40)) {
    DAT_000069c2 = DAT_000069c2 | bVar1;
  }
  return;
}



// ==== FUN_01e0e402 @ 01e0e402 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0e402(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (uint)DAT_000069c2;
  uVar4 = (uint)DAT_000069c0;
  uVar5 = uVar4 << 1;
  uVar2 = (uint)DAT_000069c1;
  uVar3 = (uint)DAT_000069c3;
  _DAT_00006a10 =
       (uVar4 & 1) << 3 | uVar5 & 4 | uVar2 |
       (uVar1 & 0xffffff40) >> 2 | (uint)(DAT_000069c2 >> 7) << 5 | (uVar2 & 8) << 3 | uVar5 & 0x100
       | uVar5 & 0x80 | (uVar2 & 0xffffff04) << 7 | (uVar1 & 0xffffff08) << 9 |
       (uVar1 & 0xffffff04) << 0xb | (uVar1 & 0xffffff02) << 0xd | (uVar1 & 0xffffff01) << 0xf |
       (uVar2 & 0xffffffc0) << 10 | (uVar4 & 0xffffff10) << 0xe | (uVar4 & 0xffffff20) << 0xe |
       (uVar3 & 0xffffff10) << 0x10 | (uVar3 & 0xffffff20) << 0x10 | (uVar1 & 0xffffff10) << 0x12 |
       (uVar1 & 0xffffff20) << 0x12;
  _DAT_00006a04 =
       _DAT_00006a10 | (uVar2 & 0xffffff01) << 10 | (uVar2 & 0xffffff02) << 10 |
       (uVar2 & 0xffffff10) << 0x18 | (uVar2 & 0xffffff20) << 0x18 | (uVar3 & 0xffffff04) << 0x1c |
       (uVar3 & 0xffffff40) << 0x12 | (uVar3 & 0x80) << 0x12;
  return;
}



// ==== FUN_01e0e500 @ 01e0e500 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0e500(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar6 = (uint)DAT_000069c2;
  uVar14 = (uVar6 & 0xffffff01) << 9;
  uVar15 = (uint)DAT_000069c0;
  uVar13 = (uint)DAT_000069c1;
  uVar7 = uVar15 & 0xffffff40;
  uVar1 = (uVar13 & 0xffffff01) << 10;
  _DAT_00006954 =
       (uVar15 & 0x80) << 9 |
       (uVar6 & 4) << 5 | (uVar6 & 8) << 3 | uVar14 | (uVar6 & 0xffffff02) << 7 | (uVar15 & 2) << 2
       | (uVar15 & 4) >> 2 | uVar13 & 4 | (uVar15 & 0xffffff08) >> 2 | (uVar6 & 0xffffff40) << 6 |
       (uVar13 & 0xffffff08) << 0xb | uVar7 << 9 | (uVar13 & 0xffffff04) << 0xf | uVar1 |
       uVar13 & 0xffffff20 | (uVar13 & 0xffffff02) << 10 | (DAT_000069c3 & 4) << 2;
  if ((DAT_000068ca != '\x02') && (DAT_00008ea6 != '\x04')) {
    if ((DAT_000069c0 & 0x40) == 0) {
      uVar14 = uVar7;
    }
    uVar10 = 1;
    if ((DAT_000069c2 & 2) == 0) {
      uVar10 = uVar6 & 0xffffff02;
    }
    uVar10 = uVar10 << 8;
    if ((DAT_000069c0 & 0x40) == 0) {
      uVar10 = uVar7;
    }
    uVar11 = (uVar6 & 8) << 3;
    if ((DAT_000069c0 & 0x40) == 0) {
      uVar11 = uVar7;
    }
    uVar12 = (uVar6 & 4) << 5;
    if ((DAT_000069c0 & 0x40) == 0) {
      uVar12 = uVar7;
    }
    uVar9 = 0;
    if ((DAT_000069c0 & 0x40) == 0) {
      uVar9 = uVar7;
    }
    uVar2 = 1;
    if ((DAT_000069c1 & 8) == 0) {
      uVar2 = uVar13 & 0xffffff08;
    }
    uVar2 = uVar2 << 0xe;
    if ((DAT_000069c0 & 0x40) == 0) {
      uVar2 = uVar7;
    }
    uVar3 = 1;
    if ((DAT_000069c1 & 4) == 0) {
      uVar3 = uVar13 & 0xffffff04;
    }
    uVar3 = uVar3 << 0x11;
    if ((DAT_000069c0 & 0x40) == 0) {
      uVar3 = uVar7;
    }
    if ((DAT_000069c0 & 0x40) == 0) {
      uVar1 = uVar7;
    }
    uVar4 = 1;
    if ((DAT_000069c1 & 2) == 0) {
      uVar4 = uVar13 & 0xffffff02;
    }
    uVar4 = uVar4 << 0xb;
    if ((DAT_000069c0 & 0x40) == 0) {
      uVar4 = uVar7;
    }
    uVar5 = 1;
    if ((DAT_000069c1 & 0x20) == 0) {
      uVar5 = uVar13 & 0xffffff20;
    }
    uVar13 = uVar5 << 5;
    if ((DAT_000069c0 & 0x40) == 0) {
      uVar13 = uVar7;
    }
    _DAT_0000694c =
         uVar13 | (uVar7 & uVar6) << 6 |
                  (uint)((uVar15 & 0xffffff44) == 0x44) << 1 |
                  uVar14 | uVar10 | uVar11 | uVar12 | (uint)((uVar15 & 0xffffff41) == 0x41) << 3 |
                  (uint)((uVar15 & 0xffffff48) == 0x48) | (uint)((uVar15 & 0xffffff42) == 0x42) << 2
                  | uVar9 | uVar2 | (uint)(0xbf < uVar15) << 0x10 | uVar3 | uVar1 | uVar4 |
         ~(uVar7 >> 2);
    if (_DAT_0000694c == 0) {
      _DAT_00006968 = 0;
    }
    else {
      if (_DAT_00006968 == 0) {
        puVar8 = (uint *)&DAT_00006968;
        uVar1 = _DAT_0000694c;
      }
      else {
        puVar8 = (uint *)&DAT_0000694c;
        uVar1 = _DAT_00006968;
      }
      *puVar8 = uVar1;
      _DAT_00006954 = _DAT_00006954 & ~_DAT_0000694c & 0xffff7fff;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_00006954 = (uVar13 & 0xffffff10) << 0xe | _DAT_00006954;
  return;
}



// ==== FUN_01e0e8de @ 01e0e8de ====

void FUN_01e0e8de(uint param_1)

{
  if (DAT_00006904 != '\0') {
    FUN_01e09c7c(0x6dcd,param_1 & 0xffff00ff);
    DAT_000067df = DAT_000068cf + '\x01';
  }
  return;
}



// ==== FUN_01e0e918 @ 01e0e918 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0e918(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  bVar2 = false;
  if ((DAT_00006b18 != '\0') && (bVar2 = true, *(char *)(DAT_00006fcd + 0x704e) == '\x03')) {
    bVar2 = false;
    DAT_00006b18 = '\0';
    if (DAT_00006fca == '\x02') {
      DAT_00006b14 = '\0';
    }
    else if (DAT_00006fca == '\x01') {
      DAT_00006b14 = '\x01';
    }
  }
  uVar6 = 0;
  do {
    uVar5 = uVar6 & 0xff;
    if (uVar5 < 0x21) {
      return;
    }
    bVar1 = (&DAT_01e1c9a8)[uVar5];
    uVar7 = (uint)bVar1;
    if (*(char *)(uVar7 + 0x704e) == '\x01') {
      iVar3 = uVar7 * 0xe;
      if (*(short *)(iVar3 + 0x8eb8) == 7) {
        if (!bVar2) {
          DAT_00006b18 = '\x01';
          DAT_0000684d = 0x8e;
          DAT_0000684b = 0x8e;
          uVar6 = 0;
          uVar5 = 0;
          for (puVar4 = &DAT_00009431; (uVar5 < 4 && ((byte)puVar4[-2] != uVar7));
              puVar4 = puVar4 + 0xf4) {
            uVar6 = uVar6 + 1;
            uVar5 = uVar5 + 1;
          }
          DAT_0000684c = *puVar4;
          bVar2 = true;
          DAT_0000684a = puVar4[-1];
          DAT_000067d9 = 0x10;
          _DAT_00006880 = 0;
          if ((DAT_0000684a | 2) == 2) {
            DAT_00006b14 = '\x01';
          }
        }
      }
      else {
        if (uVar7 == DAT_00006fcc) {
          DAT_00006b14 = '\0';
        }
        if ((*(char *)(iVar3 + 0x8eac) != '\0' || *(char *)(iVar3 + 0x8ead) != '\0') ||
           (*(char *)(iVar3 + 0x8eae) != '\0' || *(char *)(iVar3 + 0x8eaf) != '\0')) {
          if (uVar5 == 0x21) {
            DAT_00007021 = 1;
            uVar6 = 0x21;
            DAT_00007024 = bVar1;
          }
          else if (uVar5 == 0x20) {
            DAT_00007018 = 1;
            uVar6 = 0x20;
            DAT_0000701b = bVar1;
          }
          else if (DAT_00006b14 == '\0') {
            iVar3 = 0x846;
            if (DAT_00007006 != '\0') {
              iVar3 = 0x84f;
              goto LAB_01e0eaba;
            }
LAB_01e0eac0:
            *(undefined1 *)(iVar3 + 0x67c0) = 1;
            (&DAT_000067c3)[iVar3] = bVar1;
          }
          else if (uVar5 == 0xf) {
            DAT_0000700f = 1;
            uVar6 = 0xf;
            DAT_00007012 = bVar1;
          }
          else {
            iVar3 = 0x846;
LAB_01e0eaba:
            if (*(char *)(iVar3 + 0x67c0) == '\0') goto LAB_01e0eac0;
          }
        }
      }
    }
    uVar6 = uVar6 + 1;
  } while( true );
}



// ==== FUN_01e0eada @ 01e0eada ====

void FUN_01e0eada(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 in_r0_r1;
  uint uVar10;
  int iVar11;
  ulonglong uVar9;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  BADSPACEBASE *in_sp;
  uint *puVar19;
  uint local_4c;
  int iStack_48;
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  
  puVar19 = &local_4c;
  uVar10 = (uint)*(byte *)((int)((ulonglong)in_r0_r1 >> 0x20) + 3);
  iVar11 = uVar10 * 0xe;
  uVar12 = *(ushort *)(iVar11 + 0x8eb4);
  if (((uVar12 != 0) && (uVar5 = (uint)*(ushort *)(iVar11 + 0x8eb6), uVar5 != 0)) && (uVar5 != 6)) {
    uStack_40 = (uint)*(ushort *)(iVar11 + 0x8eae);
    uVar1 = *(ushort *)(uVar10 + 5);
    uVar18 = (uint)*(ushort *)(iVar11 + 0x8eac);
    local_4c = (uint)*(ushort *)(uVar10 + 7);
    iStack_38 = uVar10 + 7;
    iStack_3c = uVar10 + 5;
    uVar17 = (uint)*(ushort *)(param_1 + 3);
    uVar5 = (uint)*(ushort *)(&DAT_01e19fb4 + uVar5);
    iVar14 = 0xfffe00;
    iStack_48 = 0x200 - uVar17;
    iVar11 = iStack_48;
    if (0x1ff < uVar17) {
      iVar11 = uVar17 + 0xfffe00;
    }
    FUN_01e19452((uint)(iVar11 << 8) / uVar5);
    bVar3 = bRam00008ea7;
    uVar2 = *(ushort *)(param_1 + 5);
    uVar6 = thunk_FUN_01e17b66(0);
    uVar16 = (uint)uVar2;
    iVar11 = 0x200 - uVar16;
    *(int *)((int)puVar19 + 8) = iVar11;
    if (0x1ff < uVar16) {
      iVar11 = uVar16 + iVar14;
    }
    FUN_01e19452((uint)(iVar11 << 8) / uVar5);
    uVar7 = thunk_FUN_01e17b66(0);
    FUN_01e188bc(uVar6,uVar7);
    thunk_FUN_01e183b0();
    uVar6 = FUN_01e19416();
    uVar9 = (ulonglong)CONCAT14(bVar3,uVar6) & 0xfffffffdffffffff;
    uVar13 = uVar12 + 0x32;
    iVar11 = (int)(uVar9 >> 0x20);
    uVar8 = (uint)uVar9;
    if (uVar17 < 0x201) {
      if (uVar17 == 0x200) {
        if ((int)in_r0_r1 != 1) {
          uVar18 = (uint)uVar1;
        }
        uVar9 = CONCAT44(uVar18,uVar13);
      }
      else {
        uVar17 = (puVar19[1] << 8) / uVar5;
        if (0x100 < uVar8) {
          uVar17 = (uVar17 << 8) / uVar8;
        }
        if ((iVar11 == 0) && ((bVar3 | 2) != 3)) {
          iVar14 = 0x26e8;
        }
        else {
          iVar14 = 0x26ea;
        }
        uVar17 = ((uVar17 * (uVar13 & 0xffff) >> 8) * 0x7ff) / (uint)*(ushort *)(iVar14 + 0x67c0);
        uVar9 = CONCAT44(uVar18 - uVar17,uVar13);
        if (uVar18 <= uVar17) {
          uVar9 = (ulonglong)uVar13;
        }
      }
    }
    else {
      uVar17 = (uVar17 * 0x100 - 0x20000) / uVar5;
      if (0x100 < uVar8) {
        uVar17 = (uVar17 << 8) / uVar8;
      }
      if ((iVar11 == 0) && ((bVar3 | 2) != 3)) {
        iVar14 = 0x26e8;
      }
      else {
        iVar14 = 0x26ea;
      }
      uVar17 = ((uVar17 * (uVar13 & 0xffff) >> 8) * 0x7ff) / (uint)*(ushort *)(iVar14 + 0x67c0);
      uVar9 = CONCAT44(uVar17 + uVar18,uVar13);
      if (0x7ff - uVar18 <= uVar17) {
        uVar9 = CONCAT44(0x7ff,uVar13);
      }
    }
    uVar12 = (ushort)uVar9;
    uVar18 = (uint)(uVar9 >> 0x20);
    if (uVar16 < 0x201) {
      if (uVar16 == 0x200) {
        sVar4 = (short)puVar19[3];
        if ((int)in_r0_r1 != 1) {
          sVar4 = (short)*puVar19;
        }
        iVar14 = puVar19[1];
        lVar15 = (ulonglong)puVar19[4] << 0x20;
      }
      else {
        uVar5 = (puVar19[2] << 8) / uVar5;
        if (0x100 < uVar8) {
          uVar5 = (uVar5 << 8) / uVar8;
        }
        iVar14 = puVar19[1];
        lVar15 = *(longlong *)(puVar19 + 3);
        if ((iVar11 == 0) && ((bVar3 | 2) != 3)) {
          iVar11 = 0x26ea;
        }
        else {
          iVar11 = 0x26e8;
        }
        uVar9 = (ulonglong)uVar18 << 0x20;
        uVar5 = ((uVar12 * uVar5 >> 8) * 0x7ff) / (uint)*(ushort *)(iVar11 + 0x67c0);
        sVar4 = (short)lVar15 - (short)uVar5;
        if ((uint)lVar15 <= uVar5) {
          sVar4 = 0;
        }
      }
    }
    else {
      uVar5 = (uVar16 * 0x100 - 0x20000) / uVar5;
      if (0x100 < uVar8) {
        uVar5 = (uVar5 << 8) / uVar8;
      }
      iVar14 = puVar19[1];
      lVar15 = *(longlong *)(puVar19 + 3);
      if ((iVar11 == 0) && ((bVar3 | 2) != 3)) {
        iVar11 = 0x26ea;
      }
      else {
        iVar11 = 0x26e8;
      }
      uVar9 = (ulonglong)uVar18 << 0x20;
      uVar5 = ((uVar12 * uVar5 >> 8) * 0x7ff) / (uint)*(ushort *)(iVar11 + 0x67c0);
      sVar4 = (short)uVar5 + (short)lVar15;
      if (0x7ffU - (int)lVar15 <= uVar5) {
        sVar4 = 0x7ff;
      }
    }
    *(char *)(uVar10 + 5) = (char)(uVar9 >> 0x20);
    *(char *)((int)((ulonglong)lVar15 >> 0x20) + 1) = (char)(uVar9 >> 0x28);
    *(char *)(iVar14 + 1) = (char)((ushort)sVar4 >> 8);
    *(char *)(uVar10 + 7) = (char)sVar4;
  }
  return;
}



// ==== FUN_01e0ed96 @ 01e0ed96 ====

void FUN_01e0ed96(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  iVar6 = (uint)*(byte *)(param_2 + 3) * 0xe;
  iVar3 = -(uint)*(ushort *)(iVar6 + 0x8eb6);
  if (iVar3 == -6) {
    return;
  }
  if (iVar3 == 0) {
    return;
  }
  if (*(char *)(param_2 + 4) == '\0') {
    uVar4 = *(undefined2 *)(iVar6 + 0x8eae);
    uVar1 = *(undefined1 *)(iVar6 + 0x8ead);
    uVar2 = *(undefined1 *)(iVar6 + 0x8eac);
    *(undefined1 *)(param_2 + 4) = 1;
    *(undefined1 *)(param_2 + 6) = uVar1;
    *(undefined1 *)(param_2 + 5) = uVar2;
    goto LAB_01e0eec0;
  }
  uVar10 = (uint)*(ushort *)(iVar3 + 0x1e19fba);
  uVar7 = (uint)*(ushort *)(param_3 + 3);
  uVar9 = (uint)*(ushort *)(param_2 + 5);
  if (uVar7 < 0x201) {
    uVar8 = uVar9;
    if (uVar7 != 0x200) {
      uVar7 = (0x200 - uVar7) * uVar10 >> 0xb;
      if (param_1 == 1) {
        if (uVar9 <= uVar7) goto LAB_01e0ee3a;
        uVar8 = uVar9 - uVar7;
      }
      else {
        uVar8 = 0;
        if (uVar7 < uVar9) {
          uVar8 = uVar9 - uVar7;
        }
      }
    }
  }
  else {
    uVar8 = ((uVar7 - 0x200) * uVar10 >> 0xb) + uVar9;
    if (param_1 == 1) {
      if (0x7fe < uVar8) {
LAB_01e0ee3a:
        *(undefined1 *)(param_2 + 4) = 3;
        uVar8 = uVar9;
      }
    }
    else if (0xffd < uVar8) {
      uVar8 = 0xffe;
    }
  }
  uVar7 = (uint)*(ushort *)(param_3 + 5);
  uVar9 = (uint)*(ushort *)(param_2 + 7);
  if (uVar7 < 0x201) {
    uVar5 = uVar9;
    if (uVar7 != 0x200) {
      uVar7 = (0x200 - uVar7) * uVar10 >> 0xb;
      if (param_1 == 1) {
        if (uVar9 <= uVar7) goto LAB_01e0ee98;
        uVar5 = uVar9 - uVar7;
      }
      else {
        uVar5 = 0;
        if (uVar7 < uVar9) {
          uVar5 = uVar9 - uVar7;
        }
      }
    }
  }
  else {
    uVar5 = ((uVar7 - 0x200) * uVar10 >> 0xb) + uVar9;
    if (param_1 == 1) {
      if (0x7fe < uVar5) {
LAB_01e0ee98:
        *(undefined1 *)(param_2 + 4) = 3;
        uVar5 = uVar9;
      }
    }
    else if (0xffd < uVar5) {
      uVar5 = 0xffe;
    }
  }
  uVar4 = (undefined2)uVar5;
  *(char *)(param_2 + 5) = (char)uVar8;
  *(char *)(param_2 + 6) = (char)(uVar8 >> 8);
LAB_01e0eec0:
  *(char *)(param_2 + 8) = (char)((ushort)uVar4 >> 8);
  *(char *)(param_2 + 7) = (char)uVar4;
  return;
}



// ==== FUN_01e0eeca @ 01e0eeca ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0eeca(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  char *pcVar8;
  byte bVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  char cVar13;
  undefined1 *puVar14;
  uint uVar15;
  int iVar16;
  
  iVar16 = 0;
  uVar15 = 0;
  do {
    uVar4 = _DAT_00007bbf;
    if (iVar16 == 0x24) {
      return;
    }
    iVar5 = iVar16 + 0x67c0;
    if ((&DAT_00007006)[iVar16] != '\0') {
      uVar10 = (uint)(byte)(&DAT_00007009)[iVar16];
      if (uVar10 == 0x13) {
        if (DAT_00006964 == '\0') {
          uVar10 = (uint)(byte)(&DAT_00007009)[iVar16];
          cVar13 = *(char *)(uVar10 + 0x704e);
          if (cVar13 == '\x03') goto LAB_01e0f252;
          if (cVar13 != '\x02') goto LAB_01e0ef5e;
          if ((DAT_00006b75 & 3) == 0) {
            puVar11 = &DAT_00007006 + iVar16;
            goto LAB_01e0f1e0;
          }
        }
      }
      else if (uVar10 == 0x12) {
        uVar10 = (uint)(byte)(&DAT_00007009)[iVar16];
        cVar13 = *(char *)(uVar10 + 0x704e);
        if (cVar13 == '\x03') goto LAB_01e0f252;
        if (cVar13 == '\x02') {
          if ((DAT_00006b6e & 3) == 0) {
            FUN_01e0eada(0,&DAT_00007006 + iVar16,&DAT_00006b6e);
          }
        }
        else {
LAB_01e0ef5e:
          if (cVar13 == '\x01') goto LAB_01e0f098;
        }
      }
      else {
        cVar13 = *(char *)(uVar10 * 0xe + 0x8eb8);
        switch(cVar13) {
        case '\0':
        case '\x01':
        case '\b':
          uVar10 = (uint)(byte)(&DAT_00007009)[iVar16];
          if (*(char *)(uVar10 + 0x704e) == '\x03') {
            DAT_00006960 = 0;
LAB_01e0f252:
            (&DAT_00007006)[iVar16] = 0;
LAB_01e0f256:
            *(undefined1 *)(iVar5 + 0x84a) = 3;
          }
          else if (*(char *)(uVar10 + 0x704e) == '\x01') {
LAB_01e0f094:
            DAT_000067db = 0x49;
            goto LAB_01e0f098;
          }
          break;
        case '\x02':
          uVar10 = (uint)(byte)(&DAT_00007009)[iVar16];
          cVar13 = *(char *)(uVar10 + 0x704e);
          if (cVar13 == '\x03') {
            DAT_00006960 = 0;
            (&DAT_00007006)[iVar16] = 0;
            *(undefined1 *)(iVar16 + 0x700a) = 3;
            iVar5 = 0x3ae;
LAB_01e0f292:
            *(byte *)(iVar5 + 0x67c0) = *(byte *)(iVar5 + 0x67c0) & 0xfd;
          }
          else {
            if (cVar13 == '\x01') goto LAB_01e0f094;
            if ((cVar13 == '\x02') && (((DAT_00006960 ^ 1) & 1) != 0)) {
              pcVar8 = &DAT_00006b6e;
LAB_01e0f2b8:
              *pcVar8 = (char)iVar16 + '\x06';
              FUN_01e0eada(1);
            }
          }
          break;
        case '\x03':
          uVar10 = (uint)(byte)(&DAT_00007009)[iVar16];
          cVar13 = *(char *)(uVar10 + 0x704e);
          if (cVar13 == '\x03') {
LAB_01e0f286:
            (&DAT_00007006)[iVar16] = 0;
            *(undefined1 *)(iVar16 + 0x700a) = 3;
            iVar5 = 0x3b5;
            goto LAB_01e0f292;
          }
          if (cVar13 == '\x02') {
            puVar11 = &DAT_00007006 + iVar16;
            DAT_00006b75 = (byte)puVar11;
            *(undefined1 *)(uVar10 * 0xe + 0x8eb7) = 0;
            *(undefined1 *)(uVar10 * 0xe + 0x8eb6) = 5;
            uVar6 = 0;
LAB_01e0f1e2:
            FUN_01e0ed96(uVar6,puVar11,&DAT_00006b75);
          }
          else if (cVar13 == '\x01') {
            *(undefined1 *)(iVar16 + 0x700a) = 1;
            goto LAB_01e0f0a4;
          }
          break;
        case '\x04':
          uVar10 = (uint)(byte)(&DAT_00007009)[iVar16];
          cVar13 = *(char *)(uVar10 + 0x704e);
          if (cVar13 == '\x03') {
            DAT_00006960 = 0;
            goto LAB_01e0f286;
          }
          if (cVar13 == '\x01') goto LAB_01e0f094;
          if (cVar13 == '\x02') {
            pcVar8 = &DAT_00006b75;
            goto LAB_01e0f2b8;
          }
          break;
        case '\x05':
          bVar9 = (&DAT_00007009)[iVar16];
          cVar13 = *(char *)(bVar9 + 0x704e);
          if (cVar13 == '\x03') goto LAB_01e0f252;
          if (cVar13 == '\x01') {
            DAT_00006960 = 1;
            DAT_000067dd = (byte)iVar5;
            *(undefined1 *)(iVar16 + 0x700a) = 1;
            iVar5 = (uint)bVar9 * 0xe;
            uVar1 = *(undefined1 *)(iVar5 + 0x8ead);
            uVar2 = *(undefined1 *)(iVar5 + 0x8eac);
            *(undefined1 *)(iVar16 + 0x700b) = uVar2;
            *(undefined1 *)(iVar16 + 0x700c) = uVar1;
            uVar3 = *(undefined1 *)(iVar5 + 0x8eae);
            puVar11 = (undefined1 *)(iVar16 + (uint)*(ushort *)(iVar5 + 0x8eae));
            *puVar11 = 0xd;
            puVar11[1] = uVar3;
            iVar5 = (uint)DAT_000068cb * 9;
            *(undefined1 *)(iVar5 + 0x700c) = uVar1;
            *(undefined1 *)(iVar5 + 0x700b) = uVar2;
            *(undefined1 *)(iVar5 + 0x700e) = uVar3;
            *(undefined1 *)(iVar5 + 0x700d) = uVar3;
          }
          else {
            pbVar7 = (byte *)(iVar16 + 0x700a);
            if ((*pbVar7 == 2) && (bVar9 = DAT_000068cd + 1, DAT_000067dd = bVar9, 3 < bVar9)) {
              DAT_000067dd = (byte)pbVar7;
              *pbVar7 = bVar9;
              iVar5 = (uint)DAT_000068cb * 9 + 0x67c0;
              goto LAB_01e0f256;
            }
          }
          break;
        case '\x06':
          uVar10 = (uint)(byte)(&DAT_00007009)[iVar16];
          if (*(char *)(uVar10 + 0x704e) == '\x01') {
LAB_01e0f098:
            *(undefined1 *)(iVar16 + 0x700a) = 1;
LAB_01e0f0a4:
            iVar5 = uVar10 * 0xe;
            uVar1 = *(undefined1 *)(iVar5 + 0x8ead);
            *(undefined1 *)(iVar16 + 0x700b) = *(undefined1 *)(iVar5 + 0x8eac);
            *(undefined1 *)(iVar16 + 0x700c) = uVar1;
            uVar1 = *(undefined1 *)(iVar5 + 0x8eaf);
            *(undefined1 *)(iVar16 + 0x700d) = *(undefined1 *)(iVar5 + 0x8eae);
            *(undefined1 *)(iVar16 + 0x700e) = uVar1;
          }
          else {
            uVar12 = uVar15;
            if (*(char *)(uVar10 + 0x704e) == '\x03') {
              (&DAT_00007006)[iVar16] = 0;
              uVar12 = 3;
              *(undefined1 *)(iVar16 + 0x700a) = 3;
              DAT_00006964 = '\0';
              if (DAT_00007061 == '\0') {
                DAT_00007061 = '\x03';
                DAT_00007025 = 3;
              }
            }
            if (*(char *)((byte)(&DAT_00007009)[(uVar12 & 0xff) * 9] + 0x704e) == '\x02') {
              if (DAT_00006964 == '\0' && DAT_00007021 == '\0') {
                DAT_00006964 = '\x01';
                DAT_00007021 = '\x01';
                DAT_00007024 = 0x13;
                DAT_00007025 = 1;
                _DAT_00007026 = _DAT_00007bbb;
                _DAT_00007028 = _DAT_00007bbc;
              }
              _DAT_00006b78 = _DAT_00006b78 + -0x1e;
              puVar11 = &DAT_00007021;
LAB_01e0f1e0:
              uVar6 = 1;
              goto LAB_01e0f1e2;
            }
          }
          break;
        case '\a':
        case '\t':
        case '\n':
        case '\v':
        case '\f':
        case '\r':
        case '\x0e':
        case '\x0f':
          break;
        case '\x10':
          uVar10 = (uint)(byte)(&DAT_00007009)[iVar16];
          cVar13 = *(char *)(uVar10 + 0x704e);
          if (cVar13 == '\x03') {
            (&DAT_00007006)[iVar16] = (char)(&DAT_00007006 + iVar16);
            if (*(char *)(iVar16 + 0x700a) == '\x02') {
              *(undefined1 *)(iVar16 + 0x700a) = 2;
            }
          }
          else {
            if (cVar13 == '\x01') {
              DAT_000067de = 6;
              goto LAB_01e0f098;
            }
            if ((cVar13 == '\x02') && (DAT_000068ce == '\0')) {
              DAT_000067de = 6;
              pcVar8 = (char *)(iVar16 + 0x700a);
              if (*pcVar8 == '\0') {
                *pcVar8 = '\x01';
              }
              else if (*pcVar8 == '\x02') {
                *pcVar8 = '\x02';
              }
            }
          }
          break;
        default:
          if (cVar13 == '@') {
            if (*(char *)((byte)(&DAT_00007009)[iVar16] + 0x704e) == '\x03') goto LAB_01e0f252;
            if (*(char *)((byte)(&DAT_00007009)[iVar16] + 0x704e) == '\x01') {
              *(undefined1 *)(iVar16 + 0x700a) = 1;
              if (DAT_000068cc == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              if (DAT_000068cc == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              DAT_000067dc = '\0';
              if ((byte)(DAT_000068cc + 1U) < 2) {
                DAT_000067dc = DAT_000068cc + '\x01';
              }
            }
          }
          else if (cVar13 == 'P') {
            uVar10 = (uint)(byte)(&DAT_00007009)[iVar16];
            cVar13 = *(char *)(uVar10 + 0x704e);
            if (cVar13 != '\x03') {
              if (cVar13 != '\x02') goto LAB_01e0ef5e;
              puVar14 = (undefined1 *)(uVar10 * 0xe + 0x67c0 + (uint)_DAT_00007bbf);
              DAT_00006b75 = (&DAT_00007009)[iVar16];
              *puVar14 = 0xf4;
              puVar14[1] = (char)((uint3)uVar4 >> 8);
              uVar4 = _DAT_00007bbf;
              puVar14[2] = (char)((uint3)_DAT_00007bbf >> 8);
              puVar11 = &DAT_00007006 + iVar16;
              puVar14[3] = (char)((uint3)uVar4 >> 0x10);
              goto LAB_01e0f1e0;
            }
            goto LAB_01e0f286;
          }
        }
      }
    }
    iVar16 = iVar16 + 9;
    uVar15 = uVar15 + 1;
  } while( true );
}



// ==== FUN_01e0f444 @ 01e0f444 ====

void FUN_01e0f444(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  BADSPACEBASE *in_sp;
  int iVar3;
  undefined4 local_44 [6];
  
  puVar1 = local_44;
  iVar2 = 0;
  iVar3 = 6;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  for (; iVar2 != 0x48; iVar2 = iVar2 + 0xc) {
  }
  for (iVar2 = 0; iVar2 != 6; iVar2 = iVar2 + 1) {
    *(short *)((param_1 + iVar2) * 2) = (short)(*(int *)(((int)local_44 + iVar2) * 4) / 6);
  }
  return;
}



// ==== FUN_01e0f4ec @ 01e0f4ec ====

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_01e0f4ec(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  BADSPACEBASE *in_sp;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 local_28 [12];
  
  puVar5 = local_28;
  puVar6 = local_28;
  if (DAT_000069dc != '\0') {
    FUN_01e0d898();
    puVar6 = puVar5;
  }
  if (DAT_000069b4 == '\0') {
    uVar3 = 1;
    if (DAT_000069dc == '\0') {
      FUN_01e0d898();
    }
  }
  else if (DAT_000069e0 == '\0') {
    FUN_01e0f444(0x6c10);
    uVar3 = 1;
    DAT_000069e0 = '\x01';
  }
  else {
    FUN_01e0f444(puVar6);
    uVar3 = 0;
    for (iVar2 = 0; iVar2 != 0xc; iVar2 = iVar2 + 2) {
      iVar4 = (int)*(short *)(iVar2 + 0x6c10);
      sVar1 = *(short *)(puVar6 + iVar2);
      if ((iVar4 - param_1 <= (int)sVar1) && ((int)sVar1 <= iVar4 + param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(iVar2 + 0x6c10) = sVar1;
      *(short *)((int)(&DAT_000069f4 + iVar2) * 2) = sVar1;
      uVar3 = 1;
      *(short *)(iVar2 + 0x6c1c) = sVar1;
    }
  }
  return uVar3;
}



// ==== FUN_01e133ec @ 01e133ec ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e133ec(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  byte bVar7;
  byte *pbVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  byte bVar14;
  byte bVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  int iVar20;
  char *pcVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  char *unaff_r10;
  byte *unaff_r13;
  int unaff_r15;
  BADSPACEBASE *in_sp;
  
  FUN_01e08f94();
  *(undefined1 *)(unaff_r15 + 0x40) = 6;
  uVar25 = *(byte *)(unaff_r15 + 0xa70) / 10;
  *(uint *)(unaff_r15 + 600) = uVar25;
  iVar3 = (((int)(short)(ushort)(*(byte *)(unaff_r15 + 0xa71) & *(byte *)(unaff_r15 + 0xa70)) +
           *(int *)(unaff_r15 + 0x25c)) * 5) / 10;
  *(int *)(unaff_r15 + 0x25c) = iVar3;
  *(int *)(unaff_r15 + 0x260) =
       ((*(int *)(unaff_r15 + 0x260) +
        (int)CONCAT11(*(undefined1 *)(unaff_r15 + 0xa72),*(undefined1 *)(unaff_r15 + 0xa73))) * 5) /
       10;
  uVar26 = *(byte *)(unaff_r15 + 0xa78) / 10;
  *(uint *)(unaff_r15 + 0x264) = uVar26;
  *(int *)(unaff_r15 + 0x268) =
       ((*(int *)(unaff_r15 + 0x268) +
        (int)CONCAT11(*(undefined1 *)(unaff_r15 + 0xa76),*(undefined1 *)(unaff_r15 + 0xa77))) * 5) /
       10;
  iVar20 = (((int)(short)(ushort)(*(byte *)(unaff_r15 + 0xa79) & *(byte *)(unaff_r15 + 0xa78)) +
            *(int *)(unaff_r15 + 0x26c)) * 5) / 10;
  *(int *)(unaff_r15 + 0x26c) = iVar20;
  cVar10 = *(char *)(unaff_r15 + 0x30a);
  if (cVar10 == '\0') {
    uVar23 = (uint)*unaff_r13 + uVar25 / 8;
    uVar25 = uVar23;
    if (0xfe < uVar23) {
      uVar25 = 0xff;
    }
    bVar9 = (byte)uVar25;
    if (uVar23 == 0) {
      bVar9 = 0;
    }
    iVar11 = (uint)unaff_r13[1] + (int)(short)iVar3 / 8;
    *unaff_r13 = bVar9;
    iVar3 = iVar11;
    if (0xfe < iVar11) {
      iVar3 = 0xff;
    }
    bVar9 = (byte)iVar3;
    if (iVar11 < 1) {
      bVar9 = 0;
    }
    unaff_r13[1] = bVar9;
    *(undefined1 *)(unaff_r15 + 0x655) = 0;
    *(undefined1 *)(unaff_r15 + 0x657) = 0;
    *(undefined1 *)(unaff_r15 + 0x658) = 0;
    *(undefined1 *)(unaff_r15 + 0x659) = 0x50;
    *(undefined1 *)(unaff_r15 + 0x65a) = 0x50;
    *(undefined1 *)(unaff_r15 + 0x65b) = 100;
    FUN_01e0e0d2(unaff_r13 + 1);
    cVar10 = *(char *)(unaff_r15 + 0x30a);
  }
  if (cVar10 == '\0') {
    uVar26 = (uint)unaff_r13[3] + uVar26 / 8;
    uVar25 = uVar26;
    if (0xfe < uVar26) {
      uVar25 = 0xff;
    }
    bVar9 = (byte)uVar25;
    if (uVar26 == 0) {
      bVar9 = 0;
    }
    iVar20 = (uint)unaff_r13[2] + (int)(short)iVar20 / 8;
    unaff_r13[3] = bVar9;
    iVar3 = iVar20;
    if (0xfe < iVar20) {
      iVar3 = 0xff;
    }
    bVar9 = (byte)iVar3;
    if (iVar20 < 1) {
      bVar9 = 0;
    }
    unaff_r13[2] = bVar9;
    *(undefined1 *)(unaff_r15 + 0x661) = 3;
    *(undefined1 *)(unaff_r15 + 0x663) = 5;
    *(undefined1 *)(unaff_r15 + 0x664) = 0x14;
    *(undefined1 *)(unaff_r15 + 0x665) = 0x50;
    *(undefined1 *)(unaff_r15 + 0x666) = 0x50;
    *(undefined1 *)(unaff_r15 + 0x667) = 100;
    FUN_01e0e0d2(unaff_r13 + 2,unaff_r13 + 3);
  }
  if (*(char *)(unaff_r15 + 0x309) != '\0') {
    bVar14 = *(byte *)(unaff_r15 + 0x200) & 0xf0;
    *(byte *)(unaff_r15 + 0x200) = bVar14;
    uVar25 = *(uint *)(unaff_r15 + 0x244);
    bVar9 = (byte)(uVar25 >> 2);
    bVar9 = bVar14 | bVar9 & 1 | bVar9 & 2 | (byte)((uVar25 & 1) << 2);
    if ((uVar25 & 0xd) != 0) {
      *(byte *)(unaff_r15 + 0x200) = bVar9;
    }
    if ((uVar25 & 2) != 0) {
      *(byte *)(unaff_r15 + 0x200) = bVar9 | 8;
    }
  }
  if (*(char *)(unaff_r15 + 0x30a) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar9 = unaff_r13[2];
  bVar14 = unaff_r13[3];
  cVar10 = *unaff_r10;
  *(char *)(unaff_r15 + 0x3b) = (char)((int)(bVar9 - 0x80) / 0x10);
  *(char *)(unaff_r15 + 0x3c) = (char)((int)(bVar14 - 0x80) / 0x10);
  if (cVar10 == '\x02') {
    *(char *)(unaff_r15 + 0x3b) = (char)((int)(bVar9 - 0x80) / 2);
    *(char *)(unaff_r15 + 0x3c) = (char)((int)(bVar14 - 0x80) / 2);
  }
  bVar9 = *(byte *)(unaff_r15 + 0x200);
  *(bool *)(unaff_r15 + 0x3d) = (bVar9 & 0x44) != 0;
  unaff_r13[2] = 0x80;
  unaff_r13[3] = 0x80;
  *(byte *)(unaff_r15 + 0x200) = bVar9 & 0xbb;
  if ((*(char *)(unaff_r15 + 0x248) == '\0') && ((*(byte *)(unaff_r15 + 0x203) & 10) == 8)) {
    for (iVar3 = 0; iVar3 != 2; iVar3 = iVar3 + 1) {
      iVar20 = iVar3 * 0x90 + unaff_r15;
      if (*(char *)(iVar20 + 0x166c) != '\0') {
        uVar25 = *(uint *)(iVar20 + 0x166e);
        uVar26 = *(uint *)((iVar3 + 0x1e1b31c) * 4);
        puVar19 = (undefined1 *)(iVar3 * 0x1f + unaff_r15 + 0x8f1);
        *puVar19 = (char)puVar19;
        if ((uVar26 & *(byte *)(((uVar26 & 0xff00) >> 8) + unaff_r15 + 0x200)) != 0) {
          *puVar19 = (char)uVar26;
          uVar26 = 0;
          do {
            uVar23 = uVar26;
            if (0x17 < uVar23) break;
            uVar26 = uVar23 + 1;
          } while ((uVar25 & 1 << uVar23) == 0);
          iVar20 = (uint)(*(ushort *)((int)&DAT_01e1e3dc + uVar23) >> 8) + unaff_r15;
          *(byte *)(iVar20 + 0x200) =
               (byte)*(ushort *)((int)&DAT_01e1e3dc + uVar23) | *(byte *)(iVar20 + 0x200);
        }
      }
    }
  }
  else {
    func_0x021127b4(unaff_r15 + 0x8f0,0,0x3e);
  }
  FUN_01e0e402();
  uVar25 = 0;
  for (uVar26 = 0; 10 < uVar26; uVar26 = uVar26 + 1) {
    uVar23 = *(uint *)((uVar26 + 0x1e1e40c) * 4);
    if ((uVar23 & *(byte *)(((uVar23 & 0xff00) >> 8) + unaff_r15 + 0x200)) != 0) goto LAB_01e116da;
    uVar25 = uVar25 + 1;
  }
  uVar25 = 0xff;
LAB_01e116da:
  if (((*(byte *)(unaff_r15 + 0x203) & 8) == 0) && (uVar25 = uVar25 & 0xff, uVar25 != 0xff)) {
    if (*(char *)(unaff_r15 + 0x254) == '\0') {
      *(undefined1 *)(unaff_r15 + 0x254) = 1;
      iVar3 = uVar25 * 6 + unaff_r15;
      bVar14 = *(char *)(iVar3 + 0x1622) + 1;
      bVar9 = 0;
      if (bVar14 < 3) {
        bVar9 = bVar14;
      }
      uVar4 = *(undefined4 *)((int)(&DAT_01e1e43c + uVar25) * 4);
      *(byte *)(iVar3 + 0x1622) = bVar9;
      *(char *)(iVar3 + 0x1621) = (char)((uint)uVar4 >> 0x18);
      *(char *)(iVar3 + 0x1620) = (char)((uint)uVar4 >> 0x10);
      *(char *)(iVar3 + 0x161f) = (char)((uint)uVar4 >> 8);
      *(char *)(iVar3 + 0x161e) = (char)uVar4;
      *(undefined *)(iVar3 + 0x1623) = (&DAT_01e1b212)[*(byte *)(unaff_r15 + 0x15c0)];
      FUN_01e09dba();
    }
  }
  else {
    *(undefined1 *)(unaff_r15 + 0x254) = 0;
  }
  pcVar21 = (char *)(unaff_r15 + 0x12fc);
  uVar25 = *(uint *)(unaff_r15 + 0x244);
  for (iVar3 = 0; iVar3 != 0xc; iVar3 = iVar3 + 1) {
    iVar20 = iVar3 * 6 + unaff_r15;
    uVar26 = *(uint *)(iVar20 + 0x161e);
    if (*(byte *)(iVar20 + 0x1623) == 0) {
      uVar23 = 6;
    }
    else {
      uVar23 = 0x21 / *(byte *)(iVar20 + 0x1623);
    }
    if (*(char *)(iVar20 + 0x1622) == '\x02') {
      iVar20 = iVar3 * 0x1c + unaff_r15;
      pcVar12 = (char *)(iVar20 + 0x12f8);
      if ((uVar26 == 0) || ((uVar25 & uVar26) != uVar26)) {
        *pcVar12 = (char)uVar23;
      }
      else if (*pcVar12 == '\0') {
        *pcVar12 = '\0';
        *(char *)(iVar20 + 0x12f9) = *(char *)(iVar20 + 0x12f9) + '\x01';
      }
      uVar18 = *(ushort *)(iVar20 + 0x12fa) + 1;
      uVar17 = 0;
      if ((uVar18 & 0xffff) <= uVar23) {
        uVar17 = uVar18;
      }
      *(char *)(iVar20 + 0x12fa) = (char)uVar17;
      *(char *)(iVar20 + 0x12fb) = (char)(uVar17 >> 8);
      if ((uVar17 & 0xffff) == 1) {
        pcVar12 = pcVar21;
        for (iVar20 = 0; iVar20 != 0x18; iVar20 = iVar20 + 1) {
          if ((uVar26 & 1 << iVar20) != 0) {
            cVar10 = '\x02';
            if (*pcVar12 != '\x01') {
              cVar10 = '\x01';
            }
            *pcVar12 = cVar10;
          }
          pcVar12 = pcVar12 + 1;
        }
      }
    }
    else if (*(char *)(iVar20 + 0x1622) == '\x01') {
      iVar20 = iVar3 * 0x1c + unaff_r15;
      if ((uVar26 == 0) || (uVar17 = uVar25 & uVar26, uVar17 != uVar26)) {
        *(char *)(iVar20 + 0x12f9) = (char)uVar23;
      }
      else {
        *(char *)(iVar20 + 0x12f9) = (char)uVar17;
        uVar18 = *(ushort *)(iVar20 + 0x12fa) + 1;
        uVar17 = 0;
        if ((uVar18 & 0xffff) <= uVar23) {
          uVar17 = uVar18;
        }
        *(char *)(iVar20 + 0x12fa) = (char)uVar17;
        *(char *)(iVar20 + 0x12fb) = (char)(uVar17 >> 8);
        if ((uVar17 & 0xffff) == 1) {
          for (iVar20 = 0; iVar20 != 0x18; iVar20 = iVar20 + 1) {
            if ((uVar26 & 1 << iVar20) != 0) {
              cVar10 = '\x02';
              if (pcVar21[iVar20] != '\x01') {
                cVar10 = '\x01';
              }
              pcVar21[iVar20] = cVar10;
            }
          }
        }
      }
    }
    else {
      *(undefined1 *)(iVar3 * 0x1c + unaff_r15 + 0x12f9) = 0;
    }
    pcVar21 = pcVar21 + 0x1c;
  }
  if (*(char *)(unaff_r15 + 0x248) == '\0') {
    *(undefined1 *)(unaff_r15 + 0x38) = 0;
    *(undefined2 *)(unaff_r15 + 0xde) = 0;
    *(undefined4 *)(unaff_r15 + 0x24c) = 0;
    bVar9 = *(byte *)(unaff_r15 + 0x203);
LAB_01e11906:
    if ((bVar9 & 10) == 8) {
      puVar19 = (undefined1 *)(unaff_r15 + 0x8f7);
      iVar3 = 0;
      while (iVar3 != 2) {
        *(int *)((int)in_sp + 0xc) = iVar3;
        iVar20 = iVar3 * 0x90 + unaff_r15;
        if (*(char *)(iVar20 + 0x166c) == '\0') {
          uVar25 = *(uint *)(iVar20 + 0x1667);
          iVar11 = *(int *)((int)in_sp + 0xc) * 0x1f;
          pcVar21 = (char *)(iVar11 + 0x70b0);
          if ((uVar25 == 0) || (~uVar25 != uVar25)) {
            if (*pcVar21 == '\x01') {
              *pcVar21 = '\0';
            }
          }
          else if (*pcVar21 == '\0') {
            iVar13 = *(int *)((int)in_sp + 0xc);
            iVar24 = iVar13 + 0x8f0;
            for (iVar22 = 0; iVar22 != 2; iVar22 = iVar22 + 1) {
              if (iVar13 != iVar22) {
                func_0x021127b4(iVar24,0,0x1f);
                iVar13 = *(int *)((int)in_sp + 0xc);
              }
              iVar24 = iVar24 + 0x1f;
            }
            *pcVar21 = (char)puVar19;
            *(char *)(iVar11 + 0x70b1) = *(char *)(iVar11 + 0x70b1) + '\x01';
          }
          if ((*(byte *)(iVar11 + 0x70b1) & 1) == 0) {
            func_0x021127b4(iVar11 + 0x70b7,0,0x18);
            puVar5 = (undefined1 *)(iVar11 + 0x70b2);
            iVar3 = 5;
            do {
              *puVar5 = 0;
              puVar5 = puVar5 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          else {
            *(byte **)((int)in_sp + 4) = (byte *)(iVar11 + 0x70b1);
            pbVar8 = (byte *)(iVar11 + 0x70b2);
            bVar9 = *pbVar8;
            *(int *)((int)in_sp + 8) = iVar11 + 0x70b7;
            do {
              while( true ) {
                iVar13 = (uint)bVar9 * 8 + iVar3 * 0x90;
                uVar25 = *(uint *)(iVar13 + 0x7e2e);
                uVar26 = (uint)*(ushort *)(iVar13 + 0x7e34);
                if (uVar26 < 0x10) {
                  uVar26 = 0xf;
                }
                uVar23 = (uint)*(ushort *)(iVar13 + 0x7e32);
                if (uVar23 < 0x10) {
                  uVar23 = 0xf;
                }
                if ((uint)(byte)(*(char *)(iVar20 + 0x166d) + 1) <= (uint)bVar9) break;
                puVar5 = puVar19;
                for (iVar13 = 0; iVar13 != 0x18; iVar13 = iVar13 + 1) {
                  if ((uVar25 & 1 << iVar13) != 0) {
                    *puVar5 = 2;
                  }
                  puVar5 = puVar5 + 1;
                }
                uVar17 = *(ushort *)(iVar11 + 0x70b3) + 0xf;
                *(char *)(iVar11 + 0x70b3) = (char)uVar17;
                *(char *)(iVar11 + 0x70b4) = (char)(uVar17 >> 8);
                if ((uVar17 & 0xffff) <= uVar23) goto LAB_01e11af2;
                *(char *)(iVar11 + 0x70b3) = (char)uVar23;
                *(char *)(iVar11 + 0x70b4) = (char)(uVar23 >> 8);
                for (iVar13 = 0; iVar13 != 0x18; iVar13 = iVar13 + 1) {
                  if ((uVar25 & 1 << iVar13) != 0) {
                    puVar19[iVar13] = 1;
                  }
                }
                uVar25 = *(ushort *)(iVar11 + 0x70b5) + 0xf;
                *(char *)(iVar11 + 0x70b5) = (char)uVar25;
                *(char *)(iVar11 + 0x70b6) = (char)(uVar25 >> 8);
                if ((uVar25 & 0xffff) < uVar26) goto LAB_01e11af2;
                *(undefined1 *)(iVar11 + 0x70cf) = 0;
                *(undefined1 *)(iVar11 + 0x70b4) = 0;
                *(undefined1 *)(iVar11 + 0x70b3) = 0;
                *(undefined1 *)(iVar11 + 0x70b6) = 0;
                *(undefined1 *)(iVar11 + 0x70b5) = 0;
                bVar9 = *pbVar8 + 1;
                *pbVar8 = bVar9;
              }
              cVar10 = *(char *)(iVar20 + 0x166b);
              bVar9 = 0;
              func_0x021127b4(*(undefined4 *)((int)in_sp + 8),0,0x18);
              iVar13 = 5;
              pbVar6 = pbVar8;
              do {
                *pbVar6 = 0;
                pbVar6 = pbVar6 + 1;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            } while (cVar10 == '\x01');
            **(undefined1 **)((int)in_sp + 4) = 0;
          }
        }
LAB_01e11af2:
        puVar19 = puVar19 + 0x1f;
        unaff_r15 = 0x67c0;
        unaff_r13 = &DAT_000040fc;
        iVar3 = *(int *)((int)in_sp + 0xc) + 1;
      }
      goto LAB_01e11b8a;
    }
  }
  else {
    bVar9 = *(byte *)(unaff_r15 + 0x203);
    if ((bVar9 & 8) == 0) {
      uVar16 = *(ushort *)(unaff_r15 + 0xde);
      if (uVar16 >> 4 < 0x76007601) {
        uVar16 = uVar16 + 0xf;
        *(ushort *)(unaff_r15 + 0xde) = uVar16;
      }
      uVar25 = *(uint *)(unaff_r15 + 0x250);
      uVar26 = *(uint *)(unaff_r15 + 0x24c) ^ uVar25;
      if (uVar26 != 0) {
        *(uint *)(unaff_r15 + 0x24c) = uVar25;
        if ((uVar25 & uVar26) == 0) {
          uVar23 = (uint)*(byte *)(unaff_r15 + 0x308);
          *(ushort *)((uVar23 * 8 + unaff_r15 + 0x79a) * 2) = uVar16;
          if (uVar25 != 0) goto LAB_01e11b4c;
        }
        else {
          uVar23 = (uint)*(byte *)(unaff_r15 + 0x308);
          if ((uVar25 & uVar26) == 0) {
            iVar3 = uVar23 * 8 + unaff_r15;
            if (*(int *)((iVar3 + 0x3cc) * 4) != 0) {
              puVar19 = (undefined1 *)(iVar3 + 0xf36);
              goto LAB_01e11b46;
            }
          }
          else {
            puVar19 = (undefined1 *)(uVar23 * 8 + unaff_r15 + 0xf34);
LAB_01e11b46:
            *puVar19 = (char)uVar16;
            puVar19[1] = (char)(uVar16 >> 8);
LAB_01e11b4c:
            uVar23 = uVar23 + 1;
            *(char *)(unaff_r15 + 0x38) = (char)uVar23;
          }
          *(uint *)(((uVar23 & 0xff) * 8 + unaff_r15 + 0x3cc) * 4) = uVar25;
        }
        *(undefined2 *)(unaff_r15 + 0xde) = 0;
        if (0xf < (uVar23 & 0xff)) {
          *(undefined1 *)(unaff_r15 + 0x38) = 0;
          *(undefined2 *)(unaff_r15 + 0xde) = 0;
          *(undefined1 *)(unaff_r15 + 0x248) = 0;
          goto LAB_01e11906;
        }
      }
    }
    else {
      *(undefined1 *)(unaff_r15 + 0x38) = 0;
      *(undefined2 *)(unaff_r15 + 0xde) = 0;
      *(undefined4 *)(unaff_r15 + 0x24c) = 0;
    }
  }
  func_0x021127b4(unaff_r15 + 0x8f0,0,0x3e);
LAB_01e11b8a:
  for (iVar3 = 0; iVar3 != 0x18; iVar3 = iVar3 + 1) {
    iVar20 = unaff_r15 + 0x12f9;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      cVar10 = *(char *)(iVar20 + iVar3 + 3);
      if (cVar10 == '\x01') {
        iVar13 = (uint)(*(ushort *)((int)&DAT_01e1e3dc + iVar3) >> 8) + unaff_r15;
        *(byte *)(iVar13 + 0x200) =
             *(byte *)(iVar13 + 0x200) & ~(byte)*(ushort *)((int)&DAT_01e1e3dc + iVar3);
      }
      else if (cVar10 == '\x02') {
        iVar13 = (uint)(*(ushort *)((int)&DAT_01e1e3dc + iVar3) >> 8) + unaff_r15;
        *(byte *)(iVar13 + 0x200) =
             *(byte *)(iVar13 + 0x200) | (byte)*(ushort *)((int)&DAT_01e1e3dc + iVar3);
      }
      iVar20 = iVar20 + 0x1c;
    }
    for (iVar20 = 0xffc2; iVar20 != 0; iVar20 = iVar20 + 0x1f) {
      if (*(char *)(iVar3 + unaff_r15 + iVar20 + 0x935) == '\x02') {
        iVar11 = (uint)(*(ushort *)((int)&DAT_01e1e3dc + iVar3) >> 8) + unaff_r15;
        *(byte *)(iVar11 + 0x200) =
             (byte)*(ushort *)((int)&DAT_01e1e3dc + iVar3) | *(byte *)(iVar11 + 0x200);
      }
    }
  }
  pbVar8 = *(byte **)in_sp;
  bVar9 = pbVar8[2];
  bVar14 = *pbVar8;
  bVar1 = pbVar8[1];
  bVar2 = pbVar8[3];
  bVar7 = bVar14 & 0x30;
  bVar15 = bVar2 & 0x10;
  for (iVar3 = 0; iVar3 != 0x3e; iVar3 = iVar3 + 0x1f) {
    unaff_r13[0] = 0x80;
    unaff_r13[1] = 3;
    unaff_r13[2] = 0;
    unaff_r13[3] = 0;
    if ((bVar14 & 0x30) != 0) {
      unaff_r13[1] = bVar1 & 0x40;
    }
    if ((bVar1 & 0x40) != 0) {
      *unaff_r13 = bVar7;
    }
    if ((char)bVar1 < 0x1ff) {
      *unaff_r13 = bVar15;
    }
    if ((bVar9 & 0x30) != 0) {
      unaff_r13[3] = bVar2 & 0x20;
    }
    if ((bVar2 & 0x10) != 0) {
      unaff_r13[2] = bVar7;
    }
    if ((bVar2 & 0x20) != 0) {
      unaff_r13[2] = bVar15;
    }
  }
  for (iVar3 = 0; iVar3 != 0x150; iVar3 = iVar3 + 0x1c) {
    unaff_r13[0] = 0x80;
    unaff_r13[1] = 3;
    unaff_r13[2] = 0;
    unaff_r13[3] = 0;
    if ((bVar14 & 0x30) != 0) {
      unaff_r13[1] = bVar1 & 0x40;
    }
    if ((bVar1 & 0x40) != 0) {
      *unaff_r13 = bVar7;
    }
    if ((char)bVar1 < 0x1ff) {
      *unaff_r13 = bVar15;
    }
    if ((bVar9 & 0x30) != 0) {
      unaff_r13[3] = bVar2 & 0x20;
    }
    if ((bVar2 & 0x10) != 0) {
      unaff_r13[2] = bVar7;
    }
    if ((bVar2 & 0x20) != 0) {
      unaff_r13[2] = bVar15;
    }
  }
  if ((*(char *)(unaff_r15 + 0x15c2) == '\x01') && (*unaff_r13 != 0x80)) {
    *unaff_r13 = *unaff_r13;
  }
  if ((*(char *)(unaff_r15 + 0x15c3) == '\x01') && (unaff_r13[1] != 0x80)) {
    unaff_r13[1] = unaff_r13[1];
  }
  if ((*(char *)(unaff_r15 + 0x15c6) == '\x01') && (unaff_r13[2] != 0x80)) {
    unaff_r13[2] = unaff_r13[2];
  }
  if ((*(char *)(unaff_r15 + 0x15c7) == '\x01') && (unaff_r13[3] != 0x80)) {
    unaff_r13[3] = unaff_r13[3];
  }
  FUN_01e0e36e();
  FUN_01e0e402();
  func_0x021127a8((undefined1 *)((int)in_sp + 0x10),unaff_r13,4);
  return;
}



// ==== FUN_01e13e6a @ 01e13e6a ====

void FUN_01e13e6a(void)

{
  return;
}



// ==== FUN_01e13e6c @ 01e13e6c ====

void FUN_01e13e6c(void)

{
  return;
}



// ==== FUN_01e13eac @ 01e13eac ====

bool FUN_01e13eac(int param_1)

{
  bool bVar1;
  
  bVar1 = param_1 - 1U < 3;
  if (bVar1) {
    FUN_01e0732e(*(undefined4 *)((param_1 + 0x1e1b48f) * 4),~*(uint *)((param_1 + 0x1e1b483) * 4));
  }
  return bVar1;
}



// ==== FUN_01e1404e @ 01e1404e ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e1404e(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0;
  if (param_2 + param_3 <= _DAT_0001a7d0) {
    func_0x020030ce(0x7448,0xffffffff);
    uVar1 = 0x100 - (param_3 & 0xff);
    if (param_2 < uVar1) {
      uVar1 = param_2;
    }
    func_0x0200189c(param_1,param_3,uVar1,0);
    iVar4 = param_3 + uVar1;
    param_1 = param_1 + uVar1;
    for (iVar2 = param_2 - uVar1; iVar2 != 0; iVar2 = iVar2 - iVar3) {
      iVar3 = iVar2;
      if (0xff < iVar2) {
        iVar3 = 0x100;
      }
      func_0x0200189c(param_1,iVar4,iVar3,0);
      param_1 = param_1 + iVar3;
      iVar4 = iVar4 + iVar3;
    }
    func_0x02002964(0x7448);
    uVar1 = param_2;
  }
  return uVar1;
}



// ==== thunk_FUN_01e36986 @ 01e140c0 ====

void thunk_FUN_01e36986(void)

{
  int iVar1;
  undefined8 in_r0_r1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)((ulonglong)in_r0_r1 >> 0x20);
  iVar1 = FUN_01e36794();
  if (iVar1 == 0) {
    FUN_01e366e0();
  }
  else {
    iVar1 = switchD_01e36590::caseD_49((iVar2 / 0x10) * 2 + iVar2 * 3 + 10);
    if (iVar1 != 0) {
      for (uVar3 = 0; (int)uVar3 < iVar2; uVar3 = uVar3 + 1) {
        if ((uVar3 & 0xf) == 0) {
          FUN_01e36836(iVar1);
        }
        FUN_01e36974(iVar1);
        FUN_01e36974(iVar1);
        FUN_01e36836(iVar1);
      }
      FUN_01e36836(iVar1);
      switchD_01e36590::caseD_f0(iVar1);
      return;
    }
  }
  return;
}



// ==== FUN_01e140c4 @ 01e140c4 ====

undefined4 FUN_01e140c4(undefined4 param_1,undefined4 param_2)

{
  FUN_01e1404e(param_2,param_1);
  return param_2;
}



// ==== FUN_01e14472 @ 01e14472 ====

undefined4 FUN_01e14472(undefined4 param_1,undefined4 param_2)

{
  FUN_01e09b98(param_2,param_1);
  return param_2;
}



// ==== FUN_01e14482 @ 01e14482 ====

void FUN_01e14482(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *param_1;
  uVar1 = param_1[1];
  if ((DAT_00007d75 & 9) == 0) {
    for (uVar4 = 0; (uVar4 & 0xffff) < (uVar1 & 0xffff000) >> 0xc; uVar4 = uVar4 + 1) {
      iVar2 = FUN_01e13eac(2,iVar3);
      if (iVar2 == 0) {
        return;
      }
      iVar3 = iVar3 + 0x1000;
    }
  }
  else {
    for (uVar4 = 0; (uVar4 & 0xffff) < (uVar1 & 0xffff00) >> 8; uVar4 = uVar4 + 1) {
      iVar2 = FUN_01e13eac(3,iVar3);
      if (iVar2 == 0) {
        return;
      }
      iVar3 = iVar3 + 0x100;
    }
  }
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}



// ==== FUN_01e144e0 @ 01e144e0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e144e0(void)

{
  BADSPACEBASE *in_sp;
  undefined4 *puVar1;
  undefined4 local_14;
  
  puVar1 = &local_14;
  local_14 = 0x55aaaa55;
  FUN_01e14482(&DAT_00007c08);
  FUN_01e14482(&DAT_00007c14);
  DAT_00007d75 = DAT_00007d75 & 0xfd;
  FUN_01e140c4(puVar1,_DAT_00007c08,4);
  _DAT_00007d70 = *(int *)(&DAT_00007c08 + ((DAT_00007d75 & 2) >> 1) * 0xc) + 4;
  func_0x021127b4(0x7c20,0,0x100);
  return;
}



// ==== FUN_01e14534 @ 01e14534 ====

undefined4 FUN_01e14534(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)func_0x02000a1e();
  do {
    if (param_1 == 0) {
      return 1;
    }
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    param_1 = param_1 + -1;
  } while (cVar1 == -1);
  return 0;
}



// ==== FUN_01e14550 @ 01e14550 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e14550(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  BADSPACEBASE *in_sp;
  undefined1 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int in_cres;
  
  if (in_cres == 1) {
    in_sp = (BADSPACEBASE *)&stack0xffffffcc;
  }
  puVar10 = (undefined1 *)((int)in_sp + -0x108);
  iVar1 = (~(uint)(DAT_00007d75 >> 1) & 1) * 0xc;
  if (*(short *)(iVar1 + 0x71e8) == 0) {
    _DAT_0001b4b0 = *(int *)((iVar1 + 0x6cd2) * 4) + 4;
    uVar3 = *(undefined4 *)((iVar1 + 0x6cd2) * 4);
    *(undefined4 *)((int)in_sp + -0x108) = 0xddeebb77;
    FUN_01e140c4((undefined1 *)((int)in_sp + -0x108),uVar3,4);
    puVar11 = (undefined4 *)puVar10;
    for (uVar7 = 0; 0x7e < uVar7; uVar7 = uVar7 + 1) {
      puVar9 = (ushort *)(uVar7 * 2 + 0x7c20);
      if (*puVar9 != 0) {
        FUN_01e14472(puVar11 + 1,
                     *(int *)(&DAT_00007c08 + ((DAT_00007d75 & 2) >> 1) * 0xc) + (uint)*puVar9,4);
        uVar2 = (DAT_00007d75 & 2) >> 1;
        iVar1 = (uVar2 ^ 1) * 0xc;
        if ((uint)(*(int *)(&DAT_00007c08 + iVar1) + *(int *)((iVar1 + 0x6cd3) * 4)) <
            _DAT_00007d70 + (uint)(*(ushort *)(puVar10 + 6) >> 4) + 4) {
          FUN_01e144e0();
          return;
        }
        uVar8 = (*(ushort *)(puVar10 + 6) >> 4) + 4;
        iVar4 = (uint)*puVar9 + *(int *)((uVar2 * 0xc + 0x6cd2) * 4);
        iVar1 = _DAT_00007d70;
        uVar2 = uVar8;
        while( true ) {
          uVar5 = uVar2;
          if (0xff < uVar2) {
            uVar5 = 0x100;
          }
          if (uVar5 == 0) break;
          puVar6 = (undefined1 *)((int)puVar11 + 8);
          FUN_01e14472(puVar6,iVar4,uVar5);
          FUN_01e140c4(puVar6,iVar1,uVar5);
          iVar4 = iVar4 + uVar5;
          iVar1 = iVar1 + uVar5;
          uVar2 = uVar2 - uVar5;
        }
        *puVar9 = (short)_DAT_00007d70 -
                  (short)*(undefined4 *)(((~(uint)(DAT_00007d75 >> 1) & 1) * 0xc + 0x6cd2) * 4);
        _DAT_00007d70 = _DAT_00007d70 + uVar8;
      }
    }
    uVar3 = *(undefined4 *)(&DAT_00007c08 + (~(uint)(DAT_00007d75 >> 1) & 1) * 0xc);
    *puVar11 = 0xddeeaa55;
    puVar12 = puVar11;
    FUN_01e140c4(puVar11,uVar3,4);
    FUN_01e14482(&DAT_00007c08 + ((DAT_00007d75 & 2) >> 1) * 0xc);
    uVar7 = (uint)DAT_00007d75;
    DAT_00007d75 = (byte)(uVar7 ^ 2);
    uVar3 = *(undefined4 *)(&DAT_00007c08 + (((uVar7 ^ 2) & 2) >> 1) * 0xc);
    *puVar12 = 0x55aaaa55;
    FUN_01e140c4(puVar11,uVar3,4);
  }
  return;
}



// ==== FUN_01e146ec @ 01e146ec ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e146ec(void)

{
  int iVar1;
  
  iVar1 = ((DAT_00007d75 & 2) >> 1) * 0xc;
  return (*(int *)((iVar1 + 0x6cd3) * 4) * (uint)DAT_00007d74) / 100 +
         *(int *)((iVar1 + 0x6cd2) * 4) < _DAT_00007d70;
}



// ==== FUN_01e149a4 @ 01e149a4 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e149a4(void)

{
  func_0x0200206c();
  DAT_00006843 = 1;
  func_0x0200207e();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e149c6 @ 01e149c6 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e149c6(void)

{
  func_0x0200206c();
  DAT_00006843 = 0;
  func_0x0200207e();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e149e6 @ 01e149e6 ====

uint FUN_01e149e6(uint param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  BADSPACEBASE *in_sp;
  uint *puVar7;
  undefined1 local_28 [4];
  
  puVar7 = (uint *)local_28;
  uVar3 = 0xff00;
  if (param_1 < 0x80) {
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      puVar5 = (ushort *)(param_1 * 2 + 0x7c20);
      FUN_01e149a4();
      uVar3 = 0xff04;
      if (*puVar5 != 0) {
        FUN_01e14472(puVar7,*(int *)(&DAT_00007c08 + ((DAT_00007d75 & 2) >> 1) * 0xc) +
                            (uint)*puVar5,4);
        iVar1 = *(int *)((int)puVar7 + 3);
        uVar2 = *(uint *)((int)puVar7 + 2);
        uVar6 = *puVar7;
        func_0x02000a1e(*(int *)(&DAT_00007c08 + ((DAT_00007d75 & 2) >> 1) * 0xc) + (uint)*puVar5 +
                        4);
        uVar4 = ((uVar2 & 0xff | iVar1 << 8) & 0xfff0) >> 4;
        uVar2 = FUN_01e05048(uVar4);
        if (uVar6 == (uVar2 & 0xffff00ff)) {
          if (uVar4 <= param_3) {
            param_3 = uVar4;
          }
          uVar3 = param_3 & 0xffff;
          FUN_01e14472(param_2,*(int *)((((DAT_00007d75 & 2) >> 1) * 0xc + 0x6cd2) * 4) +
                               (uint)*puVar5 + 4,uVar3);
        }
      }
      FUN_01e149c6();
    }
  }
  return uVar3;
}



// ==== FUN_01e14ac0 @ 01e14ac0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e14ac0(uint param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 in_r0_r1;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  BADSPACEBASE *in_sp;
  undefined1 *puVar8;
  undefined1 local_30 [4];
  
  puVar8 = local_30;
  uVar6 = 0xff06;
  if ((((DAT_00007d75 & 1) != 0) && (uVar6 = 0xff00, (uint)in_r0_r1 < 0x80)) &&
     (uVar6 = 0xff02, param_1 < 0x1000)) {
    FUN_01e149a4();
    iVar2 = (~(uint)(DAT_00007d75 >> 1) & 1) * 0xc;
    if (*(short *)(iVar2 + 0x71e8) != 0) {
      FUN_01e14482(&DAT_00007c08 + iVar2);
    }
    FUN_01e149c6();
    FUN_01e149a4();
    iVar2 = FUN_01e146ec();
    if (iVar2 == 1) {
      FUN_01e14550();
    }
    FUN_01e149c6();
    iVar2 = FUN_01e3d7d0(param_1);
    if (iVar2 != 0) {
      uVar6 = FUN_01e149e6(param_1);
      if (((uVar6 & 0xffff) == param_1) && (iVar3 = func_0x021127b0(iVar2,param_1), iVar3 == 0)) {
        thunk_FUN_01e3d7dc(iVar2);
        return param_1;
      }
      thunk_FUN_01e3d7dc(iVar2);
    }
    FUN_01e149a4();
    iVar2 = ((DAT_00007d75 & 2) >> 1) * 0xc;
    uVar7 = param_1 + 4;
    if ((*(int *)((iVar2 + 0x6cd3) * 4) + *(int *)((iVar2 + 0x6cd2) * 4)) - _DAT_0001b4b0 < uVar7) {
      FUN_01e14550();
    }
    uVar1 = FUN_01e05048();
    uVar4 = (uint)DAT_00007d75;
    *puVar8 = uVar1;
    puVar8[1] = (char)in_r0_r1;
    uVar6 = *(uint *)((((uVar4 & 2) >> 1) * 0xc + 0x6cd2) * 4);
    puVar8[2] = (byte)((ulonglong)in_r0_r1 >> 8) & 0xf | (byte)((param_1 & 0xffff) << 4);
    puVar8[3] = (char)(param_1 >> 4);
    if (_DAT_0001b4b0 <= uVar6) {
      thunk_EXT_FUN_0200010a();
      uVar4 = (uint)DAT_00007d75;
    }
    iVar2 = ((uVar4 & 2) >> 1) * 0xc;
    if (*(uint *)((iVar2 + 0x6cd3) * 4) <= _DAT_0001b4b0 - *(int *)((iVar2 + 0x6cd2) * 4)) {
      thunk_EXT_FUN_0200010a();
      uVar4 = (uint)DAT_00007d75;
    }
    iVar2 = ((uVar4 & 2) >> 1) * 0xc;
    uVar6 = 0xff05;
    if (uVar7 <= (*(int *)((iVar2 + 0x6cd3) * 4) + *(int *)((iVar2 + 0x6cd2) * 4)) - _DAT_0001b4b0)
    {
      FUN_01e140c4(puVar8,4);
      if (param_1 != 0) {
        uVar6 = _DAT_0001b4b0 + 4;
        if (param_2 == 0) {
          FUN_01e140c4(param_1);
        }
        else if (uVar6 + param_1 <= _DAT_0001a7d0) {
          func_0x020030ce(0x7448);
          uVar6 = 0x100 - (uVar6 & 0xff);
          if (param_1 < uVar6) {
            uVar6 = param_1;
          }
          func_0x0200189c(uVar6,1);
          iVar3 = (int)((ulonglong)in_r0_r1 >> 0x20) + uVar6;
          for (iVar2 = param_1 - uVar6; iVar2 != 0; iVar2 = iVar2 - iVar5) {
            iVar5 = iVar2;
            if (0xff < iVar2) {
              iVar5 = 0x100;
            }
            func_0x0200189c(iVar3,iVar5,1);
            iVar3 = iVar3 + iVar5;
          }
          func_0x02002964(0x7448);
        }
      }
      *(short *)(((uint)in_r0_r1 + 0x7c20) * 2) =
           (short)_DAT_00007d70 -
           (short)*(undefined4 *)((((DAT_00007d75 & 2) >> 1) * 0xc + 0x6cd2) * 4);
      _DAT_00007d70 = _DAT_00007d70 + uVar7;
      uVar6 = param_1;
    }
    FUN_01e149c6();
  }
  return uVar6;
}



// ==== FUN_01e14d0c @ 01e14d0c ====

void FUN_01e14d0c(void)

{
  FUN_01e14ac0(0);
  return;
}



// ==== FUN_01e14ede @ 01e14ede ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e14ede(void)

{
  if (DAT_00006b1c != '\0') {
    if (_DAT_00006b28 == 0) {
      func_0x0200010a();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// ==== FUN_01e14f26 @ 01e14f26 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e14f26(int param_1,int param_2)

{
  int in_cres;
  
  if (in_cres == 1) {
    param_2 = 0x35c;
  }
  if (*(char *)(param_2 + 0x67c0) != '\0') {
    _DAT_001e3600 = 0;
    if (param_1 != 0) {
      _DAT_001e3600 = (DAT_00006b20 & 1) << 1 | 1;
    }
  }
  return;
}



// ==== FUN_01e151ea @ 01e151ea ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e151ea(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e15790 @ 01e15790 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e15790(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e158d6 @ 01e158d6 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e158d6(undefined4 *param_1)

{
  if (DAT_00007088 == '\0') {
    DAT_00007089 = (undefined1)((_DAT_001e511c & 0x20) >> 5);
    _DAT_001e1c00 = _DAT_001e1c00 & 0xc00;
    _DAT_001e511c = _DAT_001e511c & 0xfffffffd;
    func_0x02003c62(0x7448);
    DAT_00007088 = '\x01';
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x6d90;
    _DAT_0001a4e0 = 0x7078;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== thunk_EXT_FUN_0200010a @ 01e15e0a ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== thunk_EXT_FUN_0200010a @ 01e15f92 ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e15f96 @ 01e15f96 ====

void FUN_01e15f96(int param_1,int *param_2)

{
  *(int **)(param_1 + 4) = param_2;
  *param_2 = param_1;
  return;
}



// ==== FUN_01e15f9c @ 01e15f9c ====

int * FUN_01e15f9c(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  
  uVar1 = param_2 + 0x18;
  iVar3 = 0;
  if ((uVar1 & 3) != 0) {
    iVar3 = 4 - (uVar1 & 3);
  }
  uVar1 = iVar3 + uVar1;
  func_0x0200206c();
  CoreSynchronize();
  piVar6 = (int *)(param_1 + 8);
  do {
    piVar6 = (int *)*piVar6;
    if (piVar6 == (int *)(param_1 + 8)) {
      piVar5 = (int *)0x0;
      goto LAB_01e1601a;
    }
    uVar7 = (uint)*(ushort *)(piVar6 + 2);
  } while (uVar7 < uVar1);
  piVar5 = piVar6;
  if (uVar1 + 0x14 < uVar7) {
    puVar2 = (undefined4 *)((int)piVar6 + (uVar1 - 4));
    *(ushort *)(puVar2 + 3) = *(ushort *)(piVar6 + 2) - (short)uVar1;
    puVar4 = (undefined4 *)piVar6[1];
    iVar3 = *piVar6;
    *(undefined4 **)(iVar3 + 4) = puVar2 + 1;
    puVar2[1] = iVar3;
    puVar2[2] = puVar4;
    *puVar4 = puVar2 + 1;
    *puVar2 = 0x5a5a5a5a;
    puVar2[4] = 0x5a5a5a5a;
    uVar7 = uVar1;
  }
  else {
    FUN_01e15f96(*piVar6,piVar6[1]);
  }
  piVar5[2] = param_1;
  *(undefined1 *)((int)piVar5 + 0xe) = 0;
  *(short *)(piVar5 + 3) = (short)uVar7;
  *(undefined1 *)((int)piVar5 + 0xf) = 0;
  piVar5[-1] = 0x5a5a5a5a;
  piVar5[4] = 0x5a5a5a5a;
  *piVar5 = (int)piVar5;
  piVar6[1] = (int)piVar5;
  piVar5 = piVar5 + 5;
LAB_01e1601a:
  func_0x0200207e(piVar5);
  return piVar5;
}



// ==== FUN_01e16022 @ 01e16022 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e16022(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)&DAT_00006b00;
    if (_DAT_00006b00 == 0) {
      thunk_EXT_FUN_0200010a();
      puVar1 = (undefined4 *)&DAT_00006b00;
    }
  }
  else {
    puVar1 = (undefined4 *)&DAT_00006b04;
    if (_DAT_00006b04 == 0) {
      thunk_EXT_FUN_0200010a();
      puVar1 = (undefined4 *)&DAT_00006b04;
    }
  }
  FUN_01e15f9c(*puVar1,param_2);
  return;
}



// ==== FUN_01e16058 @ 01e16058 ====

void FUN_01e16058(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 4);
  *(int *)(param_2 + 4) = param_1;
  *(int **)(param_1 + -4) = piVar1;
  *(int *)(param_1 + -8) = param_2;
  *piVar1 = param_1;
  return;
}



// ==== FUN_01e16064 @ 01e16064 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e16064(int param_1)

{
  if (param_1 != 0) {
    func_0x0200206c();
    CoreSynchronize();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// ==== thunk_FUN_01e16064 @ 01e16106 ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_01e16064(int param_1)

{
  if (param_1 != 0) {
    func_0x0200206c();
    CoreSynchronize();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// ==== FUN_01e16138 @ 01e16138 ====

void FUN_01e16138(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  iVar1 = param_1[1];
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *param_1 = param_1;
  param_1[1] = param_1;
  return;
}



// ==== FUN_01e16146 @ 01e16146 ====

int FUN_01e16146(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == param_1) {
    piVar1 = (int *)0x0;
  }
  else {
    func_0x0200206c();
    CoreSynchronize();
    FUN_01e16138(piVar1);
    func_0x0200207e();
  }
  return (int)piVar1;
}



// ==== thunk_EXT_FUN_0200010a @ 01e16164 ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e16168 @ 01e16168 ====

undefined2 FUN_01e16168(int param_1,int param_2)

{
  return *(undefined2 *)(param_1 + param_2);
}



// ==== thunk_EXT_FUN_0200010a @ 01e16176 ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e1617a @ 01e1617a ====

int FUN_01e1617a(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x1e16182;
  iVar1 = FUN_01e3d7d0();
  if (iVar1 == 0) {
    FUN_01e367de(s_RETS____08x_01e1b61e,uVar2);
    thunk_EXT_FUN_0200010a();
  }
  else {
    func_0x021127b4(0,param_1);
  }
  return iVar1;
}



// ==== FUN_01e161a4 @ 01e161a4 ====

int FUN_01e161a4(void)

{
  int iVar1;
  
  iVar1 = FUN_01e1617a();
  if (iVar1 == 0) {
    thunk_EXT_FUN_0200010a();
  }
  return iVar1;
}



// ==== thunk_EXT_FUN_0200010a @ 01e161b2 ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e161b6 @ 01e161b6 ====

void FUN_01e161b6(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 4);
  *(int *)(param_2 + 4) = param_1;
  *(int **)(param_1 + -4) = piVar1;
  *(int *)(param_1 + -8) = param_2;
  *piVar1 = param_1;
  return;
}



// ==== thunk_EXT_FUN_0200010a @ 01e161c2 ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e161c6 @ 01e161c6 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x01e162d2) overlaps instruction at (ram,0x01e162d0)
    */

byte * FUN_01e161c6(byte *param_1,byte *param_2,byte *param_3)

{
  byte **ppbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte **ppbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  byte *unaff_r5;
  byte *unaff_r6;
  int unaff_r7;
  byte *unaff_r8;
  BADSPACEBASE *in_sp;
  byte **ppbVar9;
  byte **ppbVar10;
  byte **ppbVar11;
  byte **ppbVar12;
  byte **ppbVar13;
  byte **ppbVar14;
  byte **ppbVar15;
  byte **ppbVar16;
  byte **ppbVar17;
  byte **ppbVar18;
  byte **ppbVar19;
  byte **ppbVar20;
  byte **ppbVar21;
  byte **ppbVar22;
  byte **ppbVar23;
  byte **ppbVar24;
  byte **ppbVar25;
  byte **ppbVar26;
  byte **ppbVar27;
  byte **ppbVar28;
  byte **ppbVar29;
  byte **ppbVar30;
  byte **ppbVar31;
  byte **ppbVar32;
  byte **ppbVar33;
  byte **ppbVar34;
  byte **ppbVar35;
  byte **ppbVar36;
  byte **ppbVar37;
  byte **ppbVar38;
  byte **ppbVar39;
  byte **ppbVar40;
  byte **ppbVar41;
  int in_cres;
  byte *local_10;
  
  ppbVar31 = &local_10;
  ppbVar10 = &local_10;
  ppbVar38 = &local_10;
  ppbVar13 = &local_10;
  ppbVar41 = &local_10;
  ppbVar4 = &local_10;
  local_10 = param_2;
  pbVar2 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    return (byte *)0x0;
  }
BYTE_01e1629a:
  pbVar5 = (byte *)(int)(char)*param_1;
  if (pbVar5 == (byte *)0x0) {
    return pbVar2;
  }
  pbVar6 = pbVar5 + -0x41;
  if ((byte *)0xa < pbVar6) goto code_r0x01e161ee;
  if ((byte *)0x3 < pbVar5 + -0x31) {
    if (pbVar5 == (byte *)0x62) {
      pbVar2 = (byte *)(int)(char)param_1[1];
      pbVar5 = (byte *)(int)(char)param_1[3];
      param_1 = param_1 + 3;
      goto code_r0x01e16266;
    }
    if (pbVar5 == (byte *)0x63) {
      halt_baddata();
    }
    if (pbVar5 != (byte *)0x6c) goto code_r0x01e16298;
    goto code_r0x01e16210;
  }
  *ppbVar4 = (byte *)((int)*ppbVar4 + 4);
  pbVar2 = pbVar2 + (int)pbVar5 + -0x30;
  goto code_r0x01e16298;
code_r0x01e161ee:
  pbVar3 = pbVar2;
  pbVar8 = pbVar6;
  ppbVar14 = &local_10;
  ppbVar40 = &local_10;
  ppbVar9 = &local_10;
  ppbVar15 = &local_10;
  ppbVar22 = &local_10;
  ppbVar33 = &local_10;
  ppbVar11 = &local_10;
  ppbVar12 = &local_10;
  ppbVar39 = &local_10;
  ppbVar34 = &local_10;
  ppbVar36 = &local_10;
  ppbVar37 = &local_10;
  ppbVar35 = &local_10;
  ppbVar1 = &local_10;
  ppbVar23 = &local_10;
  ppbVar24 = &local_10;
  ppbVar25 = &local_10;
  ppbVar26 = &local_10;
  ppbVar27 = &local_10;
  ppbVar28 = &local_10;
  ppbVar29 = &local_10;
  ppbVar30 = &local_10;
  ppbVar16 = &local_10;
  ppbVar17 = &local_10;
  ppbVar18 = &local_10;
  ppbVar19 = &local_10;
  ppbVar20 = &local_10;
  ppbVar21 = &local_10;
  ppbVar32 = &local_10;
  switch(*param_1) {
  case 0:
  case 0x2c:
  case 0xa6:
  case 0xb2:
  case 0xce:
  case 0xd4:
  case 0xda:
  case 0xf2:
  case 0xfa:
    goto code_r0x01e1621c;
  case 1:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x75:
  case 0x79:
  case 0x7d:
    goto code_r0x01e16298;
  default:
    goto code_r0x01e161f8;
  case 3:
  case 0x13:
  case 0x2f:
  case 0x85:
  case 0xb5:
  case 199:
    goto code_r0x01e1638e;
  case 4:
  case 0x14:
  case 0x86:
  case 0xa0:
  case 0xaa:
  case 0xb6:
  case 200:
  case 0xd0:
  case 0xdc:
  case 0xec:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    pbVar2 = (byte *)func_0x021127a8();
    return pbVar2;
  case 6:
  case 0x16:
  case 0xb8:
  case 0xca:
    pbVar2 = pbVar2 + (int)pbVar5 * 10;
  case 0xd9:
    pbVar2 = pbVar2 + -0x210;
    goto code_r0x01e16298;
  case 7:
    goto code_r0x01e16214;
  case 8:
  case 10:
  case 0x8e:
  case 0x94:
    goto code_r0x01e162b2;
  case 9:
  case 0xa8:
    ppbVar20 = &local_10;
    goto switchD_01e162e0_caseD_98;
  case 0xb:
  case 0x1c:
  case 0x1e:
  case 0x38:
  case 0x50:
  case 0x62:
  case 0x66:
  case 0x72:
  case 0xa3:
  case 0xb0:
  case 0xd8:
  case 0xed:
    goto code_r0x01e16230;
  case 0xc:
  case 0x36:
  case 0x4e:
  case 0x70:
  case 0x8a:
    goto code_r0x01e163c6;
  case 0xd:
  case 0x41:
  case 0x8b:
    goto code_r0x01e161fc;
  case 0xe:
  case 0x12:
  case 0x80:
  case 0x89:
  case 0x8c:
  case 0x96:
  case 0x9b:
  case 0xa4:
  case 0xb3:
  case 0xc6:
  case 0xe3:
    unaff_r6 = (byte *)((uint)param_1 & 0xff);
  case 0x40:
  case 0x77:
  case 0xea:
    ppbVar4 = (byte **)(uint)pbVar2[-0xc];
code_r0x01e161f4:
    if (pbVar6 == (byte *)0x0) {
      return (byte *)0x0;
    }
code_r0x01e161f6:
    pbVar6 = (byte *)0x4d;
code_r0x01e161f8:
    if (pbVar6 == (byte *)0x0) {
      return param_1;
    }
code_r0x01e161fa:
code_r0x01e161fc:
    *ppbVar4 = (byte *)((int)*ppbVar4 + 4);
code_r0x01e16200:
    pbVar2 = pbVar2 + 6;
code_r0x01e16202:
    goto code_r0x01e16298;
  case 0xf:
  case 0xbf:
    goto switchD_01e162e0_caseD_25;
  case 0x10:
  case 0x68:
  case 0x82:
  case 0x90:
  case 0x92:
  case 0x9a:
  case 0xc1:
    goto code_r0x01e162b0;
  case 0x11:
  case 0x22:
  case 0x91:
  case 0x93:
  case 0x95:
  case 0xc3:
  case 0xc5:
    pbVar3 = param_1 + 4;
  case 0x1b:
  case 0xae:
  case 0xcf:
  case 0xeb:
    pbVar2 = *(byte **)param_1;
    param_1 = unaff_r6;
    local_10 = pbVar3;
  case 0x29:
  case 100:
  case 0x65:
  case 0xfb:
  case 0xfe:
code_r0x01e162f8:
    func_0x021127a8(param_1,pbVar2,6);
    unaff_r6 = unaff_r6 + 6;
    ppbVar14 = ppbVar13;
switchD_01e162e0_caseD_16:
    ppbVar40 = ppbVar14;
    goto switchD_01e162e0_caseD_f;
  case 0x15:
    goto code_r0x01e16334;
  case 0x17:
  case 0xcb:
    goto code_r0x01e162da;
  case 0x19:
    goto code_r0x01e163b4;
  case 0x1a:
    goto switchD_01e162e0_caseD_58;
  case 0x1d:
  case 0xbc:
  case 0xd7:
  case 0xfc:
    goto code_r0x01e16272;
  case 0x1f:
  case 0x3c:
  case 0x78:
  case 0x9e:
  case 0xa5:
  case 0xb1:
    goto code_r0x01e16250;
  case 0x20:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x21:
  case 0x54:
    goto code_r0x01e16304;
  case 0x23:
  case 0x25:
  case 0x2d:
    goto code_r0x01e16258;
  case 0x24:
  case 0x5d:
    pbVar2 = *(byte **)param_1;
    goto code_r0x01e162f8;
  case 0x26:
  case 0x2e:
  case 0xc0:
  case 0xe9:
    goto LAB_01e163b2;
  case 0x27:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x28:
  case 0x30:
    param_1 = unaff_r6 + unaff_r7;
    break;
  case 0x2a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2b:
  case 0xbb:
    goto code_r0x01e16202;
  case 0x32:
    goto switchD_01e162e0_caseD_2f;
  case 0x33:
  case 0x97:
  case 0xb9:
code_r0x01e16210:
    pbVar6 = local_10 + 4;
    pbVar5 = local_10;
code_r0x01e16214:
    local_10 = pbVar6;
code_r0x01e16216:
    pbVar5 = *(byte **)pbVar5;
code_r0x01e16218:
    pbVar2 = pbVar2 + (int)pbVar5 + 1;
code_r0x01e1621c:
    goto code_r0x01e16298;
  case 0x34:
  case 0x9d:
  case 0xbd:
    goto code_r0x01e16200;
  case 0x35:
  case 0x4d:
  case 0x6f:
  case 0xe5:
    goto code_r0x01e16370;
  case 0x39:
  case 0x4c:
  case 0x69:
    pbVar6 = local_10 + 4;
    pbVar5 = local_10;
  case 0x67:
    local_10 = pbVar6;
code_r0x01e16258:
    pbVar2 = pbVar2 + *(int *)pbVar5;
    goto code_r0x01e16298;
  case 0x3a:
  case 0x6a:
  case 0xba:
  case 0x42:
  case 0xc4:
    *ppbVar4 = (byte *)((int)*ppbVar4 + 4);
    goto code_r0x01e16298;
  case 0x3b:
    goto switchD_01e162e0_caseD_5;
  case 0x3d:
  case 0x53:
    goto code_r0x01e16238;
  case 0x3e:
    goto code_r0x01e1631a;
  case 0x43:
    pbVar5 = (byte *)(int)(char)param_1[1];
    pbVar6 = (byte *)(int)(char)param_1[3];
    param_1 = param_1 + 3;
  case 0xe7:
    unaff_r5 = (byte *)(int)(char)param_1[3];
    param_1 = param_1 + 3;
code_r0x01e16230:
    *ppbVar4 = (byte *)((int)*ppbVar4 + 4);
    pbVar5 = (byte *)((int)pbVar5 * 100);
code_r0x01e16238:
    pbVar2 = pbVar2 + (int)pbVar5 + (int)unaff_r5;
code_r0x01e1623c:
    pbVar2 = pbVar2 + (int)pbVar6 * 10 + -0x14d0;
code_r0x01e16246:
    param_1 = param_1 + 3;
    goto code_r0x01e16298;
  case 0x48:
    *ppbVar4 = (byte *)((int)*ppbVar4 + 4);
    pbVar2 = pbVar2 + 2;
code_r0x01e16250:
    goto code_r0x01e16298;
  case 0x51:
  case 0x6b:
    goto code_r0x01e16372;
  case 0x52:
    goto code_r0x01e1623c;
  case 0x55:
  case 0x59:
  case 0x61:
  case 0x7f:
  case 0x99:
  case 0xee:
    goto code_r0x01e161f6;
  case 0x56:
  case 0x5a:
  case 0x5e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x57:
    goto code_r0x01e16246;
  case 0x58:
    unaff_r6 = unaff_r6 + (int)pbVar6;
    unaff_r5 = unaff_r5 + 3;
  case 0x5c:
    ppbVar40 = &local_10;
    goto switchD_01e162e0_caseD_f;
  case 0x5b:
    ppbVar4 = (byte **)param_3;
  case 0xd2:
code_r0x01e16266:
    pbVar2 = pbVar5 + (int)pbVar2 * 10 + -0x210;
    break;
  case 0x5f:
    goto code_r0x01e1627a;
  case 0x60:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 99:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6c:
    pbVar6 = local_10;
    goto code_r0x01e16230;
  case 0x6d:
  case 0x73:
  case 0xc2:
    goto code_r0x01e16218;
  case 0x6e:
    goto code_r0x01e1632a;
  case 0x74:
    goto switchD_01e162e0_caseD_72;
  case 0x76:
  case 0x7a:
  case 0x7e:
LAB_01e163c8:
    param_1 = *ppbVar38;
    ppbVar4 = (byte **)(int)(char)unaff_r5[2];
    pbVar5 = (byte *)(int)(char)unaff_r5[3];
    ppbVar39 = ppbVar38;
switchD_01e162e0_caseD_5:
    *ppbVar39 = param_1 + 4;
    pbVar2 = *(byte **)param_1;
    pbVar6 = (byte *)((int)ppbVar4 + (int)pbVar5 * 10 + -0x210);
switchD_01e162e0_caseD_2f:
    pbVar2 = (byte *)func_0x021127a8(unaff_r6,pbVar2,pbVar6);
    return pbVar2;
  case 0x7b:
    goto code_r0x01e161f4;
  case 0x7c:
  case 0xbe:
  case 0xf1:
  case 0xff:
    break;
  case 0x81:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x83:
  case 0xe0:
    goto switchD_01e162e0_caseD_16;
  case 0x87:
    goto code_r0x01e16336;
  case 0x88:
  case 0xa2:
  case 0xac:
    unaff_r8 = param_1;
code_r0x01e162b0:
    unaff_r6 = unaff_r8;
    unaff_r8 = unaff_r6;
code_r0x01e162b2:
    goto switchD_01e162e0_caseD_3e;
  case 0x8d:
    goto code_r0x01e16314;
  case 0x8f:
    goto code_r0x01e16332;
  case 0x9c:
    goto code_r0x01e163c0;
  case 0x9f:
  case 0xa9:
    goto switchD_01e162e0_caseD_0;
  case 0xa1:
    goto switchD_01e162e0_caseD_81;
  case 0xa7:
  case 0xef:
  case 0xf7:
  case 0xfd:
    param_1 = local_10;
    goto code_r0x01e162d6;
  case 0xab:
    goto switchD_01e162e0_caseD_98;
  case 0xaf:
    goto code_r0x01e16276;
  case 0xb7:
    local_10 = param_1 + 4;
    ppbVar40 = &local_10;
    goto switchD_01e162e0_caseD_f;
  case 0xc9:
    local_10 = param_1 + 4;
    param_1 = *(byte **)param_1;
    *unaff_r6 = (byte)param_1;
    goto LAB_01e16388;
  case 0xcd:
    goto code_r0x01e161fa;
  case 0xd1:
    ppbVar4 = (byte **)(uint)*param_1;
    goto code_r0x01e1623c;
  case 0xd6:
    goto code_r0x01e1627a;
  case 0xdb:
    goto code_r0x01e1631e;
  case 0xdd:
  case 0xe4:
    goto code_r0x01e16216;
  case 0xde:
    goto code_r0x01e163b6;
  case 0xe1:
    goto code_r0x01e162b8;
  case 0xe2:
    goto switchD_01e162e0_caseD_29;
  case 0xe6:
    goto switchD_01e162e0_caseD_f;
  case 0xe8:
    iVar7 = (int)pbVar2 * 10;
    pbVar2 = *(byte **)param_1;
    pbVar8 = (byte *)((int)ppbVar4 + (int)pbVar5 * 100 + iVar7 + -0x14d0);
    local_10 = pbVar6;
code_r0x01e16370:
    param_1 = unaff_r6;
code_r0x01e16372:
    pbVar2 = (byte *)func_0x021127a8(param_1,pbVar2,pbVar8);
    return pbVar2;
  case 0xf0:
    goto switchD_01e162e0_caseD_19;
  case 0xf3:
    goto BYTE_01e1629a;
  case 0xf5:
    goto code_r0x01e162d8;
  case 0xf8:
    goto switchD_01e162e0_caseD_c0;
  }
  param_1 = param_1 + 2;
code_r0x01e16272:
  for (pbVar5 = pbVar2; pbVar5 != (byte *)0x0; pbVar5 = pbVar5 + -1) {
code_r0x01e16276:
    *ppbVar4 = (byte *)((int)*ppbVar4 + 4);
code_r0x01e1627a:
  }
code_r0x01e16298:
  param_1 = param_1 + 1;
  goto BYTE_01e1629a;
code_r0x01e1638e:
  do {
    ppbVar40 = ppbVar32;
switchD_01e162e0_caseD_f:
    while( true ) {
      while( true ) {
        unaff_r5 = unaff_r5 + 1;
        ppbVar41 = ppbVar40;
switchD_01e162e0_caseD_3e:
        param_1 = (byte *)(int)(char)*unaff_r5;
        if (param_1 == (byte *)0x0) {
          return unaff_r6 + -(int)unaff_r8;
        }
        pbVar2 = param_1 + -0x41;
        ppbVar9 = ppbVar41;
code_r0x01e162b8:
        ppbVar4 = (byte **)unaff_r6;
        if ((byte *)0xa < pbVar2) {
                    /* WARNING: Could not recover jumptable at 0x01e162e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pbVar2 = (byte *)(*(code *)(&switchD_01e162e0::caseD_27 + (uint)pbVar2[0x1e162e2] * 2))();
          return pbVar2;
        }
        unaff_r6 = (byte *)ppbVar4;
        ppbVar15 = ppbVar9;
        if (pbVar2 + 0x10 < (byte *)0x2) break;
        if (pbVar2 + 0xe < (byte *)0x2) {
          param_1 = *ppbVar9;
          pbVar2 = param_1 + 4;
          ppbVar22 = ppbVar9;
code_r0x01e1631a:
          *ppbVar22 = pbVar2;
          param_1 = *(byte **)param_1;
          ppbVar23 = ppbVar22;
code_r0x01e1631e:
          *unaff_r6 = (byte)param_1;
          unaff_r6[1] = (byte)((uint)param_1 >> 8);
          ppbVar24 = ppbVar23;
switchD_01e162e0_caseD_72:
          unaff_r6[2] = (byte)((uint)param_1 >> 0x10);
          pbVar2 = (byte *)(uint)*unaff_r5;
          ppbVar25 = ppbVar24;
code_r0x01e1632a:
          ppbVar26 = ppbVar25;
          if (pbVar2 == (byte *)0x34) {
            in_cres = 1;
          }
          else {
            in_cres = 0;
          }
switchD_01e162e0_caseD_58:
          ppbVar27 = ppbVar26;
          if (in_cres == 1) {
            param_1 = (byte *)((uint)param_1 >> 0x18);
          }
switchD_01e162e0_caseD_25:
          ppbVar28 = ppbVar27;
          if (in_cres == 1) {
            unaff_r6[3] = (byte)param_1;
          }
code_r0x01e16332:
          ppbVar29 = ppbVar28;
          if (in_cres == 1) {
            unaff_r6 = unaff_r6 + 4;
          }
code_r0x01e16334:
          ppbVar30 = ppbVar29;
          if (in_cres != 1) {
            unaff_r6 = unaff_r6 + 3;
          }
code_r0x01e16336:
          ppbVar40 = ppbVar30;
        }
        else if (param_1 == (byte *)0x62) {
          param_1 = (byte *)((char)unaff_r5[1] * 10 + (int)(char)unaff_r5[3]);
          pbVar2 = param_1 + -0x210;
          unaff_r5 = unaff_r5 + 5;
          ppbVar33 = ppbVar9;
switchD_01e162e0_caseD_29:
          for (; ppbVar34 = ppbVar33, ppbVar36 = ppbVar33, pbVar2 != (byte *)0x0;
              pbVar2 = pbVar2 + -1) {
LAB_01e163b2:
            pbVar5 = *ppbVar34;
            ppbVar35 = ppbVar34;
code_r0x01e163b4:
            pbVar6 = pbVar5 + 4;
            ppbVar1 = ppbVar35;
code_r0x01e163b6:
            ppbVar33 = ppbVar1;
            *ppbVar33 = pbVar6;
            *(byte *)ppbVar4 = (byte)*(int *)pbVar5;
            ppbVar4 = (byte **)((int)ppbVar4 + 1);
          }
code_r0x01e163c0:
          unaff_r6 = param_1 + (int)unaff_r6 + -0x210;
          ppbVar37 = ppbVar36;
code_r0x01e163c6:
          ppbVar40 = ppbVar37;
        }
        else {
          ppbVar38 = ppbVar9;
          if (param_1 == (byte *)0x63) goto LAB_01e163c8;
          ppbVar40 = ppbVar9;
          if (param_1 == (byte *)0x6c) {
            param_1 = *ppbVar9;
            ppbVar10 = ppbVar9;
code_r0x01e162d6:
            pbVar2 = param_1 + 4;
            ppbVar11 = ppbVar10;
code_r0x01e162d8:
            *ppbVar11 = pbVar2;
            ppbVar12 = ppbVar11;
code_r0x01e162da:
            *unaff_r6 = (byte)*(int *)param_1;
            unaff_r6 = unaff_r6 + 1;
            ppbVar40 = ppbVar12;
          }
        }
      }
switchD_01e162e0_caseD_c0:
      param_1 = *ppbVar15;
      ppbVar16 = ppbVar15;
code_r0x01e16304:
      pbVar2 = param_1 + 4;
      ppbVar17 = ppbVar16;
switchD_01e162e0_caseD_19:
      *ppbVar17 = pbVar2;
      param_1 = *(byte **)param_1;
      ppbVar18 = ppbVar17;
switchD_01e162e0_caseD_81:
      *unaff_r6 = (byte)param_1;
      pbVar2 = (byte *)(uint)*unaff_r5;
      ppbVar19 = ppbVar18;
switchD_01e162e0_caseD_0:
      ppbVar31 = ppbVar19;
      ppbVar20 = ppbVar19;
      if (pbVar2 == (byte *)0x32) break;
switchD_01e162e0_caseD_98:
      unaff_r6 = unaff_r6 + 1;
      ppbVar21 = ppbVar20;
code_r0x01e16314:
      ppbVar40 = ppbVar21;
    }
LAB_01e16388:
    unaff_r6[1] = (byte)((uint)param_1 >> 8);
    unaff_r6 = unaff_r6 + 2;
    ppbVar32 = ppbVar31;
  } while( true );
}



// ==== FUN_01e162a6 @ 01e162a6 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x01e16568) overlaps instruction at (ram,0x01e16564)
    */
/* WARNING: Possible PIC construction at 0x01e16480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e16484) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_01e162a6(uint *param_1,byte *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *unaff_r4;
  uint *puVar6;
  uint unaff_r7;
  int unaff_r12;
  byte *unaff_retaddr;
  BADSPACEBASE *in_sp;
  uint **ppuVar7;
  int in_cres;
  uint *local_1c;
  
  ppuVar7 = &local_1c;
  local_1c = param_3;
  puVar6 = param_1;
switchD_01e162e0_caseD_3e:
  bVar1 = *param_2;
  puVar2 = (uint *)(int)(char)bVar1;
  if (puVar2 == (uint *)0x0) {
    return (uint *)((int)puVar6 - (int)param_1);
  }
  puVar3 = (uint *)((int)puVar2 + -0x41);
  if ((uint *)0xa < puVar3) goto switchD_01e162e0_switchD;
  param_3 = (uint *)((int)puVar2 + -0x31);
  if (param_3 < (uint *)0x2) goto switchD_01e162e0_caseD_c0;
  if ((byte *)((int)puVar2 + -0x33) < (byte *)0x2) goto switchD_01e162e0_caseD_1b;
  if (puVar2 == (uint *)0x62) goto switchD_01e162e0_caseD_dc;
  if (puVar2 == (uint *)0x63) {
    puVar2 = *ppuVar7;
    goto switchD_01e162e0_caseD_5;
  }
  if (puVar2 == (uint *)0x6c) {
    puVar2 = *ppuVar7;
    *ppuVar7 = puVar2 + 1;
    unaff_r7 = *puVar2;
    *(byte *)puVar6 = (byte)unaff_r7;
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  goto switchD_01e162e0_caseD_f;
switchD_01e162e0_switchD:
  switch(bVar1) {
  case 0:
  case 0xe:
  case 0x10:
  case 0x1a:
  case 0xd2:
    goto switchD_01e162e0_caseD_0;
  case 1:
  case 0x89:
  case 0xc3:
  case 0xe5:
    goto code_r0x01e15cf4;
  case 2:
  case 0x17:
  case 0x23:
  case 0x37:
  case 0x51:
  case 0x65:
  case 0x79:
  case 0x7f:
    goto switchD_01e162e0_caseD_2;
  case 3:
  case 0x5b:
    goto switchD_01e162e0_caseD_3;
  case 4:
  case 6:
  case 0x20:
  case 0x26:
  case 0x91:
  case 0xab:
  case 0xbb:
  case 0xd3:
  case 0xd7:
  case 0xdd:
  case 0xe9:
switchD_01e162e0_caseD_4:
    goto code_r0x01e15cf8;
  case 5:
    goto switchD_01e162e0_caseD_5;
  case 7:
  case 0x5c:
    goto switchD_01e162e0_caseD_7;
  case 8:
    goto switchD_01e162e0_caseD_8;
  case 9:
    goto switchD_01e162e0_caseD_9;
  case 10:
  case 0x54:
    goto switchD_01e162e0_caseD_a;
  case 0xb:
  case 0x1d:
    goto switchD_01e162e0_caseD_b;
  default:
    goto switchD_01e162e0_caseD_c;
  case 0xd:
    goto switchD_01e162e0_caseD_d;
  case 0xf:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x49:
  case 0x4a:
  case 0x4b:
    goto switchD_01e162e0_caseD_f;
  case 0x11:
  case 0x3d:
    goto switchD_01e162e0_caseD_11;
  case 0x12:
    if (unaff_r12 < 0x83) {
      halt_baddata();
    }
    goto code_r0x01e16532;
  case 0x13:
  case 0x97:
  case 0x9f:
  case 0xb9:
  case 0xc9:
  case 0xcb:
  case 0xf1:
  case 0xf3:
    goto switchD_01e162e0_caseD_13;
  case 0x14:
  case 0x94:
  case 0x9c:
  case 0xa2:
  case 0xc5:
  case 0xc6:
  case 0xcc:
  case 0xee:
  case 0xf4:
    ppuVar7[-1] = (uint *)unaff_retaddr;
    ppuVar7[-2] = (uint *)unaff_r7;
    ppuVar7[-3] = puVar6;
    ppuVar7[-4] = (uint *)param_2;
    ppuVar7[-5] = unaff_r4;
switchD_01e162e0_caseD_7:
    param_4 = puVar3;
switchD_01e162e0_caseD_93:
    func_0x0200206c();
    CoreSynchronize();
    unaff_r4 = puVar2;
switchD_01e162e0_caseD_3b:
    puVar2 = (uint *)(uint)(byte)unaff_r4[3];
switchD_01e162e0_caseD_69:
    puVar3 = (uint *)(uint)*(byte *)((int)unaff_r4 + 0xd);
    puVar2 = (uint *)((int)puVar2 << 0x18);
  case 0x5a:
switchD_01e162e0_caseD_5a:
    puVar6 = (uint *)(uint)*(byte *)((int)unaff_r4 + 0xf);
    puVar2 = (uint *)((uint)puVar2 & 0xff0000ff | ((uint)puVar3 & 0xff) << 0x10 |
                     (uint)*(byte *)((int)unaff_r4 + 0xe) << 8);
switchD_01e162e0_caseD_cd:
    _DAT_001e4308 = (uint)puVar2 | (uint)puVar6;
    puVar2 = (uint *)&DAT_001e4300;
    puVar3 = (uint *)(uint)(byte)unaff_r4[2];
code_r0x01e164d0:
    param_2 = (byte *)(uint)*(byte *)((int)unaff_r4 + 9);
switchD_01e162e0_caseD_28:
    puVar3 = (uint *)((int)puVar3 << 0x18);
switchD_01e162e0_caseD_1e:
    puVar6 = (uint *)(uint)*(byte *)((int)unaff_r4 + 10);
    puVar3 = (uint *)((uint)puVar3 & 0xff00ffff | ((uint)param_2 & 0xff) << 0x10);
switchD_01e162e0_caseD_18:
    puVar2[2] = (uint)puVar3 & 0xffff00ff | ((uint)puVar6 & 0xff) << 8 |
                (uint)*(byte *)((int)unaff_r4 + 0xb);
    puVar2[2] = (uint)(byte)unaff_r4[1] << 0x18 | (uint)*(byte *)((int)unaff_r4 + 5) << 0x10 |
                (uint)*(byte *)((int)unaff_r4 + 6) << 8 | (uint)*(byte *)((int)unaff_r4 + 7);
    puVar2[2] = (uint)(byte)*unaff_r4 << 0x18 | (uint)*(byte *)((int)unaff_r4 + 1) << 0x10 |
                (uint)*(byte *)((int)unaff_r4 + 2) << 8 | (uint)*(byte *)((int)unaff_r4 + 3);
    *puVar2 = 0x10;
    do {
    } while ((*puVar2 & 0x15) != 0);
    puVar2[1] = (uint)(byte)param_4[3] << 0x18 | (uint)*(byte *)((int)param_4 + 0xd) << 0x10 |
                (uint)*(byte *)((int)param_4 + 0xe) << 8 | (uint)*(byte *)((int)param_4 + 0xf);
    puVar3 = (uint *)(uint)(byte)param_4[2];
code_r0x01e16532:
    puVar2[1] = (int)puVar3 << 0x18 | (uint)*(byte *)((int)param_4 + 9) << 0x10 |
                (uint)*(byte *)((int)param_4 + 10) << 8 | (uint)*(byte *)((int)param_4 + 0xb);
    puVar2[1] = (uint)(byte)param_4[1] << 0x18 | (uint)*(byte *)((int)param_4 + 5) << 0x10 |
                (uint)*(byte *)((int)param_4 + 6) << 8 | (uint)*(byte *)((int)param_4 + 7);
    puVar2[1] = (uint)(byte)*param_4 << 0x18 | (uint)*(byte *)((int)param_4 + 1) << 0x10 |
                (uint)*(byte *)((int)param_4 + 2) << 8 | (uint)*(byte *)((int)param_4 + 3);
    *puVar2 = 1;
    do {
    } while ((*puVar2 & 9) != 0);
    *(byte *)param_3 = (byte)puVar2[3];
    *(byte *)((int)param_3 + 1) = (byte)(puVar2[3] >> 8);
    *(byte *)((int)param_3 + 2) = (byte)(puVar2[3] >> 0x10);
    *(byte *)((int)param_3 + 3) = (byte)(puVar2[3] >> 0x18);
    *(byte *)(param_3 + 1) = (byte)puVar2[4];
    *(byte *)((int)param_3 + 5) = (byte)(puVar2[4] >> 8);
    *(byte *)((int)param_3 + 6) = (byte)(puVar2[4] >> 0x10);
    *(byte *)((int)param_3 + 7) = (byte)(puVar2[4] >> 0x18);
    *(byte *)(param_3 + 2) = (byte)puVar2[5];
    *(byte *)((int)param_3 + 9) = (byte)(puVar2[5] >> 8);
    *(byte *)((int)param_3 + 10) = (byte)(puVar2[5] >> 0x10);
    *(byte *)((int)param_3 + 0xb) = (byte)(puVar2[5] >> 0x18);
    *(byte *)(param_3 + 3) = (byte)puVar2[6];
    *(byte *)((int)param_3 + 0xd) = (byte)(puVar2[6] >> 8);
    *(byte *)((int)param_3 + 0xe) = (byte)(puVar2[6] >> 0x10);
    *(byte *)((int)param_3 + 0xf) = (byte)(puVar2[6] >> 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x15:
    puVar2 = (uint *)((uint)puVar2 & 0xffff);
  case 0x8f:
  case 0xa5:
  case 0xa9:
  case 0xcf:
  case 0xd5:
  case 0xe7:
  case 0xf7:
    puVar6 = (uint *)thunk_FUN_01e370f4(puVar2);
    return puVar6;
  case 0x16:
    goto switchD_01e162e0_caseD_16;
  case 0x18:
    goto switchD_01e162e0_caseD_18;
  case 0x19:
    break;
  case 0x1b:
switchD_01e162e0_caseD_1b:
    puVar2 = *ppuVar7;
  case 0xa4:
    *ppuVar7 = puVar2 + 1;
switchD_01e162e0_caseD_ce:
    puVar2 = (uint *)*puVar2;
    *(byte *)puVar6 = (byte)puVar2;
    puVar3 = (uint *)((uint)puVar2 >> 8);
switchD_01e162e0_caseD_c:
    *(byte *)((int)puVar6 + 1) = (byte)puVar3;
switchD_01e162e0_caseD_72:
    puVar3 = (uint *)((uint)puVar2 >> 0x10);
switchD_01e162e0_caseD_ae:
    *(byte *)((int)puVar6 + 2) = (byte)puVar3;
switchD_01e162e0_caseD_a6:
    if (*param_2 == 0x34) {
      in_cres = 1;
    }
    else {
      in_cres = 0;
    }
switchD_01e162e0_caseD_58:
    if (in_cres == 1) {
      puVar2 = (uint *)((uint)puVar2 >> 0x18);
    }
switchD_01e162e0_caseD_25:
    if (in_cres == 1) {
      *(byte *)((int)puVar6 + 3) = (byte)puVar2;
      puVar6 = puVar6 + 1;
    }
    else {
      puVar6 = (uint *)((int)puVar6 + 3);
    }
    goto switchD_01e162e0_caseD_f;
  case 0x1c:
    func_0x0200206c();
    CoreSynchronize();
    *(byte *)((int)puVar2 + -6) = 0;
    param_3 = puVar2;
  case 0x60:
    puVar2 = (uint *)(uint)*(byte *)((int)param_3 + -5);
switchD_01e162e0_caseD_59:
    *(byte *)((int)param_3 + -5) = (char)puVar2 + 1;
    if (puVar2 == (uint *)0x0) {
switchD_01e162e0_caseD_82:
      puVar3 = (uint *)param_3[-3];
      puVar2 = param_3 + -5;
switchD_01e162e0_caseD_bc:
      FUN_01e16058(puVar2,puVar3);
    }
switchD_01e162e0_caseD_8:
    halt_baddata();
  case 0x1e:
  case 0x24:
    goto switchD_01e162e0_caseD_1e;
  case 0x21:
  case 0xad:
    *(short *)puVar6 = (short)param_2;
    ppuVar7[-1] = (uint *)unaff_retaddr;
  case 0xfd:
    param_3 = puVar2;
switchD_01e162e0_caseD_2a:
    func_0x0200206c();
switchD_01e162e0_caseD_2e:
    CoreSynchronize();
    puVar6 = param_3;
    while (puVar6 = (uint *)*puVar6, puVar6 != param_3) {
      if (*(byte *)((int)puVar6 + 0xe) == 0) {
        *(byte *)((int)puVar6 + 0xe) = 1;
        halt_baddata();
      }
    }
    func_0x0200207e();
    puVar2 = (uint *)0x0;
switchD_01e162e0_caseD_a:
    return puVar2;
  case 0x22:
    goto switchD_01e162e0_caseD_22;
  case 0x25:
    goto switchD_01e162e0_caseD_25;
  case 0x27:
  case 0x2b:
  case 0x33:
  case 0x4d:
  case 0x61:
  case 0x67:
  case 0x75:
  case 0x7b:
  case 0xfb:
  case 0x3f:
  case 0x40:
  case 0x55:
  case 0x6d:
  case 0x85:
  case 0xbf:
  case 0xe1:
    FUN_01e076ee();
    halt_baddata();
  case 0x28:
  case 0x2c:
  case 0x30:
  case 0x6e:
    goto switchD_01e162e0_caseD_28;
  case 0x29:
    goto switchD_01e162e0_caseD_29;
  case 0x2a:
    goto switchD_01e162e0_caseD_2a;
  case 0x2d:
switchD_01e162e0_caseD_5:
    *ppuVar7 = puVar2 + 1;
    puVar3 = (uint *)*puVar2;
switchD_01e162e0_caseD_2f:
    puVar2 = puVar6;
switchD_01e162e0_caseD_2:
switchD_01e162e0_caseD_b:
    puVar6 = (uint *)func_0x021127a8(puVar2,puVar3);
    return puVar6;
  case 0x2e:
  case 0x5d:
  case 0x71:
    goto switchD_01e162e0_caseD_2e;
  case 0x2f:
    goto switchD_01e162e0_caseD_2f;
  case 0x31:
    return puVar2;
  case 0x32:
    func_0x0200206c();
    CoreSynchronize();
    *puVar2 = *puVar2 - 1;
    halt_baddata();
  case 0x35:
  case 0x4f:
  case 99:
  case 0x77:
    goto switchD_01e162e0_caseD_35;
  case 0x36:
  case 0x50:
  case 100:
  case 0x78:
  case 0xb4:
  case 0xb5:
    puVar6 = (uint *)((int)puVar6 + (int)unaff_r4);
    param_2 = param_2 + 2;
    goto switchD_01e162e0_caseD_f;
  case 0x39:
  case 0x3c:
    goto switchD_01e162e0_caseD_39;
  case 0x3a:
  case 0x53:
  case 0x56:
  case 0x68:
  case 0x7c:
  case 0xb8:
    goto switchD_01e162e0_caseD_3a;
  case 0x3b:
    goto switchD_01e162e0_caseD_3b;
  case 0x3e:
  case 0xa8:
    goto switchD_01e162e0_caseD_3e;
  case 0x41:
    puVar2 = *ppuVar7;
switchD_01e162e0_caseD_39:
    puVar3 = puVar2 + 1;
switchD_01e162e0_caseD_d:
    *ppuVar7 = puVar3;
switchD_01e162e0_caseD_35:
    uVar4 = *puVar2;
    puVar2 = puVar6;
code_r0x01e162f8:
    param_3 = (uint *)0x6;
    unaff_retaddr = &BYTE_01e162fe;
    func_0x021127a8(puVar2,uVar4);
    puVar6 = (uint *)((int)puVar6 + 6);
switchD_01e162e0_caseD_16:
    goto switchD_01e162e0_caseD_f;
  case 0x42:
    puVar2 = *ppuVar7;
    puVar3 = puVar2 + 1;
switchD_01e162e0_caseD_22:
    *ppuVar7 = puVar3;
    puVar3 = (uint *)*puVar2;
    puVar2 = puVar6;
switchD_01e162e0_caseD_13:
    puVar6 = (uint *)func_0x021127a8(puVar2,puVar3);
    return puVar6;
  case 0x43:
    puVar2 = *ppuVar7;
    param_3 = (uint *)(int)(char)param_2[3];
    puVar3 = (uint *)(int)(char)param_2[5];
    param_4 = (uint *)(int)(char)param_2[6];
  case 0xb3:
switchD_01e162e0_caseD_b3:
    *ppuVar7 = puVar2 + 1;
    unaff_r4 = (uint *)((int)puVar3 * 10);
switchD_01e162e0_caseD_6a:
    puVar3 = (uint *)*puVar2;
    param_4 = (uint *)((int)param_4 * 100);
code_r0x01e16368:
    puVar2 = (uint *)((int)param_4 + (int)unaff_r4);
switchD_01e162e0_caseD_11:
    puVar6 = (uint *)func_0x021127a8(puVar6,puVar3,(byte *)((int)puVar2 + (int)param_3) + -0x14d0);
    return puVar6;
  case 0x48:
    puVar2 = *ppuVar7;
    puVar3 = puVar2 + 1;
  case 0x8e:
    *ppuVar7 = puVar3;
switchD_01e162e0_caseD_99:
    puVar2 = (uint *)*puVar2;
    *(byte *)puVar6 = (byte)puVar2;
    goto LAB_01e16388;
  case 0x4c:
    puVar2 = *ppuVar7;
    puVar3 = puVar2 + 1;
  case 0x6b:
    *ppuVar7 = puVar3;
switchD_01e162e0_caseD_fe:
    unaff_r7 = *puVar2;
    goto switchD_01e162e0_caseD_f;
  case 0x57:
    goto switchD_01e162e0_caseD_57;
  case 0x58:
  case 0x5e:
    goto switchD_01e162e0_caseD_58;
  case 0x59:
    goto switchD_01e162e0_caseD_59;
  case 0x5f:
  case 0x73:
    goto switchD_01e162e0_caseD_5f;
  case 0x69:
  case 0x7d:
    goto switchD_01e162e0_caseD_69;
  case 0x6a:
  case 0x6c:
  case 0x7e:
  case 0x8a:
  case 0x9e:
  case 0xe6:
    goto switchD_01e162e0_caseD_6a;
  case 0x6f:
    puVar3 = (uint *)0x50;
    goto switchD_01e162e0_caseD_b3;
  case 0x70:
  case 0x95:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x72:
  case 0xa1:
  case 0xf8:
    goto switchD_01e162e0_caseD_72;
  case 0x74:
  case 0xde:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x81:
  case 0xa7:
  case 0xaf:
    goto switchD_01e162e0_caseD_81;
  case 0x82:
    goto switchD_01e162e0_caseD_82;
  case 0x83:
  case 0x87:
  case 0x8b:
  case 0xbd:
  case 0xc1:
  case 0xdf:
  case 0xf9:
    goto switchD_01e162e0_caseD_83;
  case 0x84:
  case 0x88:
  case 0x8c:
  case 0xbe:
  case 0xc2:
  case 0xe0:
  case 0xe4:
  case 0xfa:
    if (puVar2 == (uint *)0x0) {
      param_4 = (uint *)(uint)*(byte *)((int)param_4 + 3);
      goto code_r0x01e16532;
    }
    puVar6 = (uint *)(uint)*(byte *)((int)unaff_r4 + 0xf);
    goto switchD_01e162e0_caseD_cd;
  case 0x86:
  case 0x96:
  case 0xa3:
  case 0xc4:
  case 0xe2:
  case 0xf0:
  case 0xfc:
    puVar3 = (uint *)*puVar2;
    goto switchD_01e162e0_caseD_13;
  case 0x8d:
  case 0xb1:
    if (puVar6 == (uint *)0x0) goto switchD_01e162e0_caseD_4;
    break;
  case 0x90:
  case 0xaa:
  case 0xd6:
  case 0xe8:
    puVar2 = (uint *)((int)puVar2 + (int)param_3);
    goto switchD_01e162e0_caseD_5a;
  case 0x93:
  case 0x9b:
  case 0xed:
    goto switchD_01e162e0_caseD_93;
  case 0x98:
  case 0x9a:
  case 0xa0:
  case 0xba:
  case 0xca:
  case 0xec:
  case 0xf2:
    goto switchD_01e162e0_caseD_98;
  case 0x99:
    goto switchD_01e162e0_caseD_99;
  case 0x9d:
  case 199:
  case 0xef:
    uVar4 = *puVar2;
    goto code_r0x01e162f8;
  case 0xa6:
    goto switchD_01e162e0_caseD_a6;
  case 0xae:
  case 0xd0:
    goto switchD_01e162e0_caseD_ae;
  case 0xb0:
  case 0xd4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb7:
    puVar6 = (uint *)((int)puVar6 + unaff_r7);
switchD_01e162e0_caseD_5f:
    goto switchD_01e162e0_caseD_f;
  case 0xbc:
    goto switchD_01e162e0_caseD_bc;
  case 0xc0:
  case 200:
  case 0xff:
switchD_01e162e0_caseD_c0:
    puVar2 = *ppuVar7;
    puVar3 = puVar2 + 1;
    break;
  case 0xcd:
  case 0xf5:
    goto switchD_01e162e0_caseD_cd;
  case 0xce:
  case 0xf6:
    goto switchD_01e162e0_caseD_ce;
  case 0xd1:
    goto switchD_01e162e0_caseD_d1;
  case 0xd9:
    puVar6 = (uint *)(uint)*(byte *)((int)unaff_r4 + 10);
    goto switchD_01e162e0_caseD_18;
  case 0xda:
    *ppuVar7 = unaff_r4;
    goto switchD_01e162e0_caseD_6a;
  case 0xdb:
    if (puVar2 != (uint *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x01e164d0;
  case 0xdc:
  case 0xe3:
switchD_01e162e0_caseD_dc:
    puVar2 = (uint *)(int)(char)param_2[1];
    puVar3 = (uint *)(int)(char)param_2[3];
    param_2 = param_2 + 3;
switchD_01e162e0_caseD_3a:
    puVar2 = (uint *)((int)puVar2 * 10 + (int)puVar3);
    puVar3 = puVar2 + -0x84;
    param_2 = param_2 + 2;
    param_3 = puVar6;
switchD_01e162e0_caseD_29:
    for (; puVar3 != (uint *)0x0; puVar3 = (uint *)((int)puVar3 + -1)) {
      puVar5 = *ppuVar7;
      unaff_r4 = puVar5 + 1;
      *ppuVar7 = unaff_r4;
      param_4 = (uint *)*puVar5;
      *(byte *)param_3 = (byte)param_4;
      param_3 = (uint *)((int)param_3 + 1);
    }
    puVar6 = (uint *)((byte *)((int)puVar2 + (int)puVar6) + -0x210);
    goto switchD_01e162e0_caseD_f;
  case 0xeb:
    unaff_r4 = (uint *)0x90;
switchD_01e162e0_caseD_57:
    puVar3 = (uint *)*puVar2;
    goto code_r0x01e16368;
  case 0xfe:
    goto switchD_01e162e0_caseD_fe;
  }
  *ppuVar7 = puVar3;
switchD_01e162e0_caseD_d1:
  puVar2 = (uint *)*puVar2;
switchD_01e162e0_caseD_81:
  *(byte *)puVar6 = (byte)puVar2;
switchD_01e162e0_caseD_9:
  puVar3 = (uint *)(uint)*param_2;
switchD_01e162e0_caseD_0:
  if (puVar3 == (uint *)0x32) {
LAB_01e16388:
    bVar1 = (byte)((uint)puVar2 >> 8);
switchD_01e162e0_caseD_83:
    *(byte *)((int)puVar6 + 1) = bVar1;
switchD_01e162e0_caseD_3:
    puVar6 = (uint *)((int)puVar6 + 2);
  }
  else {
switchD_01e162e0_caseD_98:
    puVar6 = (uint *)((int)puVar6 + 1);
  }
switchD_01e162e0_caseD_f:
  param_2 = param_2 + 1;
  goto switchD_01e162e0_caseD_3e;
code_r0x01e15cf4:
  *param_3 = (uint)puVar3;
  puVar2 = (uint *)0x74;
code_r0x01e15cf8:
  func_0x020000a0(puVar2,0xa0);
  func_0x02000114(0x17,0xfb);
  if ((byte)unaff_r4[3] == 0) {
    thunk_EXT_FUN_0200010a();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e16400 @ 01e16400 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e16400(int param_1)

{
  char cVar1;
  
  func_0x0200206c();
  CoreSynchronize();
  *(undefined1 *)(param_1 + -6) = 0;
  cVar1 = *(char *)(param_1 + -5);
  *(char *)(param_1 + -5) = cVar1 + '\x01';
  if (cVar1 == '\0') {
    FUN_01e16058(param_1 + -0x14,*(undefined4 *)(param_1 + -0xc));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e16426 @ 01e16426 ====

void FUN_01e16426(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 8) + 0x14);
                    /* WARNING: Could not recover jumptable at 0x01e16436. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



// ==== FUN_01e16438 @ 01e16438 ====

void FUN_01e16438(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  iVar1 = param_1[1];
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *param_1 = param_1;
  param_1[1] = param_1;
  return;
}



// ==== thunk_FUN_01e3d7dc @ 01e16446 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_01e3d7dc(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(uint *)(param_1 + -4) & 0x5a5a0000) != 0x5a5a0000) {
    FUN_01e36a4a(s_vPortFree_01e19782,0x187);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  piVar8 = (int *)(param_1 + -4);
  *(undefined4 *)(param_1 + -4) = 0x5a5a0000;
  func_0x0200206c();
  CoreSynchronize();
  iVar6 = *(int *)(param_1 + -4);
  _DAT_00004b54 = _DAT_00004b54 + iVar6;
  piVar3 = (int *)&DAT_00012ee8;
  do {
    piVar2 = piVar3;
    piVar3 = (int *)piVar2[1];
  } while (piVar3 < piVar8);
  if ((int *)((int)piVar2 + *piVar2) == piVar8) {
    iVar7 = *piVar2 + iVar6;
    *piVar2 = iVar7;
    piVar5 = piVar8;
    piVar10 = piVar2;
    if ((int *)((uint)piVar8 & 0xffffff80) != (int *)((uint)piVar2 & 0xffffff80)) {
      piVar5 = (int *)((uint)piVar8 & 0xffffff80);
    }
  }
  else {
    iVar7 = iVar6;
    piVar5 = (int *)((uint)(piVar8 + 0x20) & 0xffffff80);
    piVar10 = piVar8;
  }
  if (((uint)piVar5 & 0x7f) != 0) {
    piVar5 = (int *)((uint)((int)piVar5 + 0x7f) & 0xffffff80);
  }
  if (((int *)((int)piVar10 + iVar7) == piVar3) && (piVar3 != _DAT_00004b4c)) {
    iVar9 = *piVar3;
    *piVar10 = iVar7 + iVar9;
    piVar10[1] = piVar3[1];
    puVar4 = (undefined1 *)((uint)(piVar3 + 0x20) & 0xffffff80);
    if (((uint)(iVar9 + (int)piVar3) ^ (uint)piVar3) < 0x80) {
      puVar4 = (undefined1 *)(iVar6 + (int)piVar8);
    }
  }
  else {
    piVar10[1] = (int)piVar3;
    puVar4 = (undefined1 *)(iVar6 + (int)piVar8);
  }
  iVar6 = ((uint)puVar4 & 0xffffff80) - (int)piVar5;
  if (0 < iVar6) {
    uVar1 = -iVar6;
    if ((uVar1 & 0x7f) != 0) {
      FUN_01e36a5e();
    }
    if ((piVar5 != (int *)0x3ff) && (((uint)piVar5 & 0x7f) != 0)) {
      FUN_01e36a5e();
    }
    if ((int)uVar1 < 1) {
      func_0x0200219c(piVar5,iVar6);
    }
    else {
      if ((int)piVar5 < 1) {
        if (piVar5 == (int *)0x0) {
          if (DAT_00012fbc == '\0') {
            piVar5 = (int *)0xf000;
          }
          else {
            piVar5 = (int *)0x20f000;
          }
        }
        else {
          if (piVar5 != (int *)0xffffffff) goto LAB_01e3d8cc;
          piVar5 = (int *)(_DAT_00012fc4 + -0x80);
        }
      }
      func_0x02002094(piVar5,uVar1);
    }
  }
LAB_01e3d8cc:
  if (piVar2 != piVar10) {
    piVar2[1] = (int)piVar10;
  }
  func_0x0200207e();
  return;
}



// ==== thunk_FUN_01e3d7dc @ 01e1644a ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_01e3d7dc(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(uint *)(param_1 + -4) & 0x5a5a0000) != 0x5a5a0000) {
    FUN_01e36a4a(s_vPortFree_01e19782,0x187);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  piVar8 = (int *)(param_1 + -4);
  *(undefined4 *)(param_1 + -4) = 0x5a5a0000;
  func_0x0200206c();
  CoreSynchronize();
  iVar6 = *(int *)(param_1 + -4);
  _DAT_00004b54 = _DAT_00004b54 + iVar6;
  piVar3 = (int *)&DAT_00012ee8;
  do {
    piVar2 = piVar3;
    piVar3 = (int *)piVar2[1];
  } while (piVar3 < piVar8);
  if ((int *)((int)piVar2 + *piVar2) == piVar8) {
    iVar7 = *piVar2 + iVar6;
    *piVar2 = iVar7;
    piVar5 = piVar8;
    piVar10 = piVar2;
    if ((int *)((uint)piVar8 & 0xffffff80) != (int *)((uint)piVar2 & 0xffffff80)) {
      piVar5 = (int *)((uint)piVar8 & 0xffffff80);
    }
  }
  else {
    iVar7 = iVar6;
    piVar5 = (int *)((uint)(piVar8 + 0x20) & 0xffffff80);
    piVar10 = piVar8;
  }
  if (((uint)piVar5 & 0x7f) != 0) {
    piVar5 = (int *)((uint)((int)piVar5 + 0x7f) & 0xffffff80);
  }
  if (((int *)((int)piVar10 + iVar7) == piVar3) && (piVar3 != _DAT_00004b4c)) {
    iVar9 = *piVar3;
    *piVar10 = iVar7 + iVar9;
    piVar10[1] = piVar3[1];
    puVar4 = (undefined1 *)((uint)(piVar3 + 0x20) & 0xffffff80);
    if (((uint)(iVar9 + (int)piVar3) ^ (uint)piVar3) < 0x80) {
      puVar4 = (undefined1 *)(iVar6 + (int)piVar8);
    }
  }
  else {
    piVar10[1] = (int)piVar3;
    puVar4 = (undefined1 *)(iVar6 + (int)piVar8);
  }
  iVar6 = ((uint)puVar4 & 0xffffff80) - (int)piVar5;
  if (0 < iVar6) {
    uVar1 = -iVar6;
    if ((uVar1 & 0x7f) != 0) {
      FUN_01e36a5e();
    }
    if ((piVar5 != (int *)0x3ff) && (((uint)piVar5 & 0x7f) != 0)) {
      FUN_01e36a5e();
    }
    if ((int)uVar1 < 1) {
      func_0x0200219c(piVar5,iVar6);
    }
    else {
      if ((int)piVar5 < 1) {
        if (piVar5 == (int *)0x0) {
          if (DAT_00012fbc == '\0') {
            piVar5 = (int *)0xf000;
          }
          else {
            piVar5 = (int *)0x20f000;
          }
        }
        else {
          if (piVar5 != (int *)0xffffffff) goto LAB_01e3d8cc;
          piVar5 = (int *)(_DAT_00012fc4 + -0x80);
        }
      }
      func_0x02002094(piVar5,uVar1);
    }
  }
LAB_01e3d8cc:
  if (piVar2 != piVar10) {
    piVar2[1] = (int)piVar10;
  }
  func_0x0200207e();
  return;
}



// ==== FUN_01e1644c @ 01e1644c ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e1644c(int *param_1)

{
  func_0x0200206c();
  CoreSynchronize();
  *param_1 = *param_1 + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== caseD_15 @ 01e16460 ====

void switchD_01e162e0::caseD_15(undefined2 param_1)

{
  thunk_FUN_01e370f4(param_1);
  return;
}



// ==== caseD_14 @ 01e164a4 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x01e1651a) */
/* WARNING: Removing unreachable block (ram,0x01e16576) */
/* WARNING: Removing unreachable block (ram,0x01e1657c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void switchD_01e162e0::caseD_14(void)

{
  func_0x0200206c();
  CoreSynchronize();
  do {
  } while( true );
}



// ==== FUN_01e165da @ 01e165da ====

void FUN_01e165da(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(param_2 + param_3);
  for (iVar2 = 0; puVar1 = puVar1 + -1, iVar2 < param_3; iVar2 = iVar2 + 1) {
    *puVar1 = *(undefined1 *)(param_1 + iVar2);
  }
  return;
}



// ==== FUN_01e16706 @ 01e16706 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e16706(undefined4 param_1)

{
  func_0x0200206c();
  _DAT_00006afc = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e1671e @ 01e1671e ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e1671e(int param_1,int param_2)

{
  byte bVar1;
  
  func_0x0200206c();
  bVar1 = *(byte *)(param_1 + 1) & 0xfd;
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1 + 1) | 2;
  }
  *(byte *)(param_1 + 1) = bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== thunk_EXT_FUN_0200010a @ 01e1674e ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e16752 @ 01e16752 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e16752(undefined4 param_1,undefined4 param_2)

{
  func_0x0200206c(param_1);
  FUN_01e07624(param_1);
  FUN_01e2e42c(DAT_0000413d,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e16776 @ 01e16776 ====

void FUN_01e16776(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 4);
  *(int *)(param_2 + 4) = param_1;
  *(int **)(param_1 + -4) = piVar1;
  *(int *)(param_1 + -8) = param_2;
  *piVar1 = param_1;
  return;
}



// ==== thunk_EXT_FUN_0200010a @ 01e16786 ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e1678a @ 01e1678a ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e1678a(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int in_cres;
  
  if (in_cres == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar2 = (int *)*param_1;
  iVar1 = param_1[1];
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *param_1 = param_1;
  param_1[1] = param_1;
  return;
}



// ==== FUN_01e1678e @ 01e1678e ====

void FUN_01e1678e(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  iVar1 = param_1[1];
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *param_1 = param_1;
  param_1[1] = param_1;
  return;
}



// ==== FUN_01e167a2 @ 01e167a2 ====

void FUN_01e167a2(int param_1,int *param_2)

{
  *(int **)(param_1 + 4) = param_2;
  *param_2 = param_1;
  return;
}



// ==== FUN_01e16f50 @ 01e16f50 ====

undefined ** FUN_01e16f50(void)

{
  return &PTR_LAB_01e21e30;
}



// ==== FUN_01e16f58 @ 01e16f58 ====

void FUN_01e16f58(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; (iVar1 < param_3 && (*(int *)((param_2 + iVar1) * 4) <= param_1));
      iVar1 = iVar1 + 1) {
  }
  return;
}



// ==== FUN_01e16f70 @ 01e16f70 ====

int FUN_01e16f70(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((int)param_1 < 1) {
    uVar4 = 0xffffe000;
  }
  iVar1 = FUN_01e16f58(uVar4,&DAT_01e21e64,0xf);
  iVar2 = iVar1 + -6;
  if (uVar4 == 0) {
    iVar3 = 0x20;
  }
  else {
    iVar3 = (int)uVar4 >> iVar2;
    if (iVar2 < 0x1ff) {
      iVar3 = uVar4 << 6 - iVar1;
    }
  }
  iVar2 = iVar2 + ((param_2 & 0x3c0) >> 6);
  iVar1 = -0x8000;
  if (iVar2 + -0xd < 0x1ff) {
    iVar1 = ((int)(iVar3 * (param_2 & 0x3f) + 0x30) >> 4) >> 0xd - iVar2;
  }
  iVar2 = -iVar1;
  if (-1 < (int)(param_2 ^ param_1)) {
    iVar2 = iVar1;
  }
  return iVar2;
}



// ==== FUN_01e16fea @ 01e16fea ====

uint FUN_01e16fea(int param_1)

{
  return param_1 + (param_1 >> 0x1f) ^ param_1 >> 0x1f;
}



// ==== FUN_01e1760c @ 01e1760c ====

undefined ** FUN_01e1760c(void)

{
  return &PTR_DAT_01e21f08;
}



// ==== thunk_FUN_01e17b66 @ 01e17b5e ====

undefined4 thunk_FUN_01e17b66(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong in_r0_r1;
  ulonglong uVar11;
  undefined4 extraout_r1;
  ulonglong uVar12;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  uint extraout_r1_05;
  int extraout_r1_06;
  ulonglong in_r2_r3;
  int iVar14;
  uint uVar15;
  undefined8 in_r4_r5;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 in_r6_r7;
  undefined8 in_r8_r9;
  undefined8 in_r10_r11;
  undefined8 in_r12_r13;
  ulonglong uVar18;
  int iVar20;
  undefined8 in_r14_r15;
  int iVar22;
  undefined8 uVar21;
  BADSPACEBASE *in_sp;
  int *piVar23;
  undefined1 auStack_70 [60];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  longlong lVar13;
  uint uVar19;
  
  uStack_8 = (undefined4)((ulonglong)in_r14_r15 >> 0x20);
  uStack_c = (undefined4)in_r14_r15;
  uStack_10 = (undefined4)((ulonglong)in_r12_r13 >> 0x20);
  uStack_14 = (undefined4)in_r12_r13;
  uStack_18 = (undefined4)((ulonglong)in_r10_r11 >> 0x20);
  uStack_1c = (undefined4)in_r10_r11;
  uStack_20 = (undefined4)((ulonglong)in_r8_r9 >> 0x20);
  uStack_24 = (undefined4)in_r8_r9;
  uStack_28 = (undefined4)((ulonglong)in_r6_r7 >> 0x20);
  uStack_2c = (undefined4)in_r6_r7;
  uStack_30 = (undefined4)((ulonglong)in_r4_r5 >> 0x20);
  uStack_34 = (undefined4)in_r4_r5;
  piVar23 = (int *)auStack_70;
  iVar5 = (int)(in_r2_r3 >> 0x20);
  uVar1 = (uint)in_r2_r3;
  uVar12 = 0;
  if ((in_r2_r3 & 0x7fffffff00000000) == 0 && uVar1 == 0) goto LAB_01e17ba8;
  uVar19 = (uint)(in_r0_r1 >> 0x20) & 0x7fffffff;
  uVar18 = (ulonglong)uVar19 << 0x20;
  uVar16 = CONCAT44(uVar19 + 0xc0100000,iVar5) & 0xffffffff7fffffff;
  iVar14 = (int)in_r0_r1;
  iVar20 = (int)(uVar16 >> 0x20);
  if ((((0x7ff00000 < uVar19) || (iVar14 != 0 && uVar19 == 0x7ff00000)) ||
      (uVar15 = (uint)uVar16, 0x7ff00000 < uVar15)) || ((uVar1 != 0 && (uVar15 == 0x7ff00000)))) {
    if (iVar20 != 0 || iVar14 != 0) {
      uVar1 = FUN_01e184fc(s_<Error>___PMALLOC_no_physics_mem_01e197b8 + 0x2a);
      uVar12 = (ulonglong)uVar1;
    }
    goto LAB_01e17ba8;
  }
  if ((longlong)in_r0_r1 < 0) {
    iVar22 = 2;
    if (uVar15 >> 0x16 < 0x10c) goto LAB_01e17bde;
    uVar2 = uVar15 >> 0x14;
    if (uVar2 < 0x3ff) goto LAB_01e17bd0;
    if (0x14 < (int)(uVar2 - 0x3ff)) {
      uVar3 = uVar1 >> 0x433 - uVar2;
      iVar22 = 0;
      if (uVar3 << 0x433 - uVar2 == uVar1) {
        iVar22 = 2 - (uVar3 & 1);
      }
      goto LAB_01e17bde;
    }
    iVar22 = 0;
    if (uVar1 == 0) {
      uVar1 = uVar15 >> 0x413 - uVar2;
      if (uVar1 << 0x413 - uVar2 == uVar15) {
        iVar22 = 2 - (uVar1 & 1);
      }
      goto LAB_01e17d24;
    }
LAB_01e17be2:
    uVar15 = 0x7ff00000;
    uVar1 = FUN_01e184f8();
    uVar11 = (ulonglong)uVar1;
    iVar5 = (int)in_r0_r1;
    uVar19 = (uint)(uVar18 >> 0x20);
    if ((iVar5 == 0) && ((uVar19 == 0 || ((uVar19 | 0x40000000) == uVar15)))) {
      uVar1 = FUN_01e18d66(0,uVar1);
      uVar12 = (ulonglong)uVar1;
      if (-1 < (longlong)in_r2_r3) {
        uVar12 = uVar11;
      }
      if (-1 < (longlong)in_r0_r1) goto LAB_01e17ba8;
      iVar5 = (int)uVar12;
      if (iVar22 != 0 || (int)(uVar16 >> 0x20) != 0) {
        uVar8 = FUN_01e193bc(0,iVar5);
        if (iVar22 == 1) {
          return uVar8;
        }
        goto LAB_01e17ba8;
      }
    }
    else {
      iVar20 = -1 - (int)((longlong)in_r0_r1 >> 0x3f);
      uVar21 = CONCAT44(iVar22,iVar20);
      if (iVar22 != 0 || iVar20 != 0) {
        if (0x41e00000 < (uint)uVar16) {
          if ((uint)uVar16 < 0x43f00001) {
            if (0x3feffffe < uVar19) {
              if (0x3ff00000 < uVar19) goto LAB_01e17d8a;
              uVar8 = FUN_01e188bc(uVar1,0);
              uVar4 = (undefined4)in_r2_r3;
              FUN_01e190f8(0);
              uVar9 = FUN_01e188bc(0x55555555);
              uVar9 = FUN_01e190f8(uVar8,uVar9);
              uVar9 = FUN_01e193bc(0,uVar9);
              FUN_01e190f8(uVar8,uVar8);
              FUN_01e190f8(uVar9);
              uVar9 = FUN_01e190f8(0x652b82fe);
              FUN_01e190f8(uVar8,0xf85ddf44);
              uVar10 = FUN_01e188bc(uVar9);
              uVar9 = 0;
              uVar8 = FUN_01e190f8(uVar8,0x60000000);
              FUN_01e188bc(uVar10);
              uVar8 = FUN_01e193bc(0,uVar8);
              goto LAB_01e18030;
            }
LAB_01e17cc0:
            if (-1 < (longlong)in_r2_r3) goto LAB_01e17d8e;
          }
          else {
            if (0x3fd < uVar19 >> 0x14) goto LAB_01e17cc0;
LAB_01e17d8a:
            if ((int)(in_r2_r3 >> 0x20) < 1) goto LAB_01e17d8e;
          }
          uVar12 = 0;
          goto LAB_01e17ba8;
        }
        iVar5 = 0;
        if (uVar19 >> 0x14 == 0) {
          iVar5 = 0;
          uVar8 = FUN_01e190f8(uVar1,0);
          uVar11 = CONCAT44(extraout_r1,uVar8);
          iVar20 = 0xffcb;
          uVar18 = uVar11;
        }
        else {
          iVar20 = 0;
        }
        uVar4 = (undefined4)in_r2_r3;
        uVar8 = (undefined4)uVar11;
        uVar19 = (uint)(uVar18 >> 0x20);
        uVar1 = uVar19 & 0xfffff;
        iVar20 = iVar20 + ((int)uVar19 >> 0x14);
        iVar14 = iVar20 + -0x3ff;
        *(undefined8 *)((int)piVar23 + 0x24) = uVar21;
        if (uVar1 < 0x3988f) {
LAB_01e17da4:
          *(int *)((int)piVar23 + 4) = iVar14;
        }
        else {
          if (0xbb679 < uVar1) {
            iVar14 = iVar20 + -0x3fe;
            goto LAB_01e17da4;
          }
          *(int *)((int)piVar23 + 4) = iVar14;
          iVar5 = 1;
        }
        *(int *)((int)piVar23 + 0x20) = iVar5 * 8;
        uVar6 = (undefined4)(&DAT_01e21f78)[iVar5];
        uVar9 = FUN_01e188bc(uVar6,uVar8);
        uVar9 = FUN_01e18d66(0,uVar9);
        uVar21 = CONCAT44(extraout_r1_00,uVar9);
        *(undefined8 *)((int)piVar23 + 0x18) = uVar21;
        uVar9 = FUN_01e193bc(uVar8,uVar6);
        *(ulonglong *)((int)piVar23 + 0x10) = CONCAT44(extraout_r1_01,uVar9);
        uVar9 = FUN_01e190f8((int)uVar21);
        *(ulonglong *)((int)piVar23 + 0x30) = CONCAT44(extraout_r1_02,uVar9);
        uVar9 = FUN_01e190f8(uVar9);
        FUN_01e190f8(0x4a454eef);
        uVar7 = FUN_01e188bc(0x93c9db65);
        FUN_01e190f8(uVar9,uVar7);
        uVar7 = FUN_01e188bc(0xa91d4101);
        FUN_01e190f8(uVar9,uVar7);
        uVar7 = FUN_01e188bc(0x518f264d);
        FUN_01e190f8(uVar9,uVar7);
        uVar7 = FUN_01e188bc(0xdb6fabff);
        FUN_01e190f8(uVar9,uVar7);
        uVar7 = FUN_01e188bc(0x33333303);
        FUN_01e190f8(uVar9,uVar9);
        uVar9 = FUN_01e190f8(uVar7);
        *(ulonglong *)((int)piVar23 + 8) = CONCAT44(extraout_r1_03,uVar9);
        uVar9 = FUN_01e193bc(0,uVar6);
        FUN_01e193bc(uVar8,uVar9);
        uVar6 = (undefined4)*(undefined8 *)((int)piVar23 + 0x30);
        uVar7 = 0;
        uVar8 = FUN_01e190f8(0);
        uVar9 = FUN_01e190f8(0,0);
        FUN_01e193bc((int)*(undefined8 *)((int)piVar23 + 0x10),uVar9);
        uVar8 = FUN_01e193bc(uVar8);
        uVar8 = FUN_01e190f8((int)*(undefined8 *)((int)piVar23 + 0x18),uVar8);
        FUN_01e188bc(uVar6,0);
        FUN_01e190f8(uVar8);
        uVar9 = FUN_01e188bc((int)*(undefined8 *)((int)piVar23 + 8));
        uVar6 = FUN_01e190f8(0,0);
        FUN_01e188bc(0);
        FUN_01e188bc(uVar9);
        FUN_01e188bc(0,0);
        uVar6 = FUN_01e193bc(uVar6);
        uVar9 = FUN_01e193bc(uVar9,uVar6);
        uVar9 = FUN_01e190f8((int)*(undefined8 *)((int)piVar23 + 0x30),uVar9);
        FUN_01e190f8(uVar8,0);
        uVar8 = FUN_01e188bc(uVar9);
        uVar9 = FUN_01e190f8(0,0);
        FUN_01e188bc(uVar8);
        uVar21 = CONCAT44(extraout_r1_04,uVar7);
        uVar9 = FUN_01e193bc(0,uVar9);
        FUN_01e193bc(uVar8,uVar9);
        uVar8 = FUN_01e190f8(0xdc3a03fd);
        *(undefined8 *)((int)piVar23 + 0x30) = uVar21;
        uVar9 = FUN_01e190f8(0,0x145b01f5);
        uVar8 = FUN_01e188bc(uVar8,uVar9);
        iVar5 = *piVar23;
        uVar10 = FUN_01e188bc((int)*(undefined8 *)(&DAT_01e21f88 + iVar5),uVar8);
        uVar8 = FUN_01e190f8(0,0xe0000000);
        uVar9 = FUN_01e188bc(uVar10);
        uVar6 = (undefined4)*(undefined8 *)(&DAT_01e21f98 + iVar5);
        FUN_01e188bc(uVar6,uVar9);
        uVar9 = *(undefined4 *)((int)piVar23 + 4);
        uVar7 = FUN_01e19076(uVar9);
        FUN_01e188bc(uVar9);
        uVar9 = (undefined4)*(undefined8 *)((int)piVar23 + 0x30);
        FUN_01e193bc(0,uVar7);
        FUN_01e193bc(uVar6);
        uVar8 = FUN_01e193bc(uVar8);
        uVar21 = *(undefined8 *)((int)piVar23 + 0x24);
LAB_01e18030:
        FUN_01e193bc(uVar10,uVar8);
        uVar8 = FUN_01e190f8(uVar4);
        FUN_01e193bc(uVar4,0);
        FUN_01e190f8(uVar9);
        uVar8 = FUN_01e188bc(uVar8);
        uVar4 = FUN_01e190f8(0,uVar9);
        iVar5 = FUN_01e188bc(uVar8);
        lVar13 = CONCAT44(extraout_r1_05,iVar5);
        if ((int)((ulonglong)uVar21 >> 0x20) == 1 && (int)uVar21 == 0) {
          lVar17 = 0xbff00000;
        }
        else {
          lVar17 = 0x3ff00000;
        }
        lVar17 = lVar17 << 0x20;
        if ((int)extraout_r1_05 < 0x40900000) {
          if (~extraout_r1_05 < 0x4090cc00) {
LAB_01e1810c:
            uVar19 = (uint)((ulonglong)lVar13 >> 0x20);
            uVar1 = uVar19 & 0x7fffffff;
            *(longlong *)((int)piVar23 + 0x28) = lVar17;
            if (uVar1 < 0x3fe00001) {
              *(undefined4 *)((int)piVar23 + 0x30) = 0;
            }
            else {
              uVar19 = (0x100000U >> (uVar1 >> 0x14) - 0x3fe) + uVar19;
              uVar19 = (uVar19 & 0xfffff | 0x100000) >> 0x413 - ((uVar19 & 0x7ff00000) >> 0x14);
              uVar1 = -uVar19;
              if (-1 < lVar13) {
                uVar1 = uVar19;
              }
              *(uint *)((int)piVar23 + 0x30) = uVar1;
              uVar4 = FUN_01e193bc(uVar4,0);
            }
            FUN_01e188bc(uVar8,uVar4);
            uVar4 = FUN_01e193bc(0,uVar4);
            FUN_01e193bc(uVar8,uVar4);
            uVar8 = FUN_01e190f8(0xfefa39ef);
            uVar4 = FUN_01e190f8(0,0xca86c39);
            uVar8 = FUN_01e188bc(uVar8,uVar4);
            uVar4 = FUN_01e190f8(0,0);
            uVar9 = FUN_01e188bc(uVar8);
            uVar6 = FUN_01e190f8(uVar9);
            FUN_01e190f8(0x72bea4d0);
            uVar7 = FUN_01e188bc(0xc5d26bf1);
            FUN_01e190f8(uVar6,uVar7);
            uVar7 = FUN_01e188bc(0xaf25de2c);
            FUN_01e190f8(uVar6,uVar7);
            uVar7 = FUN_01e188bc(0x16bebd93);
            FUN_01e190f8(uVar6,uVar7);
            uVar7 = FUN_01e188bc(0x5555553e);
            uVar6 = FUN_01e190f8(uVar6,uVar7);
            uVar6 = FUN_01e193bc(uVar9,uVar6);
            uVar7 = FUN_01e190f8(uVar9,uVar6);
            uVar6 = FUN_01e188bc(uVar6,0);
            uVar6 = FUN_01e18d66(uVar7,uVar6);
            uVar4 = FUN_01e193bc(uVar9,uVar4);
            uVar8 = FUN_01e193bc(uVar8,uVar4);
            uVar4 = FUN_01e190f8(uVar9,uVar8);
            uVar8 = FUN_01e188bc(uVar8,uVar4);
            FUN_01e193bc(uVar6,uVar8);
            uVar8 = FUN_01e193bc(uVar9);
            FUN_01e193bc(0,uVar8);
            if (extraout_r1_06 + *(int *)((int)piVar23 + 0x30) * 0x100000 >> 0x14 < 1) {
              FUN_01e18506();
            }
            goto LAB_01e18300;
          }
          if (extraout_r1_05 == 0xc090cc00 && iVar5 == 0) {
            uVar9 = FUN_01e193bc(iVar5,uVar4);
            iVar5 = FUN_01e18b90(uVar8,uVar9);
            if (0 < iVar5) goto LAB_01e1810c;
          }
          uVar8 = (undefined4)lVar17;
          uVar4 = 0xc2f8f359;
        }
        else {
          if (extraout_r1_05 == 0x40900000 && iVar5 == 0) {
            uVar9 = FUN_01e188bc(uVar8,0x652b82fe);
            uVar6 = FUN_01e193bc((int)lVar13,uVar4);
            iVar5 = thunk_FUN_01e18c40(uVar9,uVar6);
            if (iVar5 < 1) goto LAB_01e1810c;
          }
          uVar8 = (undefined4)lVar17;
          uVar4 = 0x8800759c;
        }
        FUN_01e190f8(uVar8,uVar4);
LAB_01e18300:
        uVar1 = FUN_01e190f8();
        uVar12 = (ulonglong)uVar1;
        goto LAB_01e17ba8;
      }
    }
    uVar8 = FUN_01e193bc(iVar5,iVar5);
  }
  else {
LAB_01e17bd0:
    iVar22 = 0;
LAB_01e17bde:
    if (uVar1 != 0) goto LAB_01e17be2;
LAB_01e17d24:
    if (uVar15 == 0x7ff00000) {
      if (iVar20 == 0 && iVar14 == 0) goto LAB_01e17ba8;
      if (0x3fe < uVar19 >> 0x14) {
        uVar12 = in_r2_r3;
        if (iVar5 < 0x1ff) {
          uVar12 = 0;
        }
        goto LAB_01e17ba8;
      }
      if ((longlong)in_r2_r3 < 0) {
        uVar12 = in_r2_r3 & 0xffffffff;
        goto LAB_01e17ba8;
      }
LAB_01e17d8e:
      uVar12 = 0;
      goto LAB_01e17ba8;
    }
    if (uVar15 != 0x3ff00000) {
      if (iVar5 != 0x40000000) {
        if ((-1 < (longlong)in_r0_r1) && (iVar5 == 0x3fe00000)) {
          uVar1 = FUN_01e183b0();
          uVar12 = (ulonglong)uVar1;
          goto LAB_01e17ba8;
        }
        goto LAB_01e17be2;
      }
      goto LAB_01e18300;
    }
    uVar12 = in_r0_r1;
    if (0x1fe < iVar5) goto LAB_01e17ba8;
    uVar8 = 0;
  }
  uVar1 = FUN_01e18d66(uVar8);
  uVar12 = (ulonglong)uVar1;
LAB_01e17ba8:
  return (int)uVar12;
}



// ==== thunk_FUN_01e183b0 @ 01e17b62 ====

/* WARNING: Control flow encountered bad instruction data */

undefined4 thunk_FUN_01e183b0(void)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong in_r0_r1;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  uVar1 = (uint)(in_r0_r1 >> 0x20);
  if ((uVar1 & 0x7ff00000) == 0x7ff00000) {
    FUN_01e190f8();
    uVar1 = FUN_01e188bc((int)in_r0_r1);
    in_r0_r1 = (ulonglong)uVar1;
    goto LAB_01e184e2;
  }
  if ((int)uVar1 < 1) {
    if ((in_r0_r1 & 0x7fffffff00000000) == 0 && (int)in_r0_r1 == 0) goto LAB_01e184e2;
    uVar3 = 0;
    if ((longlong)in_r0_r1 < 0) {
      uVar2 = FUN_01e193bc();
      uVar1 = FUN_01e18d66(uVar2);
      in_r0_r1 = (ulonglong)uVar1;
      goto LAB_01e184e2;
    }
  }
  else {
    uVar3 = CONCAT44(0x7ff00000,uVar1);
  }
  for (uVar3 = uVar3 & 0xffffffff; uVar1 = (uint)in_r0_r1, (int)uVar3 == 0;
      uVar3 = CONCAT44((int)(uVar3 >> 0x20) + -0x15,uVar1 >> 0xb)) {
    in_r0_r1 = (ulonglong)(uVar1 << 0x15);
  }
  iVar10 = 0;
  while( true ) {
    iVar9 = (int)(uVar3 >> 0x20);
    if ((uVar3 & 0x50) == 0) break;
    iVar10 = iVar10 + 1;
    uVar3 = CONCAT44(iVar9,(uint)uVar3 << 1);
  }
  uVar6 = uVar1 << iVar10;
  uVar1 = uVar1 >> 0x20 - iVar10 | (uint)uVar3;
  uVar3 = CONCAT44(uVar1,uVar6);
  uVar1 = ~uVar1 | 0x100000;
  if (((iVar9 - iVar10) - 0x3feU & 1) != 0) {
    uVar1 = uVar6 >> 0x1f | uVar1 << 1;
    uVar3 = (ulonglong)(uVar6 << 1);
  }
  uVar1 = (uint)(uVar3 >> 0x1f) & 1 | uVar1 << 1;
  uVar6 = 0;
  uVar8 = 0x200000;
  iVar10 = 0;
  while( true ) {
    uVar4 = (uint)uVar3 << 1;
    if (uVar8 == 0) break;
    iVar9 = uVar6 + uVar8;
    if (iVar9 <= (int)uVar1) {
      iVar10 = iVar10 + uVar8;
      uVar1 = uVar1 - iVar9;
      uVar6 = iVar9 + uVar8;
    }
    uVar1 = ((uint)uVar3 & 0x40000000) >> 0x1e | uVar1 << 1;
    uVar8 = uVar8 >> 1;
    uVar3 = (ulonglong)uVar4;
  }
  uVar8 = 0;
  uVar5 = 0x80000000;
  iVar9 = 0;
  do {
    uVar7 = iVar9 + uVar5;
    if (((int)uVar6 < (int)uVar1) || ((uVar7 <= uVar4 && (uVar1 == uVar6)))) {
      uVar1 = (uVar1 - (uVar4 < uVar7)) - uVar6;
      uVar8 = uVar8 + uVar5;
      uVar4 = uVar4 - uVar7;
      iVar9 = uVar7 + uVar5;
      uVar6 = uVar6 + ~(uVar7 >> 0x1f);
    }
    uVar1 = uVar4 >> 0x1f | uVar1 << 1;
    uVar5 = uVar5 >> 1;
    uVar4 = uVar4 << 1;
  } while (uVar5 != 0);
  if (uVar1 != 0 || uVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in_r0_r1 = (ulonglong)(uVar8 >> 1 | iVar10 << 0x1f);
LAB_01e184e2:
  return (int)in_r0_r1;
}



// ==== FUN_01e17b66 @ 01e17b66 ====

undefined4 FUN_01e17b66(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong in_r0_r1;
  ulonglong uVar11;
  undefined4 extraout_r1;
  ulonglong uVar12;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  uint extraout_r1_05;
  int extraout_r1_06;
  ulonglong in_r2_r3;
  int iVar14;
  uint uVar15;
  undefined8 in_r4_r5;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 in_r6_r7;
  undefined8 in_r8_r9;
  undefined8 in_r10_r11;
  undefined8 in_r12_r13;
  ulonglong uVar18;
  int iVar20;
  undefined8 in_r14_r15;
  int iVar22;
  undefined8 uVar21;
  BADSPACEBASE *in_sp;
  int *piVar23;
  undefined1 local_70 [60];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  longlong lVar13;
  uint uVar19;
  
  uStack_8 = (undefined4)((ulonglong)in_r14_r15 >> 0x20);
  uStack_c = (undefined4)in_r14_r15;
  uStack_10 = (undefined4)((ulonglong)in_r12_r13 >> 0x20);
  uStack_14 = (undefined4)in_r12_r13;
  uStack_18 = (undefined4)((ulonglong)in_r10_r11 >> 0x20);
  uStack_1c = (undefined4)in_r10_r11;
  uStack_20 = (undefined4)((ulonglong)in_r8_r9 >> 0x20);
  uStack_24 = (undefined4)in_r8_r9;
  uStack_28 = (undefined4)((ulonglong)in_r6_r7 >> 0x20);
  uStack_2c = (undefined4)in_r6_r7;
  uStack_30 = (undefined4)((ulonglong)in_r4_r5 >> 0x20);
  uStack_34 = (undefined4)in_r4_r5;
  piVar23 = (int *)local_70;
  iVar5 = (int)(in_r2_r3 >> 0x20);
  uVar1 = (uint)in_r2_r3;
  uVar12 = 0;
  if ((in_r2_r3 & 0x7fffffff00000000) == 0 && uVar1 == 0) goto LAB_01e17ba8;
  uVar19 = (uint)(in_r0_r1 >> 0x20) & 0x7fffffff;
  uVar18 = (ulonglong)uVar19 << 0x20;
  uVar16 = CONCAT44(uVar19 + 0xc0100000,iVar5) & 0xffffffff7fffffff;
  iVar14 = (int)in_r0_r1;
  iVar20 = (int)(uVar16 >> 0x20);
  if ((((0x7ff00000 < uVar19) || (iVar14 != 0 && uVar19 == 0x7ff00000)) ||
      (uVar15 = (uint)uVar16, 0x7ff00000 < uVar15)) || ((uVar1 != 0 && (uVar15 == 0x7ff00000)))) {
    if (iVar20 != 0 || iVar14 != 0) {
      uVar1 = FUN_01e184fc(s_<Error>___PMALLOC_no_physics_mem_01e197b8 + 0x2a);
      uVar12 = (ulonglong)uVar1;
    }
    goto LAB_01e17ba8;
  }
  if ((longlong)in_r0_r1 < 0) {
    iVar22 = 2;
    if (uVar15 >> 0x16 < 0x10c) goto LAB_01e17bde;
    uVar2 = uVar15 >> 0x14;
    if (uVar2 < 0x3ff) goto LAB_01e17bd0;
    if (0x14 < (int)(uVar2 - 0x3ff)) {
      uVar3 = uVar1 >> 0x433 - uVar2;
      iVar22 = 0;
      if (uVar3 << 0x433 - uVar2 == uVar1) {
        iVar22 = 2 - (uVar3 & 1);
      }
      goto LAB_01e17bde;
    }
    iVar22 = 0;
    if (uVar1 == 0) {
      uVar1 = uVar15 >> 0x413 - uVar2;
      if (uVar1 << 0x413 - uVar2 == uVar15) {
        iVar22 = 2 - (uVar1 & 1);
      }
      goto LAB_01e17d24;
    }
LAB_01e17be2:
    uVar15 = 0x7ff00000;
    uVar1 = FUN_01e184f8();
    uVar11 = (ulonglong)uVar1;
    iVar5 = (int)in_r0_r1;
    uVar19 = (uint)(uVar18 >> 0x20);
    if ((iVar5 == 0) && ((uVar19 == 0 || ((uVar19 | 0x40000000) == uVar15)))) {
      uVar1 = FUN_01e18d66(0,uVar1);
      uVar12 = (ulonglong)uVar1;
      if (-1 < (longlong)in_r2_r3) {
        uVar12 = uVar11;
      }
      if (-1 < (longlong)in_r0_r1) goto LAB_01e17ba8;
      iVar5 = (int)uVar12;
      if (iVar22 != 0 || (int)(uVar16 >> 0x20) != 0) {
        uVar8 = FUN_01e193bc(0,iVar5);
        if (iVar22 == 1) {
          return uVar8;
        }
        goto LAB_01e17ba8;
      }
    }
    else {
      iVar20 = -1 - (int)((longlong)in_r0_r1 >> 0x3f);
      uVar21 = CONCAT44(iVar22,iVar20);
      if (iVar22 != 0 || iVar20 != 0) {
        if (0x41e00000 < (uint)uVar16) {
          if ((uint)uVar16 < 0x43f00001) {
            if (0x3feffffe < uVar19) {
              if (0x3ff00000 < uVar19) goto LAB_01e17d8a;
              uVar8 = FUN_01e188bc(uVar1,0);
              uVar4 = (undefined4)in_r2_r3;
              FUN_01e190f8(0);
              uVar9 = FUN_01e188bc(0x55555555);
              uVar9 = FUN_01e190f8(uVar8,uVar9);
              uVar9 = FUN_01e193bc(0,uVar9);
              FUN_01e190f8(uVar8,uVar8);
              FUN_01e190f8(uVar9);
              uVar9 = FUN_01e190f8(0x652b82fe);
              FUN_01e190f8(uVar8,0xf85ddf44);
              uVar10 = FUN_01e188bc(uVar9);
              uVar9 = 0;
              uVar8 = FUN_01e190f8(uVar8,0x60000000);
              FUN_01e188bc(uVar10);
              uVar8 = FUN_01e193bc(0,uVar8);
              goto LAB_01e18030;
            }
LAB_01e17cc0:
            if (-1 < (longlong)in_r2_r3) goto LAB_01e17d8e;
          }
          else {
            if (0x3fd < uVar19 >> 0x14) goto LAB_01e17cc0;
LAB_01e17d8a:
            if ((int)(in_r2_r3 >> 0x20) < 1) goto LAB_01e17d8e;
          }
          uVar12 = 0;
          goto LAB_01e17ba8;
        }
        iVar5 = 0;
        if (uVar19 >> 0x14 == 0) {
          iVar5 = 0;
          uVar8 = FUN_01e190f8(uVar1,0);
          uVar11 = CONCAT44(extraout_r1,uVar8);
          iVar20 = 0xffcb;
          uVar18 = uVar11;
        }
        else {
          iVar20 = 0;
        }
        uVar4 = (undefined4)in_r2_r3;
        uVar8 = (undefined4)uVar11;
        uVar19 = (uint)(uVar18 >> 0x20);
        uVar1 = uVar19 & 0xfffff;
        iVar20 = iVar20 + ((int)uVar19 >> 0x14);
        iVar14 = iVar20 + -0x3ff;
        *(undefined8 *)((int)piVar23 + 0x24) = uVar21;
        if (uVar1 < 0x3988f) {
LAB_01e17da4:
          *(int *)((int)piVar23 + 4) = iVar14;
        }
        else {
          if (0xbb679 < uVar1) {
            iVar14 = iVar20 + -0x3fe;
            goto LAB_01e17da4;
          }
          *(int *)((int)piVar23 + 4) = iVar14;
          iVar5 = 1;
        }
        *(int *)((int)piVar23 + 0x20) = iVar5 * 8;
        uVar6 = (undefined4)(&DAT_01e21f78)[iVar5];
        uVar9 = FUN_01e188bc(uVar6,uVar8);
        uVar9 = FUN_01e18d66(0,uVar9);
        uVar21 = CONCAT44(extraout_r1_00,uVar9);
        *(undefined8 *)((int)piVar23 + 0x18) = uVar21;
        uVar9 = FUN_01e193bc(uVar8,uVar6);
        *(ulonglong *)((int)piVar23 + 0x10) = CONCAT44(extraout_r1_01,uVar9);
        uVar9 = FUN_01e190f8((int)uVar21);
        *(ulonglong *)((int)piVar23 + 0x30) = CONCAT44(extraout_r1_02,uVar9);
        uVar9 = FUN_01e190f8(uVar9);
        FUN_01e190f8(0x4a454eef);
        uVar7 = FUN_01e188bc(0x93c9db65);
        FUN_01e190f8(uVar9,uVar7);
        uVar7 = FUN_01e188bc(0xa91d4101);
        FUN_01e190f8(uVar9,uVar7);
        uVar7 = FUN_01e188bc(0x518f264d);
        FUN_01e190f8(uVar9,uVar7);
        uVar7 = FUN_01e188bc(0xdb6fabff);
        FUN_01e190f8(uVar9,uVar7);
        uVar7 = FUN_01e188bc(0x33333303);
        FUN_01e190f8(uVar9,uVar9);
        uVar9 = FUN_01e190f8(uVar7);
        *(ulonglong *)((int)piVar23 + 8) = CONCAT44(extraout_r1_03,uVar9);
        uVar9 = FUN_01e193bc(0,uVar6);
        FUN_01e193bc(uVar8,uVar9);
        uVar6 = (undefined4)*(undefined8 *)((int)piVar23 + 0x30);
        uVar7 = 0;
        uVar8 = FUN_01e190f8(0);
        uVar9 = FUN_01e190f8(0,0);
        FUN_01e193bc((int)*(undefined8 *)((int)piVar23 + 0x10),uVar9);
        uVar8 = FUN_01e193bc(uVar8);
        uVar8 = FUN_01e190f8((int)*(undefined8 *)((int)piVar23 + 0x18),uVar8);
        FUN_01e188bc(uVar6,0);
        FUN_01e190f8(uVar8);
        uVar9 = FUN_01e188bc((int)*(undefined8 *)((int)piVar23 + 8));
        uVar6 = FUN_01e190f8(0,0);
        FUN_01e188bc(0);
        FUN_01e188bc(uVar9);
        FUN_01e188bc(0,0);
        uVar6 = FUN_01e193bc(uVar6);
        uVar9 = FUN_01e193bc(uVar9,uVar6);
        uVar9 = FUN_01e190f8((int)*(undefined8 *)((int)piVar23 + 0x30),uVar9);
        FUN_01e190f8(uVar8,0);
        uVar8 = FUN_01e188bc(uVar9);
        uVar9 = FUN_01e190f8(0,0);
        FUN_01e188bc(uVar8);
        uVar21 = CONCAT44(extraout_r1_04,uVar7);
        uVar9 = FUN_01e193bc(0,uVar9);
        FUN_01e193bc(uVar8,uVar9);
        uVar8 = FUN_01e190f8(0xdc3a03fd);
        *(undefined8 *)((int)piVar23 + 0x30) = uVar21;
        uVar9 = FUN_01e190f8(0,0x145b01f5);
        uVar8 = FUN_01e188bc(uVar8,uVar9);
        iVar5 = *piVar23;
        uVar10 = FUN_01e188bc((int)*(undefined8 *)(&DAT_01e21f88 + iVar5),uVar8);
        uVar8 = FUN_01e190f8(0,0xe0000000);
        uVar9 = FUN_01e188bc(uVar10);
        uVar6 = (undefined4)*(undefined8 *)(&DAT_01e21f98 + iVar5);
        FUN_01e188bc(uVar6,uVar9);
        uVar9 = *(undefined4 *)((int)piVar23 + 4);
        uVar7 = FUN_01e19076(uVar9);
        FUN_01e188bc(uVar9);
        uVar9 = (undefined4)*(undefined8 *)((int)piVar23 + 0x30);
        FUN_01e193bc(0,uVar7);
        FUN_01e193bc(uVar6);
        uVar8 = FUN_01e193bc(uVar8);
        uVar21 = *(undefined8 *)((int)piVar23 + 0x24);
LAB_01e18030:
        FUN_01e193bc(uVar10,uVar8);
        uVar8 = FUN_01e190f8(uVar4);
        FUN_01e193bc(uVar4,0);
        FUN_01e190f8(uVar9);
        uVar8 = FUN_01e188bc(uVar8);
        uVar4 = FUN_01e190f8(0,uVar9);
        iVar5 = FUN_01e188bc(uVar8);
        lVar13 = CONCAT44(extraout_r1_05,iVar5);
        if ((int)((ulonglong)uVar21 >> 0x20) == 1 && (int)uVar21 == 0) {
          lVar17 = 0xbff00000;
        }
        else {
          lVar17 = 0x3ff00000;
        }
        lVar17 = lVar17 << 0x20;
        if ((int)extraout_r1_05 < 0x40900000) {
          if (~extraout_r1_05 < 0x4090cc00) {
LAB_01e1810c:
            uVar19 = (uint)((ulonglong)lVar13 >> 0x20);
            uVar1 = uVar19 & 0x7fffffff;
            *(longlong *)((int)piVar23 + 0x28) = lVar17;
            if (uVar1 < 0x3fe00001) {
              *(undefined4 *)((int)piVar23 + 0x30) = 0;
            }
            else {
              uVar19 = (0x100000U >> (uVar1 >> 0x14) - 0x3fe) + uVar19;
              uVar19 = (uVar19 & 0xfffff | 0x100000) >> 0x413 - ((uVar19 & 0x7ff00000) >> 0x14);
              uVar1 = -uVar19;
              if (-1 < lVar13) {
                uVar1 = uVar19;
              }
              *(uint *)((int)piVar23 + 0x30) = uVar1;
              uVar4 = FUN_01e193bc(uVar4,0);
            }
            FUN_01e188bc(uVar8,uVar4);
            uVar4 = FUN_01e193bc(0,uVar4);
            FUN_01e193bc(uVar8,uVar4);
            uVar8 = FUN_01e190f8(0xfefa39ef);
            uVar4 = FUN_01e190f8(0,0xca86c39);
            uVar8 = FUN_01e188bc(uVar8,uVar4);
            uVar4 = FUN_01e190f8(0,0);
            uVar9 = FUN_01e188bc(uVar8);
            uVar6 = FUN_01e190f8(uVar9);
            FUN_01e190f8(0x72bea4d0);
            uVar7 = FUN_01e188bc(0xc5d26bf1);
            FUN_01e190f8(uVar6,uVar7);
            uVar7 = FUN_01e188bc(0xaf25de2c);
            FUN_01e190f8(uVar6,uVar7);
            uVar7 = FUN_01e188bc(0x16bebd93);
            FUN_01e190f8(uVar6,uVar7);
            uVar7 = FUN_01e188bc(0x5555553e);
            uVar6 = FUN_01e190f8(uVar6,uVar7);
            uVar6 = FUN_01e193bc(uVar9,uVar6);
            uVar7 = FUN_01e190f8(uVar9,uVar6);
            uVar6 = FUN_01e188bc(uVar6,0);
            uVar6 = FUN_01e18d66(uVar7,uVar6);
            uVar4 = FUN_01e193bc(uVar9,uVar4);
            uVar8 = FUN_01e193bc(uVar8,uVar4);
            uVar4 = FUN_01e190f8(uVar9,uVar8);
            uVar8 = FUN_01e188bc(uVar8,uVar4);
            FUN_01e193bc(uVar6,uVar8);
            uVar8 = FUN_01e193bc(uVar9);
            FUN_01e193bc(0,uVar8);
            if (extraout_r1_06 + *(int *)((int)piVar23 + 0x30) * 0x100000 >> 0x14 < 1) {
              FUN_01e18506();
            }
            goto LAB_01e18300;
          }
          if (extraout_r1_05 == 0xc090cc00 && iVar5 == 0) {
            uVar9 = FUN_01e193bc(iVar5,uVar4);
            iVar5 = FUN_01e18b90(uVar8,uVar9);
            if (0 < iVar5) goto LAB_01e1810c;
          }
          uVar8 = (undefined4)lVar17;
          uVar4 = 0xc2f8f359;
        }
        else {
          if (extraout_r1_05 == 0x40900000 && iVar5 == 0) {
            uVar9 = FUN_01e188bc(uVar8,0x652b82fe);
            uVar6 = FUN_01e193bc((int)lVar13,uVar4);
            iVar5 = thunk_FUN_01e18c40(uVar9,uVar6);
            if (iVar5 < 1) goto LAB_01e1810c;
          }
          uVar8 = (undefined4)lVar17;
          uVar4 = 0x8800759c;
        }
        FUN_01e190f8(uVar8,uVar4);
LAB_01e18300:
        uVar1 = FUN_01e190f8();
        uVar12 = (ulonglong)uVar1;
        goto LAB_01e17ba8;
      }
    }
    uVar8 = FUN_01e193bc(iVar5,iVar5);
  }
  else {
LAB_01e17bd0:
    iVar22 = 0;
LAB_01e17bde:
    if (uVar1 != 0) goto LAB_01e17be2;
LAB_01e17d24:
    if (uVar15 == 0x7ff00000) {
      if (iVar20 == 0 && iVar14 == 0) goto LAB_01e17ba8;
      if (0x3fe < uVar19 >> 0x14) {
        uVar12 = in_r2_r3;
        if (iVar5 < 0x1ff) {
          uVar12 = 0;
        }
        goto LAB_01e17ba8;
      }
      if ((longlong)in_r2_r3 < 0) {
        uVar12 = in_r2_r3 & 0xffffffff;
        goto LAB_01e17ba8;
      }
LAB_01e17d8e:
      uVar12 = 0;
      goto LAB_01e17ba8;
    }
    if (uVar15 != 0x3ff00000) {
      if (iVar5 != 0x40000000) {
        if ((-1 < (longlong)in_r0_r1) && (iVar5 == 0x3fe00000)) {
          uVar1 = FUN_01e183b0();
          uVar12 = (ulonglong)uVar1;
          goto LAB_01e17ba8;
        }
        goto LAB_01e17be2;
      }
      goto LAB_01e18300;
    }
    uVar12 = in_r0_r1;
    if (0x1fe < iVar5) goto LAB_01e17ba8;
    uVar8 = 0;
  }
  uVar1 = FUN_01e18d66(uVar8);
  uVar12 = (ulonglong)uVar1;
LAB_01e17ba8:
  return (int)uVar12;
}



// ==== FUN_01e183b0 @ 01e183b0 ====

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_01e183b0(void)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong in_r0_r1;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  uVar1 = (uint)(in_r0_r1 >> 0x20);
  if ((uVar1 & 0x7ff00000) == 0x7ff00000) {
    FUN_01e190f8();
    uVar1 = FUN_01e188bc((int)in_r0_r1);
    in_r0_r1 = (ulonglong)uVar1;
    goto LAB_01e184e2;
  }
  if ((int)uVar1 < 1) {
    if ((in_r0_r1 & 0x7fffffff00000000) == 0 && (int)in_r0_r1 == 0) goto LAB_01e184e2;
    uVar3 = 0;
    if ((longlong)in_r0_r1 < 0) {
      uVar2 = FUN_01e193bc();
      uVar1 = FUN_01e18d66(uVar2);
      in_r0_r1 = (ulonglong)uVar1;
      goto LAB_01e184e2;
    }
  }
  else {
    uVar3 = CONCAT44(0x7ff00000,uVar1);
  }
  for (uVar3 = uVar3 & 0xffffffff; uVar1 = (uint)in_r0_r1, (int)uVar3 == 0;
      uVar3 = CONCAT44((int)(uVar3 >> 0x20) + -0x15,uVar1 >> 0xb)) {
    in_r0_r1 = (ulonglong)(uVar1 << 0x15);
  }
  iVar10 = 0;
  while( true ) {
    iVar9 = (int)(uVar3 >> 0x20);
    if ((uVar3 & 0x50) == 0) break;
    iVar10 = iVar10 + 1;
    uVar3 = CONCAT44(iVar9,(uint)uVar3 << 1);
  }
  uVar6 = uVar1 << iVar10;
  uVar1 = uVar1 >> 0x20 - iVar10 | (uint)uVar3;
  uVar3 = CONCAT44(uVar1,uVar6);
  uVar1 = ~uVar1 | 0x100000;
  if (((iVar9 - iVar10) - 0x3feU & 1) != 0) {
    uVar1 = uVar6 >> 0x1f | uVar1 << 1;
    uVar3 = (ulonglong)(uVar6 << 1);
  }
  uVar1 = (uint)(uVar3 >> 0x1f) & 1 | uVar1 << 1;
  uVar6 = 0;
  uVar8 = 0x200000;
  iVar10 = 0;
  while( true ) {
    uVar4 = (uint)uVar3 << 1;
    if (uVar8 == 0) break;
    iVar9 = uVar6 + uVar8;
    if (iVar9 <= (int)uVar1) {
      iVar10 = iVar10 + uVar8;
      uVar1 = uVar1 - iVar9;
      uVar6 = iVar9 + uVar8;
    }
    uVar1 = ((uint)uVar3 & 0x40000000) >> 0x1e | uVar1 << 1;
    uVar8 = uVar8 >> 1;
    uVar3 = (ulonglong)uVar4;
  }
  uVar8 = 0;
  uVar5 = 0x80000000;
  iVar9 = 0;
  do {
    uVar7 = iVar9 + uVar5;
    if (((int)uVar6 < (int)uVar1) || ((uVar7 <= uVar4 && (uVar1 == uVar6)))) {
      uVar1 = (uVar1 - (uVar4 < uVar7)) - uVar6;
      uVar8 = uVar8 + uVar5;
      uVar4 = uVar4 - uVar7;
      iVar9 = uVar7 + uVar5;
      uVar6 = uVar6 + ~(uVar7 >> 0x1f);
    }
    uVar1 = uVar4 >> 0x1f | uVar1 << 1;
    uVar5 = uVar5 >> 1;
    uVar4 = uVar4 << 1;
  } while (uVar5 != 0);
  if (uVar1 != 0 || uVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in_r0_r1 = (ulonglong)(uVar8 >> 1 | iVar10 << 0x1f);
LAB_01e184e2:
  return (int)in_r0_r1;
}



// ==== FUN_01e184f8 @ 01e184f8 ====

void FUN_01e184f8(void)

{
  return;
}



// ==== FUN_01e184fc @ 01e184fc ====

undefined8 FUN_01e184fc(void)

{
  return 0x7ff80000;
}



// ==== FUN_01e18506 @ 01e18506 ====

/* WARNING: Removing unreachable block (ram,0x01e1851e) */
/* WARNING: Removing unreachable block (ram,0x01e18526) */
/* WARNING: Removing unreachable block (ram,0x01e18558) */
/* WARNING: Removing unreachable block (ram,0x01e18540) */
/* WARNING: Removing unreachable block (ram,0x01e1854e) */

undefined4 FUN_01e18506(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_2 + -0x800;
  if (iVar1 < 0x7ff) {
    if (0 < iVar1) {
      return param_1;
    }
    if (-0x36 < iVar1) {
      uVar2 = 0;
      goto LAB_01e18582;
    }
    if (50000 < param_2) goto LAB_01e1856c;
    uVar2 = 0xc2f8f359;
  }
  else {
LAB_01e1856c:
    uVar2 = 0x8800759c;
  }
  param_1 = FUN_01e185e8(uVar2,param_1);
LAB_01e18582:
  uVar2 = FUN_01e190f8(param_1,uVar2);
  return uVar2;
}



// ==== FUN_01e185e8 @ 01e185e8 ====

undefined4 FUN_01e185e8(undefined4 param_1)

{
  return param_1;
}



// ==== FUN_01e18734 @ 01e18734 ====

char * FUN_01e18734(char *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  
  do {
    pcVar2 = param_1;
    cVar1 = *pcVar2;
    if (cVar1 == param_2) break;
    param_1 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (cVar1 != param_2) {
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}



// ==== FUN_01e1887c @ 01e1887c ====

uint FUN_01e1887c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint in_psr;
  
  if ((in_psr & 2) == 0) {
    uVar1 = LZCOUNT(param_1) | 0x20;
  }
  else {
    uVar1 = LZCOUNT(param_2);
  }
  return uVar1;
}



// ==== FUN_01e1889a @ 01e1889a ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e1889a(undefined8 *param_1)

{
  FUN_01e1887c((int)*param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e188bc @ 01e188bc ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x01e1895c) */

undefined4 FUN_01e188bc(void)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong in_r0_r1;
  undefined4 extraout_r1;
  uint uVar3;
  ulonglong in_r2_r3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 in_r4_r5;
  undefined8 in_r6_r7;
  uint uVar6;
  int iVar7;
  undefined8 in_r8_r9;
  uint uVar9;
  uint uVar10;
  longlong lVar8;
  uint uVar11;
  undefined8 in_r10_r11;
  int iVar12;
  undefined8 in_r12_r13;
  ulonglong uVar13;
  int iVar14;
  uint in_psr;
  BADSPACEBASE *in_sp;
  undefined8 *puVar15;
  undefined1 local_50 [12];
  ulonglong uStack_44;
  ulonglong uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = (undefined4)((ulonglong)in_r12_r13 >> 0x20);
  uStack_14 = (undefined4)in_r12_r13;
  uStack_18 = (undefined4)((ulonglong)in_r10_r11 >> 0x20);
  uStack_1c = (undefined4)in_r10_r11;
  uStack_20 = (undefined4)((ulonglong)in_r8_r9 >> 0x20);
  uStack_24 = (undefined4)in_r8_r9;
  uStack_28 = (undefined4)((ulonglong)in_r6_r7 >> 0x20);
  uStack_2c = (undefined4)in_r6_r7;
  uStack_30 = (undefined4)((ulonglong)in_r4_r5 >> 0x20);
  uStack_34 = (undefined4)in_r4_r5;
  puVar15 = (undefined8 *)local_50;
  uVar10 = (uint)(in_r0_r1 >> 0x20);
  uVar6 = uVar10 & 0x7fffffff;
  uVar11 = (uint)in_r0_r1;
  uVar5 = (uint)(in_r2_r3 >> 0x20);
  uVar3 = (uint)in_r2_r3;
  uVar9 = uVar5 & 0x7fffffff;
  if ((((in_psr & 2) >> 1 & (uVar11 + 1 | uVar6 + 0x80100000)) != 0) || ((in_psr & 5) != 0)) {
    if ((in_psr & 4) == 0) {
      uVar4 = in_r0_r1 & 0xffffffff;
      goto LAB_01e18b66;
    }
    if ((in_psr & 4) == 0) {
      uVar4 = in_r2_r3 & 0xffffffff;
      goto LAB_01e18b66;
    }
    if (uVar6 == 0x7ff00000 && uVar11 == 0) {
      uVar4 = in_r0_r1;
      if ((uVar5 ^ uVar10) == 0x80000000 && uVar3 == uVar11) {
        uVar4 = 0;
      }
      goto LAB_01e18b66;
    }
    uVar4 = in_r2_r3;
    if (uVar9 == 0x7ff00000 && uVar3 == 0) goto LAB_01e18b66;
    if (uVar11 == 0 && (in_r0_r1 & 0x7fffffff00000000) == 0) {
      if (uVar3 == 0 && (in_r2_r3 & 0x7fffffff00000000) == 0) {
        uVar4 = (ulonglong)(uVar3 & uVar11);
      }
      goto LAB_01e18b66;
    }
    uVar4 = in_r0_r1;
    if (uVar3 == 0 && (in_r2_r3 & 0x7fffffff00000000) == 0) goto LAB_01e18b66;
  }
  uVar4 = in_r2_r3;
  if (((in_psr & 2) >> 1 & (uVar3 - uVar11 | uVar9 - uVar6)) == 0) {
    uVar4 = in_r0_r1;
    in_r0_r1 = in_r2_r3;
  }
  uStack_3c = uVar4 & 0xfffffffffffff;
  uVar13 = in_r0_r1 & 0xfffffffffffff;
  iVar2 = 0;
  uStack_44 = uVar13;
  uVar1 = FUN_01e1889a(&uStack_3c);
  uVar3 = (uint)(uVar4 >> 0x20);
  uVar10 = (uint)(in_r0_r1 >> 0x20);
  *puVar15 = CONCAT44(extraout_r1,uVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_01e1889a((int)puVar15 + 0xc);
    uVar13 = *(ulonglong *)((int)puVar15 + 0xc);
  }
  iVar7 = (int)(*(ulonglong *)((int)puVar15 + 0x14) >> 3);
  uVar4 = CONCAT44((uint)(*(ulonglong *)((int)puVar15 + 0x14) >> 0x23),iVar7) | 0x80000000000000;
  *(ulonglong *)((int)puVar15 + 0x14) = uVar4;
  uVar13 = CONCAT44((uint)(uVar13 >> 0x23),(int)(uVar13 >> 3)) | 0x80000000000000;
  *(ulonglong *)((int)puVar15 + 0xc) = uVar13;
  if ((int)*puVar15 != iVar2) {
    if ((uint)((int)*puVar15 - iVar2) < 0x40) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar13 = 1;
    *(undefined8 *)((int)puVar15 + 0xc) = 1;
  }
  iVar2 = (int)(uVar4 >> 0x20);
  iVar12 = (int)uVar13;
  iVar14 = (int)(uVar13 >> 0x20);
  if ((int)(uVar3 ^ uVar10) < 0) {
    iVar7 = iVar7 - iVar12;
    iVar2 = iVar2 - iVar14;
    lVar8 = CONCAT44(iVar2,iVar7);
    *(longlong *)((int)puVar15 + 0x14) = lVar8;
    if (iVar7 == 0 && iVar2 == 0) {
      uVar4 = 0;
      goto LAB_01e18b66;
    }
    if (((in_psr & 2) >> 1 & (iVar2 - 0x7fffffU | iVar7 + 1U)) == 0) {
      FUN_01e1887c(iVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_01e18a9c:
    iVar2 = (int)*puVar15;
  }
  else {
    uVar10 = iVar14 + iVar2;
    lVar8 = CONCAT44(uVar10,iVar12 + iVar7);
    *(longlong *)((int)puVar15 + 0x14) = lVar8;
    if ((uVar10 & 0x1000000) == 0) goto LAB_01e18a9c;
    lVar8 = CONCAT44((int)((ulonglong)(lVar8 << 1) >> 0x20),(uint)(lVar8 << 1) | iVar12 + iVar7 & 1U
                    );
    *(longlong *)((int)puVar15 + 0x14) = lVar8;
    iVar2 = (int)*puVar15 + 1;
  }
  if (iVar2 < 0x7ff) {
    if (iVar2 < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = (uint)lVar8 & 7;
    uVar5 = (int)(lVar8 << 3) + (uint)(4 < uVar3);
    uVar10 = uVar5 & 1;
    if (uVar3 != 4) {
      uVar10 = 0;
    }
    uVar4 = (ulonglong)(uVar10 + uVar5);
  }
  else {
    uVar4 = 0;
  }
LAB_01e18b66:
  return (int)uVar4;
}



// ==== FUN_01e18b90 @ 01e18b90 ====

undefined4 FUN_01e18b90(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint in_psr;
  
  uVar1 = 1;
  if ((((in_psr & 2) >> 1 & ((param_2 & 0x7fffffff) + 0x80100000 | param_1)) == 0) &&
     (((in_psr & 2) >> 1 & ((param_4 & 0x7fffffff) + 0x80100000 | param_3)) == 0)) {
    if ((param_3 == 0 && param_1 == 0) &&
        ((param_4 & 0x7fffffff) == 0 && (param_2 & 0x7fffffff) == 0)) {
      uVar1 = 0;
    }
    else if ((int)(param_4 & param_2) < 0) {
      uVar1 = 0xffff;
      if (((param_1 - param_3 | param_2 - param_4) & ((in_psr & 8) >> 3 ^ in_psr & 1)) == 0) {
        uVar1 = 1;
        if (param_1 == param_3 && param_2 == param_4) {
          uVar1 = 0;
        }
      }
    }
    else {
      uVar1 = 0xffff;
    }
  }
  return uVar1;
}



// ==== FUN_01e18c40 @ 01e18c40 ====

undefined4 FUN_01e18c40(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint in_psr;
  
  uVar1 = 0xffff;
  if ((((in_psr & 2) >> 1 & ((param_2 & 0x7fffffff) + 0x80100000 | param_1)) == 0) &&
     (((in_psr & 2) >> 1 & ((param_4 & 0x7fffffff) + 0x80100000 | param_3)) == 0)) {
    if ((param_3 == 0 && param_1 == 0) &&
        ((param_4 & 0x7fffffff) == 0 && (param_2 & 0x7fffffff) == 0)) {
      uVar1 = 0;
    }
    else if ((((int)(param_4 & param_2) < 0) &&
             (((param_1 - param_3 | param_2 - param_4) & ((in_psr & 8) >> 3 ^ in_psr & 1)) == 0)) &&
            (uVar1 = 1, param_1 == param_3 && param_2 == param_4)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// ==== thunk_FUN_01e18c40 @ 01e18d2e ====

undefined4 thunk_FUN_01e18c40(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint in_psr;
  
  uVar1 = 0xffff;
  if ((((in_psr & 2) >> 1 & ((param_2 & 0x7fffffff) + 0x80100000 | param_1)) == 0) &&
     (((in_psr & 2) >> 1 & ((param_4 & 0x7fffffff) + 0x80100000 | param_3)) == 0)) {
    if ((param_3 == 0 && param_1 == 0) &&
        ((param_4 & 0x7fffffff) == 0 && (param_2 & 0x7fffffff) == 0)) {
      uVar1 = 0;
    }
    else if ((((int)(param_4 & param_2) < 0) &&
             (((param_1 - param_3 | param_2 - param_4) & ((in_psr & 8) >> 3 ^ in_psr & 1)) == 0)) &&
            (uVar1 = 1, param_1 == param_3 && param_2 == param_4)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// ==== FUN_01e18d30 @ 01e18d30 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e18d30(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e18d66 @ 01e18d66 ====

/* WARNING: Removing unreachable block (ram,0x01e18db2) */
/* WARNING: Removing unreachable block (ram,0x01e18dbc) */

undefined4 FUN_01e18d66(void)

{
  int iVar1;
  int iVar2;
  ulonglong in_r0_r1;
  int iVar3;
  ulonglong in_r2_r3;
  int iVar4;
  undefined8 in_r4_r5;
  undefined4 uVar5;
  undefined8 in_r6_r7;
  undefined8 in_r8_r9;
  ulonglong uVar6;
  undefined8 in_r10_r11;
  longlong lVar7;
  undefined8 in_r12_r13;
  ulonglong uVar8;
  uint uVar9;
  undefined8 in_r14_r15;
  uint uVar10;
  uint in_psr;
  BADSPACEBASE *in_sp;
  undefined1 *puVar11;
  ulonglong *puVar12;
  undefined1 local_60 [24];
  undefined4 uStack_48;
  ulonglong uStack_44;
  ulonglong uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (int)((ulonglong)in_r14_r15 >> 0x20);
  uStack_c = (int)in_r14_r15;
  uStack_10 = (int)((ulonglong)in_r12_r13 >> 0x20);
  uStack_14 = (int)in_r12_r13;
  uStack_18 = (int)((ulonglong)in_r10_r11 >> 0x20);
  uStack_1c = (int)in_r10_r11;
  uStack_20 = (int)((ulonglong)in_r8_r9 >> 0x20);
  uStack_24 = (int)in_r8_r9;
  uStack_28 = (int)((ulonglong)in_r6_r7 >> 0x20);
  uStack_2c = (int)in_r6_r7;
  uStack_30 = (int)((ulonglong)in_r4_r5 >> 0x20);
  uStack_34 = (int)in_r4_r5;
  puVar11 = local_60;
  uVar10 = (uint)(in_r0_r1 >> 0x20);
  iVar2 = (int)in_r0_r1;
  uVar9 = (uint)(in_r2_r3 >> 0x20);
  uStack_3c = in_r0_r1 & 0xfffffffffffff;
  iVar3 = (int)in_r2_r3;
  uVar6 = in_r2_r3 & 0xfffffffffffff;
  uStack_44 = uVar6;
  uVar5 = 0xffffffff;
  uVar8 = (ulonglong)((uVar9 ^ uVar10) & 0x80000000) << 0x20;
  uVar10 = uVar10 & 0x7fffffff;
  if ((in_psr & 4) == 0) {
    uVar8 = in_r0_r1 & 0xffffffff;
  }
  else {
    uStack_48 = 0;
    uVar9 = uVar9 & 0x7fffffff;
    if ((in_psr & 4) == 0) {
      uVar8 = in_r2_r3 & 0xffffffff;
    }
    else {
      if (uVar10 == 0x7ff00000 && iVar2 == 0) {
        if (uVar9 != 0x7ff00000 || iVar3 != 0) {
          uVar8 = in_r0_r1 & 0xffffffff;
          goto LAB_01e19062;
        }
      }
      else {
        if (uVar9 == 0x7ff00000 && iVar3 == 0) goto LAB_01e19062;
        if (iVar2 != 0 || (in_r0_r1 & 0x7fffffff00000000) != 0) {
          if (iVar3 == 0 && (in_r2_r3 & 0x7fffffff00000000) == 0) {
            uVar8 = 0;
          }
          else {
            iVar4 = 0xfffff;
            iVar1 = 0;
            puVar12 = (ulonglong *)local_60;
            if (((in_psr & 2) >> 1 & (iVar2 + 1U | uVar10 - 0xfffff)) == 0) {
              uVar5 = 0xffffffff;
              iVar1 = FUN_01e18d30(&uStack_3c);
              puVar12 = (ulonglong *)puVar11;
            }
            *(undefined4 *)((int)puVar12 + 0xc) = uVar5;
            *puVar12 = uVar8;
            if (((in_psr & 2) >> 1 & (iVar3 + 1U | uVar9 - iVar4)) == 0) {
              iVar2 = FUN_01e18d30((undefined1 *)((int)puVar12 + 0x1c));
              uVar6 = *(ulonglong *)((int)puVar12 + 0x1c);
              iVar1 = iVar1 - iVar2;
            }
            *(int *)(puVar12 + 1) = iVar1;
            uVar8 = *(ulonglong *)((int)puVar12 + 0x24);
            iVar1 = (int)uVar6;
            lVar7 = (-(longlong)(iVar1 << 0xb) << 0x20) + (uVar6 & 0x7ff) * 0x1fffffffe00000;
            *(ulonglong *)((int)puVar12 + 0x24) = uVar8 | 0x10000000000000;
            puVar12[2] = uVar8;
            lVar7 = (ulonglong)(uint)((int)uVar8 * 0x40000000) *
                    (CONCAT44((int)lVar7 + -1,0xfffffffe) +
                     (ulonglong)(uint)-(int)((ulonglong)lVar7 >> 0x20) * 0xffffffff >> 0x20);
            iVar2 = (int)((ulonglong)lVar7 >> 0x20);
            *(ulonglong *)((int)puVar12 + 0x1c) = uVar6 | 0x10000000000000;
            iVar3 = (int)puVar12[1] * 2 - (uint)puVar12[3];
            if (((in_psr & 2) >> 1 & (iVar2 - 0x1fffffU | (uint)puVar12[3])) == 0) {
              uVar8 = CONCAT44(-((int)((ulonglong)((longlong)iVar1 * (longlong)(int)lVar7) >> 0x20)
                                + iVar1 * iVar2),(uint)(puVar12[2] >> 0x35));
              iVar3 = iVar3 + -1;
            }
            else {
              lVar7 = lVar7 * 2;
              uVar8 = CONCAT44(-((int)((ulonglong)((longlong)iVar1 * (longlong)(int)lVar7) >> 0x20)
                                + iVar1 * (int)((ulonglong)lVar7 >> 0x20)),
                               (uint)(puVar12[2] >> 0x34));
            }
            if (iVar3 + 0x3ff < 0x7ff) {
              if (iVar3 + 0x3ff < 1) {
                uVar8 = *puVar12;
              }
              else {
                uVar8 = (ulonglong)
                        ((uint)*puVar12 |
                        (uint)(((in_psr & 2) >> 1 &
                               ((int)(uVar8 >> 1) - iVar1 |
                               (uint)(uVar8 >> 0x21) - (int)((uVar6 | 0x10000000000000) >> 0x20)))
                              != 0) + (int)lVar7);
              }
            }
            else {
              uVar8 = *puVar12 & 0xffffffff;
            }
          }
          goto LAB_01e19062;
        }
        if (iVar3 != 0 || (in_r2_r3 & 0x7fffffff00000000) != 0) goto LAB_01e19062;
      }
      uVar8 = 0;
    }
  }
LAB_01e19062:
  return (int)uVar8;
}



// ==== FUN_01e19076 @ 01e19076 ====

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_01e19076(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e190c2 @ 01e190c2 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e190c2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e190f8 @ 01e190f8 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x01e19144) */
/* WARNING: Removing unreachable block (ram,0x01e1914e) */

void FUN_01e190f8(void)

{
  int iVar1;
  int iVar2;
  ulonglong in_r0_r1;
  int iVar3;
  ulonglong in_r2_r3;
  int iVar4;
  undefined8 in_r4_r5;
  undefined8 in_r6_r7;
  undefined8 uVar5;
  undefined8 in_r8_r9;
  longlong lVar6;
  undefined8 in_r10_r11;
  undefined8 in_r12_r13;
  uint uVar8;
  ulonglong uVar7;
  undefined8 in_r14_r15;
  uint uVar9;
  uint in_psr;
  BADSPACEBASE *in_sp;
  undefined1 *puVar10;
  longlong *plVar11;
  undefined1 local_68 [24];
  ulonglong uStack_50;
  ulonglong uStack_44;
  ulonglong uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = (int)((ulonglong)in_r14_r15 >> 0x20);
  uStack_c = (int)in_r14_r15;
  uStack_10 = (int)((ulonglong)in_r12_r13 >> 0x20);
  uStack_14 = (int)in_r12_r13;
  uStack_18 = (int)((ulonglong)in_r10_r11 >> 0x20);
  uStack_1c = (int)in_r10_r11;
  uStack_20 = (int)((ulonglong)in_r8_r9 >> 0x20);
  uStack_24 = (int)in_r8_r9;
  uStack_28 = (int)((ulonglong)in_r6_r7 >> 0x20);
  uStack_2c = (int)in_r6_r7;
  uStack_30 = (int)((ulonglong)in_r4_r5 >> 0x20);
  uStack_34 = (int)in_r4_r5;
  puVar10 = local_68;
  iVar4 = 0xfffff;
  uVar9 = (uint)(in_r0_r1 >> 0x20);
  iVar1 = (int)in_r0_r1;
  uVar8 = (uint)(in_r2_r3 >> 0x20);
  uStack_3c = in_r0_r1 & 0xfffffffffffff;
  iVar3 = (int)in_r2_r3;
  uStack_44 = in_r2_r3 & 0xfffffffffffff;
  uVar5 = 0xffffffff;
  lVar6 = (ulonglong)((uVar8 ^ uVar9) & 0x80000000) << 0x20;
  uVar9 = uVar9 & 0x7fffffff;
  if ((in_psr & 4) != 0) {
    uStack_50 = in_r2_r3 & 0xfffffffffffff;
    uVar8 = uVar8 & 0x7fffffff;
    if (((((in_psr & 4) != 0) && (uVar9 != 0x7ff00000 || iVar1 != 0)) &&
        (uVar8 != 0x7ff00000 || iVar3 != 0)) &&
       ((iVar1 != 0 || (in_r0_r1 & 0x7fffffff00000000) != 0 &&
        (iVar3 != 0 || (in_r2_r3 & 0x7fffffff00000000) != 0)))) {
      iVar2 = 0;
      plVar11 = (longlong *)local_68;
      if (((in_psr & 2) >> 1 & (iVar1 + 1U | uVar9 - 0xfffff)) == 0) {
        iVar4 = 0xfffff;
        iVar2 = FUN_01e190c2(&uStack_3c);
        plVar11 = (longlong *)puVar10;
      }
      *plVar11 = lVar6;
      *(undefined8 *)((int)plVar11 + 0xc) = uVar5;
      if (((in_psr & 2) >> 1 & (iVar3 + 1U | uVar8 - iVar4)) == 0) {
        iVar4 = FUN_01e190c2((int)plVar11 + 0x24);
        uVar7 = *(ulonglong *)((int)plVar11 + 0x24);
        iVar2 = iVar2 + iVar4;
      }
      else {
        uVar7 = plVar11[3];
      }
      *(int *)((int)plVar11 + 0x14) = iVar2;
      *(ulonglong *)((int)plVar11 + 0x18) = *(ulonglong *)((int)plVar11 + 0x2c) | 0x10000000000000;
      *(ulonglong *)((int)plVar11 + 0x24) = uVar7 | 0x10000000000000;
      uVar9 = ~(uint)(uVar7 >> 0xb) *
              (int)((*(ulonglong *)((int)plVar11 + 0x2c) | 0x10000000000000) >> 0x20);
      *(ulonglong *)((int)plVar11 + 0x2c) = *(ulonglong *)((int)plVar11 + 0x18);
      iVar4 = *(int *)((int)plVar11 + 0x10) + *(int *)((int)plVar11 + 0x14) * 2 + -0x3ff;
      if (((int)(((ulonglong)uVar9 << 0x20) +
                 (uVar7 & 0x7ff) * 0x200000 * (*(ulonglong *)((int)plVar11 + 0x18) >> 0x20) >> 0x20)
           + ~uVar9 & 0x100000) != 0) {
        iVar4 = *(int *)((int)plVar11 + 0x10) + *(int *)((int)plVar11 + 0x14) * 2 + -0x3fe;
      }
      if (((iVar4 < 0x7ff) && (iVar4 < 1)) && (1U - iVar4 < 0x40)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}



// ==== FUN_01e193bc @ 01e193bc ====

void FUN_01e193bc(uint param_1)

{
  FUN_01e188bc(param_1 ^ 0x80000000);
  return;
}



// ==== FUN_01e19416 @ 01e19416 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x01e19436) */
/* WARNING: Removing unreachable block (ram,0x01e1943c) */

undefined4 FUN_01e19416(void)

{
  return 0;
}



// ==== FUN_01e19452 @ 01e19452 ====

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_01e19452(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}



// ==== FUN_01e223ba @ 01e223ba ====

void FUN_01e223ba(uint param_1)

{
  DAT_000044df = (char)(param_1 / 1000000);
  DAT_000044e0 = 10;
  return;
}



// ==== FUN_01e2247c @ 01e2247c ====

undefined4 FUN_01e2247c(uint param_1)

{
  if (8 < param_1) {
    param_1 = 9;
  }
  return *(undefined4 *)((param_1 + 0x1e22148) * 4);
}



// ==== FUN_01e2248e @ 01e2248e ====

undefined4 FUN_01e2248e(uint param_1)

{
  if (8 < param_1) {
    param_1 = 9;
  }
  return *(undefined4 *)((param_1 + 0x1e22170) * 4);
}



// ==== FUN_01e224a0 @ 01e224a0 ====

void FUN_01e224a0(void)

{
  DAT_000044d6 = 10;
  DAT_000044d7 = 10;
  return;
}



// ==== FUN_01e224da @ 01e224da ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e224da(int param_1)

{
  if ((DAT_00012f6c == '\0') && (DAT_00006b1c != '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return param_1 + 0x155554aa;
}



// ==== FUN_01e225f0 @ 01e225f0 ====

void FUN_01e225f0(void)

{
  FUN_01e263d6();
  return;
}



// ==== FUN_01e238b0 @ 01e238b0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e238b0(undefined2 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int unaff_r8;
  BADSPACEBASE *in_sp;
  int **ppiVar7;
  int **ppiVar8;
  int **ppiVar9;
  int *local_130;
  char acStack_12c [16];
  int *piStack_11c;
  int local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  ppiVar7 = &local_130;
  ppiVar9 = &local_130;
  ppiVar8 = &local_130;
  local_130 = &local_c;
  acStack_12c[0] = (char)*param_1;
  acStack_12c[1] = (char)((ushort)*param_1 >> 8);
  pcVar6 = *(char **)(param_1 + 2);
  uVar5 = 3;
  piStack_11c = local_130;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  do {
    iVar4 = (int)*pcVar6;
    acStack_12c[2] = (char)uVar5;
    if (iVar4 == 0) {
      acStack_12c[2] = acStack_12c[2] + -3;
      if (0x100 < (uVar5 & 0xffff)) {
        thunk_EXT_FUN_0200010a();
        ppiVar9 = ppiVar8;
      }
      (*_DAT_00010e6c)(1,(undefined1 *)((int)ppiVar9 + 4),uVar5 & 0xffff,_DAT_00010e6c);
      return;
    }
    uVar2 = uVar5;
    switch(iVar4) {
    case 0x42:
      pcVar3 = (char *)*piStack_11c;
      uVar2 = (uint)(byte)pcVar3[5];
      piStack_11c = piStack_11c + 1;
      acStack_12c[uVar2] = acStack_12c[2];
      acStack_12c[uVar2 + 1] = pcVar3[4];
      acStack_12c[uVar2 + 2] = pcVar3[3];
      acStack_12c[uVar2 + 3] = pcVar3[2];
      acStack_12c[uVar2 + 4] = pcVar3[1];
      acStack_12c[uVar2 + 5] = *pcVar3;
      uVar2 = uVar5 + 6;
      break;
    case 0x43:
    case 0x46:
    case 0x47:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4d:
    case 0x4f:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x57:
      break;
    case 0x44:
      iVar4 = *piStack_11c;
      piStack_11c = piStack_11c + 1;
      func_0x021127a8(acStack_12c + uVar5,iVar4,8);
      return;
    case 0x45:
      iVar4 = *piStack_11c;
      piStack_11c = piStack_11c + 1;
      func_0x021127a8(acStack_12c + uVar5,iVar4,0xf0);
      return;
    case 0x48:
switchD_01e238da_caseD_48:
      iVar4 = *piStack_11c;
      piStack_11c = piStack_11c + 1;
      acStack_12c[uVar5] = (char)iVar4;
      uVar2 = uVar5 + 1;
      if ((*pcVar6 == 'H') || (*pcVar6 == '2')) {
        acStack_12c[uVar5 + 1] = (char)((uint)iVar4 >> 8);
        uVar2 = uVar5 + 2;
      }
      break;
    case 0x4c:
      unaff_r8 = *piStack_11c;
      piStack_11c = piStack_11c + 1;
      break;
    case 0x4e:
      iVar4 = *piStack_11c;
      piStack_11c = piStack_11c + 1;
      uVar1 = func_0x021127c0(iVar4);
      if (0xf7 < uVar1) {
        uVar1 = 0xf8;
      }
      func_0x021127a8((undefined1 *)((int)ppiVar7 + uVar5 + 4),iVar4,uVar1);
      return;
    case 0x50:
      iVar4 = *piStack_11c;
      piStack_11c = piStack_11c + 1;
      func_0x021127a8(acStack_12c + uVar5,iVar4,0x10);
      return;
    case 0x56:
    case 0x5a:
      iVar4 = *piStack_11c;
      goto LAB_01e239d4;
    case 0x58:
      iVar4 = *piStack_11c;
      unaff_r8 = unaff_r8 << 2;
LAB_01e239d4:
      piStack_11c = piStack_11c + 1;
      func_0x021127a8(acStack_12c + uVar5,iVar4,unaff_r8);
      return;
    case 0x59:
      unaff_r8 = *piStack_11c;
      piStack_11c = piStack_11c + 1;
      acStack_12c[uVar5] = (char)unaff_r8;
      uVar2 = uVar5 + 1;
      break;
    default:
      if (iVar4 - 0x33U < 2) {
        iVar4 = *piStack_11c;
        piStack_11c = piStack_11c + 1;
        acStack_12c[iVar4] = acStack_12c[2];
        acStack_12c[iVar4 + 1] = (char)((uint)iVar4 >> 8);
        acStack_12c[iVar4 + 2] = (char)((uint)iVar4 >> 0x10);
        uVar2 = uVar5 + 3;
        if (*pcVar6 == '4') {
          acStack_12c[uVar5 + 3] = (char)((uint)iVar4 >> 0x18);
          uVar2 = uVar5 + 4;
        }
      }
      else if (iVar4 - 0x31U < 2) goto switchD_01e238da_caseD_48;
    }
    pcVar6 = pcVar6 + 1;
    uVar5 = uVar2;
  } while( true );
}



// ==== FUN_01e23b42 @ 01e23b42 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e23b42(undefined4 param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01e23b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_00010e6c)(2,param_1,param_2,_DAT_00010e6c);
  return;
}



// ==== FUN_01e23b52 @ 01e23b52 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e23b52(void)

{
  if ((_DAT_00010e64 != 0) && (*(code **)(_DAT_00010e64 + 0x18) != (code *)0x0)) {
    (**(code **)(_DAT_00010e64 + 0x18))();
  }
  return;
}



// ==== FUN_01e23b66 @ 01e23b66 ====

void FUN_01e23b66(undefined1 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  BADSPACEBASE *in_sp;
  undefined4 **ppuVar2;
  undefined4 *local_118;
  undefined1 auStack_114 [260];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  ppuVar2 = &local_118;
  local_118 = &uStack_8;
  auStack_114[0] = param_1;
  uStack_8 = param_2;
  uStack_4 = param_3;
  uVar1 = FUN_01e162a6((uint)auStack_114 | 2);
  *(undefined1 *)((int)ppuVar2 + 5) = uVar1;
  FUN_01e23b52(4,auStack_114,*(int *)((int)ppuVar2 + 5) + 2);
  return;
}



// ==== FUN_01e23b98 @ 01e23b98 ====

void FUN_01e23b98(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  FUN_01e36848(2,s__Info____HCI_DEV_HCI_EVENT_READ__01e1fe79,&DAT_01e1afe8);
  if (param_2 == 0x211) {
    pcVar2 = s__Info____HCI_DEV__Manufacture_Na_01e1f964;
LAB_01e23c22:
    FUN_01e36848(2,pcVar2);
  }
  else {
    if (param_2 == 0xd) {
      pcVar2 = s__Info____HCI_DEV__Manufacture_Na_01e1f494;
      goto LAB_01e23c22;
    }
    if (param_2 == 0xf) {
      pcVar2 = s__Info____HCI_DEV__Manufacture_Na_01e1f35e;
      goto LAB_01e23c22;
    }
    if (param_2 == 0x1d) {
      iVar1 = 0x3710;
LAB_01e23c0a:
      pcVar2 = &DAT_01e1af10 + iVar1;
      goto LAB_01e23c22;
    }
    if (param_2 == 0x46) {
      iVar1 = 0x3ed1;
      goto LAB_01e23c0a;
    }
    if (param_2 == 0x4c) {
      iVar1 = 0x3968;
      goto LAB_01e23c0a;
    }
    if (param_2 == 0x59) {
      pcVar2 = s__Info____HCI_DEV__Manufacture_Na_01e1f815;
      goto LAB_01e23c22;
    }
    if (param_2 == 0x5a) {
      pcVar2 = s__Info____HCI_DEV__Manufacture_Na_01e1f920;
      goto LAB_01e23c22;
    }
    if (param_2 == 0x5d) {
      pcVar2 = s__Info____HCI_DEV__Manufacture_Na_01e1fb15;
      goto LAB_01e23c22;
    }
    if (param_2 == 10) {
      pcVar2 = s__Info____HCI_DEV__Manufacture_Na_01e1f714;
      goto LAB_01e23c22;
    }
    FUN_01e36848(2,s__Info____HCI_DEV__Manufacture_Na_01e1df29,param_2);
  }
  switch(param_1) {
  case 3:
    pcVar2 = s__Info____HCI_DEV__Version___Blue_01e1fc94;
    break;
  case 4:
    pcVar2 = s__Info____HCI_DEV__Version___Blue_01e1fce3;
    break;
  case 5:
    pcVar2 = s__Info____HCI_DEV__Version___Blue_01e1fbf7;
    break;
  case 6:
    pcVar2 = s__Info____HCI_DEV__Version___Blue_01e1f9f1;
    break;
  case 7:
    pcVar2 = s__Info____HCI_DEV__Version___Blue_01e1fa3a;
    break;
  case 8:
    pcVar2 = s__Info____HCI_DEV__Version___Blue_01e1fa83;
    break;
  case 9:
    pcVar2 = s__Info____HCI_DEV__Version___Blue_01e1facc;
    break;
  default:
    FUN_01e36848(2,s__Info____HCI_DEV__Version____02x_01e1df56,param_1);
    goto LAB_01e23c78;
  }
  FUN_01e36848(2,pcVar2);
LAB_01e23c78:
  FUN_01e36848(2,s__Info____HCI_DEV__Subversion_____01e1df83,param_3);
  return;
}



// ==== FUN_01e23cf0 @ 01e23cf0 ====

int FUN_01e23cf0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint in_icfg;
  BADSPACEBASE *in_sp;
  undefined4 **ppuVar2;
  undefined4 *local_34;
  undefined4 auStack_30 [4];
  undefined4 *puStack_20;
  undefined4 local_8;
  undefined4 uStack_4;
  
  ppuVar2 = &local_34;
  local_34 = &local_8;
  puStack_20 = local_34;
  for (iVar1 = 1; iVar1 <= param_2; iVar1 = iVar1 + 1) {
    *(undefined4 *)(((int)auStack_30 + iVar1) * 4) = *puStack_20;
    puStack_20 = puStack_20 + 1;
  }
  auStack_30[0] = param_1;
  local_8 = param_3;
  uStack_4 = param_4;
  while ((iVar1 = func_0x020033fa(s_btctrler_01e1b3c3,0x400001,param_2 + 1,
                                  (undefined1 *)((int)ppuVar2 + 4)), iVar1 == 0x15 &&
         (iVar1 = 0x15, (in_icfg & 0xff) == 0))) {
    func_0x020033fc();
    iVar1 = func_0x021127b8(s_btctrler_01e1b3c3);
    if (iVar1 == 0) {
      return 0x15;
    }
    func_0x02003440(2);
  }
  return iVar1;
}



// ==== FUN_01e23d6e @ 01e23d6e ====

void FUN_01e23d6e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  BADSPACEBASE *in_sp;
  undefined4 **ppuVar2;
  undefined4 *local_11c;
  undefined1 auStack_118 [5];
  undefined1 auStack_113 [255];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  ppuVar2 = &local_11c;
  auStack_118[0] = 0xe;
  local_11c = &uStack_8;
  uStack_8 = param_2;
  uStack_4 = param_3;
  cVar1 = FUN_01e162a6(auStack_113);
  *(char *)((int)ppuVar2 + 5) = cVar1 + '\x03';
  *(undefined1 *)((int)ppuVar2 + 6) = 1;
  *(char *)((int)ppuVar2 + 7) = (char)param_1;
  *(char *)((int)ppuVar2 + 8) = (char)((uint)param_1 >> 8);
  FUN_01e23b52(4,auStack_118,*(int *)((int)ppuVar2 + 5) + 2);
  return;
}



// ==== FUN_01e243c0 @ 01e243c0 ====

uint FUN_01e243c0(int param_1)

{
  if (0xfffe < param_1 - 0x11ad4U) {
    thunk_EXT_FUN_0200010a();
  }
  return param_1 - 0x11ad4U;
}



// ==== FUN_01e243dc @ 01e243dc ====

void FUN_01e243dc(int param_1,int param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(uint)*(byte *)(param_1 + 0xe);
  iVar4 = *piVar3;
  if (param_2 == 0) {
    if (piVar3 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar1 = FUN_01e243c0(param_1 + 0x10);
      *(undefined2 *)(iVar4 + 0x12) = uVar1;
      uVar2 = (ushort)*(byte *)(param_1 + 0xe) << 8;
    }
    *(ushort *)(iVar4 + 0x16) =
         *(ushort *)(param_1 + 0xc) >> 2 & 0x30 | *(ushort *)(param_1 + 0xc) & 0xf;
    *(ushort *)(iVar4 + 0x1a) =
         uVar2 | *(ushort *)(iVar4 + 0x1a) & 4 | *(ushort *)(param_1 + 0xc) >> 6 & 8 |
         (ushort)((*(ushort *)(param_1 + 0xc) & 0x30) >> 4);
  }
  else {
    if (piVar3 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar1 = FUN_01e243c0(param_1 + 0x10);
      *(undefined2 *)(iVar4 + 0x14) = uVar1;
      uVar2 = (ushort)*(byte *)(param_1 + 0xe) << 8;
    }
    *(ushort *)(iVar4 + 0x18) =
         *(ushort *)(param_1 + 0xc) >> 2 & 0x30 | *(ushort *)(param_1 + 0xc) & 0xf;
    *(ushort *)(iVar4 + 0x1c) =
         uVar2 | *(ushort *)(iVar4 + 0x1c) & 4 | *(ushort *)(param_1 + 0xc) >> 6 & 8 |
         (ushort)((*(ushort *)(param_1 + 0xc) & 0x30) >> 4);
  }
  if ((char)piVar3[6] != '\0') {
    if (param_2 == 0) {
      *(ushort *)(iVar4 + 0x1a) =
           *(ushort *)(iVar4 + 0x1a) & 0xffef | (*(byte *)(piVar3 + 4) & 1) << 4;
      return;
    }
    *(ushort *)(iVar4 + 0x1c) =
         *(ushort *)(iVar4 + 0x1c) & 0xffef | (*(byte *)(piVar3 + 4) & 1) << 4;
  }
  return;
}



// ==== FUN_01e2448c @ 01e2448c ====

void FUN_01e2448c(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x24f);
  if (param_2 != 0) {
    uVar1 = param_2 & 0x1f | (uint)(*(byte *)(param_1 + 0x24f) >> 5) << 5;
    *(char *)(param_1 + 0x24f) = (char)uVar1;
  }
  if ((uVar1 & 0x20) == 0) {
    *(short *)(param_1 + 0x60) = (short)param_2;
    *(short *)(param_1 + 0x5e) = (short)param_2;
  }
  return;
}



// ==== FUN_01e244ae @ 01e244ae ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e244ae(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  while( true ) {
    if (7 < uVar1) {
      return 0;
    }
    if ((_DAT_001c8028 & 1 << uVar1 & _DAT_001c8030) != 0) break;
    uVar2 = 1 << uVar1;
    uVar1 = uVar1 + 1;
    if ((~uVar2 & _DAT_001c8050) != 0) {
      return 1;
    }
  }
  return 1;
}



// ==== FUN_01e244e0 @ 01e244e0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e244e0(int param_1,int param_2)

{
  _DAT_001c801c = ((param_1 + -0x11ae4) / 0x1c & 0xffU) << 4 | param_2 << 10 | 2;
  CoreSynchronize();
  return _DAT_001c8024;
}



// ==== FUN_01e24506 @ 01e24506 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e24506(int param_1,int param_2,undefined4 param_3)

{
  _DAT_001c8020 = param_3;
  CoreSynchronize();
  _DAT_001c801c = ((param_1 + -0x11ae4) / 0x1c & 0xffU) << 4 | param_2 << 10 | 5;
  return;
}



// ==== FUN_01e245e2 @ 01e245e2 ====

void FUN_01e245e2(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  FUN_01e24506(7,0);
  FUN_01e24506(param_1,0,0);
  FUN_01e24506(param_1,0xe,0);
  uVar1 = param_2 - 1;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  FUN_01e24506(param_1,0,uVar1 & 0xffff);
  FUN_01e24506(param_1,0xe,uVar1 >> 0x10 | 0x8000);
  return;
}



// ==== FUN_01e24784 @ 01e24784 ====

uint FUN_01e24784(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_01e244e0(0,param_1);
  uVar2 = FUN_01e244e0(param_1,0xe);
  return (uVar2 & 0xff) << 0x10 | uVar1 & 0xffff;
}



// ==== FUN_01e24bba @ 01e24bba ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e24bba(int param_1,int param_2,undefined4 param_3)

{
  *(bool *)(param_1 + 0x16f) = param_2 != 0;
  func_0x021127a8(param_1 + 0x170,param_3,6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e25248 @ 01e25248 ====

short FUN_01e25248(void)

{
  short sVar1;
  
  sVar1 = FUN_01e244e0(3);
  return sVar1 + -1;
}



// ==== FUN_01e2525c @ 01e2525c ====

undefined2 FUN_01e2525c(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_01e244e0(5);
  return uVar1;
}



// ==== FUN_01e25268 @ 01e25268 ====

uint FUN_01e25268(void)

{
  uint uVar1;
  
  uVar1 = FUN_01e244e0(9);
  return (uVar1 & 0xff80) >> 7;
}



// ==== FUN_01e25276 @ 01e25276 ====

undefined4 FUN_01e25276(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((*(char *)(*param_1 + 0x156) != '\0') && (*(char *)(*param_1 + 0x157) != '\x01')) {
    iVar2 = FUN_01e25268(param_1);
    uVar1 = 1;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// ==== FUN_01e252a2 @ 01e252a2 ====

uint FUN_01e252a2(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_01e244e0(1,param_1);
  uVar2 = FUN_01e244e0(param_1,0xf);
  return (uVar2 & 0xff) << 0x10 | uVar1 & 0x7fff;
}



// ==== FUN_01e255d8 @ 01e255d8 ====

void FUN_01e255d8(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_01e24506(5,param_2);
  *(short *)(iVar1 + 0x15e) = (short)param_2;
  *(undefined1 *)(iVar1 + 0x15d) = 1;
  return;
}



// ==== FUN_01e255f6 @ 01e255f6 ====

void FUN_01e255f6(int param_1,undefined2 param_2,undefined4 param_3)

{
  *(short *)(param_1 + 0x22) = (short)param_3;
  *(short *)(param_1 + 0x24) = (short)((uint)param_3 >> 0x10);
  *(undefined2 *)(param_1 + 0x112) = param_2;
  *(undefined4 *)(param_1 + 0x14c) = param_3;
  return;
}



// ==== FUN_01e2560a @ 01e2560a ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e2560a(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  uVar2 = 0;
  do {
    iVar5 = uVar2 * 2;
    uVar6 = uVar2;
    do {
      iVar5 = iVar5 + 2;
      if (0x24 < (int)uVar2) {
        for (iVar5 = 0; iVar5 != 3; iVar5 = iVar5 + 1) {
          uVar4 = *(undefined1 *)((int)&DAT_01e1aa72 + iVar5);
          iVar1 = param_1 + iVar5;
          cVar7 = (char)iVar5 + '%';
          *(char *)(iVar1 + 0x8d) = cVar7;
          *(undefined1 *)(iVar1 + 0xdd) = uVar4;
          *(char *)(iVar1 + 0xb5) = cVar7;
          *(undefined1 *)(iVar1 + 0x105) = uVar4;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (uVar2 == 0) {
        uVar8 = uVar8 & 0xffffffff;
      }
      else if (uVar2 == 0xb) {
        uVar8 = CONCAT44(2,(int)uVar8);
      }
      uVar4 = (undefined1)uVar6;
      *(undefined1 *)(param_1 + uVar2 + 0x68) = uVar4;
      cVar7 = (char)(uVar8 >> 0x20) + (char)iVar5;
      *(char *)(param_1 + uVar2 + 0xb8) = cVar7;
      iVar1 = (int)uVar2 >> 3;
      uVar3 = uVar2 & 7;
      uVar6 = uVar6 + 1;
      uVar2 = uVar2 + 1;
    } while (((uint)*(byte *)(param_2 + iVar1) & 1 << uVar3) == 0);
    iVar5 = param_1 + (int)uVar8;
    *(undefined1 *)(iVar5 + 0x90) = uVar4;
    *(char *)(iVar5 + 0xe0) = cVar7;
    uVar8 = CONCAT44((int)(uVar8 >> 0x20),(int)uVar8 + 1);
  } while( true );
}



// ==== FUN_01e256b4 @ 01e256b4 ====

void FUN_01e256b4(int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(char *)(iVar1 + 0x152) = (char)param_2;
  *(short *)(iVar1 + 0x158) = (short)param_4;
  *(char *)(iVar1 + 0x156) = (char)param_3;
  *(undefined1 *)(iVar1 + 0x157) = 0;
  FUN_01e24506(2,param_2 << 0xc | param_3 << 0xb | param_4);
  return;
}



// ==== FUN_01e256d8 @ 01e256d8 ====

void FUN_01e256d8(uint param_1)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 | 0x8000;
  }
  FUN_01e24506(4,param_1);
  return;
}



// ==== FUN_01e256ea @ 01e256ea ====

void FUN_01e256ea(int param_1,int param_2)

{
  short sVar1;
  
  sVar1 = (short)(param_2 / 0x271);
  *(short *)(param_1 + 0x48) = sVar1;
  *(ushort *)(param_1 + 0x4a) = (short)param_2 + sVar1 * -0x271 | 0x5000;
  *(int *)(param_1 + 0x148) = param_2;
  return;
}



// ==== caseD_6d @ 01e25708 ====

void switchD_01e0931a::caseD_6d(void)

{
  FUN_01e24506(8,0);
  return;
}



// ==== FUN_01e25710 @ 01e25710 ====

void FUN_01e25710(undefined4 param_1,int param_2,int param_3)

{
  FUN_01e24506(param_1,1,param_2 / 0x271 & 0xffff);
  FUN_01e24506(param_1,0xf,param_3 << 0xf | param_2 / 0x271 >> 0x10);
  return;
}



// ==== FUN_01e2573a @ 01e2573a ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01e2573a(int *param_1,uint param_2,uint *param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 extraout_r1;
  undefined2 *puVar3;
  undefined1 uVar4;
  ushort *puVar5;
  uint uVar6;
  char local_8;
  
  if (0x17 < param_2) {
    return;
  }
  puVar3 = (undefined2 *)*param_1;
  puVar5 = puVar3 + 0x1e;
  local_8 = (char)param_3;
  switch(param_2) {
  case 0:
    func_0x021127a8(puVar3 + 0xd6,param_3,8);
    break;
  case 1:
    func_0x021127a8(puVar3 + 0xda,param_3,0x10);
    break;
  case 2:
    puVar3[3] = puVar3[3] | 8;
    *(bool *)(puVar3 + 0xb4) = local_8 != '\0';
    func_0x021127a8((int)puVar3 + 0x169,param_4,6);
    puVar3[0x29] = *param_4;
    puVar3[0x2a] = param_4[1];
    puVar3[0x2b] = param_4[2];
    break;
  case 3:
    FUN_01e24bba(puVar3,local_8,param_4);
    break;
  case 4:
    FUN_01e255d8(param_1,param_3);
    FUN_01e2448c(puVar3,0x1e);
    break;
  case 5:
    FUN_01e255f6(puVar3,param_3,param_4);
    break;
  case 6:
    _DAT_00004a44 = puVar3;
    FUN_01e2448c(puVar3,0x1c);
    *puVar3 = 0x8000;
    puVar3[7] = puVar3[7] & 0xfffd;
    puVar3[8] = 0;
    uVar1 = FUN_01e16168(param_3,0);
    puVar3[5] = uVar1;
    uVar1 = FUN_01e16168(param_3,2);
    puVar3[6] = uVar1;
    uVar1 = FUN_01e16168(param_3 + 1,0);
    puVar3[0x22] = uVar1;
    puVar3[0x23] = (ushort)*(byte *)((int)param_3 + 6);
    puVar3[4] = puVar3[4] | 4;
    puVar3[4] = puVar3[4] & 0xfdff;
    puVar3[4] = puVar3[4] | 0xc00;
    puVar3[4] = puVar3[4] | 0x1000;
    puVar3[0x31] = puVar3[0x31] & 0xffcf | 0x10;
    *(byte *)(puVar3 + 0x32) = *(byte *)(puVar3 + 0x32) | 1;
    *(byte *)((int)puVar3 + 0x65) = *(byte *)((int)puVar3 + 0x65) | 1;
    if (*(char *)((int)param_1 + 0xe) == '\0') {
      *(ushort *)*param_1 = *(ushort *)*param_1 | 4;
    }
    FUN_01e255d8(param_1,0);
    *(undefined1 *)((int)puVar3 + 0x15d) = extraout_r1;
    if (*(char *)(puVar3 + 0xa9) == '\x03') {
      FUN_01e24506(param_1,4,0);
      FUN_01e245e2(param_1,(uint)(ushort)param_3[2] * 2 + 4);
      FUN_01e256b4(param_1,6,0,(short)param_3[3]);
    }
    else {
      if ((ushort)param_3[2] == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (uint)(ushort)param_3[2] * 2 + -1;
      }
      FUN_01e256d8(param_1,iVar2);
      FUN_01e256b4(param_1,7,(short)param_3[3] != 0);
      FUN_01e256ea(puVar3,*(undefined2 *)((int)param_3 + 0x16));
      puVar3[0xad] = 6;
    }
    switchD_01e0931a::caseD_6d(param_1);
    iVar2 = *param_1;
    FUN_01e24506(param_1,3,0);
    *(undefined2 *)(iVar2 + 0x58) = 0;
    FUN_01e255f6(puVar3,0x32,(uint)*(byte *)((int)param_3 + 7) * 0x4e2 + 0x4e2);
    FUN_01e25710(param_1,(uint)*(ushort *)((int)param_3 + 10) * 0x4e2,1);
    FUN_01e2560a(puVar3,param_3 + 4);
    uVar6 = *(byte *)((int)param_3 + 0x105) & 0xffffff1f;
    FUN_01e24506(param_1,6,uVar6 | uVar6 << 8 | 0x8000);
    break;
  case 7:
    uVar6 = (uint)(ushort)param_3[2];
    if (*(char *)(puVar3 + 0xa9) == '\x06') {
      FUN_01e255f6(puVar3,0x32,(uint)*(byte *)((int)param_3 + 7) * 0x4e2 + 0x271);
      FUN_01e256b4(param_1,6,0,(short)param_3[3]);
      iVar2 = uVar6 << 1;
    }
    else {
      FUN_01e255f6(puVar3,0x32,
                   (uint)*(byte *)((int)param_3 + 7) * 0x4e2 + (uint)(ushort)param_3[6] + 0x271);
      FUN_01e256b4(param_1,7,(short)param_3[3] != 0);
      FUN_01e256ea(puVar3,*(undefined2 *)((int)param_3 + 0x16));
      iVar2 = 0;
      if (uVar6 != 0) {
        iVar2 = uVar6 * 2 + -1;
      }
    }
    FUN_01e256d8(param_1,iVar2);
    FUN_01e25710(param_1,(uint)*(ushort *)((int)param_3 + 10) * 0x4e2,1);
    break;
  case 8:
    FUN_01e2560a(puVar3,param_3);
    break;
  case 9:
    *puVar5 = *puVar5 & 0x7e | (ushort)(local_8 != '\0') << 8 | 1;
    *puVar5 = *puVar5 | 0x10;
    puVar3[0x1f] = *param_4;
    puVar3[0x20] = param_4[1];
    puVar3[0x21] = param_4[2];
    puVar3[4] = puVar3[4] & 0xfff7;
    break;
  case 10:
    *(char *)((int)puVar3 + 0x1a1) = local_8;
    if (((uint)param_3 & 0xff) == 0) {
      *(undefined4 *)(puVar3 + 0xd2) = 0;
      *(undefined1 *)(puVar3 + 0xd1) = 0;
    }
    break;
  case 0xb:
    *(char *)(puVar3 + 0xd0) = local_8;
    if (((uint)param_3 & 0xff) == 0) {
      *(undefined4 *)(puVar3 + 0xd4) = 0;
      *(undefined1 *)((int)puVar3 + 0x1a3) = 0;
    }
    break;
  case 0xd:
    puVar3[3] = puVar3[3] & 0xfff7;
    *(bool *)(puVar3 + 0xb4) = local_8 != '\0';
    func_0x021127a8((int)puVar3 + 0x169,param_4,6);
    func_0x021127a8((ushort)puVar3[9] + 0x11ad4,param_4,6);
    func_0x021127a8((ushort)puVar3[10] + 0x11ad4,param_4,6);
    break;
  case 0xf:
    puVar3[0xf5] = (short)param_3;
    break;
  case 0x11:
    *(char *)(puVar3 + 0xfa) = local_8;
    break;
  case 0x12:
    *(char *)((int)puVar3 + 0x1f5) = local_8;
    break;
  case 0x13:
    *param_3 = (uint)(*(undefined4 **)(puVar3 + 0xc4) == (undefined4 *)(puVar3 + 0xc4));
    break;
  case 0x14:
    if (_DAT_001c8000 != 0) {
      _DAT_001c8034 = ((uint)param_3 & 0xffff) << 8 | 1;
    }
    break;
  case 0x15:
    uVar4 = (undefined1)*param_3;
    func_0x021127a8((int)puVar3 + 0x20f,(undefined1 *)((int)param_3 + 1),uVar4);
    iVar2 = 0x20e;
    goto LAB_01e25ace;
  case 0x16:
    uVar4 = (undefined1)*param_3;
    func_0x021127a8((int)puVar3 + 0x22f,(undefined1 *)((int)param_3 + 1),uVar4);
    iVar2 = 0x22e;
LAB_01e25ace:
    *(undefined1 *)((int)puVar3 + iVar2) = uVar4;
    *(undefined1 *)(puVar3 + 0x127) = 1;
    break;
  case 0x17:
    puVar3[0xad] = (short)param_3;
  }
  return;
}



// ==== FUN_01e25d02 @ 01e25d02 ====

int FUN_01e25d02(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_01e16022(1,param_1 + 0x14);
  if (iVar1 != 0) {
    func_0x021127b4(0,0x10);
  }
  return iVar1;
}



// ==== FUN_01e25d3e @ 01e25d3e ====

void FUN_01e25d3e(int *param_1,undefined4 param_2,ushort param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  if ((int)(uint)*(ushort *)(*param_1 + 0x1ea) < param_5) {
    thunk_EXT_FUN_0200010a();
  }
  iVar1 = FUN_01e25d02(0x40);
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(ushort *)(iVar1 + 0xc) = *(ushort *)(iVar1 + 0xc) & 0xffc0 | (param_3 & 3) << 4;
  *(char *)(iVar1 + 0xe) = (char)param_5;
  if (iVar1 == 0) {
    thunk_EXT_FUN_0200010a();
  }
  func_0x021127a8(iVar1 + 0x10,param_4,param_5);
  return;
}



// ==== FUN_01e263d6 @ 01e263d6 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e263d6(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int unaff_r5;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  BADSPACEBASE *in_sp;
  uint *puVar9;
  undefined1 local_30 [4];
  
  puVar9 = (uint *)local_30;
  if (DAT_00012a6c == '\0') {
    return 0xffff;
  }
  uVar6 = 0;
  iVar1 = 0x10;
  bVar8 = 0;
  for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
    bVar4 = bVar8;
    if (*(short *)(iVar3 + 0x11ad4) != 0) {
      unaff_r5 = *(int *)(iVar1 + 0x11ad4);
      bVar4 = *(byte *)(unaff_r5 + 0x24f);
      if (0x3f < bVar4) {
        return 0;
      }
      if ((bVar4 & 0x20) != 0) {
        uVar6 = 0x55aa;
      }
      bVar4 = bVar4 & 0x1f;
      if (bVar4 <= bVar8) {
        bVar4 = bVar8;
      }
    }
    iVar1 = iVar1 + 0x1c;
    bVar8 = bVar4;
  }
  uVar7 = 0xffff;
LAB_01e2648c:
  if ((_DAT_001c8038 & 4) == 0) {
    return uVar6;
  }
  piVar5 = (int *)&DAT_00011ae4;
  iVar1 = 0;
  do {
    if (1 < iVar1) {
      if (uVar7 == 0x3ff) {
        return 0xffff;
      }
      if (uVar6 == 0) {
        if ((bVar8 != 0x1e) || (0xd < uVar7)) {
          if ((_DAT_001c8038 & 2) != 0) {
            return 0;
          }
          return uVar7;
        }
      }
      else {
        if (bVar8 != 0x1e) {
          return uVar6;
        }
        if (10 < uVar7 - 3) {
          return uVar6;
        }
        if ((_DAT_001c8038 & 4) == 0) {
          return uVar6;
        }
      }
      *(byte *)(unaff_r5 + 0x24f) = *(byte *)(unaff_r5 + 0x24f) & 0x3f | 0x40;
      return 0;
    }
    if (*(short *)(iVar1 + 0x11ad4) != 0) {
      iVar3 = FUN_01e24784(piVar5);
      if (iVar3 - 1U < 4) {
        return uVar6;
      }
      uVar2 = FUN_01e24784(piVar5);
      if ((iVar3 == 0) && (uVar2 != 0)) break;
      if (uVar2 < 5) {
        return uVar6;
      }
      if (uVar2 - 4 < uVar7) {
        unaff_r5 = *piVar5;
        uVar7 = uVar2 - 4;
      }
    }
    piVar5 = piVar5 + 7;
    iVar1 = iVar1 + 1;
  } while( true );
  *puVar9 = uVar2;
  FUN_01e36848(4,s_<Error>___LE_BB___get_timeout_st_01e1983c,0);
  goto LAB_01e2648c;
}



// ==== FUN_01e26700 @ 01e26700 ====

void FUN_01e26700(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_01e161a4(0xc);
  if (iVar1 != 0) {
    *(undefined1 **)(iVar1 + 8) = &LAB_01e26902;
    FUN_01e161b6(param_1 + 0xdc);
    return;
  }
  thunk_EXT_FUN_0200010a();
  return;
}



// ==== FUN_01e2679e @ 01e2679e ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e2679e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  BADSPACEBASE *in_sp;
  undefined4 **ppuVar4;
  undefined4 *local_24;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  ppuVar4 = &local_24;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if (((DAT_000048f7 & 0x14) == 0) &&
     (((uint)*(byte *)((int)(param_1 - 1U) / 8 + 0x499c) & 1 << (param_1 - 1U & 7)) != 0)) {
    local_24 = &uStack_8;
    iVar1 = FUN_01e161c6(param_2);
    puVar2 = (undefined1 *)FUN_01e15f9c(_DAT_000118a4,iVar1 + 3);
    if (puVar2 == (undefined1 *)0x0) {
      thunk_EXT_FUN_0200010a();
      thunk_EXT_FUN_0200010a();
      puVar2 = (undefined1 *)0x0;
    }
    else {
      puVar2[1] = (char)iVar1 + '\x01';
    }
    *puVar2 = 0x3e;
    puVar2[2] = (char)param_1;
    *ppuVar4 = ppuVar4 + 7;
    FUN_01e162a6(puVar2 + 3,param_2);
    FUN_01e16400(puVar2);
    FUN_01e16426(0x118a8);
    uVar3 = 1;
  }
  else {
    FUN_01e36848(4,s_<Error>___LL_LE_event_mask_disab_01e19894);
    uVar3 = 0;
  }
  return uVar3;
}



// ==== FUN_01e2683e @ 01e2683e ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e2683e(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    break;
  case 1:
    if (param_1 == 0) {
      thunk_EXT_FUN_0200010a();
    }
    break;
  case 2:
    if (param_1 == 0) {
      thunk_EXT_FUN_0200010a();
    }
    break;
  case 3:
    break;
  default:
    thunk_EXT_FUN_0200010a();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e26986 @ 01e26986 ====

void FUN_01e26986(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  BADSPACEBASE *in_sp;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)&stack0xfffffff4;
  if (*(char *)(param_1 + 0x34) == '\b') {
    FUN_01e36848(4,s_<Error>___LL_Already_disconnect_01e198e0);
    return;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x700);
  *(char *)(param_1 + 0x34) = '\b';
  FUN_01e16426(0x118a8);
  uVar4 = puVar5[2];
  puVar5[2] = *puVar5;
  puVar5[1] = puVar5[1];
  *puVar5 = uVar4;
  puVar5[-1] = param_2;
  FUN_01e23b66(5,&DAT_01e1b024,0,uVar1);
  FUN_01e36848(2,s__Info____LL_E_HCI_EVENT_DISCONNE_01e1ed3c,param_2);
  if (param_2 == 8) {
    iVar2 = 0x235e;
  }
  else if (param_2 == 0x16) {
    iVar2 = 0x3e9a;
  }
  else {
    if (param_2 == 0x22) {
      pcVar3 = s__Info____LL_E____LMP_RESPONSE_TI_01e1f26d;
      goto LAB_01e2697c;
    }
    if (param_2 != 0x3e) {
      return;
    }
    iVar2 = 0x3e63;
  }
  pcVar3 = &DAT_01e1af10 + iVar2;
LAB_01e2697c:
  FUN_01e36848(2,pcVar3);
  return;
}



// ==== FUN_01e26b48 @ 01e26b48 ====

void FUN_01e26b48(int param_1)

{
  if (*(int *)(param_1 + 0xf4) != 0) {
    switchD_01e162e0::caseD_15();
    *(int *)(param_1 + 0xf4) = 0;
  }
  return;
}



// ==== FUN_01e26b5c @ 01e26b5c ====

void FUN_01e26b5c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01e161a4(0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    FUN_01e161b6(param_1 + 0xe4);
    return;
  }
  thunk_EXT_FUN_0200010a();
  return;
}



// ==== FUN_01e26b80 @ 01e26b80 ====

void FUN_01e26b80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01e161a4(0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    FUN_01e161b6(param_1 + 0xec);
    return;
  }
  thunk_EXT_FUN_0200010a();
  return;
}



// ==== FUN_01e26ba4 @ 01e26ba4 ====

void FUN_01e26ba4(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  BADSPACEBASE *in_sp;
  int *piVar2;
  undefined1 local_14 [4];
  
  piVar2 = (int *)local_14;
  if (param_3 == 0) {
    param_3 = 0;
    piVar2 = (int *)local_14;
  }
  else if (param_3 == 3) {
    param_3 = 0x1a;
    piVar2 = (int *)local_14;
  }
  else {
    thunk_EXT_FUN_0200010a();
  }
  uVar1 = *(undefined2 *)(param_1 + 0x70);
  if (param_2 == 0) {
    *piVar2 = 0;
    FUN_01e2679e(4,s_1Hc08_01e1b0e8,param_3,uVar1);
  }
  else {
    *piVar2 = param_2 + 0x1a;
    FUN_01e2679e(4,s_1Hc08_01e1b0e8,param_3,uVar1);
  }
  FUN_01e36848(2,s__Info____LL_E_HCI_SUBEVENT_LE_RE_01e1f899);
  FUN_01e36848(2,s__Info____LL_E__features___01e1c0e9);
  thunk_FUN_01e36986(param_2 + 0x1a,8);
  return;
}



// ==== FUN_01e26c0c @ 01e26c0c ====

void FUN_01e26c0c(int param_1,int param_2,uint param_3)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  BADSPACEBASE *in_sp;
  undefined1 *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 local_14 [4];
  
  puVar6 = local_14;
  puVar7 = local_14;
  puVar4 = local_14;
  if (DAT_000051f1 == '\0') {
    uVar3 = 0;
    puVar5 = (uint *)local_14;
    switch(param_3) {
    case 0:
      break;
    case 1:
      puVar5 = (uint *)local_14;
      if (param_2 == 0) {
        thunk_EXT_FUN_0200010a();
        puVar5 = (uint *)puVar4;
      }
      uVar3 = (uint)*(byte *)(param_2 + 0x10a);
      break;
    case 2:
      puVar5 = (uint *)local_14;
      if (param_2 == 0) {
        thunk_EXT_FUN_0200010a();
        puVar5 = (uint *)puVar7;
      }
      uVar3 = (uint)*(byte *)(param_2 + 0x10b);
      break;
    case 3:
      uVar3 = 0x1a;
      puVar5 = (uint *)local_14;
      break;
    case 4:
      uVar3 = 0x22;
      puVar5 = (uint *)local_14;
      break;
    default:
      thunk_EXT_FUN_0200010a();
      uVar3 = param_3;
      puVar5 = (uint *)puVar6;
    }
    uVar1 = *(undefined2 *)(param_1 + 0x70);
    *puVar5 = (uint)(*(char *)(param_1 + 0x30b) != '\0');
    FUN_01e23b66(8,&DAT_01e1b024,uVar3 & 0xff,uVar1);
    puVar2 = &DAT_01e1af51;
    if (*(char *)(param_1 + 0x30b) == '\0') {
      puVar2 = &DAT_01e1afe4;
    }
    FUN_01e36848(2,s__Info____LL_E_HCI_EVENT_ENCRYPTI_01e1f231,puVar2);
    if ((uVar3 & 0xff) == 6) {
      FUN_01e36848(4);
    }
  }
  return;
}



// ==== FUN_01e26caa @ 01e26caa ====

void FUN_01e26caa(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  switch(param_3) {
  case 0:
    break;
  case 1:
    if (param_2 == 0) {
      thunk_EXT_FUN_0200010a(0);
    }
    uVar1 = (uint)*(byte *)(param_2 + 0x10a);
    break;
  case 2:
    if (param_2 == 0) {
      thunk_EXT_FUN_0200010a(0);
    }
    uVar1 = (uint)*(byte *)(param_2 + 0x10b);
    break;
  case 3:
    uVar1 = 0x1a;
    break;
  case 4:
    uVar1 = 0x22;
    break;
  default:
    thunk_EXT_FUN_0200010a();
    uVar1 = param_3;
  }
  FUN_01e23b66(0x30,&DAT_01e1af6f,uVar1 & 0xff,*(undefined2 *)(param_1 + 0x70));
  FUN_01e36848(2,s__Info____LL_E_HCI_EVENT_ENCRYPTI_01e1f056);
  return;
}



// ==== FUN_01e26d04 @ 01e26d04 ====

void FUN_01e26d04(uint param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  byte bVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 in_r0_r1;
  int iVar11;
  undefined8 uVar10;
  uint uVar12;
  byte *pbVar13;
  BADSPACEBASE *in_sp;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_30 [12];
  
  puVar14 = local_30;
  puVar6 = (undefined4 *)in_r0_r1;
  pbVar13 = (byte *)(puVar6 + 0x1a);
  bVar5 = *pbVar13;
  iVar11 = (int)((ulonglong)in_r0_r1 >> 0x20);
  iVar7 = puVar6[(uint)bVar5 * 2 + 0x10];
  uVar12 = (uint)*(ushort *)(iVar7 + (uint)*(byte *)(puVar6 + (uint)bVar5 * 2 + 0x11));
  puVar15 = (uint *)local_30;
  if ((uVar12 & 0xffff00ff) != 0xff) {
    uVar10 = CONCAT44(*(byte *)(puVar6 + (uint)bVar5 * 2 + 0x11) + 1,iVar7);
    while ((uVar12 & 0xff) != 0xff) {
      uVar4 = (ulonglong)uVar10 >> 0x20;
      iVar7 = (int)uVar10;
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20) + 1,iVar7);
      uVar12 = (uint)*(ushort *)(iVar7 + (uint)(byte)uVar4);
    }
    FUN_01e2573a(*puVar6,0);
    FUN_01e2573a(*puVar6,0);
    puVar15 = (uint *)puVar14;
  }
  switch(uVar12 >> 8) {
  case 0:
  case 1:
    FUN_01e2683e(param_1);
    break;
  case 2:
    uVar12 = (uint)*(ushort *)((int)puVar6 + 0x72);
    FUN_01e2573a(*puVar6,uVar12);
    FUN_01e36848(2,s__Info____LL_____update_______000_01e1ced2);
    FUN_01e26b5c(uVar12 - 1);
    FUN_01e26b80(uVar12);
    break;
  case 5:
    uVar1 = *(ushort *)((int)puVar6 + 0x72);
    FUN_01e2573a(*puVar6,(uint)uVar1);
    FUN_01e26b5c(uVar1 - 1);
    break;
  case 6:
  case 7:
    FUN_01e26ba4(param_1);
    break;
  case 8:
    if (param_1 == 0) {
      param_1 = 0;
    }
    else if (param_1 == 4) {
      param_1 = 0x22;
    }
    else {
      thunk_EXT_FUN_0200010a();
    }
    iVar7 = iVar11 + 0x1a;
    bVar3 = *(byte *)(iVar11 + 0x10a);
    uVar12 = FUN_01e16168(iVar7,*(undefined2 *)(puVar6 + 0x1c));
    uVar8 = FUN_01e16168(iVar7);
    puVar15[2] = uVar8;
    puVar15[1] = uVar12;
    *puVar15 = (uint)bVar3;
    FUN_01e23b66(0xc,param_1);
    uVar12 = (uint)*(byte *)(iVar11 + 0x10a);
    uVar9 = FUN_01e16168(iVar7,uVar12);
    uVar9 = FUN_01e16168(iVar7,uVar9);
    FUN_01e23b98(uVar12,uVar9);
    break;
  case 9:
  case 0xb:
    FUN_01e2573a(*puVar6,0);
    FUN_01e26c0c(param_1 & 0xff);
    break;
  case 10:
  case 0xc:
    FUN_01e2573a(*puVar6,0);
    FUN_01e26caa(param_1 & 0xff);
    break;
  case 0xe:
    if ((param_1 != 0) && (param_1 != 4)) {
      thunk_EXT_FUN_0200010a();
    }
    FUN_01e26986();
  }
  puVar6[(uint)bVar5 * 2 + 0x10] = 0;
  bVar5 = 0;
  if (*pbVar13 != 4) {
    bVar5 = *pbVar13 + 1;
  }
  *pbVar13 = bVar5;
  uVar2 = *(undefined1 *)((int)puVar6 + 0x69);
  *puVar15 = (uint)bVar5;
  FUN_01e36848(2,s__Info____LL_procedure_end____d___01e1d248,uVar2);
  return;
}



// ==== FUN_01e26eec @ 01e26eec ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e26eec(void)

{
  uint uVar1;
  undefined8 in_r0_r1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = (int)((ulonglong)in_r0_r1 >> 0x20);
  uVar1 = (uint)in_r0_r1;
  iVar3 = iVar3 + (uint)*(byte *)(iVar3 + 0x608) * 8;
  iVar2 = *(int *)(iVar3 + 0x40);
  if (iVar2 != 0) {
    if (uVar1 == 0x4007) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (uVar1 == 0x400d) {
      FUN_01e26b48();
      FUN_01e26d04(1);
      FUN_01e36848(2,s__Info____LL___Procedure_break_1__01e1d5a6);
    }
    else {
      if (uVar1 == 0x4011) {
        halt_baddata();
      }
      piVar4 = (int *)(iVar3 + 0x44);
      iVar3 = *piVar4;
      if ((*(ushort *)(iVar2 + iVar3) == uVar1) &&
         (uVar1 = iVar3 + 1, *(char *)piVar4 = (char)uVar1,
         *(char *)(iVar2 + (uVar1 & 0xff) * 2) == -1)) {
        FUN_01e26b48();
        FUN_01e26d04(0);
        FUN_01e36848(2,s__Info____LL___Procedure_Finish_01e1c8c1);
      }
    }
  }
  return;
}



// ==== FUN_01e26fcc @ 01e26fcc ====

undefined4 * FUN_01e26fcc(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if (DAT_00011aa2 != '\0') {
    puVar1 = (undefined4 *)&DAT_000118c4;
    do {
      puVar1 = (undefined4 *)*puVar1;
      if (puVar1 == (undefined4 *)&DAT_000118c4) {
        return (undefined4 *)0x0;
      }
    } while (*(ushort *)(puVar1 + 0x11) != param_1);
    puVar1 = puVar1 + -0xb;
  }
  return puVar1;
}



// ==== FUN_01e26ff8 @ 01e26ff8 ====

void FUN_01e26ff8(undefined4 *param_1,undefined1 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  BADSPACEBASE *in_sp;
  int *piVar4;
  undefined1 local_1c [4];
  undefined4 *puStack_18;
  undefined4 uStack_4;
  
  piVar4 = (int *)local_1c;
  puStack_18 = &uStack_4;
  uStack_4 = param_4;
  uVar1 = FUN_01e161c6(param_3);
  if (0x2f < uVar1) {
    thunk_EXT_FUN_0200010a();
  }
  *(undefined1 *)(param_1 + 0x2b) = param_2;
  if (param_3 == 0) {
    iVar2 = 1;
  }
  else {
    *(undefined1 **)((int)piVar4 + 4) = (undefined1 *)((int)piVar4 + 0x18);
    iVar2 = FUN_01e162a6((int)param_1 + 0xad,param_3);
    iVar2 = iVar2 + 1;
  }
  uVar3 = *param_1;
  *piVar4 = iVar2;
  FUN_01e25d3e(uVar3,0,3,param_1 + 0x2b);
  return;
}



// ==== FUN_01e27048 @ 01e27048 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e27048(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  char *pcVar6;
  uint uVar7;
  undefined8 in_r4_r5;
  ushort uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  BADSPACEBASE *in_sp;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_58 [48];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)((ulonglong)in_r4_r5 >> 0x20);
  uStack_28 = (undefined4)in_r4_r5;
  puVar13 = local_58;
  puVar16 = (uint *)local_58;
  puVar14 = local_58;
  iVar4 = param_1 + (uint)*(byte *)(param_1 + 0x608) * 8;
  iVar1 = *(int *)(iVar4 + 0x40);
  if (iVar1 == 0) {
    return;
  }
  uVar8 = *(ushort *)(iVar1 + (uint)*(byte *)(iVar4 + 0x404));
  if (uVar8 >> 0xe != 0) {
    return;
  }
  uVar8 = uVar8 & 0xff;
  switch(uVar8) {
  case 0:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x14:
    goto switchD_01e2708c_caseD_0;
  case 1:
    pcVar6 = s__Info____LL_LL_CHANNEL_MAP_REQ_01e1c8e2;
    break;
  case 2:
    FUN_01e36848(2,s__Info____LL_LL_TERMINATE_IND_01e1c382);
    iVar1 = FUN_01e26fcc(CONCAT11(DAT_000051fe,DAT_000051fd));
    if (iVar1 != 0) {
      FUN_01e26ff8(2,&DAT_01e1af34,DAT_000051ff);
      goto switchD_01e2708c_caseD_0;
    }
    goto LAB_01e272d0;
  case 3:
    pcVar6 = s__Info____LL_LL_ENC_REQ_01e1bd48;
    break;
  case 4:
    pcVar6 = s__Info____LL_LL_ENC_RSP_01e1bd61;
    break;
  case 5:
    FUN_01e36848(2,s__Info____LL_LL_START_ENC_REQ_01e1c3a1);
    puVar2 = (undefined4 *)FUN_01e26fcc(_DAT_00004a12);
    if (puVar2 != (undefined4 *)0x0) {
      puVar10 = puVar14 + 8;
      puVar15 = puVar14;
      func_0x021127a8(puVar10,puVar2 + 0x29,4);
      func_0x021127a8(puVar14 + 0xc,puVar2 + 0x2a,4);
      FUN_01e36848(2,s__Info____LL_IV___01e1b957);
      thunk_FUN_01e36986(puVar10,8);
      FUN_01e2573a(*puVar2,0,puVar10);
      puVar11 = puVar15 + 0x10;
      puVar10 = puVar15;
      func_0x021127a8(puVar11,puVar2 + 0x25,8);
      func_0x021127a8(puVar15 + 0x18,puVar2 + 0x27,8);
      puVar12 = puVar2 + 0x21;
      func_0x021127a8(puVar12,0x4a14,0x10);
      switchD_01e162e0::caseD_14(puVar12,puVar11,puVar10 + 0x20);
      FUN_01e36848(2,s__Info____LL_STK___01e1ba74);
      thunk_FUN_01e36986(puVar12,0x10);
      FUN_01e165da(puVar10 + 0x20,puVar11,0x10);
      FUN_01e36848(2,s__Info____LL_SKD___01e1ba89);
      thunk_FUN_01e36986(puVar11,0x10);
      FUN_01e2573a(*puVar2,1,puVar11);
      FUN_01e2573a(*puVar2,0xb,1);
      FUN_01e26ff8(puVar2,5,0);
      goto switchD_01e2708c_caseD_0;
    }
    pcVar6 = s_<Error>___LL_UNKNOWN_CONNECTION__01e1decf;
    goto LAB_01e272de;
  case 6:
    pcVar6 = s__Info____LL_LL_START_ENC_RSP_01e1c3c0;
    break;
  case 7:
    pcVar6 = s__Info____LL_LL_UNKNOWN_RSP_01e1c03b;
    break;
  case 8:
    FUN_01e36848(2,s__Info____LL_LL_FEATURE_REQ_01e1bfe4);
    iVar1 = FUN_01e26fcc(_DAT_000049f4);
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 0x305) == '\x01') {
        uVar3 = 0xe;
      }
      else {
        uVar3 = 8;
      }
      FUN_01e26ff8(uVar3);
    }
    goto switchD_01e2708c_caseD_0;
  case 9:
    pcVar6 = s__Info____LL_LL_FEATURE_RSP_01e1c001;
    break;
  case 10:
    pcVar6 = s__Info____LL_LL_PAUSE_ENC_REQ_01e1c3df;
    break;
  case 0xb:
    pcVar6 = s__Info____LL_LL_PAUSE_ENC_RSP_01e1c3fe;
    break;
  case 0xc:
    FUN_01e36848(2,s__Info____LL_LL_VERSION_IND_01e1c01e);
    iVar1 = FUN_01e26fcc(CONCAT11(DAT_000051fc,DAT_000051fb));
    uVar7 = _DAT_000049ce;
    if (iVar1 != 0) {
      uVar9 = _DAT_000049ce >> 0x10;
      *(uint *)((int)puVar16 + 4) = (uint)_DAT_000049d2;
      puVar5 = &DAT_01e1b028;
      uVar3 = 0xc;
LAB_01e27294:
      *puVar16 = uVar9;
      FUN_01e26ff8(uVar3,puVar5,uVar7);
      goto switchD_01e2708c_caseD_0;
    }
LAB_01e272d0:
    pcVar6 = s_<Error>___LL_No_link_01e1bbd6;
LAB_01e272de:
    uVar3 = 4;
    goto LAB_01e272be;
  case 0xd:
    pcVar6 = s__Info____LL_LL_REJECT_IND_01e1bf73;
    break;
  case 0x12:
    pcVar6 = s__Info____LL_LL_PING_REQ_01e1be49;
    break;
  case 0x13:
    pcVar6 = s__Info____LL_LL_PING_RSP_01e1be63;
    break;
  case 0x15:
  case 0x17:
    goto switchD_01e2708c_caseD_15;
  case 0x16:
    pcVar6 = s__Info____LL_Tx___LL_PHY_REQ_01e1c1f5;
    break;
  case 0x18:
    pcVar6 = s__Info____LL_Master_Tx___LL_PHY_U_01e1dc8c;
    break;
  default:
    if (uVar8 == 0x48) {
      uVar9 = 1;
      iVar1 = FUN_01e26fcc(1);
      if (iVar1 == 0) {
        FUN_01e367de(s_get_link_err_01e1b598);
        goto switchD_01e2708c_caseD_0;
      }
      *(undefined4 *)(puVar13 + 4) = 0;
      puVar5 = &DAT_01e1b018;
      uVar3 = 0x48;
      uVar7 = 6;
      puVar16 = (uint *)puVar13;
      goto LAB_01e27294;
    }
    goto switchD_01e2708c_caseD_15;
  }
  uVar3 = 2;
LAB_01e272be:
  FUN_01e36848(uVar3,pcVar6);
switchD_01e2708c_caseD_0:
  FUN_01e26eec(uVar8,param_1,param_2);
  return;
switchD_01e2708c_caseD_15:
  FUN_01e36848(2,&DAT_01e1c678,uVar8);
  goto switchD_01e2708c_caseD_0;
}



// ==== FUN_01e28162 @ 01e28162 ====

void FUN_01e28162(void)

{
  FUN_01e16426(0x118a8);
  return;
}



// ==== FUN_01e28494 @ 01e28494 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e28494(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e28a6e @ 01e28a6e ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e28a6e(char *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  
  puVar3 = _DAT_00004a30;
  do {
    if (puVar3 == (undefined8 *)&DAT_00004a30) {
      return 0x12;
    }
    puVar4 = *(undefined8 **)puVar3;
    pcVar5 = (char *)(puVar3 + -1);
    iVar1 = func_0x021127b0(param_1 + 1,6);
    if (iVar1 == 0) {
      DAT_00011ad0 = DAT_00011ad0 + -1;
      iVar1 = (int)*puVar3;
      piVar2 = (int *)((ulonglong)*puVar3 >> 0x20);
      *(int **)(iVar1 + 4) = piVar2;
      *piVar2 = iVar1;
      *(undefined8 **)puVar3 = puVar3;
      *(undefined8 **)((int)puVar3 + 4) = puVar3;
      thunk_FUN_01e3d7dc(pcVar5);
    }
    iVar1 = func_0x021127b0(param_1 + 1,6);
    puVar3 = puVar4;
  } while ((iVar1 != 0) || (*pcVar5 != *param_1));
  return 0;
}



// ==== FUN_01e28b28 @ 01e28b28 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e28b28(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e28b36 @ 01e28b36 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e28b36(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e29276 @ 01e29276 ====

void FUN_01e29276(undefined4 param_1)

{
  func_0x021127a8(0x4963,param_1,6);
  return;
}



// ==== FUN_01e292a6 @ 01e292a6 ====

int FUN_01e292a6(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_01e360aa(0xd250,param_1);
  if (iVar1 == 0) {
    FUN_01e361fc(0xd250);
  }
  else {
    func_0x021127b4(0,param_1);
  }
  return iVar1;
}



// ==== FUN_01e292d0 @ 01e292d0 ====

bool FUN_01e292d0(int param_1,int param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_1 + 0x8000000;
  }
  return param_1 - param_2 < 0x41eb000;
}



// ==== FUN_01e29410 @ 01e29410 ====

void FUN_01e29410(undefined1 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  BADSPACEBASE *in_sp;
  undefined4 **ppuVar2;
  undefined4 *local_114;
  undefined1 auStack_110 [256];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  ppuVar2 = &local_114;
  local_114 = &uStack_8;
  auStack_110[0] = param_1;
  uStack_8 = param_2;
  uStack_4 = param_3;
  bVar1 = FUN_01e162a6((uint)auStack_110 | 2);
  *(byte *)((int)ppuVar2 + 5) = bVar1;
  FUN_01e23b52(4,auStack_110,bVar1 + 2);
  return;
}



// ==== FUN_01e29442 @ 01e29442 ====

void FUN_01e29442(undefined1 param_1,undefined2 param_2,undefined4 param_3)

{
  FUN_01e29410(0x14,&DAT_01e1b05b,0,param_2,param_1,param_3);
  return;
}



// ==== FUN_01e29460 @ 01e29460 ====

void FUN_01e29460(int param_1)

{
  undefined4 *puVar1;
  
  while (puVar1 = (undefined4 *)FUN_01e360aa(0xd250,param_1 + 0x18), puVar1 == (undefined4 *)0x0) {
    func_0x020035ca(0x12c04);
  }
  *(undefined2 *)((int)puVar1 + 10) = 0;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(byte *)((int)puVar1 + 5) = *(byte *)((int)puVar1 + 5) & 0xe0;
  puVar1[3] = puVar1 + 3;
  puVar1[4] = puVar1 + 3;
  return;
}



// ==== FUN_01e2949a @ 01e2949a ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x01e296f4) overlaps instruction at (ram,0x01e296f2)
    */

uint * FUN_01e2949a(byte *param_1,uint param_2,undefined4 param_3)

{
  undefined1 uVar1;
  byte **ppbVar2;
  uint *puVar3;
  uint uVar4;
  longlong in_r0_r1;
  byte *pbVar6;
  ulonglong uVar5;
  undefined1 *puVar7;
  byte bVar8;
  undefined1 uVar9;
  byte *pbVar10;
  int iVar11;
  uint *puVar12;
  uint *unaff_r5;
  uint *unaff_r6;
  undefined4 unaff_retaddr;
  BADSPACEBASE *in_sp;
  byte **ppbVar13;
  byte **ppbVar14;
  byte **ppbVar15;
  byte **ppbVar16;
  byte **ppbVar17;
  byte **ppbVar18;
  byte **ppbVar19;
  byte **ppbVar20;
  byte **ppbVar21;
  byte **ppbVar22;
  byte **ppbVar23;
  uint in_cres;
  byte *local_c;
  
  ppbVar13 = &local_c;
  ppbVar23 = &local_c;
  ppbVar18 = &local_c;
  ppbVar19 = &local_c;
  ppbVar22 = &local_c;
  ppbVar20 = &local_c;
  ppbVar14 = &local_c;
  puVar12 = (uint *)in_r0_r1;
  local_c = param_1;
LAB_01e294be:
  pbVar6 = (byte *)((ulonglong)in_r0_r1 >> 0x20);
  puVar3 = (uint *)(uint)*pbVar6;
  uVar5 = CONCAT44(pbVar6,puVar3);
  pbVar10 = (byte *)((int)puVar3 + -0x41);
  ppbVar2 = &local_c;
  ppbVar21 = &local_c;
  ppbVar15 = &local_c;
  ppbVar16 = &local_c;
  ppbVar17 = &local_c;
  switch(*pbVar6) {
  case 1:
switchD_01e29504_caseD_1:
    uVar5 = ZEXT48(puVar12 + 6);
    pbVar10 = local_c;
switchD_01e29504_caseD_52:
    uVar4 = FUN_01e162a6((int)uVar5,pbVar10);
    uVar5 = (ulonglong)uVar4;
switchD_01e29504_caseD_5a:
    *(short *)(puVar12 + 2) = (short)uVar5;
switchD_01e29504_caseD_4c:
switchD_01e29504_caseD_6a:
    return (uint *)uVar5;
  case 2:
    goto switchD_01e29504_caseD_2;
  case 3:
  case 9:
    goto switchD_01e29504_caseD_3;
  case 4:
    goto switchD_01e29504_caseD_4;
  case 5:
    goto switchD_01e29504_caseD_5;
  case 6:
  case 0x10:
    uVar5 = CONCAT44(pbVar6,(uint)*(byte *)((int)puVar12 + 5)) | 2;
    *(byte *)((int)puVar12 + 5) = (byte)uVar5;
  case 10:
    goto LAB_01e294bc;
  case 0xd:
    uVar5 = CONCAT44(pbVar6,(uint)*(byte *)((int)puVar12 + 5)) | 0x10;
    *(byte *)((int)puVar12 + 5) = (byte)uVar5;
switchD_01e29504_caseD_8e:
    goto LAB_01e294bc;
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x15:
    goto switchD_01e29504_caseD_e;
  case 0x13:
    goto switchD_01e29504_caseD_13;
  case 0x20:
    goto switchD_01e29504_caseD_20;
  case 0x21:
  case 0x29:
  case 0x31:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3c:
    goto switchD_01e29504_caseD_3c;
  case 0x47:
  case 0x8a:
  case 0x8c:
  case 0x8d:
  case 0xb7:
  case 0xbc:
  case 0xc2:
  case 0xc4:
  case 0xc9:
    uVar5 = CONCAT44(pbVar6,(uint)*(byte *)((int)puVar12 + 5));
  case 0xd1:
  case 0x16:
    uVar5 = uVar5 | 8;
switchD_01e29504_caseD_fa:
    *(byte *)((int)puVar12 + 5) = (byte)uVar5;
LAB_01e294bc:
    in_r0_r1 = (ulonglong)((int)(uVar5 >> 0x20) + 1) << 0x20;
    goto LAB_01e294be;
  case 0x48:
  case 0x51:
  case 0x57:
  case 0x6f:
  case 0x73:
  case 0x91:
  case 0xa0:
  case 0xba:
  case 0x17:
  case 0x1d:
  case 0x33:
  case 0x39:
    goto switchD_01e29504_caseD_b9;
  case 0x49:
  case 0x5f:
  case 0x67:
  case 0x7f:
  case 0xa5:
  case 0x23:
  case 0x2b:
    goto switchD_01e29504_caseD_49;
  case 0x4a:
  case 0x4e:
  case 0x60:
  case 100:
  case 0x68:
  case 0x6c:
  case 0x24:
  case 0x28:
  case 0x2c:
  case 0x30:
    goto switchD_01e29504_caseD_4a;
  case 0x4b:
  case 0x59:
  case 0x61:
  case 0x69:
  case 0xe9:
  case 0xf1:
  case 0x25:
  case 0x2d:
    goto switchD_01e29504_caseD_4b;
  case 0x4c:
  case 0x78:
    goto switchD_01e29504_caseD_4c;
  case 0x4d:
  case 0x5b:
  case 99:
  case 0x6b:
  case 0x79:
  case 0x7b:
  case 0x85:
  case 0x1f:
  case 0x27:
  case 0x2f:
  case 0x3b:
    unaff_r5 = puVar3;
    break;
  case 0x4f:
  case 0x5d:
  case 0x65:
  case 0x6d:
  case 0x3d:
    goto switchD_01e29504_caseD_4f;
  case 0x50:
    goto switchD_01e29504_caseD_50;
  case 0x52:
  case 0x56:
  case 0x7e:
  case 0xde:
  case 0xf2:
  case 0x18:
  case 0x1c:
  case 0x2e:
  case 0x34:
  case 0x38:
    goto switchD_01e29504_caseD_52;
  case 0x53:
  case 0x19:
  case 0x35:
    goto switchD_01e29504_caseD_53;
  case 0x54:
  case 0x6e:
  case 0x1a:
  case 0x36:
    goto switchD_01e29504_caseD_54;
  case 0x55:
  case 0xdd:
  case 0x1b:
  case 0x32:
  case 0x37:
    goto switchD_01e29504_caseD_55;
  case 0x58:
  case 0xa4:
  case 0x1e:
  case 0x3a:
    goto switchD_01e29504_caseD_58;
  case 0x5a:
  case 0x26:
    goto switchD_01e29504_caseD_5a;
  case 0x5c:
    goto switchD_01e29504_caseD_5c;
  case 0x5e:
  case 0xa6:
    puVar12 = puVar3;
    goto code_r0x01e29624;
  case 0x62:
    *(short *)((int)puVar3 + -0x35) = (short)unaff_r6;
    goto switchD_01e29504_caseD_5a;
  case 0x66:
    goto switchD_01e29504_caseD_66;
  case 0x6a:
    goto switchD_01e29504_caseD_6a;
  case 0x70:
  case 0x74:
    goto switchD_01e29504_caseD_70;
  case 0x71:
    uVar5 = ZEXT48(puVar3);
  case 0xa7:
  case 0xa9:
  case 0xb5:
    puVar12 = (uint *)FUN_01e29410(6,(short)uVar5);
    return puVar12;
  case 0x72:
    goto switchD_01e29504_caseD_e6;
  case 0x75:
    goto switchD_01e29504_caseD_75;
  case 0x76:
    nop();
    break;
  case 0x77:
  case 0x93:
  case 0xaf:
  case 0xcb:
    ppbVar13 = (byte **)&stack0xffffffec;
switchD_01e29504_caseD_5c:
    *(undefined4 *)((int)ppbVar13 + -4) = unaff_retaddr;
    *(uint **)((int)ppbVar13 + -8) = unaff_r6;
    *(uint **)((int)ppbVar13 + -0xc) = unaff_r5;
    ppbVar22 = (byte **)((int)ppbVar13 + -0x10);
    *ppbVar22 = (byte *)puVar12;
switchD_01e29504_caseD_d4:
    ppbVar14 = ppbVar22 + -1;
switchD_01e29504_caseD_20:
    ppbVar15 = ppbVar14;
switchD_01e29504_caseD_3c:
    puVar12 = puVar3;
    ppbVar16 = ppbVar15;
switchD_01e29504_caseD_4a:
    uVar5 = 0x11;
    ppbVar17 = ppbVar16;
switchD_01e29504_caseD_7a:
    uVar4 = FUN_01e29460((int)uVar5);
    uVar5 = (ulonglong)uVar4;
    ppbVar2 = ppbVar17;
switchD_01e29504_caseD_49:
    ppbVar18 = ppbVar2;
    unaff_r5 = (uint *)uVar5;
    if (unaff_r5 == (uint *)0x0) {
      thunk_EXT_FUN_0200010a();
    }
switchD_01e29504_caseD_9f:
    *ppbVar18 = (byte *)(ppbVar18 + 5);
switchD_01e29504_caseD_9d:
    FUN_01e2949a();
switchD_01e29504_caseD_f3:
    uVar5 = (ulonglong)*(byte *)((int)puVar12 + 0x206);
switchD_01e29504_caseD_89:
    in_cres = (uint)((int)uVar5 == 1);
    if (in_cres == 1) {
      uVar5 = (ulonglong)(byte)unaff_r5[0x42];
    }
switchD_01e29504_caseD_ef:
    if (in_cres == 1) {
      *(byte *)(unaff_r5 + 6) = (byte)uVar5 | 1;
    }
    uVar4 = FUN_01e2e96a(puVar12[0x1b]);
    uVar5 = (ulonglong)uVar4;
switchD_01e29504_caseD_58:
switchD_01e29504_caseD_a2:
switchD_01e29504_caseD_c1:
switchD_01e29504_caseD_a8:
    return (uint *)uVar5;
  case 0x7a:
  case 0xe7:
    goto switchD_01e29504_caseD_7a;
  case 0x7c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7d:
  case 0x87:
  case 0xe8:
  case 7:
  case 0xb:
  case 0x3f:
    halt_baddata();
  case 0x80:
    unaff_r6 = puVar3 + 0x12;
    uVar5 = CONCAT44(pbVar6,puVar3[0x1d]);
    puVar12 = puVar3;
  case 0x3e:
    if ((byte *)uVar5 != (byte *)0x0) {
      if ((int)(uVar5 >> 0x20) != 0) {
        param_2 = (uint)*(byte *)uVar5;
switchD_01e29504_caseD_c6:
        local_c = (byte *)(uVar5 >> 0x20);
        FUN_01e29410(0,param_2);
      }
switchD_01e29504_caseD_83:
      func_0x0200206c();
      FUN_01e2961c(unaff_r6[0xb]);
      pbVar10 = (byte *)0x0;
switchD_01e29504_caseD_5:
      unaff_r6[0xb] = (uint)pbVar10;
switchD_01e29504_caseD_75:
      bVar8 = (byte)pbVar10;
      func_0x0200207e();
      uVar5 = 10;
      *(byte *)(puVar12 + 9) = 10;
      *(byte *)((int)unaff_r6 + 1) = bVar8;
    }
    return (uint *)uVar5;
  case 0x81:
  case 0xcd:
  case 0xd5:
  case 0xe1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x82:
  case 0x96:
  case 0x9a:
  case 0xac:
  case 0xb2:
  case 0xbe:
  case 0xce:
  case 0xd6:
  case 0xe2:
  case 0xfe:
    goto switchD_01e29504_caseD_82;
  case 0x83:
    goto switchD_01e29504_caseD_83;
  case 0x84:
  case 0x98:
    goto switchD_01e29504_caseD_84;
  case 0x86:
  case 0x8f:
  case 0xaa:
  case 0xb4:
    ppbVar19 = (byte **)&stack0xffffffec;
  case 0xcf:
    *(undefined4 *)((int)ppbVar19 + -4) = unaff_retaddr;
    *(uint **)((int)ppbVar19 + -8) = unaff_r6;
    *(uint **)((int)ppbVar19 + -0xc) = unaff_r5;
    ppbVar23 = (byte **)((int)ppbVar19 + -0x10);
    *ppbVar23 = (byte *)puVar12;
switchD_01e29504_caseD_84:
    ppbVar20 = ppbVar23 + -1;
switchD_01e29504_caseD_d8:
    uVar5 = 0x11;
    puVar12 = puVar3;
    ppbVar21 = ppbVar20;
switchD_01e29504_caseD_97:
    unaff_r5 = (uint *)FUN_01e29460((int)uVar5);
    if (unaff_r5 == (uint *)0x0) {
      thunk_EXT_FUN_0200010a();
    }
    *ppbVar21 = (byte *)(ppbVar21 + 5);
switchD_01e29504_caseD_8b:
    FUN_01e2949a();
switchD_01e29504_caseD_c3:
    *(byte *)(unaff_r5 + 6) = (byte)*puVar12 | (byte)unaff_r5[0x42];
    uVar4 = FUN_01e2e96a(puVar12[0x1b]);
    uVar5 = (ulonglong)uVar4;
switchD_01e29504_caseD_88:
switchD_01e29504_caseD_55:
switchD_01e29504_caseD_54:
    return (uint *)uVar5;
  case 0x88:
  case 0xa1:
    goto switchD_01e29504_caseD_88;
  case 0x89:
    goto switchD_01e29504_caseD_89;
  case 0x8b:
    goto switchD_01e29504_caseD_8b;
  case 0x8e:
  case 0x94:
  case 0xb0:
  case 199:
  case 200:
  case 0xca:
  case 0xd2:
  case 0xe0:
  case 0xfc:
    goto switchD_01e29504_caseD_8e;
  case 0x90:
    goto switchD_01e29504_caseD_90;
  case 0x92:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x95:
  case 0xb1:
  case 0xec:
  case 0xfd:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x97:
    goto switchD_01e29504_caseD_97;
  case 0x99:
  case 0xab:
code_r0x01e29624:
    uVar5 = ZEXT48(puVar12);
switchD_01e29504_caseD_a3:
    FUN_01e36232((int)uVar5);
    uVar5 = ZEXT48(puVar12);
switchD_01e29504_caseD_50:
switchD_01e29504_caseD_da:
    puVar12 = (uint *)FUN_01e35d8a((int)uVar5);
    return puVar12;
  case 0x9b:
  case 0xad:
  case 0xd3:
    uVar5 = (ulonglong)CONCAT14(*(byte *)((int)puVar3 + 0x103),puVar3) | 0x100000000;
switchD_01e29504_caseD_66:
    *(char *)((int)uVar5 + 0x13) = (char)(uVar5 >> 0x20);
switchD_01e29504_caseD_d9:
    return (uint *)uVar5;
  case 0x9c:
  case 0xae:
    nop();
    puVar12 = (uint *)FUN_01e361fc();
    return puVar12;
  case 0x9d:
  case 0xdb:
  case 0xe5:
  case 0xed:
    goto switchD_01e29504_caseD_9d;
  case 0x9e:
  case 0xf8:
    goto switchD_01e29504_caseD_9e;
  case 0x9f:
  case 0xf9:
    goto switchD_01e29504_caseD_9f;
  case 0xa2:
  case 0xdf:
    goto switchD_01e29504_caseD_a2;
  case 0xa3:
    goto switchD_01e29504_caseD_a3;
  case 0xa8:
    goto switchD_01e29504_caseD_a8;
  case 0xb3:
    uVar5 = CONCAT44(pbVar6,local_c);
    pbVar10 = local_c + 4;
switchD_01e29504_caseD_53:
    local_c = pbVar10;
switchD_01e29504_caseD_13:
    uVar5 = CONCAT44((int)(uVar5 >> 0x20),*(undefined4 *)uVar5);
switchD_01e29504_caseD_2:
    uVar5 = uVar5 | 4;
    *(byte *)((int)puVar12 + 1) = (byte)uVar5;
    goto LAB_01e294bc;
  case 0xb6:
  case 0xd0:
  case 0xe4:
    uVar5 = CONCAT44(pbVar6,param_3);
  case 0:
  case 8:
    iVar11 = *(int *)((int)uVar5 + 0x80);
    puVar7 = (undefined1 *)(uVar5 >> 0x20);
    *(undefined1 *)(iVar11 + 0x6c) = *puVar7;
    uVar9 = puVar7[1];
    *(undefined1 *)(iVar11 + 0x6d) = uVar9;
    uVar1 = puVar7[2];
    *(undefined1 *)(iVar11 + 0x6e) = uVar1;
    *(undefined1 *)(iVar11 + 0x6f) = 0;
    *(undefined1 *)(iVar11 + 0xc4) = 0;
    *(undefined1 *)(iVar11 + 0xc5) = 0;
    puVar12 = (uint *)FUN_01e29410(0x32,*(int *)((int)uVar5 + 0x6c) + 0xbb,uVar9,uVar1);
    return puVar12;
  case 0xb8:
    func_0x0200206c();
    uVar5 = *(ulonglong *)(puVar12 + 3);
switchD_01e29504_caseD_4b:
    *(int *)((int)uVar5 + 4) = (int)(uVar5 >> 0x20);
switchD_01e29504_caseD_cc:
    *(undefined4 *)(uVar5 >> 0x20) = (int)uVar5;
switchD_01e29504_caseD_3:
    uVar5 = ZEXT48(puVar12 + 3);
    puVar12[3] = (uint)(puVar12 + 3);
switchD_01e29504_caseD_bb:
    puVar12[4] = (uint)uVar5;
switchD_01e29504_caseD_e:
    func_0x0200207e();
    FUN_01e35d8a();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb9:
  case 0xeb:
  case 0xf0:
  case 0xf6:
  case 0xc:
  case 0x40:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xbb:
    goto switchD_01e29504_caseD_bb;
  case 0xbd:
    goto switchD_01e29504_caseD_bd;
  case 0xbf:
    if (puVar12 == (uint *)0x0) {
      halt_baddata();
    }
    uVar5 = (ulonglong)*unaff_r5;
switchD_01e29504_caseD_90:
    if ((int)uVar5 != 0) {
switchD_01e29504_caseD_4:
      thunk_EXT_FUN_0200010a();
    }
LAB_01e296cc:
    uVar4 = switchD_01e29504::caseD_4d(0x1c);
    *unaff_r5 = uVar4;
    if (uVar4 == 0) goto switchD_01e29504_caseD_4f;
    goto switchD_01e29504_caseD_82;
  case 0xc0:
    break;
  case 0xc1:
    goto switchD_01e29504_caseD_c1;
  case 0xc3:
    goto switchD_01e29504_caseD_c3;
  case 0xc5:
    goto LAB_01e296cc;
  case 0xc6:
    goto switchD_01e29504_caseD_c6;
  case 0xcc:
    goto switchD_01e29504_caseD_cc;
  case 0xd4:
    goto switchD_01e29504_caseD_d4;
  case 0xd7:
    goto switchD_01e29504_caseD_d7;
  case 0xd8:
    goto switchD_01e29504_caseD_d8;
  case 0xd9:
  case 0x22:
    goto switchD_01e29504_caseD_d9;
  case 0xda:
    goto switchD_01e29504_caseD_da;
  case 0xdc:
    goto switchD_01e29504_caseD_dc;
  case 0xe3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xe6:
  case 0xee:
  case 0xf4:
    goto switchD_01e29504_caseD_e6;
  case 0xea:
switchD_01e29504_caseD_4f:
    thunk_EXT_FUN_0200010a();
switchD_01e29504_caseD_82:
    pbVar10 = (byte *)0x1c;
switchD_01e29504_caseD_9e:
    func_0x021127b4(pbVar10);
    goto switchD_01e29504_caseD_e6;
  case 0xef:
  case 0xf5:
    goto switchD_01e29504_caseD_ef;
  case 0xf3:
    goto switchD_01e29504_caseD_f3;
  case 0xf7:
    goto switchD_01e29504_caseD_f7;
  case 0xfa:
    goto switchD_01e29504_caseD_fa;
  case 0xfb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xff:
    goto switchD_01e29504_caseD_ff;
  default:
    switch(puVar3) {
    case (uint *)0x4d:
      uVar5 = CONCAT44(pbVar6,*(undefined4 *)local_c);
      *(byte *)(puVar12 + 1) = (byte)*(undefined4 *)local_c;
      local_c = local_c + 4;
      break;
    case (uint *)0x4e:
    case (uint *)0x4f:
    case (uint *)0x51:
    case (uint *)0x52:
    case (uint *)0x54:
    case (uint *)0x55:
switchD_01e294d0_caseD_4e:
      *(byte *)((int)puVar12 + 6) = 3;
      *(byte *)((int)puVar12 + 7) = 3;
      goto switchD_01e29504_caseD_1;
    case (uint *)0x50:
      uVar5 = CONCAT44(pbVar6,(uint)*(byte *)((int)puVar12 + 5)) | 1;
      *(byte *)((int)puVar12 + 5) = (byte)uVar5;
      break;
    case (uint *)0x53:
      uVar5 = CONCAT44(pbVar6,(uint)*(byte *)((int)puVar12 + 5)) | 4;
      *(byte *)((int)puVar12 + 5) = (byte)uVar5;
      break;
    case (uint *)0x56:
      uVar5 = CONCAT44(pbVar6,*(undefined4 *)local_c);
      *(byte *)((int)puVar12 + 3) = (byte)*(undefined4 *)local_c;
      local_c = local_c + 4;
      break;
    default:
      if (puVar3 == (uint *)0x76) {
        uVar5 = CONCAT44(pbVar6,*(undefined4 *)local_c);
        *(byte *)((int)puVar12 + 2) = (byte)*(undefined4 *)local_c;
        local_c = local_c + 4;
      }
      else {
        if (puVar3 != (uint *)0x65) goto switchD_01e294d0_caseD_4e;
        uVar5 = CONCAT44(pbVar6,*(undefined4 *)local_c) | 4;
        *(byte *)puVar12 = (byte)uVar5;
        local_c = local_c + 4;
      }
    }
    goto LAB_01e294bc;
  }
switchD_01e29504_caseD_bd:
  uVar4 = FUN_01e360aa();
  uVar5 = (ulonglong)uVar4;
switchD_01e29504_caseD_f7:
  puVar12 = (uint *)uVar5;
  if (puVar12 == (uint *)0x0) {
    FUN_01e2968c();
switchD_01e29504_caseD_d7:
    puVar12 = (uint *)0x0;
  }
  else {
switchD_01e29504_caseD_ff:
    func_0x021127b4(unaff_r5);
switchD_01e29504_caseD_dc:
  }
  return puVar12;
switchD_01e29504_caseD_b9:
  halt_baddata();
switchD_01e29504_caseD_e6:
  uVar4 = *unaff_r5;
  *(uint **)(uVar4 + 0x18) = puVar12;
  uVar5 = CONCAT44(&DAT_00004a5c,uVar4);
  param_2 = DAT_00004a5c + 1;
  pbVar10 = (byte *)0x1;
  if (DAT_00004a5c < 0xb) {
    in_cres = 1;
  }
  else {
    in_cres = 0;
  }
switchD_01e29504_caseD_70:
  uVar9 = SUB41(pbVar10,0);
  if (in_cres == 1) {
    uVar9 = (undefined1)param_2;
  }
  *(undefined1 *)(uVar5 >> 0x20) = uVar9;
  *(undefined1 *)(uint *)uVar5 = uVar9;
  return (uint *)uVar5;
}



// ==== FUN_01e29550 @ 01e29550 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e29550(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_01e36232();
  func_0x0200206c();
  iVar1 = (int)*(undefined8 *)(param_1 + 0xc);
  piVar2 = (int *)((ulonglong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *(int *)(param_1 + 0xc) = param_1 + 0xc;
  *(int *)(param_1 + 0x10) = param_1 + 0xc;
  func_0x0200207e();
  FUN_01e35d8a();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== caseD_77 @ 01e29586 ====

void switchD_01e29504::caseD_77(int param_1,undefined4 param_2)

{
  int iVar1;
  BADSPACEBASE *in_sp;
  int *piVar2;
  undefined1 local_1c [4];
  
  piVar2 = (int *)local_1c;
  iVar1 = FUN_01e29460(0x11);
  if (iVar1 == 0) {
    thunk_EXT_FUN_0200010a();
  }
  *piVar2 = (int)(piVar2 + 5);
  FUN_01e2949a(iVar1,param_2);
  if (*(char *)(param_1 + 0x206) == '\x01') {
    *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x108) | 1;
  }
  FUN_01e2e96a(*(undefined4 *)(param_1 + 0x6c),iVar1);
  return;
}



// ==== caseD_86 @ 01e295ce ====

void switchD_01e29504::caseD_86(byte *param_1,undefined4 param_2)

{
  int iVar1;
  BADSPACEBASE *in_sp;
  int *piVar2;
  undefined1 local_1c [4];
  
  piVar2 = (int *)local_1c;
  iVar1 = FUN_01e29460(0x11);
  if (iVar1 == 0) {
    thunk_EXT_FUN_0200010a();
  }
  *piVar2 = (int)(piVar2 + 5);
  FUN_01e2949a(iVar1,param_2);
  *(byte *)(iVar1 + 0x18) = *param_1 | *(byte *)(iVar1 + 0x108);
  FUN_01e2e96a(*(undefined4 *)(param_1 + 0x6c),iVar1);
  return;
}



// ==== FUN_01e2961c @ 01e2961c ====

void FUN_01e2961c(undefined4 param_1)

{
  FUN_01e36232(param_1);
  FUN_01e35d8a(param_1);
  return;
}



// ==== FUN_01e2968c @ 01e2968c ====

void FUN_01e2968c(void)

{
  FUN_01e361fc(0xde50);
  return;
}



// ==== caseD_4d @ 01e29696 ====

int switchD_01e29504::caseD_4d(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_01e360aa(0xde50,param_1);
  if (iVar1 == 0) {
    FUN_01e2968c();
    iVar1 = 0;
  }
  else {
    func_0x021127b4(0,param_1);
  }
  return iVar1;
}



// ==== FUN_01e2981a @ 01e2981a ====

int FUN_01e2981a(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((int *)*param_1 != param_1) {
    iVar1 = (int)((int *)*param_1 + -3);
  }
  return iVar1;
}



// ==== FUN_01e2a714 @ 01e2a714 ====

uint FUN_01e2a714(int param_1)

{
  uint uVar1;
  
  uVar1 = 0x12adc;
  while( true ) {
    if (0x12beb < uVar1) {
      return 0;
    }
    if (*(int *)(uVar1 + 0x6c) == param_1) break;
    uVar1 = uVar1 + 0x88;
  }
  return uVar1;
}



// ==== FUN_01e2a738 @ 01e2a738 ====

void FUN_01e2a738(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined6 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  FUN_01e36232(param_1);
  uVar3 = FUN_01e36274(param_1,(uint)bVar1 * 4 + 0x12bfc);
  sVar2 = *(short *)((int)uVar3 + 2) - (short)((uint6)uVar3 >> 0x20);
  if (sVar2 < 1) {
    sVar2 = 0;
  }
  *(short *)((int)uVar3 + 2) = sVar2;
  FUN_01e35d8a(param_1);
  return;
}



// ==== FUN_01e2a76e @ 01e2a76e ====

int FUN_01e2a76e(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined6 uVar3;
  
  iVar2 = param_1 * 4;
  if ((*(byte *)(iVar2 + 0x12bfc) != 0) &&
     ((int)(((uint)*(byte *)(iVar2 + 0x12bfc) * 0x3000) / 100) <= (int)*(short *)(iVar2 + 0x12bfe)))
  {
    return 0;
  }
  iVar1 = FUN_01e360aa(param_2 + 0x20);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x021127b4(0,0x20);
    *(char *)(iVar1 + 0xf) = (char)param_1;
    uVar3 = FUN_01e36274(iVar1,iVar2 + 0x12bfc);
    *(short *)((int)uVar3 + 2) = (short)((uint6)uVar3 >> 0x20) + *(short *)((int)uVar3 + 2);
  }
  return iVar1;
}



// ==== FUN_01e2ba96 @ 01e2ba96 ====

void FUN_01e2ba96(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1 + 0x84);
  if (pcVar2 == (code *)0x0) {
    return;
  }
  while (iVar1 = (*pcVar2)(param_1,param_2,param_3,pcVar2), iVar1 != 0) {
    pcVar2 = *(code **)(param_1 + 0x84);
  }
  return;
}



// ==== FUN_01e2bab6 @ 01e2bab6 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x01e2bae6: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e2baea) */

void FUN_01e2bab6(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  func_0x0200206c();
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  do {
    while( true ) {
      puVar1 = puVar2;
      if (puVar1 == (undefined4 *)(param_1 + 0x1c)) {
        halt_baddata();
      }
      puVar2 = (undefined4 *)*puVar1;
      if (*(char *)((int)puVar1 + 0xb) == '\0') break;
      FUN_01e167a2(puVar2,puVar1[1]);
      FUN_01e3014a(puVar1);
    }
  } while (*(char *)((int)puVar1 + 0xd) != '\0');
  *(undefined1 *)((int)puVar1 + 0xd) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e2bfac @ 01e2bfac ====

uint FUN_01e2bfac(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (0x8000000 - param_1) + param_2;
  if (param_1 <= param_2) {
    uVar1 = ~(param_2 - param_1);
  }
  return uVar1;
}



// ==== FUN_01e2c0ac @ 01e2c0ac ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e2c0ac(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  func_0x0200206c();
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x6c) + 0xe8);
  iVar4 = 0;
  puVar2 = (undefined4 *)*puVar3;
  while (puVar1 = puVar2, puVar1 != puVar3) {
    puVar2 = (undefined4 *)*puVar1;
    if (*(char *)((int)puVar1 + 10) == '\x02') {
      iVar4 = 0;
      if (*(short *)(param_1 + 0xc) == *(short *)((int)puVar1 + 0x202)) {
        FUN_01e167a2(puVar2,puVar1[1]);
        FUN_01e2a738(puVar1);
        iVar4 = 1;
      }
    }
    else if (iVar4 == -2) {
      FUN_01e167a2(puVar2,puVar1[1]);
      FUN_01e2a738(puVar1);
    }
  }
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  while (puVar3 = puVar2, puVar3 != (undefined4 *)(param_1 + 0x1c)) {
    puVar2 = (undefined4 *)*puVar3;
    if (*(char *)((int)puVar3 + 0xe) == '\x01') {
      FUN_01e167a2(puVar2,puVar3[1]);
      FUN_01e2a738(puVar3);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e2e070 @ 01e2e070 ====

void FUN_01e2e070(int param_1,int param_2,char param_3)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (char)*(int *)(param_1 + 0x70);
  if (param_2 != 0) {
    if (*(ushort *)(param_1 + 0x86) < 800) {
      param_3 = cVar2 + '\x01';
    }
    else {
      param_3 = cVar2;
      if (0x44c < *(ushort *)(param_1 + 0x86)) {
        param_3 = cVar2 + -1;
      }
    }
  }
  if (param_3 < '\0') {
    iVar1 = 0;
  }
  else {
    if ('\x0e' < param_3) {
      param_3 = '\x0f';
    }
    iVar1 = (int)param_3;
  }
  *(int *)(param_1 + 0x70) = iVar1;
  return;
}



// ==== FUN_01e2e0a4 @ 01e2e0a4 ====

void FUN_01e2e0a4(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (8 < param_2) {
    param_2 = 9;
  }
  uVar1 = FUN_01e2247c(param_2);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = FUN_01e2248e(param_2);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  return;
}



// ==== FUN_01e2e0c4 @ 01e2e0c4 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_01e2e0c4(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  func_0x0200206c();
  piVar3 = (int *)&DAT_0000b834;
  iVar1 = 0;
  while( true ) {
    if (2 < iVar1) {
      func_0x0200207e();
      return (int *)0x0;
    }
    if ((1 << iVar1 & (uint)DAT_0000ca4e) == 0) break;
    piVar3 = piVar3 + 0x2d;
    iVar1 = iVar1 + 1;
  }
  DAT_0000ca4e = DAT_0000ca4e | (byte)(1 << iVar1);
  piVar2 = piVar3 + -0x1f;
  *(undefined4 *)(((int)(piVar3 + -0x2e0d) / 0xb4 + 0xca40) * 4) = 0;
  func_0x021127b4(piVar2,0,0xb4);
  *(undefined2 *)(piVar3 + 0xe9) = 0x4010;
  *(undefined2 *)((int)piVar3 + 0x3a6) = 0x4010;
  *(undefined2 *)(piVar3 + 0xf4) = 0x83;
  *(undefined2 *)((int)piVar3 + 0x3d2) = 0x83;
  *(undefined2 *)((int)piVar3 + 0x396) = 0x3fd;
  *(undefined2 *)(piVar3 + 0xea) = 0x6007;
  *(undefined2 *)((int)piVar3 + 0x3aa) = 0x6007;
  *(undefined2 *)(piVar3 + 0xf6) = 0x1414;
  *(undefined2 *)((int)piVar3 + 0x3da) = 0x1d1d;
  *(undefined2 *)(piVar3 + 0xf7) = 0x206c;
  *piVar3 = (int)((uint)_DAT_000044e4 * -0x100000) / 24000;
  FUN_01e2e070(piVar2,0,0xf);
  FUN_01e2e0a4(piVar2,0xf);
  func_0x0200207e();
  return piVar2;
}



// ==== FUN_01e2e19c @ 01e2e19c ====

void FUN_01e2e19c(void)

{
  uint uVar1;
  ushort uVar2;
  
  for (uVar1 = 0; uVar1 != 0x10; uVar1 = uVar1 + 1) {
    uVar2 = *(ushort *)(&DAT_0000b648 + uVar1) & 0xefff;
    if ((uVar1 & 1) == 0) {
      uVar2 = *(ushort *)(&DAT_0000b648 + uVar1) | 0x1000;
    }
    *(ushort *)((int)(&DAT_0000b648 + uVar1) * 2) = uVar2;
  }
  return;
}



// ==== FUN_01e2e1c2 @ 01e2e1c2 ====

void FUN_01e2e1c2(void)

{
  uint uVar1;
  ushort uVar2;
  
  for (uVar1 = 0; uVar1 != 0x10; uVar1 = uVar1 + 1) {
    uVar2 = *(ushort *)(&DAT_0000b648 + uVar1) | 0x1000;
    if ((uVar1 & 1) == 0) {
      uVar2 = *(ushort *)(&DAT_0000b648 + uVar1) & 0xefff;
    }
    *(ushort *)((int)(&DAT_0000b648 + uVar1) * 2) = uVar2;
  }
  return;
}



// ==== FUN_01e2e1e8 @ 01e2e1e8 ====

void FUN_01e2e1e8(void)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != 0x10; iVar1 = iVar1 + 1) {
    *(ushort *)((int)(&DAT_0000b648 + iVar1) * 2) = *(ushort *)(&DAT_0000b648 + iVar1) & 0xefff;
  }
  return;
}



// ==== FUN_01e2e204 @ 01e2e204 ====

void FUN_01e2e204(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = (ushort)(1 << param_1);
  if (param_2 != 0) {
    for (iVar2 = 0; iVar2 != 0x10; iVar2 = iVar2 + 1) {
      *(ushort *)((int)(&DAT_0000b648 + iVar2) * 2) = *(ushort *)(&DAT_0000b648 + iVar2) | uVar1;
    }
    return;
  }
  for (iVar2 = 0; iVar2 != 0x10; iVar2 = iVar2 + 1) {
    *(ushort *)((int)(&DAT_0000b648 + iVar2) * 2) = ~(uVar1 ^ 0xffff);
  }
  return;
}



// ==== FUN_01e2e244 @ 01e2e244 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e2e244(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  func_0x0200206c();
  if (param_1 == 0) {
    DAT_00004af0 = DAT_00004af0 & 0xfe;
    FUN_01e2e204(0xc,1);
  }
  else {
    bVar2 = DAT_00004af0 | 1;
    bVar1 = DAT_00004af0 & 5;
    DAT_00004af0 = bVar2;
    if (bVar1 == 0) {
      if (DAT_0000ca4f == '\0') {
        FUN_01e2e1c2();
      }
      else if (DAT_0000ca4f == '\x01') {
        FUN_01e2e19c();
      }
      else {
        FUN_01e2e1e8();
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e2e290 @ 01e2e290 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2e290(int param_1)

{
  if ((_DAT_0000b648 & 0xffff07ff) == param_1 - _DAT_001cfc44) {
    FUN_01e2e244(0);
  }
  return;
}



// ==== FUN_01e2e2b2 @ 01e2e2b2 ====

/* WARNING: Removing unreachable block (ram,0x01e2e2be) */

void FUN_01e2e2b2(void)

{
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}



// ==== FUN_01e2e2c2 @ 01e2e2c2 ====

char FUN_01e2e2c2(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = '\0';
  iVar2 = 0;
  while( true ) {
    if (2 < iVar2) {
      return -1;
    }
    if ((uint)*(byte *)(iVar2 + 0xca3c) == 1 << (param_1 + -0xb7b8) / 0xb4) break;
    cVar1 = cVar1 + '\x01';
    iVar2 = iVar2 + 1;
  }
  return cVar1;
}



// ==== FUN_01e2e2fc @ 01e2e2fc ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2e2fc(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_01e2e290();
  func_0x0200206c();
  iVar1 = _DAT_0002ed10;
  func_0x0200207e();
  if (iVar1 == param_1) {
    iVar1 = FUN_01e2e2b2();
    iVar1 = iVar1 + 3;
    do {
      FUN_01e2e2b2();
      iVar2 = FUN_01e292d0(iVar1);
    } while (iVar2 == 0);
  }
  DAT_0000ca4e = DAT_0000ca4e & ~(byte)(1 << (param_1 + -0xb7b8) / 0xb4);
  iVar1 = FUN_01e2e2c2(param_1);
  if (iVar1 != 0xff) {
    *(undefined1 *)(iVar1 + 0xca3c) = 0;
  }
  return;
}



// ==== FUN_01e2e35c @ 01e2e35c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2e35c(int param_1,int param_2,int param_3)

{
  short sVar1;
  
  if (param_3 == 0) {
    sVar1 = -0x8000;
  }
  else {
    sVar1 = (short)param_3 - (short)_DAT_001cfc44;
  }
  *(short *)((param_1 + 0x1c + param_2) * 2) = sVar1;
  return;
}



// ==== FUN_01e2e3b4 @ 01e2e3b4 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2e3b4(int param_1)

{
  _DAT_001cfd40 = ~(1 << param_1) & 0x1cfd40;
  *(undefined4 *)((param_1 + 0x1cfd44) * 4) = 0;
  DAT_00012ad4 = DAT_00013074 & ~(byte)(1 << param_1);
  return;
}



// ==== FUN_01e2e3e4 @ 01e2e3e4 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2e3e4(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  *(undefined4 *)(&DAT_00012a84 + param_1 * 8) = param_3;
  *(undefined4 *)(&DAT_00012a88 + param_1 * 8) = param_2;
  *(int *)((param_1 + 0x1cfd44) * 4) = param_5 + param_4;
  _DAT_001cfd40 = 1 << param_1 | 0x1cfd40;
  return;
}



// ==== FUN_01e2e414 @ 01e2e414 ====

void FUN_01e2e414(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  BADSPACEBASE *in_sp;
  undefined4 *puVar2;
  undefined1 local_10 [4];
  
  puVar2 = (undefined4 *)local_10;
  uVar1 = FUN_01e2e2b2();
  *puVar2 = uVar1;
  FUN_01e2e3e4(param_1,param_2);
  return;
}



// ==== FUN_01e2e42c @ 01e2e42c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2e42c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_01e2e2b2();
  *(int *)((param_1 + 0x1cfd44) * 4) = iVar1 + param_2;
  _DAT_001cfd40 = 1 << param_1 | 0x1cfd40;
  return;
}



// ==== FUN_01e2e454 @ 01e2e454 ====

char FUN_01e2e454(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  BADSPACEBASE *in_sp;
  undefined4 *puVar5;
  undefined1 local_14 [4];
  
  puVar5 = (undefined4 *)local_14;
  cVar1 = '\0';
  iVar3 = 0;
  while( true ) {
    if (7 < iVar3) {
      puVar4 = (undefined4 *)&DAT_00012a88;
      for (iVar3 = 0; iVar3 != 8; iVar3 = iVar3 + 1) {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 2;
        *puVar5 = uVar2;
        FUN_01e36848(4,s_<Error>___BL__d__fun_0x_x_01e19aa8,iVar3);
      }
      func_0x0200010a();
      return -1;
    }
    if (((uint)DAT_00013074 & 1 << iVar3) == 0) break;
    cVar1 = cVar1 + '\x01';
    iVar3 = iVar3 + 1;
  }
  DAT_00012ad4 = DAT_00013074 | (byte)(1 << iVar3);
  return cVar1;
}



// ==== FUN_01e2e4b0 @ 01e2e4b0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e2e4b0(undefined4 param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  uVar2 = FUN_01e37e9e();
  uVar5 = 0;
  if ((0xfffff < uVar2) && (_DAT_00004b00 == 0)) {
    iVar3 = 0;
    puVar4 = (undefined4 *)&DAT_00012a74;
    while (puVar4 = (undefined4 *)*puVar4, puVar4 != (undefined4 *)&DAT_00012a74) {
      iVar3 = iVar3 + (uint)(puVar4[0x39] != 0);
    }
    uVar5 = 0xfffffff2;
    if (iVar3 < 2) {
      iVar3 = FUN_01e2e0c4();
      uVar5 = 0xfffffff4;
      if (iVar3 != 0) {
        _DAT_00004b00 = FUN_01e292a6(0x78);
        if (_DAT_00004b00 != 0) {
          func_0x021127b4(0,4);
          FUN_01e2e0a4(iVar3,4);
          sVar1 = (short)_DAT_00004b00 + 0x11;
          *(short *)(iVar3 + 0x50) = sVar1 - (short)_DAT_001cfc44;
          *(short *)(iVar3 + 0x52) = sVar1 - (short)_DAT_001cfc44;
          FUN_01e2e35c(iVar3,0);
          FUN_01e2e35c(iVar3,1,_DAT_00004b00 + 0x11);
          uVar5 = func_0x021127a8(_DAT_00004b00 + 0x5c,param_1,6);
          return uVar5;
        }
        FUN_01e2e2fc(iVar3);
      }
    }
  }
  return uVar5;
}



// ==== FUN_01e2e6b2 @ 01e2e6b2 ====

void FUN_01e2e6b2(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 | 0xf8000000;
  if (-1 < (int)param_2) {
    uVar1 = param_2 & 0x7ffffff;
  }
  *(short *)(param_1 + 0x30) = (short)uVar1;
  *(short *)(param_1 + 0x32) = (short)(uVar1 >> 0x10);
  return;
}



// ==== FUN_01e2e6cc @ 01e2e6cc ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e2e6cc(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  cVar1 = DAT_00012f6e;
  iVar6 = *(int *)(param_1 + 0xe4);
  if (param_2 - 1U < 6) {
    switch(param_2) {
    case 1:
      _DAT_001c0000 = _DAT_001c0000 | 0x400;
      *(undefined1 *)(param_1 + 0xc) = 1;
      bVar2 = *(byte *)(param_1 + 0x2b) | 9;
      break;
    case 2:
      FUN_01e2e290(iVar6);
      return 0;
    case 3:
      *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xfe;
      cVar1 = DAT_00012f6e;
      puVar3 = _DAT_00012a7c;
      if ((char)_DAT_00012a7c[4] != '\0') {
        cVar7 = '\x02';
        if ((char)_DAT_00012a7c[4] == '\x01') {
          puVar4 = (undefined4 *)&DAT_00012a74;
          cVar7 = DAT_00012f6e;
          while (puVar4 = (undefined4 *)*puVar4, puVar4 != (undefined4 *)&DAT_00012a74) {
            if ((puVar4[0x39] != 0) && ((*(byte *)((int)puVar4 + 0x20b) & 8) != 0)) {
              cVar7 = '\x02';
            }
          }
        }
        puVar4 = (undefined4 *)&DAT_00012a74;
        DAT_00012c9c = cVar7;
        while (puVar4 = (undefined4 *)*puVar4, puVar4 != (undefined4 *)&DAT_00012a74) {
          if (puVar4[0x39] != 0) {
            *(char *)((int)puVar4 + 0x16) = cVar7;
          }
        }
      }
      if ((*(byte *)(param_1 + 0x27) & 0xc) == 0) {
        *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_1 + 0x16);
        if ((*(byte *)(param_1 + 0x2b) & 0xd) == 0) {
          uVar8 = *(ushort *)(param_1 + 0x40);
          uVar5 = (uint)uVar8;
        }
        else {
          if (cVar1 == '\x02') {
            if (*(char *)(param_1 + 0x17) == '\0') {
              *(undefined2 *)(param_1 + 0x40) = 0;
            }
            puVar3 = puVar3 + 2;
          }
          uVar5 = (uint)*puVar3;
          uVar11 = (uint)*(ushort *)(param_1 + 0x40);
          uVar9 = uVar11 + uVar5;
          if (0xfebU - _DAT_001c0028 <= uVar9) {
            uVar9 = 0xfeb - _DAT_001c0028;
            uVar5 = uVar9 - uVar11;
            if (uVar9 <= uVar11) {
              uVar5 = 0;
            }
          }
          uVar8 = (ushort)uVar9;
          *(ushort *)(param_1 + 0x40) = uVar8;
        }
        if (DAT_00012f6c == '\x02') {
          *(char *)(param_1 + 0x17) = *(char *)(param_1 + 0x17) + '\x01';
        }
        *(ushort *)(iVar6 + 0x10) = (short)_DAT_001c0028 + uVar8 + 0x14;
        iVar10 = (*(ushort *)(iVar6 + 0x38) & 0xffff03ff) - (uVar5 >> 1) % 0x271;
        uVar5 = uVar5 / 0x4e2;
        if (iVar10 < 0x1ff) {
          iVar10 = iVar10 + 0x271;
          uVar5 = uVar5 + 1;
        }
        *(ushort *)(iVar6 + 0x38) = ~(ushort)iVar10;
        *(undefined1 *)(param_1 + 0xc) = 1;
        *(ushort *)(iVar6 + 0x38) = *(ushort *)(iVar6 + 0x38) | 0x4000;
        iVar10 = func_0x02001f28();
        FUN_01e2e6b2(iVar6,iVar10 + uVar5);
        return uVar5 + 2;
      }
      return 4;
    case 4:
      goto switchD_01e2e6f8_caseD_4;
    case 5:
      *(char *)(param_1 + 0x16) = DAT_00012f6e;
      *(char *)(param_1 + 0x15) = cVar1;
      puVar3 = _DAT_00012a7c + 3;
      if (cVar1 != '\x02') {
        puVar3 = _DAT_00012a7c + 1;
      }
      *(ushort *)(param_1 + 0x40) = *puVar3;
      for (iVar6 = 0; iVar6 != 10; iVar6 = iVar6 + 1) {
        *(undefined2 *)((param_1 + 0x42 + iVar6) * 2) = 0;
      }
      bVar2 = *(byte *)(param_1 + 0x2b) | 2;
      break;
    case 6:
      bVar2 = *(byte *)(param_1 + 0x2b) & 0xfc | 1;
    }
    *(byte *)(param_1 + 0x2b) = bVar2;
  }
  else {
switchD_01e2e6f8_caseD_4:
    FUN_01e36848(4,s_<Error>___BL_unknow_cmd_____01e19a89,*(undefined2 *)(iVar6 + 0x30));
  }
  return 0;
}



// ==== thunk_FUN_01e2e2b2 @ 01e2e87c ====

/* WARNING: Removing unreachable block (ram,0x01e2e2be) */

void thunk_FUN_01e2e2b2(void)

{
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}



// ==== FUN_01e2e950 @ 01e2e950 ====

void FUN_01e2e950(int param_1,int param_2,ushort param_3)

{
  *(ushort *)(param_1 + param_2 * 2 + 0x20) = param_3 | 0x7f4f;
  return;
}



// ==== FUN_01e2e96a @ 01e2e96a ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x01e2e9ee: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e2e9f2) */

void FUN_01e2e96a(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  func_0x0200206c();
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0xe4);
    iVar4 = *piVar2;
    if (iVar4 != 0) {
      if (param_2 == 0) {
        halt_baddata();
      }
      if (*(char *)(param_2 + 6) == '\x03') {
        if (*(int *)(param_1 + 0x114) != 0) {
          func_0x0200206c();
          if (piVar2[9] == 0) {
            piVar3 = piVar2 + 10;
            iVar1 = *piVar3;
          }
          else {
            FUN_01e29550();
            iVar1 = piVar2[10];
            if (iVar1 == piVar2[9]) {
              iVar1 = 0;
              piVar2[10] = 0;
            }
            piVar2[9] = 0;
            piVar3 = piVar2 + 10;
          }
          if (iVar1 != 0) {
            FUN_01e29550();
          }
          *piVar3 = 0;
          if ((int *)piVar2[5] == piVar2 + 5) {
            FUN_01e2e950(iVar4,0,0);
            FUN_01e2e950(iVar4,1);
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1 = param_1 + 0xf0;
      }
      else {
        param_1 = param_1 + 0xf8;
      }
      FUN_01e16776(param_2 + 0xc,param_1);
      halt_baddata();
    }
  }
  FUN_01e29550(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e2ea26 @ 01e2ea26 ====

void FUN_01e2ea26(int param_1,int param_2,byte param_3)

{
  byte bVar1;
  int in_cres;
  
  if (in_cres == 1) {
    param_3 = *(byte *)(param_1 + 0xc);
  }
  bVar1 = param_3 | 8;
  if (param_2 == 0) {
    bVar1 = param_3 & 0xf7;
  }
  *(byte *)(param_1 + 0xc) = bVar1;
  return;
}



// ==== FUN_01e2ea54 @ 01e2ea54 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e2ea54(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e2eab2 @ 01e2eab2 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e2eab2(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  
  pbVar5 = (byte *)(param_1 + 0xb8);
  if (param_2 != 0) {
    param_3 = param_3 + *pbVar5;
  }
  bVar3 = (byte)param_3;
  *pbVar5 = bVar3;
  if ((char)bVar3 < '\0') {
    uVar4 = 1;
    param_3 = 0;
  }
  else {
    uVar4 = 0;
    if ((char)bVar3 < '\n') goto LAB_01e2ead8;
    uVar4 = 2;
    param_3 = 9;
  }
  *pbVar5 = (byte)param_3;
LAB_01e2ead8:
  uVar1 = _DAT_000044d4 & 0xf;
  if ((int)uVar1 <= (int)(char)param_3) {
    *pbVar5 = (byte)uVar1;
    uVar4 = 2;
    param_3 = uVar1;
  }
  param_3 = param_3 & 0xff;
  uVar2 = FUN_01e2247c(param_3,uVar4);
  iVar6 = *(int *)(param_1 + 0xe4);
  *(undefined4 *)(iVar6 + 0x6c) = uVar2;
  uVar2 = FUN_01e2248e(param_3);
  *(undefined4 *)(iVar6 + 0x74) = uVar2;
  return uVar4;
}



// ==== FUN_01e2eb0c @ 01e2eb0c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2eb0c(int param_1,int param_2,int param_3,short param_4)

{
  ushort unaff_r5;
  undefined4 unaff_r6;
  
  if (0x7ffe < (uint)(param_3 - _DAT_001cfc44)) {
    FUN_01e1678a();
  }
  *(short *)((param_1 + 0x18 + param_2) * 2) = (short)param_3 - (short)_DAT_001cfc44;
  *(ushort *)((param_1 + 0x24 + param_2) * 2) = param_4 << 3 | unaff_r5 | 4;
  FUN_01e2e950(param_1,param_2,unaff_r6);
  return;
}



// ==== FUN_01e2eb5c @ 01e2eb5c ====

void FUN_01e2eb5c(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) & 0xfe;
  }
  else {
    *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) & 0xfe;
  }
  return;
}



// ==== FUN_01e2eb70 @ 01e2eb70 ====

void FUN_01e2eb70(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  undefined1 extraout_r0;
  undefined1 uVar5;
  byte bVar6;
  undefined1 extraout_r0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  BADSPACEBASE *in_sp;
  ulonglong *puVar21;
  int in_cres;
  
  cVar4 = (char)param_1;
  if (in_cres == 1) {
    in_sp = (BADSPACEBASE *)&stack0xffffffcc;
  }
  puVar21 = (ulonglong *)((int)in_sp + -0x18);
  iVar18 = param_1 + 0xb8;
  iVar7 = *(int *)(param_1 + 0xe4);
  *(undefined2 *)((int)in_sp + -2) = 0xffff;
  iVar19 = param_1 + 0x24;
  if ((*(byte *)(param_1 + 0x27) & 1) == 0) {
    *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) | 1;
    func_0x0200206c();
    uVar9 = (ulonglong)CONCAT14(*(undefined1 *)(iVar7 + 0x50a),(uint)*(byte *)(iVar7 + 0x50b));
    bVar6 = *(byte *)(iVar7 + 0xf) & 1;
    if (bVar6 == (*(byte *)(iVar7 + 0xf) & 1)) {
      func_0x0200207e();
      for (iVar7 = 0; iVar7 != 2; iVar7 = iVar7 + 1) {
        if (bVar6 == 0) {
          bVar3 = 1;
          if ((uVar9 & 0xffffff0100000000) != 0) {
            *(undefined1 *)((int)puVar21 + iVar7 + 0x16) = 0;
          }
        }
        else {
          bVar3 = 0;
          if ((uVar9 & 0xffffff01) != 0) {
            *(byte *)((int)puVar21 + iVar7 + 0x16) = bVar6;
          }
        }
        bVar6 = bVar3;
      }
      *(int *)((int)puVar21 + 8) = param_1 + 0xf8;
      iVar20 = param_1 + 0x108;
      pbVar12 = (byte *)0x0;
      *(int *)puVar21 = iVar19;
      *(int *)((int)puVar21 + 0xc) = iVar18;
      for (iVar7 = 0; iVar7 != 2; iVar7 = iVar7 + 1) {
        uVar17 = (uint)*(byte *)((int)puVar21 + iVar7 + 0x16);
        if (uVar17 != 0xff) {
          iVar14 = *(int *)((iVar20 + uVar17) * 4);
          if (((iVar14 != 0) && (iVar14 != *(int *)((iVar20 + (uint)(uVar17 == 0)) * 4))) &&
             (*(short *)(iVar14 + 10) == *(short *)(iVar14 + 8))) {
            if (((*(char *)(iVar14 + 6) == '\x03') && (0xfd < *(uint *)(iVar14 + 0x18))) &&
               ((*(char *)(iVar14 + 0x19) == '\x01' && (*(char *)(iVar14 + 0x1b) == '\v')))) {
              FUN_01e2ea26((char)*(undefined4 *)(iVar18 + 0x2c),1);
            }
            bVar6 = *(byte *)(iVar14 + 5);
            if ((bVar6 & 1) != 0) {
              *(byte *)(iVar19 + 8) = *(byte *)(iVar19 + 8) & 0xfb;
              bVar6 = *(byte *)(iVar14 + 5);
            }
            if ((bVar6 & 4) != 0) {
              *(byte *)(iVar19 + 7) = *(byte *)(iVar19 + 7) | 4;
            }
            bVar6 = *(byte *)(iVar14 + 1);
            if ((bVar6 & 4) != 0) {
              FUN_01e2ea54((char)*(undefined4 *)(iVar18 + 0x2c),(bVar6 & 2) >> 1,bVar6 & 1);
            }
            if (*(char *)(iVar14 + 4) != '\0') {
              *(char *)(iVar18 + 1) = *(char *)(iVar14 + 4);
            }
            if (*(char *)(iVar14 + 3) != '\0') {
              if ((*(byte *)(iVar19 + 3) & 9) != 0) goto LAB_01e2ecb6;
              FUN_01e23cf0(cVar4,1);
            }
            FUN_01e29550((char)iVar14);
          }
LAB_01e2ecb6:
          pbVar16 = (byte *)0x0;
          if ((pbVar12 != (byte *)0x0) || (pbVar12 = pbVar16, iVar7 == 0)) {
            FUN_01e2981a(cVar4 + -0x10);
            pbVar15 = (byte *)CONCAT22(extraout_var_01,CONCAT11(extraout_var,extraout_r0));
            if (pbVar15 == (byte *)0x0) {
              pbVar12 = pbVar16;
              if (*(char *)(param_1 + 0x13) != '\0') {
                FUN_01e2981a((char)*(undefined4 *)((int)puVar21 + 8));
                pbVar15 = (byte *)CONCAT22(extraout_var_02,CONCAT11(extraout_var_00,extraout_r0_00))
                ;
                if (pbVar15 != (byte *)0x0) goto LAB_01e2ecc8;
              }
            }
            else {
LAB_01e2ecc8:
              iVar14 = *(int *)(iVar18 + 0x2c);
              uVar5 = (undefined1)iVar14;
              if ((*pbVar15 & 4) != 0) {
                FUN_01e2ea54(uVar5,(*pbVar15 & 2) >> 1);
              }
              if (pbVar15[2] != 0) {
                FUN_01e23cf0(cVar4,1);
              }
              if (pbVar15[6] - 1 < 2) {
                uVar1 = *(ushort *)(pbVar15 + 8);
                uVar2 = *(ushort *)(pbVar15 + 10);
                bVar3 = *(byte *)(iVar14 + 0xc);
                bVar6 = *(byte *)(iVar18 + 1);
                if (bVar6 == 0) {
                  thunk_EXT_FUN_0200010a();
                }
                uVar13 = (uint)uVar1 - (uint)uVar2;
                iVar18 = 0x1e2df3c;
                if ((bVar3 & 8) != 0) {
                  iVar18 = 0x1e2df60;
                }
                uVar10 = 0;
                while ((uVar10 < 6 && (*(ushort *)(iVar18 + 4) <= (ushort)bVar6))) {
                  uVar8 = (uint)*(ushort *)(iVar18 + 6);
                  if ((int)uVar13 <= (int)uVar8) goto LAB_01e2ed8c;
                  uVar10 = uVar10 + 1;
                }
                uVar8 = (uint)*(ushort *)(iVar18 + -6);
                uVar10 = uVar10 - 1;
LAB_01e2ed8c:
                bVar6 = pbVar15[6];
                uVar1 = *(ushort *)(pbVar15 + 10);
                *(uint *)((int)puVar21 + 4) = (uint)*(ushort *)(uVar10 * 6 + iVar18 + 2);
                uVar11 = 2;
                if (uVar1 != 0) {
                  uVar11 = 1;
                }
                if (bVar6 != 2) {
                  uVar11 = 1;
                }
                *(undefined4 *)puVar21 = uVar11;
                if ((int)uVar8 < (int)uVar13) {
                  uVar13 = uVar8;
                }
                FUN_01e2eb0c(uVar5,uVar17,pbVar15 + uVar1 + 0x18);
                uVar1 = *(ushort *)(pbVar15 + 10);
                *(short *)(pbVar15 + 10) = (short)(uVar1 + uVar13);
                iVar18 = *(int *)((int)puVar21 + 0xc);
                iVar19 = *(int *)puVar21;
                if ((uint)*(ushort *)(pbVar15 + 8) == (uVar1 + uVar13 & 0xffff)) {
LAB_01e2edd2:
                  FUN_01e1678e((char)pbVar15 + '\f');
                }
              }
              else {
                if (pbVar15[6] == 3) {
                  bVar6 = 3;
                  if ((*(byte *)(iVar19 + 3) & 8) == 0) {
                    thunk_EXT_FUN_0200010a();
                    bVar6 = pbVar15[6];
                  }
                  *puVar21 = (ulonglong)CONCAT14(pbVar15[7],(uint)bVar6);
                  FUN_01e2eb0c(uVar5,uVar17,pbVar15 + 0x18);
                  *(undefined2 *)(pbVar15 + 10) = *(undefined2 *)(pbVar15 + 8);
                  goto LAB_01e2edd2;
                }
                thunk_EXT_FUN_0200010a();
              }
              func_0x0200206c();
              func_0x0200206c();
              if (DAT_00012a70 == '\0') {
                DAT_00012a70 = FUN_01e2e454();
                FUN_01e2e414(&LAB_01e32182,0);
              }
              func_0x0200207e();
              FUN_01e2eb5c(uVar5,uVar17);
              func_0x0200207e();
              pbVar12 = pbVar15;
            }
          }
          *(byte **)((iVar20 + uVar17) * 4) = pbVar12;
        }
      }
      *(byte *)(iVar19 + 3) = *(byte *)(iVar19 + 3) & 0xfe;
    }
    else {
      *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) & 0xfe;
      func_0x0200207e();
    }
  }
  return;
}



// ==== FUN_01e2eef2 @ 01e2eef2 ====

void FUN_01e2eef2(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  param_1 = param_1 + param_2 * 2;
  uVar1 = *(ushort *)(param_1 + 0x20);
  uVar2 = uVar1 & 0xbfff;
  if (param_3 != 0) {
    uVar2 = uVar1 | 0x4000;
  }
  *(ushort *)(param_1 + 0x20) = uVar2;
  return;
}



// ==== FUN_01e2ef0a @ 01e2ef0a ====

void FUN_01e2ef0a(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfe;
  }
  else {
    *(byte *)(param_1 + 0x5d) = *(byte *)(param_1 + 0x5d) & 0xfe;
  }
  FUN_01e2eef2(1);
  return;
}



// ==== FUN_01e2ef22 @ 01e2ef22 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2ef22(int param_1,undefined1 param_2)

{
  if (_DAT_0002ed10 == param_1) {
    DAT_0000ca4f = param_2;
    FUN_01e2e244(1);
  }
  return;
}



// ==== FUN_01e2ef46 @ 01e2ef46 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2ef46(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  iVar3 = *(int *)(param_1 + 0xe4);
  uVar10 = *(uint *)(iVar3 + 0x30);
  *(short *)(iVar3 + 0x10) = (short)_DAT_001c0028 + 0x14;
  uVar6 = ((*(ushort *)(iVar3 + 0x3a) & 0xffff03ff) - 0x44) -
          ((*(ushort *)(iVar3 + 0x10) & 0xffe) >> 1);
  uVar7 = uVar6 + 0x271;
  sVar4 = (short)uVar7;
  sVar5 = (short)uVar6;
  if ((*(byte *)(param_1 + 0x27) & 9) == 0) {
    if ((int)uVar6 < 1) {
      if ((*(ushort *)(iVar3 + 0x34) & 1) == 0) {
        sVar4 = sVar5 + 0x4e2;
      }
    }
    else if ((*(ushort *)(iVar3 + 0x34) & 1) == 0) {
      sVar4 = sVar5;
    }
    *(short *)(param_1 + 0x34) = sVar4;
  }
  cVar1 = *(char *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  if (-1 < (int)uVar6) {
    uVar7 = uVar6;
  }
  uVar9 = (uint)*(short *)(param_1 + 0x32);
  uVar8 = uVar9 + 0x271;
  *(ushort *)(iVar3 + 0x38) = (ushort)uVar7 & 0x3ff;
  if (-1 < (int)uVar9) {
    uVar8 = uVar9;
  }
  if (cVar1 == '\0') {
    uVar8 = uVar8 & 0x3ff;
    if (uVar8 < 300) {
      if ((uint)*(ushort *)(iVar3 + 0x38) <= uVar8 + 0x144) goto LAB_01e2eff6;
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -1;
      uVar10 = uVar10 + 1;
    }
    else {
      if ((uVar8 < 0x145) || ((int)(uVar8 - 0x144) <= (int)(uint)*(ushort *)(iVar3 + 0x38)))
      goto LAB_01e2eff6;
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + 1;
      uVar10 = uVar10 - 1;
    }
  }
  else {
    uVar2 = *(ushort *)(iVar3 + 0x3a) >> 0xd;
    uVar7 = (uVar6 & 0x400) >> 10;
    *(ushort *)(param_1 + 0x36) = uVar2 - (short)uVar7;
    uVar10 = (uVar10 - uVar2) + uVar7;
  }
  FUN_01e2e6b2(uVar10);
LAB_01e2eff6:
  *(short *)(param_1 + 0x32) = sVar5;
  if (((*(char *)(param_1 + 10) != '\x03') && (*(char *)(param_1 + 0xd) == '\0')) &&
     (*(char *)(param_1 + 0xe) == '\0')) {
    FUN_01e2ef22(*(undefined4 *)(param_1 + 0xe4),(uVar10 & 1) != 0);
  }
  return;
}



// ==== FUN_01e2f214 @ 01e2f214 ====

void FUN_01e2f214(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xe4);
  if (param_2 != 0) {
    func_0x021127a8(param_1 + 0x1d,param_3,10);
    return;
  }
  *(byte *)(iVar1 + 0xc) = *(byte *)(iVar1 + 0xc) & 0xbf;
  *(byte *)(iVar1 + 0xd) = *(byte *)(iVar1 + 0xd) & 0xbf;
  return;
}



// ==== FUN_01e2f2b6 @ 01e2f2b6 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2f2b6(int param_1,int param_2)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  ushort uVar14;
  uint uVar15;
  ushort uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  BADSPACEBASE *in_sp;
  uint *puVar25;
  undefined1 local_60 [44];
  
  puVar25 = (uint *)local_60;
  bVar2 = *(byte *)(param_1 + 0x27);
  uVar7 = (uint)bVar2;
  puVar22 = (uint *)(uVar7 + 0xe4);
  if ((bVar2 & 2) == 0) {
    uVar24 = *puVar22;
    *(byte *)(param_1 + 0x27) = bVar2 | 2;
    func_0x0200206c();
    bVar2 = *(byte *)(uVar24 + 0xe);
    uVar19 = (uint)*(byte *)(uVar24 + 0x50c);
    *(uint *)((int)puVar25 + 0x28) = (uint)*(byte *)(uVar24 + 0x50d);
    if ((bVar2 & 1) == (*(byte *)(uVar24 + 0xe) & 1)) {
      func_0x0200207e();
      *(uint *)((int)puVar25 + 0x18) = uVar24 + 0x2c;
      *(uint *)((int)puVar25 + 0x14) = uVar24 + 0x28;
      *(undefined4 *)((int)puVar25 + 0x1c) = 0;
      uVar21 = 0xff;
LAB_01e2f316:
      uVar8 = *(uint *)((int)puVar25 + 0x28);
      do {
        *(uint *)((int)puVar25 + 0x24) = uVar19;
        uVar23 = uVar21;
        while( true ) {
          uVar13 = uVar23;
          if ((uVar19 & 1) != 0) {
            uVar13 = 0;
          }
          uVar21 = uVar23;
          if ((uVar8 & 0xffffff01) != 0) {
            uVar13 = 1;
            uVar21 = 1;
          }
          if ((uVar19 & 1) != 0) {
            uVar21 = 0;
          }
          if ((bVar2 & 1) != 0) {
            uVar21 = uVar13;
          }
          if (uVar21 == uVar23) goto LAB_01e2f890;
          uVar23 = 1 << uVar21;
          if (((*(byte *)(uVar7 + 0x10) & uVar23) == 0) ||
             ((*(byte *)(param_1 + 0x19) & uVar23) != 0)) break;
          if (*(char *)(uVar7 + 0xf) != '\0') goto LAB_01e2f890;
          FUN_01e2ef0a(*puVar22,uVar21);
          *(byte *)(uVar7 + 0x10) = *(byte *)(uVar7 + 0x10) & ~(byte)uVar23;
          uVar23 = uVar21;
        }
        FUN_01e2eef2(uVar24,uVar21,0);
        uVar1 = *(ushort *)(puVar25[5] + uVar21);
        puVar25[3] = (uint)*(ushort *)(puVar25[6] + uVar21);
        *puVar25 = param_2;
        if (param_2 != 0) {
          FUN_01e2eb70(uVar7);
        }
        *(uint *)((int)puVar25 + 0x10) = (uint)uVar1;
        uVar1 = uVar1 >> 8;
        uVar19 = *(uint *)((int)puVar25 + 0x24);
        if (((*(int *)((int)puVar25 + 0x20) == 1) && (*(int *)((int)puVar25 + 0x1c) == 0)) &&
           ((uVar1 & 0xff02) != 0)) {
          iVar18 = uVar7 + 0x28;
          if ((*(byte *)(param_1 + 0x27) & 0xc) == 0) {
            if ((*(byte *)(uVar7 + 0x2b) & 8) != 0) {
              *(undefined2 *)(uVar7 + 0x40) = *(undefined2 *)(_DAT_00012a7c + 2);
            }
            *(undefined1 *)(uVar7 + 0x17) = 0;
            FUN_01e2ef46(uVar7);
          }
          if ((*(byte *)(param_1 + 0x27) & 0xc) == 4) {
            if (((*(char *)(uVar7 + 0x12) == '\0') && (*(int *)(uVar7 + 0x114) == 0)) &&
               ((*(byte *)(param_1 + 0x27) & 0xd) == 0)) {
              *(int *)((int)puVar25 + 0x1c) = iVar18;
              uVar13 = ((*(ushort *)(*puVar22 + 0x88) | 0xc0) ^ 0x3f) -
                       (uint)(byte)(&DAT_01e22398)[(*(ushort *)(*puVar22 + 0x88) & 0x3f00) >> 8];
              iVar18 = (int)(char)uVar13;
              uVar19 = 2;
              if (0xfec < iVar18) {
                uVar19 = ~(uVar13 >> 7) & 1;
              }
              bVar6 = *(byte *)(*(int *)((int)puVar25 + 0x1c) + 5);
              uVar14 = 10;
              if (((bVar6 == 0) || (-0x14 < iVar18)) &&
                 ((uVar19 != 1 || (*(char *)(*(int *)((int)puVar25 + 0x1c) + 6) == '\0')))) {
                uVar14 = *(ushort *)
                          (&DAT_01e2df34 +
                          (*(byte *)(*(int *)((int)puVar25 + 0x1c) + 4) >> 2 & 0x1e));
              }
              uVar16 = *(short *)(param_1 + 0x30) + 1;
              *(ushort *)(param_1 + 0x30) = uVar16;
              iVar18 = *(int *)((int)puVar25 + 0x1c);
              if (uVar14 < uVar16) {
                *(undefined2 *)(param_1 + 0x30) = 0;
                if (uVar19 == 2) {
                  bVar6 = *(byte *)(iVar18 + 4);
                  if ((bVar6 & 6) == 0) {
                    *(byte *)(iVar18 + 4) = bVar6 | 4;
                    bVar3 = *(byte *)(iVar18 + 6);
                    if (bVar3 < 6) {
                      *(byte *)(iVar18 + 6) = bVar3 + 1;
                      bVar6 = bVar6 & 0x87 | 4;
                    }
                    else {
                      if ((bVar3 < 0xc) || (bVar3 < 0x12)) {
                        *(byte *)(*(int *)((int)puVar25 + 0x1c) + 6) = bVar3 + 1;
                      }
                      iVar18 = *(int *)((int)puVar25 + 0x1c);
                      bVar6 = bVar6 & 0x87 | 4 | (byte)iVar18;
                    }
                    *(byte *)(iVar18 + 4) = bVar6;
                    FUN_01e23cf0(uVar7,2,0xb,2);
                    iVar18 = *(int *)((int)puVar25 + 0x1c);
                    *(undefined1 *)(iVar18 + 5) = 0;
                    bVar6 = *(byte *)(iVar18 + 4) & 0xfe;
                    goto LAB_01e2f622;
                  }
                }
                else if ((uVar19 == 1) && (bVar3 = *(byte *)(iVar18 + 4), (bVar3 & 5) == 0)) {
                  *(byte *)(iVar18 + 4) = bVar3 | 4;
                  if (bVar6 < 6) {
                    *(byte *)(iVar18 + 5) = bVar6 + 1;
                    bVar6 = bVar3 & 0x87 | 4;
                  }
                  else {
                    if ((bVar6 < 0xc) || (bVar6 < 0x12)) {
                      *(byte *)(*(int *)((int)puVar25 + 0x1c) + 5) = bVar6 + 1;
                    }
                    iVar18 = *(int *)((int)puVar25 + 0x1c);
                    bVar6 = bVar3 & 0x87 | 4 | (byte)iVar18;
                  }
                  *(byte *)(iVar18 + 4) = bVar6;
                  FUN_01e23cf0(uVar7,2,0xb,1);
                  iVar18 = *(int *)((int)puVar25 + 0x1c);
                  *(undefined1 *)(iVar18 + 6) = 0;
                  bVar6 = *(byte *)(iVar18 + 4) & 0xfd;
LAB_01e2f622:
                  *(byte *)(iVar18 + 4) = bVar6;
                }
              }
            }
          }
          else if (*(char *)(uVar7 + 0x12) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(byte *)(iVar18 + 3) = *(byte *)(iVar18 + 3) & 0xf7;
          *(undefined4 *)((int)puVar25 + 0x1c) = 1;
          uVar19 = *(uint *)((int)puVar25 + 0x24);
        }
        if (uVar1 == 0x8f) {
          if ((*(uint *)((int)puVar25 + 0x10) & 0xf) < 3) {
LAB_01e2f860:
            FUN_01e2ef0a(uVar24,uVar21);
LAB_01e2f868:
            param_2 = *puVar25;
          }
          else {
            if ((*(uint *)((int)puVar25 + 0x10) & 0xf) == 9) {
              FUN_01e36848(4,s_<Error>___BL_aux1_packet_01e1bfab);
              goto LAB_01e2f860;
            }
            uVar13 = (*(uint *)((int)puVar25 + 0xc) & 0x1ff8) >> 3;
            if (uVar13 == 0) goto LAB_01e2f860;
            uVar15 = *(uint *)((int)puVar25 + 0xc) & 3;
            uVar19 = uVar21;
            if (uVar15 != 3) {
LAB_01e2f3f4:
              uVar17 = *(uint *)((uVar7 + 0x5c + uVar21) * 4);
              uVar11 = *puVar22;
              if (uVar15 == 3) {
                puVar25[3] = uVar17;
                puVar25[2] = uVar11;
                puVar25[4] = uVar21;
                uVar5 = *(undefined1 *)(uVar7 + 8);
LAB_01e2f472:
                iVar18 = FUN_01e2a76e(uVar5,uVar13);
                uVar15 = *(uint *)((int)puVar25 + 0x24);
                uVar11 = 1;
                uVar19 = uVar15;
LAB_01e2f482:
                if (iVar18 != 0) {
                  *(uint *)((int)puVar25 + 0x24) = uVar11;
                  *(short *)(iVar18 + 8) = (short)uVar13;
                  *(char *)(iVar18 + 10) = (char)uVar15;
                  *(int *)((int)puVar25 + 4) = iVar18;
                  func_0x021127a8(iVar18 + 0x20,*(undefined4 *)((int)puVar25 + 0xc),uVar13);
                  return;
                }
                iVar18 = *(int *)((int)puVar25 + 0x10);
                *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | (byte)(1 << iVar18);
                *(byte *)(uVar7 + 0x10) = *(byte *)(uVar7 + 0x10) | (byte)(1 << iVar18);
                if ((*(byte *)(param_1 + 0x27) & 4) == 0) {
                  puVar10 = &DAT_01e1af30;
                }
                else {
                  puVar10 = &DAT_01e1af32;
                }
                FUN_01e36928(puVar10);
              }
              else {
                if (uVar15 != 2) {
                  uVar15 = *(uint *)(uVar7 + 0x104);
                  if (uVar15 != 0) {
                    puVar25[3] = uVar17;
                    puVar25[2] = uVar11;
                    puVar25[4] = uVar21;
                    uVar1 = *(ushort *)(uVar15 + 8);
                    uVar14 = *(ushort *)(uVar15 + 0x200);
                    puVar25[1] = uVar15;
                    uVar19 = uVar14 + 4;
                    if (uVar1 + uVar13 <= uVar19) {
                      *puVar25 = uVar19;
                      func_0x021127a8((uint)uVar1 + puVar25[1] + 0x20,puVar25[3]);
                      return;
                    }
                    FUN_01e2a738(puVar25[1]);
                    *(undefined4 *)(uVar7 + 0x104) = 0;
                    uVar11 = *(uint *)((int)puVar25 + 8);
                    uVar19 = *(uint *)((int)puVar25 + 0x10);
                  }
                  goto LAB_01e2f4e4;
                }
                puVar25[3] = uVar17;
                puVar25[2] = uVar11;
                puVar25[4] = uVar21;
                uVar5 = 0;
                if (*(char *)(uVar7 + 0x11) != '\0') goto LAB_01e2f472;
                iVar18 = *(int *)(uVar7 + 0x104);
                uVar19 = puVar25[9];
                puVar25[1] = 2;
                if (iVar18 != 0) {
                  FUN_01e2a738();
                  *(undefined4 *)(uVar7 + 0x104) = 0;
                }
                if (*(ushort *)puVar25[3] + 4 < 0x800) {
                  uVar5 = *(undefined1 *)(uVar7 + 8);
                  *puVar25 = *(ushort *)puVar25[3] + 4;
                  iVar18 = FUN_01e2a76e(uVar5);
                  uVar15 = *puVar25;
                  if (uVar15 > uVar13) {
                    *(int *)(uVar7 + 0x104) = iVar18;
                  }
                  uVar11 = (uint)(uVar15 <= uVar13);
                  uVar15 = puVar25[1];
                  goto LAB_01e2f482;
                }
                FUN_01e36848(4,s_<Error>___BL_l2cap_len____x_01e1c4d7);
                iVar18 = *puVar25;
                FUN_01e2ef0a(puVar25[2],iVar18);
                *(byte *)(uVar7 + 0x10) = *(byte *)(uVar7 + 0x10) & ~(byte)(1 << iVar18);
                *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & ~(byte)(1 << iVar18);
              }
              goto LAB_01e2f868;
            }
            pbVar20 = *(byte **)((uVar7 + 0x5c + uVar21) * 4);
            bVar6 = *pbVar20;
            uVar11 = bVar6 & 0xfffffffe;
            if (uVar11 != 0x78) {
              *(uint *)((int)puVar25 + 0x10) = uVar11;
              if ((*(byte *)(param_1 + 0x27) & 9) == 0) {
                *(undefined4 *)((int)puVar25 + 4) = 3;
                *(uint *)((int)puVar25 + 0xc) = (uint)bVar6;
                pbVar9 = (byte *)FUN_01e2a714(uVar7);
                uVar15 = *(uint *)((int)puVar25 + 4);
                if (pbVar9 != (byte *)0x0) {
                  if (*(int *)((int)puVar25 + 0x10) == 6) {
                    if (pbVar20[1] == 0x18) {
                      *pbVar9 = (byte)*(undefined4 *)((int)puVar25 + 0xc) & 1;
                      FUN_01e337d6();
                      goto LAB_01e2f3ee;
                    }
                  }
                  else if (*(int *)((int)puVar25 + 0x10) == 0x30) {
                    *pbVar9 = (byte)*(undefined4 *)((int)puVar25 + 0xc) & 1;
                    FUN_01e33aba();
LAB_01e2f3ee:
                    uVar11 = *puVar22;
                    goto LAB_01e2f4e4;
                  }
                }
              }
              goto LAB_01e2f3f4;
            }
            FUN_01e2f214(uVar7,(uint)pbVar20[1] |
                               (uint)pbVar20[4] << 0x18 | (uint)pbVar20[3] << 0x10 |
                               (uint)pbVar20[2] << 8,pbVar20[5],pbVar20 + 6);
            uVar11 = uVar24;
LAB_01e2f4e4:
            FUN_01e2ef0a(uVar11,uVar19);
            param_2 = *puVar25;
            uVar19 = puVar25[9];
          }
          if (param_2 != 0) {
            uVar12 = FUN_01e2e2b2();
            *(undefined4 *)(uVar7 + 0x3c) = uVar12;
          }
          *(undefined1 *)(uVar7 + 0x14) = 0;
        }
        else {
          if ((((uVar1 & 0xff22) != 2) && (cVar4 = *(char *)(uVar7 + 0x14), cVar4 != -1)) &&
             (*(char *)(uVar7 + 0x14) = cVar4 + '\x01', 6 < (byte)(cVar4 + 1U))) {
            *(undefined1 *)(uVar7 + 0x14) = 0;
            iVar18 = FUN_01e2eab2(uVar7,1,1);
            if (iVar18 == 2) {
              *(undefined1 *)(uVar7 + 0x14) = 0xff;
            }
          }
          FUN_01e2ef0a(uVar24,uVar21);
          param_2 = *puVar25;
        }
        if ((*(byte *)(param_1 + 0x19) & uVar23) != 0) goto LAB_01e2f890;
        if (uVar21 != 0) goto code_r0x01e2f886;
        uVar19 = 0;
        uVar21 = 0;
        if (*(int *)((int)puVar25 + 0x28) == 0) goto LAB_01e2f890;
      } while( true );
    }
    *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) & 0xfd;
    func_0x0200207e();
  }
  return;
code_r0x01e2f886:
  *(undefined4 *)((int)puVar25 + 0x28) = 0;
  if (uVar19 == 0) {
LAB_01e2f890:
    *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) & 0xfd;
    return;
  }
  goto LAB_01e2f316;
}



// ==== FUN_01e2fa5c @ 01e2fa5c ====

void FUN_01e2fa5c(int param_1,char param_2,byte param_3)

{
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0x60 | param_3 & 0x1f | param_2 << 7;
  return;
}



// ==== FUN_01e2fa70 @ 01e2fa70 ====

void FUN_01e2fa70(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}



// ==== FUN_01e2fa90 @ 01e2fa90 ====

void FUN_01e2fa90(int param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 6) = *param_2;
  *(undefined2 *)(param_1 + 8) = param_2[1];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 2);
  return;
}



// ==== FUN_01e2faaa @ 01e2faaa ====

/* WARNING: Removing unreachable block (ram,0x01e2fabc) */

void FUN_01e2faaa(void)

{
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}



// ==== FUN_01e2fcf8 @ 01e2fcf8 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2fcf8(int param_1,int param_2,int param_3)

{
  if (0x7ffe < (uint)(param_3 - _DAT_001cfc44)) {
    FUN_01e1678a();
  }
  *(short *)((param_1 + 0x18 + param_2) * 2) = (short)param_3 - (short)_DAT_001cfc44;
  return;
}



// ==== FUN_01e3014a @ 01e3014a ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e3014a(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    FUN_01e2a738();
  }
  func_0x0200206c();
  puVar1 = (undefined4 *)&DAT_00012a74;
  while (puVar1 = (undefined4 *)*puVar1, puVar1 != (undefined4 *)&DAT_00012a74) {
    if (((puVar1[0x39] != 0) && (*(char *)((int)puVar1 + 0xf) == '\0')) && (puVar1[0x45] == 0)) {
      FUN_01e2f2b6(puVar1,0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e30812 @ 01e30812 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e30812(void)

{
  _DAT_001c0018 = _DAT_001c0018 | 0x200;
  _DAT_001c000c = _DAT_001c000c & 0x200;
  return;
}



// ==== FUN_01e30a8a @ 01e30a8a ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e30a8a(int param_1,undefined2 param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)CONCAT24(param_2,param_1);
  if ((0x7ff < (uint)(param_1 - _DAT_001cfc44)) && (0x7ff < (uint)(param_1 - _DAT_001cfc44))) {
    FUN_01e1678a();
  }
  if (0xb9d3 < (uint)uVar2) {
    FUN_01e1678a();
  }
  func_0x0200206c();
  for (iVar1 = 0; _DAT_0002ed10 = (undefined4)uVar2, iVar1 != 0x10; iVar1 = iVar1 + 1) {
    *(ushort *)((int)(&DAT_0000b648 + iVar1) * 2) =
         *(ushort *)(&DAT_0000b648 + iVar1) & 0xf800 | (short)uVar2 - (short)_DAT_001cfc44;
  }
  DAT_0000ca4f = (undefined1)(uVar2 >> 0x20);
  FUN_01e2e244(1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e30b04 @ 01e30b04 ====

void FUN_01e30b04(byte *param_1)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = 0;
  if ((byte)(*param_1 + 1) < 6) {
    bVar2 = *param_1 + 1;
  }
  cVar1 = (&DAT_01e1aa75)[bVar2];
  *param_1 = bVar2;
  FUN_01e2e070(0,(int)cVar1);
  return;
}



// ==== FUN_01e32d24 @ 01e32d24 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e32d24(int param_1)

{
  _DAT_001cfd40 = ~(1 << param_1) & 0x1cfd40U | 0x100 << param_1;
  return;
}



// ==== FUN_01e32d64 @ 01e32d64 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e32d64(void)

{
  return _DAT_001c0024;
}



// ==== FUN_01e3334c @ 01e3334c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e3334c(int param_1,int param_2)

{
  byte *pbVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x6c);
  pbVar1 = *(byte **)(param_1 + 0x70);
  if (pbVar1 == (byte *)0x0) {
    return;
  }
  FUN_01e07764();
  func_0x0200206c();
  *pbVar1 = *pbVar1 & 0xfe;
  DAT_00004a50 = DAT_00004a50 + -1;
  FUN_01e2e6cc(*piVar2,6);
  if (pbVar1[3] != 0xff) {
    FUN_01e2e3b4();
  }
  thunk_FUN_01e3d7dc(pbVar1);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (_DAT_00004a54 == param_1) {
    _DAT_00004a54 = _DAT_00004a58;
  }
  else if (_DAT_00004a58 != param_1) goto LAB_01e333b4;
  _DAT_00004a58 = 0;
LAB_01e333b4:
  FUN_01e16706(0);
  FUN_01e1671e(*piVar2 + 200,1);
  if (param_2 != 0) {
    FUN_01e16752(*piVar2 + 200,0x40);
  }
  func_0x0200207e();
  return;
}



// ==== FUN_01e337d6 @ 01e337d6 ====

void FUN_01e337d6(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x70);
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    *pbVar2 = bVar1 | 8;
    FUN_01e3334c((bVar1 & 1) != 0);
    *(undefined1 *)(param_1 + 0x47) = 0;
    FUN_01e29442(*(undefined2 *)(param_1 + 0x50),0);
  }
  return;
}



// ==== FUN_01e33aba @ 01e33aba ====

void FUN_01e33aba(int param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 0x70);
  if (pbVar1 != (byte *)0x0) {
    if (*(char *)(param_1 + 0x206) == '\0') {
      *pbVar1 = *pbVar1 | 8;
      switchD_01e29504::caseD_86(param_1,&DAT_01e1aff0,6,0x18);
      return;
    }
    switchD_01e29504::caseD_86(param_1,&DAT_01e1af6c,6,0x18);
    FUN_01e3334c(param_1,(*pbVar1 & 1) != 0);
    *(undefined1 *)(param_1 + 0x47) = 0;
    FUN_01e29442(*(undefined2 *)(param_1 + 0x50),0);
  }
  return;
}



// ==== FUN_01e3532c @ 01e3532c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e3532c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_01e360aa(_DAT_0001af48,param_1 + 0x18);
  if (iVar1 != 0) {
    func_0x021127b4(0,0x18);
    *(undefined1 *)(iVar1 + 6) = 2;
  }
  return iVar1;
}



// ==== FUN_01e3579e @ 01e3579e ====

int FUN_01e3579e(undefined1 *param_1)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = (uint)DAT_000067a8;
  puVar2 = (uint *)(uVar1 * 0x24 + 0x66bc);
  *param_1 = (char)((*puVar2 & 0x78) >> 3);
  param_1[1] = (char)((*puVar2 & 4) >> 2);
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x021127a8(param_1 + 4,uVar1 * 0x24 + 0x66c0,(*puVar2 & 0x7f80) >> 7);
  uVar1 = *(uint *)((uint)DAT_000067a8 * 0x24 + 0x66bc);
  *(uint *)((uint)DAT_000067a8 * 0x24 + 0x66bc) = uVar1 | 2;
  return ((uVar1 & 0x7f80) >> 7) + 4;
}



// ==== FUN_01e3582e @ 01e3582e ====

void FUN_01e3582e(char *param_1)

{
  if (*param_1 == '\0') {
    DAT_00006704 = param_1[4];
  }
  return;
}



// ==== FUN_01e358e8 @ 01e358e8 ====

void FUN_01e358e8(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  do {
    if (param_2 <= iVar6) {
      return;
    }
    bVar1 = *param_1;
    if (((uint)DAT_00006708 < (uint)bVar1) || (7 < (int)((uint)DAT_00006708 - (uint)bVar1))) {
      DAT_00006708 = bVar1;
      iVar2 = FUN_01e2bfac(0,*(undefined4 *)(param_1 + 0xc));
      for (piVar4 = &DAT_01e35c08; piVar4 < &DAT_01e35c08; piVar4 = piVar4 + 2) {
        if (*piVar4 == *(int *)(param_1 + 4)) {
          if (piVar4[1] != 0) {
            iVar5 = 2;
            if (iVar2 - 4U < 0x41eaffd) {
              iVar5 = (iVar2 * 0x271) / 1000;
            }
            FUN_01e3722c(*(undefined4 *)(param_1 + 8),iVar5);
            thunk_FUN_01e2e2b2();
            uVar3 = FUN_01e32d64();
            if (uVar3 < 0x38) {
              thunk_FUN_01e2e2b2();
            }
          }
          break;
        }
      }
    }
    param_1 = param_1 + 0x10;
    iVar6 = iVar6 + 0x10;
  } while( true );
}



// ==== FUN_01e35990 @ 01e35990 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e35990(void)

{
  FUN_01e362d2(_DAT_0001af48);
  return;
}



// ==== FUN_01e359a2 @ 01e359a2 ====

void FUN_01e359a2(int param_1)

{
  DAT_00007791 = DAT_00007791 | (byte)(1 << param_1);
  return;
}



// ==== FUN_01e35abc @ 01e35abc ====

uint FUN_01e35abc(undefined1 *param_1)

{
  uint uVar1;
  
  func_0x0200206c();
  uVar1 = DAT_00006fc9 & 0xffffff01;
  if ((&DAT_000068e6)[uVar1] != '\0') {
    DAT_00006849 = DAT_00006fc9 | 2;
    *param_1 = DAT_00006fc8;
    func_0x021127a8(param_1 + 1,uVar1 * 0x10 + 0x6f64);
    FUN_01e367de(s_tws_key_sync_tx___d___d_01e19bc7,uVar1,(&DAT_000068e6)[uVar1]);
  }
  func_0x0200207e();
  uVar1 = (uint)(byte)(&DAT_000068e6)[uVar1];
  if (uVar1 != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}



// ==== FUN_01e35b62 @ 01e35b62 ====

void FUN_01e35b62(char *param_1,int param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  BADSPACEBASE *in_sp;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 local_28 [5];
  
  puVar3 = local_28;
  puVar1 = local_28;
  iVar5 = 5;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (*param_1 != cRam00006fc7) {
    local_28[1] = 0x54575300;
    local_28[0]._0_1_ = 1;
    pcVar2 = param_1 + 1;
    DAT_00006847 = *param_1;
    FUN_01e367de(s_tws_key_sync_rx___d___d___d_01e19b88,param_2,*(undefined4 *)pcVar2,param_1[2]);
    puVar4 = (undefined1 *)puVar3;
    for (iVar5 = 1; iVar5 < param_2; iVar5 = iVar5 + 8) {
      *(char *)((int)puVar3 + 9) = *pcVar2;
      *(char *)((int)puVar3 + 10) = pcVar2[1];
      FUN_01e36bcc(puVar4);
      pcVar2 = pcVar2 + 2;
    }
  }
  return;
}



// ==== FUN_01e35c06 @ 01e35c06 ====

void FUN_01e35c06(void)

{
  return;
}



// ==== FUN_01e35d74 @ 01e35d74 ====

void FUN_01e35d74(int param_1,int *param_2)

{
  *(int **)(param_1 + 4) = param_2;
  *param_2 = param_1;
  return;
}



// ==== thunk_EXT_FUN_0200010a @ 01e35d7a ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e35d7e @ 01e35d7e ====

void FUN_01e35d7e(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 4);
  *(int *)(param_2 + 4) = param_1;
  *(int **)(param_1 + -4) = piVar1;
  *(int *)(param_1 + -8) = param_2;
  *piVar1 = param_1;
  return;
}



// ==== FUN_01e35d8a @ 01e35d8a ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e35d8a(int param_1)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *extraout_r1;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  if (param_1 != 0) {
    plVar12 = (longlong *)((param_1 + -0x1c) - (uint)*(ushort *)(param_1 + -0xe));
    if ((*(int *)(param_1 + -0x1c) != 0x12345678) || (*(int *)(param_1 + -8) != 0x23456789)) {
      thunk_EXT_FUN_0200010a();
    }
    if (((int)*plVar12 != -0x789abcdf) || ((int)plVar12[5] != -0x6789abce)) {
      thunk_EXT_FUN_0200010a();
    }
    uVar1 = *(ushort *)(param_1 + 0x1f0);
    uVar9 = (uint)*(ushort *)((int)plVar12 + 0x1a);
    bVar2 = *(byte *)(plVar12 + 0x21);
    func_0x0200206c();
    cVar3 = *(char *)(param_1 + -0xc) + -1;
    *(char *)(param_1 + -0xc) = cVar3;
    uVar8 = bVar2 + 0x1ffff;
    iVar10 = 0;
    if ((uVar8 & uVar9 + 0x1c) != 0) {
      iVar10 = (uVar8 & uVar9 + 0x1c) - (uint)bVar2;
    }
    if (cVar3 == '\0') {
      *(undefined4 *)(param_1 + -0x1c) = 0x1234567;
      plVar11 = (longlong *)(iVar10 + param_1 + -0x1c);
      FUN_01e35d74((int)*(undefined8 *)(param_1 + 0x70e08));
      *(uint *)(plVar11 + 1) = (uint)uVar1;
      for (plVar4 = *(longlong **)((int)plVar12 + 0xc); plVar4 != (longlong *)((int)plVar12 + 0xc);
          plVar4 = *(longlong **)plVar4) {
        if ((plVar4 <= plVar12) ||
           ((longlong *)(*(int *)((int)plVar12 + 0x1c) + (int)plVar12) < plVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (plVar11 < plVar4) {
          puVar7 = *(undefined4 **)((int)plVar4 + 4);
          lVar6 = CONCAT44(puVar7,plVar4);
          *(longlong **)((int)plVar4 + 4) = plVar11;
          *plVar11 = lVar6;
          *puVar7 = plVar11;
          goto LAB_01e35e56;
        }
        if (plVar11 < (longlong *)((int)plVar4[1] + (int)plVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      FUN_01e35d7e(plVar11);
      lVar6 = (ulonglong)*(uint *)((int)plVar11 + 4) << 0x20;
LAB_01e35e56:
      iVar10 = (int)((ulonglong)lVar6 >> 0x20);
      puVar5 = *(undefined8 **)plVar11;
      if ((longlong *)(*(int *)(iVar10 + 8) + iVar10) == plVar11) {
        *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + (int)plVar11[1];
        puVar5 = (undefined8 *)FUN_01e35d74();
        plVar11 = extraout_r1;
      }
      if ((undefined8 *)((int)plVar11 + (int)plVar11[1]) == puVar5) {
        *(int *)(plVar11 + 1) = (int)plVar11[1] + *(int *)(puVar5 + 1);
        FUN_01e35d74((int)*puVar5);
      }
    }
    func_0x0200207e();
  }
  return;
}



// ==== FUN_01e35e88 @ 01e35e88 ====

void FUN_01e35e88(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  
  uVar6 = CONCAT44(param_2,param_1);
  piVar9 = (int *)((param_1 + -0x1c) - (uint)*(ushort *)(param_1 + -0xe));
  if ((*(int *)(param_1 + -0x1c) != 0x12345678) || (*(int *)(param_1 + -8) != 0x23456789)) {
    thunk_EXT_FUN_0200010a();
  }
  if ((*piVar9 != -0x789abcdf) || (piVar9[10] != -0x6789abce)) {
    thunk_EXT_FUN_0200010a();
  }
  uVar4 = (ushort)*(byte *)(piVar9 + 0x42) - 1;
  uVar7 = (uint)((ulonglong)uVar6 >> 0x20);
  iVar2 = 0;
  if ((uVar4 & uVar7) != 0) {
    iVar2 = (uint)(ushort)*(byte *)(piVar9 + 0x42) - (uVar4 & uVar7);
  }
  iVar5 = (int)uVar6;
  uVar1 = *(ushort *)(iVar5 + -0x10);
  uVar7 = uVar7 + iVar2;
  if ((int)(uint)uVar1 <= (int)uVar7 && uVar7 != uVar1) {
    thunk_EXT_FUN_0200010a();
    uVar1 = *(ushort *)(iVar5 + -0x10);
  }
  if ((int)uVar7 <= (int)(uint)uVar1 && uVar1 != uVar7) {
    uVar8 = *(byte *)(piVar9 + 0x42) + 0x1ffff;
    uVar4 = *(ushort *)((int)piVar9 + 0x1a) + 0x1c;
    iVar2 = 0;
    if ((uVar8 & uVar4) != 0) {
      iVar2 = (uint)*(byte *)(piVar9 + 0x42) - (uVar8 & uVar4);
    }
    if ((0xb < uVar1 - uVar7) && ((int)((uVar4 + iVar2) * 2) <= (int)(uVar1 - uVar7))) {
      *(short *)(iVar5 + -0x10) = (short)(uVar4 + iVar2) + (short)uVar7;
      puVar3 = (undefined4 *)(iVar2 + (uint)*(ushort *)((int)piVar9 + 0x1a) + iVar5 + uVar7);
      *(undefined1 *)((int)puVar3 + 0x11) = 0;
      *(undefined1 *)(puVar3 + 4) = 1;
      *(ushort *)(puVar3 + 3) = uVar1 - *(short *)(iVar5 + -0x10);
      *(short *)((int)puVar3 + 0xe) = (short)puVar3 - (short)piVar9;
      *puVar3 = 0x12345678;
      puVar3[5] = 0x23456789;
      puVar3[1] = puVar3 + 1;
      puVar3[2] = puVar3 + 1;
      FUN_01e35d8a((short)puVar3 + 0x1c);
    }
  }
  return;
}



// ==== FUN_01e35f56 @ 01e35f56 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e35f56(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((param_1 + -0x1c) - (uint)*(ushort *)(param_1 + -0xe));
  if ((*(int *)(param_1 + -0x1c) != 0x12345678) || (*(int *)(param_1 + -8) != 0x23456789)) {
    thunk_EXT_FUN_0200010a();
  }
  if ((*piVar3 != -0x789abcdf) || (piVar3[10] != -0x6789abce)) {
    thunk_EXT_FUN_0200010a();
  }
  func_0x0200206c();
  cVar1 = '\0';
  iVar2 = 0;
  *(undefined1 *)(param_1 + -0xc) = 0;
  do {
    if (iVar2 == 0) {
      cVar1 = cVar1 + '\x01';
      *(char *)(param_1 + -0xc) = cVar1;
    }
    else if (iVar2 == 8) {
      *(undefined1 *)(param_1 + -0xb) = 1;
      if (*(int *)(param_1 + -0x18) == param_1 + -0x18) {
        if ((*(int *)(param_1 + -0x1c) != 0x12345678) || (*(int *)(param_1 + -8) != 0x23456789)) {
          thunk_EXT_FUN_0200010a();
        }
        if ((*piVar3 != -0x789abcdf) || (piVar3[10] != -0x6789abce)) {
          thunk_EXT_FUN_0200010a();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((*(int *)(param_1 + -0x1c) != 0x12345678) || (*(int *)(param_1 + -8) != 0x23456789)) {
        thunk_EXT_FUN_0200010a();
      }
      if ((*piVar3 != -0x789abcdf) || (piVar3[10] != -0x6789abce)) {
        thunk_EXT_FUN_0200010a();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = iVar2 + 1;
  } while( true );
}



// ==== FUN_01e36048 @ 01e36048 ====

int * FUN_01e36048(int *param_1)

{
  int *piVar1;
  
  func_0x0200206c();
  piVar1 = (int *)param_1[1];
  if (piVar1 != param_1 + 1) {
    *(byte *)((int)piVar1 + 0xd) = *(byte *)((int)piVar1 + 0xd) & 0xfe;
    func_0x0200207e();
    if ((piVar1[-1] != 0x12345678) || (piVar1[4] != 0x23456789)) {
      thunk_EXT_FUN_0200010a();
    }
    if ((*param_1 != -0x789abcdf) || (param_1[10] != -0x6789abce)) {
      thunk_EXT_FUN_0200010a();
    }
    return piVar1 + 6;
  }
  func_0x0200207e();
  return (int *)0x0;
}



// ==== FUN_01e360aa @ 01e360aa ====

/* WARNING: Control flow encountered bad instruction data */

undefined4 * FUN_01e360aa(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 in_r0_r1;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  
  puVar1 = (undefined8 *)in_r0_r1;
  iVar11 = 0;
  uVar5 = (uint)*(byte *)(puVar1 + 0x21);
  uVar8 = *(ushort *)((int)puVar1 + 0x1a) + 0x1c;
  uVar2 = uVar5 - 1;
  puVar10 = (undefined8 *)0x0;
  if ((uVar2 & uVar8) != 0) {
    iVar11 = uVar5 - (uVar2 & uVar8);
  }
  uVar8 = (int)((ulonglong)in_r0_r1 >> 0x20) + uVar8 + iVar11;
  iVar6 = 0;
  if ((uVar8 & uVar2) != 0) {
    iVar6 = uVar5 - (uVar8 & uVar2);
  }
  uVar8 = iVar6 + uVar8;
  func_0x0200206c();
  for (puVar9 = *(undefined8 **)((int)puVar1 + 0xc); puVar9 != (undefined8 *)((int)puVar1 + 0xcU);
      puVar9 = *(undefined8 **)puVar9) {
    if ((puVar9 <= puVar1) || ((undefined8 *)(*(int *)((int)puVar1 + 0x1c) + (int)puVar1) < puVar9))
    {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (uVar8 <= *(uint *)(puVar9 + 1)) {
      if ((puVar10 == (undefined8 *)0x0) || (*(uint *)(puVar9 + 1) < *(uint *)(puVar10 + 1))) {
        puVar10 = puVar9;
      }
      if (*(undefined8 **)(puVar1 + 4) < puVar9) goto LAB_01e3612c;
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_01e3612c:
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = puVar10;
  }
  if (puVar9 == (undefined8 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *(undefined8 **)(puVar1 + 4) = puVar9;
    uVar2 = *(uint *)(puVar9 + 1);
    if (uVar8 + 0xc < uVar2) {
      iVar6 = (int)puVar9 + uVar8;
      *(uint *)(iVar6 + 8) = uVar2 - uVar8;
      piVar7 = *(int **)puVar9;
      iVar4 = *(int *)((int)puVar9 + 4);
      *(int *)(iVar4 + 4) = iVar6;
      *(int **)(iVar6 + -4) = piVar7;
      *(int *)(iVar6 + -8) = iVar4;
      *piVar7 = iVar6;
      uVar2 = uVar8;
    }
    else {
      FUN_01e35d74((int)*puVar9);
    }
    puVar3 = (undefined4 *)((int)puVar9 + iVar11);
    *(short *)(puVar3 + 3) = (short)uVar2;
    *(short *)((int)puVar3 + 0xe) = (short)puVar3 - (short)in_r0_r1;
    *(undefined1 *)((int)puVar3 + 0x11) = 0;
    *(undefined1 *)(puVar3 + 4) = 1;
    *puVar3 = 0x12345678;
    puVar3[5] = 0x23456789;
    puVar3[1] = puVar3 + 1;
    puVar3[2] = puVar3 + 1;
    puVar3 = puVar3 + 7;
  }
  func_0x0200207e(puVar3);
  return puVar3;
}



// ==== FUN_01e3619a @ 01e3619a ====

undefined4 * FUN_01e3619a(uint param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = 4 - (param_1 & 3);
  if ((param_1 & 3) == 0) {
    iVar1 = 0;
  }
  puVar3 = (undefined4 *)(iVar1 + param_1);
  puVar2 = puVar3 + 0xb;
  iVar1 = 0;
  if (((uint)puVar2 & 3) != 0) {
    iVar1 = 4 - ((uint)puVar2 & 3);
  }
  iVar1 = (int)puVar2 + iVar1;
  *(uint *)(iVar1 + 8) = (param_1 + param_2) - iVar1;
  *(undefined1 *)(puVar3 + 6) = 4;
  *(undefined2 *)((int)puVar3 + 0x1a) = 0;
  puVar3[8] = 0;
  *puVar3 = 0x87654321;
  puVar3[10] = 0x98765432;
  puVar3[7] = param_2;
  puVar3[5] = 0;
  puVar3[1] = puVar3 + 1;
  *(ulonglong *)(puVar3 + 2) = CONCAT44(puVar3 + 3,puVar3 + 1);
  puVar3[4] = puVar3 + 3;
  FUN_01e35d7e(iVar1);
  return puVar3;
}



// ==== FUN_01e361fc @ 01e361fc ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e361fc(int param_1)

{
  int *piVar1;
  int iVar2;
  
  func_0x0200206c();
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0xc);
  while (piVar1 = (int *)*piVar1, piVar1 != (int *)(param_1 + 0xc)) {
    iVar2 = iVar2 + piVar1[2];
  }
  piVar1 = (int *)(param_1 + 4);
  do {
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)(param_1 + 4));
  FUN_01e367de(s_lbuf_state__x__x_01e197ed,*(undefined4 *)(param_1 + 0x1c),iVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e36232 @ 01e36232 ====

void FUN_01e36232(int param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    return;
  }
  piVar1 = (int *)((param_1 + -0x1c) - (uint)*(ushort *)(param_1 + -0xe));
  if ((*(int *)(param_1 + -0x1c) != 0x12345678) || (*(int *)(param_1 + -8) != 0x23456789)) {
    thunk_EXT_FUN_0200010a();
  }
  if ((*piVar1 == -0x789abcdf) && (piVar1[10] == -0x6789abce)) {
    return;
  }
  thunk_EXT_FUN_0200010a();
  return;
}



// ==== FUN_01e36274 @ 01e36274 ====

undefined2 FUN_01e36274(int param_1)

{
  return *(undefined2 *)(param_1 + -0x10);
}



// ==== FUN_01e362d2 @ 01e362d2 ====

/* WARNING: Control flow encountered bad instruction data */

uint FUN_01e362d2(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  func_0x0200206c();
  iVar3 = 0;
  if (*(int **)(param_1 + 0xc) == (int *)(param_1 + 0xc)) {
    func_0x0200207e();
    uVar1 = (uint)*(byte *)(param_1 + 0x108);
    uVar4 = *(ushort *)(param_1 + 0x1a) + 0x1c;
    iVar2 = 0x1c;
    if ((uVar1 + 0x1ffff & uVar4) != 0) {
      iVar2 = (uVar1 + 0x1c) - (uVar1 + 0x1ffff & uVar4);
    }
    uVar4 = 0;
    if ((int)(iVar2 + (uint)*(ushort *)(param_1 + 0x1a)) <= iVar3) {
      uVar4 = ~-uVar1;
    }
    return uVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e36324 @ 01e36324 ====

int FUN_01e36324(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = 0;
  pcVar2 = (char *)*param_1;
  while (8 < (byte)(*pcVar2 - 0x30U)) {
    *param_1 = pcVar2 + 1;
    iVar1 = iVar1 * 10 + (int)*pcVar2 + -0x30;
    pcVar2 = pcVar2 + 1;
  }
  return iVar1;
}



// ==== FUN_01e3634a @ 01e3634a ====

undefined4 FUN_01e3634a(int *param_1,undefined1 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((param_1 != (int *)0x0) &&
     ((param_2 == (undefined1 *)0x0 || (uVar1 = 0, (undefined1 *)*param_1 < param_2)))) {
    *(undefined1 *)*param_1 = param_3;
    *param_1 = *param_1 + 1;
    uVar1 = 1;
  }
  return uVar1;
}



// ==== FUN_01e36366 @ 01e36366 ====

/* WARNING: Control flow encountered bad instruction data */

int FUN_01e36366(undefined4 param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (0 < param_3) {
    for (iVar2 = 0; *(char *)(param_2 + iVar2) != '\0'; iVar2 = iVar2 + 1) {
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = 0;
  while( true ) {
    pcVar1 = (char *)(param_2 + 1);
    param_2 = param_2 + 1;
    if ((*pcVar1 == '\0') || (iVar4 = FUN_01e3634a(param_1), iVar4 == 0)) break;
    iVar2 = iVar2 + 1;
  }
  iVar4 = 0;
  while ((0 < param_3 + iVar4 && (iVar3 = FUN_01e3634a(param_1,0x20), iVar3 != 0))) {
    iVar4 = iVar4 + -1;
  }
  return iVar2 - iVar4;
}



// ==== FUN_01e363e6 @ 01e363e6 ====

int FUN_01e363e6(undefined4 param_1,uint param_2,uint param_3,int param_4,char param_5)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  BADSPACEBASE *in_sp;
  undefined1 *puVar7;
  uint *puVar8;
  undefined1 local_30 [4];
  int iStack_2c;
  uint uStack_28;
  char local_22 [2];
  
  iVar3 = iStack_2c;
  puVar7 = local_30;
  if (param_2 == 0) {
    iStack_2c = CONCAT22(iStack_2c._2_2_,0x30);
    iVar3 = FUN_01e36366(param_1,&iStack_2c,iVar3);
  }
  else {
    local_22[1] = 0;
    uVar1 = (uint)(param_3 == 10 && param_4 != 0);
    uVar5 = -param_2;
    if ((param_2 >> 0x1f & uVar1) == 0) {
      uVar5 = param_2;
    }
    pcVar2 = local_22;
    while (uVar5 != 0) {
      iVar3 = uVar5 - param_3 * (uVar5 / param_3);
      cVar4 = param_5 + -0x3a;
      if (iVar3 < 10) {
        cVar4 = '\0';
      }
      *pcVar2 = cVar4 + (char)iVar3 + '0';
      pcVar2 = pcVar2 + -1;
      uVar5 = uVar5 / param_3;
    }
    uVar5 = 0;
    pcVar6 = pcVar2 + 1;
    iVar3 = iStack_2c;
    puVar8 = (uint *)local_30;
    if ((param_2 >> 0x1f & uVar1) != 0) {
      if ((iStack_2c == 0) || ((uStack_28 & 4) != 0)) {
        *pcVar2 = '-';
        pcVar6 = pcVar2;
        puVar8 = (uint *)local_30;
      }
      else {
        iVar3 = FUN_01e3634a(param_1,0x2d);
        uVar5 = (uint)(iVar3 != 0);
        iVar3 = iStack_2c - uVar5;
        puVar8 = (uint *)puVar7;
      }
    }
    *puVar8 = uStack_28;
    iVar3 = FUN_01e36366(param_1,pcVar6,iVar3);
    iVar3 = iVar3 + uVar5;
  }
  return iVar3;
}



// ==== FUN_01e364a0 @ 01e364a0 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x01e366cc) overlaps instruction at (ram,0x01e366c8)
    */
/* WARNING: Possible PIC construction at 0x01e366b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e368dc) */
/* WARNING: Removing unreachable block (ram,0x01e368e6) */
/* WARNING: Removing unreachable block (ram,0x01e36900) */
/* WARNING: Removing unreachable block (ram,0x01e36914) */
/* WARNING: Removing unreachable block (ram,0x01e393e6) */
/* WARNING: Removing unreachable block (ram,0x01e367d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * FUN_01e364a0(ushort *param_1,ushort *param_2,ushort *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined4 uVar8;
  uint unaff_r15;
  undefined4 unaff_retaddr;
  BADSPACEBASE *in_sp;
  undefined4 *puVar9;
  undefined1 local_4c [19];
  undefined1 uStack_39;
  undefined4 local_38;
  ushort *local_34;
  
  puVar9 = (undefined4 *)local_4c;
  local_34 = param_3;
  local_38 = param_4;
  puVar7 = (ushort *)0x0;
  do {
    cVar1 = (char)*param_3;
    if (cVar1 != '%') {
      if (cVar1 == '\0') {
switchD_01e36590_caseD_c5:
        if (param_1 == (ushort *)0x0) {
          return puVar7;
        }
        puVar3 = *(ushort **)param_1;
code_r0x01e366d6:
        *(undefined1 *)puVar3 = 0;
        return puVar7;
      }
LAB_01e364de:
      unaff_retaddr = 0x1e364e8;
      puVar3 = (ushort *)FUN_01e3634a(param_1,param_2,(int)cVar1);
      goto LAB_01e364e8;
    }
    puVar4 = (ushort *)((int)param_3 + 1);
    *(ushort **)((int)puVar9 + 0x18) = puVar4;
    cVar1 = *(char *)((int)param_3 + 1);
    if (cVar1 == '%') {
      cVar1 = '%';
      goto LAB_01e364de;
    }
    if (cVar1 == '-') {
      puVar4 = param_3 + 1;
      *(ushort **)((int)puVar9 + 0x18) = puVar4;
      puVar6 = (ushort *)0x1;
    }
    else {
      puVar6 = (ushort *)0x0;
      if (cVar1 == '\0') goto switchD_01e36590_caseD_c5;
    }
    while (cVar1 = (char)*puVar4, cVar1 == '0') {
      puVar4 = (ushort *)((int)puVar4 + 1);
      *(ushort **)((int)puVar9 + 0x18) = puVar4;
      puVar6 = (ushort *)((uint)puVar6 | 2);
    }
    uVar8 = 0xffffffff;
    if ((byte)(cVar1 - 0x30U) < 10) {
      unaff_retaddr = 0x1e36512;
      uVar8 = FUN_01e36324((undefined1 *)((int)puVar9 + 0x18));
      puVar4 = *(ushort **)((int)puVar9 + 0x18);
      cVar1 = (char)*puVar4;
    }
    puVar3 = puVar4;
    if (cVar1 == '.') {
      *(ushort **)((int)puVar9 + 0x18) = (ushort *)((int)puVar4 + 1);
      if ((byte)(*(char *)((int)puVar4 + 1) - 0x30U) < 10) {
        unaff_retaddr = 0x1e36532;
        FUN_01e36324((undefined1 *)((int)puVar9 + 0x18));
        puVar3 = *(ushort **)((int)puVar9 + 0x18);
      }
      else {
        puVar3 = (ushort *)((int)puVar4 + 1);
        if (*(char *)((int)puVar4 + 1) == '*') {
          *(int *)((int)puVar9 + 0x14) = *(int *)((int)puVar9 + 0x14) + 4;
          *(ushort **)((int)puVar9 + 0x18) = puVar4 + 1;
          puVar3 = puVar4 + 1;
        }
      }
    }
    puVar5 = (ushort *)(uint)(byte)*puVar3;
    param_3 = puVar5 + -0x38;
    puVar4 = puVar3;
    switch((byte)*puVar3) {
    case 0:
    case 4:
      goto switchD_01e36590_caseD_0;
    case 2:
switchD_01e36590_caseD_9c:
      if (puVar5 == (ushort *)0x0) goto code_r0x01e36738;
      if (puVar3 == (ushort *)0x0) goto code_r0x01e36738;
    case 0x8d:
    case 0xab:
    case 0x37:
    case 0x61:
      do {
        puVar5 = (ushort *)0x0;
switchD_01e36590_caseD_b9:
        for (; (int)puVar5 < (int)(uint)*puVar3; puVar5 = (ushort *)((int)puVar5 + 1)) {
switchD_01e36590_caseD_e6:
          if ((*(char *)((int)puVar3 + (int)puVar5 + 4) != '\r') &&
             (*(char *)((int)puVar3 + (int)puVar5 + 4) != '\n')) break;
        }
switchD_01e36590_caseD_e2:
switchD_01e36590_caseD_3b:
        for (; (int)puVar5 < (int)(uint)*puVar3; puVar5 = (ushort *)((int)puVar5 + 1)) {
        }
        FUN_01e35d8a();
        *(ushort **)(param_1 + 0x198) = puVar6;
        puVar3 = (ushort *)FUN_01e36048(*(undefined4 *)(param_1 + 0x19a));
        *(ushort **)(param_1 + 0x198) = puVar3;
code_r0x01e36738:
      } while (puVar3 != (ushort *)0x0);
    case 0x8a:
    case 0xa8:
    case 0xc2:
    case 0xd0:
    case 0xda:
    case 0x5e:
    case 0x68:
      *(undefined1 *)(param_1 + 0x19c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 3:
switchD_01e36590_caseD_3:
      param_3 = *(ushort **)puVar3;
switchD_01e36590_caseD_d9:
      puVar9[3] = 0x41;
      goto switchD_01e36590_caseD_18;
    case 5:
      goto switchD_01e36590_caseD_5;
    case 7:
    case 0x2d:
      goto switchD_01e36590_caseD_7;
    case 8:
      goto switchD_01e36590_caseD_8;
    case 10:
    case 0x1c:
      goto switchD_01e36590_caseD_a;
    case 0xb:
    case 0x33:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x13:
      goto switchD_01e36590_caseD_13;
    case 0x14:
    case 0x2f:
      puVar3 = (ushort *)puVar9[5];
      puVar5 = puVar3 + 2;
switchD_01e36590_caseD_f2:
      puVar9[5] = puVar5;
      param_3 = *(ushort **)puVar3;
switchD_01e36590_caseD_8e:
      *puVar9 = puVar6;
      puVar3 = param_1;
      puVar5 = param_2;
      if (param_3 == (ushort *)0x0) {
switchD_01e36590_caseD_9d:
        param_3 = (ushort *)0x1e19816;
switchD_01e36590_caseD_5:
        puVar3 = param_1;
        puVar5 = param_2;
      }
      goto switchD_01e36590_caseD_36;
    case 0x18:
    case 0x28:
      goto switchD_01e36590_caseD_18;
    case 0x19:
switchD_01e36590_caseD_e3:
      FUN_01e35f56(puVar3);
LAB_01e3676a:
      puVar3 = (ushort *)FUN_01e36794();
code_r0x01e3676c:
      if (puVar3 == (ushort *)0x0) {
switchD_01e36590_caseD_f5:
        puVar3 = (ushort *)FUN_01e366e0();
      }
switchD_01e36590_caseD_e4:
      return puVar3;
    case 0x1b:
    case 0x1e:
    case 0x6b:
      DataCachePrefetch(puVar3);
      goto switchD_01e36590_caseD_3b;
    case 0x1d:
      goto switchD_01e36590_caseD_1d;
    case 0x1f:
      if (((uint)puVar7 & unaff_r15) != 0) {
        FUN_01e36848(2);
        func_0x01e28816(puVar7);
        FUN_01e23d6e(puVar6,&stack0xffffffea,0);
        return param_1;
      }
      goto code_r0x01e3676c;
    case 0x22:
      puVar3 = (ushort *)puVar9[5];
      puVar9[5] = puVar3 + 2;
    case 0x42:
      param_3 = *(ushort **)puVar3;
      puVar9[3] = 0x61;
      puVar9[2] = puVar6;
switchD_01e36590_caseD_2b:
      puVar9[1] = uVar8;
switchD_01e36590_caseD_99:
switchD_01e36590_caseD_af:
      goto code_r0x01e365fc;
    case 0x2b:
    case 0x2e:
      goto switchD_01e36590_caseD_2b;
    case 0x36:
      goto switchD_01e36590_caseD_36;
    case 0x3a:
      goto LAB_01e36600;
    case 0x3b:
      goto switchD_01e36590_caseD_3b;
    case 0x3e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3f:
    case 0x55:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x43:
    case 0x4d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x48:
switchD_01e36590_caseD_48:
      puVar9[2] = puVar6;
      puVar9[1] = uVar8;
      *puVar9 = 1;
switchD_01e36590_caseD_9a:
      puVar3 = param_1;
switchD_01e36590_caseD_b3:
      puVar5 = param_2;
switchD_01e36590_caseD_1d:
      unaff_retaddr = 0x1e366be;
      puVar3 = (ushort *)FUN_01e363e6(puVar3,puVar5,param_3);
      *(int *)((int)puVar9 + 0x18) = *(int *)((int)puVar9 + 0x18) + 2;
      goto LAB_01e364e8;
    case 0x49:
      puVar9[-1] = unaff_retaddr;
      puVar9[-2] = param_1;
      puVar4 = _DAT_00006af4;
      param_1 = (ushort *)0xfc;
      if (puVar3 != (ushort *)0x0) {
        param_1 = puVar3;
      }
      goto switchD_01e36590_caseD_e;
    case 0x4c:
switchD_01e36590_caseD_4c:
      puVar9[5] = puVar5;
      param_3 = *(ushort **)puVar3;
      puVar9[3] = 0x61;
      puVar9[2] = puVar6;
      puVar9[1] = uVar8;
      uVar8 = 10;
      goto LAB_01e36686;
    case 0x6c:
      goto switchD_01e36590_caseD_6c;
    case 0x6d:
                    /* WARNING: Could not recover jumptable at 0x01e366d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar7 = (ushort *)(*(code *)((uint)(byte)puVar7[0xf1b369] * 2 + 0x1e366d2))();
      return puVar7;
    case 0x78:
    case 0x84:
    case 0x92:
    case 0xa2:
    case 0xbc:
    case 0xca:
    case 0xea:
    case 0x26:
    case 0x44:
    case 0x58:
      puVar3 = (ushort *)puVar9[5];
    case 0x7c:
      puVar9[5] = puVar3 + 2;
      param_3 = *(ushort **)puVar3;
switchD_01e36590_caseD_8c:
      puVar9[3] = 0x61;
switchD_01e36590_caseD_18:
      puVar9[2] = puVar6;
switchD_01e36590_caseD_0:
      puVar9[1] = uVar8;
switchD_01e36590_caseD_6c:
code_r0x01e365fc:
      *puVar9 = 0;
LAB_01e36600:
      unaff_retaddr = 0x1e36608;
      puVar3 = (ushort *)FUN_01e363e6(param_1,param_2,param_3);
      goto LAB_01e364e8;
    case 0x79:
    case 0x7a:
    case 0x82:
    case 0x90:
    case 0xa0:
    case 0xba:
    case 200:
    case 0xe8:
    case 0xee:
    case 0xf3:
    case 0x10:
    case 0x21:
    case 0x56:
      halt_baddata();
    case 0x7b:
    case 0x7f:
    case 0x11:
    case 0x25:
      break;
    case 0x7d:
    case 0x86:
    case 0x94:
    case 0xa4:
    case 0xbe:
    case 0xcc:
    case 0xec:
    case 0xf6:
    case 0x40:
    case 0x52:
    case 0x5a:
      goto switchD_01e36590_caseD_7d;
    case 0x7e:
    case 0x8f:
    case 0x23:
    case 0x2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x80:
      goto switchD_01e36590_caseD_80;
    case 0x81:
      goto code_r0x01e366d6;
    case 0x83:
    case 0x87:
    case 0x91:
    case 0x95:
    case 0xa1:
    case 0xa5:
    case 0xbb:
    case 0xbf:
    case 0xc9:
    case 0xcd:
    case 0xe9:
    case 0xed:
    case 0x57:
    case 0x5b:
switchD_01e36590_caseD_83:
      puVar3 = (ushort *)puVar9[5];
      break;
    case 0x85:
    case 0x93:
    case 0xa3:
    case 0xbd:
    case 0xcb:
    case 0xeb:
    case 0x59:
switchD_01e36590_caseD_85:
      puVar3 = (ushort *)(uint)(byte)puVar3[1];
    case 0x98:
    case 0xac:
    case 0xd4:
    case 0xfa:
    case 0x62:
      if (puVar3 == (ushort *)0x75) {
switchD_01e36590_caseD_ae:
        puVar3 = (ushort *)puVar9[5];
switchD_01e36590_caseD_a:
        puVar5 = puVar3 + 4;
switchD_01e36590_caseD_13:
        puVar9[5] = puVar5;
switchD_01e36590_caseD_f8:
        param_3 = *(ushort **)puVar3;
        puVar9[3] = 0x61;
        puVar9[2] = puVar6;
switchD_01e36590_caseD_9f:
        puVar9[1] = uVar8;
switchD_01e36590_caseD_e7:
switchD_01e36590_caseD_dd:
        *puVar9 = 0;
        goto switchD_01e36590_caseD_9a;
      }
      goto LAB_01e3659c;
    case 0x88:
    case 0x96:
    case 0xa6:
    case 0xc0:
    case 0xce:
    case 0x5c:
    case 0x6e:
    case 6:
switchD_01e36590_caseD_b2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x89:
    case 0x97:
    case 0xa7:
    case 0xc1:
    case 0xcf:
    case 0xef:
    case 0x5d:
      goto switchD_01e36590_caseD_89;
    case 0x8b:
    case 0xa9:
    case 0xc3:
    case 0xd1:
    case 0xdb:
    case 0xf1:
    case 0x5f:
    case 0x69:
      goto switchD_01e36590_caseD_8b;
    case 0x8c:
    case 0xaa:
    case 0xc4:
    case 0xd2:
    case 0x60:
      goto switchD_01e36590_caseD_8c;
    case 0x8e:
    case 0x9e:
    case 0xc6:
      goto switchD_01e36590_caseD_8e;
    case 0x99:
    case 0xfb:
      goto switchD_01e36590_caseD_99;
    case 0x9a:
    case 199:
    case 0xf9:
      goto switchD_01e36590_caseD_9a;
    case 0x9b:
switchD_01e36590_caseD_9b:
      puVar9[3] = 0x61;
    case 0xf4:
      puVar9[2] = puVar6;
      puVar9[1] = uVar8;
      *puVar9 = 1;
      goto LAB_01e36600;
    case 0x9c:
      goto switchD_01e36590_caseD_9c;
    case 0x9d:
    case 0xdf:
    case 0xe1:
    case 0xfd:
    case 0xff:
    case 0x15:
      goto switchD_01e36590_caseD_9d;
    case 0x9f:
      goto switchD_01e36590_caseD_9f;
    case 0xad:
    case 0xd5:
    case 99:
switchD_01e36590_caseD_ad:
      if (*(char *)((int)puVar3 + 1) == 'X') goto switchD_01e36590_caseD_83;
      goto LAB_01e3659c;
    case 0xae:
    case 0xd6:
    case 0x17:
    case 100:
      goto switchD_01e36590_caseD_ae;
    case 0xaf:
    case 0xd7:
    case 0x65:
      goto switchD_01e36590_caseD_af;
    case 0xb0:
    case 0xd8:
    case 0x66:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb1:
    case 0x1a:
    case 0x67:
      puVar6 = puVar3;
      break;
    case 0xb2:
    case 0x12:
    case 0x16:
    case 0x20:
      goto switchD_01e36590_caseD_b2;
    case 0xb3:
      goto switchD_01e36590_caseD_b3;
    case 0xb4:
      goto switchD_01e36590_caseD_b4;
    case 0xb5:
    case 0x45:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xb6:
    case 0x24:
    case 0x50:
      goto switchD_01e36590_caseD_b6;
    case 0xb7:
    case 0x31:
    case 0x35:
    case 0x39:
    case 0x3d:
    case 0x41:
    case 0x47:
    case 0x4b:
    case 0x4f:
    case 0x53:
      if (param_1 != (ushort *)0x0) {
        param_1 = (ushort *)((int)param_1 + -1);
      }
    case 0xe:
switchD_01e36590_caseD_e:
      puVar3 = (ushort *)FUN_01e360aa(puVar4,param_1 + 2);
switchD_01e36590_caseD_7:
      if (puVar3 != (ushort *)0x0) {
        puVar5 = (ushort *)0x0;
switchD_01e36590_caseD_e5:
        *puVar3 = (ushort)puVar5;
        puVar3[1] = (ushort)param_1;
      }
      return puVar3;
    case 0xb8:
      goto switchD_01e36590_caseD_b8;
    case 0xb9:
      goto switchD_01e36590_caseD_b9;
    case 0xc5:
    case 0xd3:
      goto switchD_01e36590_caseD_c5;
    case 0xd9:
      goto switchD_01e36590_caseD_d9;
    case 0xdc:
    case 0x30:
    case 0x34:
    case 0x38:
    case 0x3c:
    case 0x46:
    case 0x4a:
    case 0x4e:
    case 0x6a:
    case 0x6f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xdd:
    case 0xf7:
    case 0x2a:
      goto switchD_01e36590_caseD_dd;
    case 0xde:
    case 0xfc:
    case 0x27:
    case 0x32:
switchD_01e36590_caseD_de:
      *(char *)((int)puVar9 + 0x12) = (char)puVar3;
      uStack_39 = SUB41(puVar5,0);
switchD_01e36590_caseD_80:
      param_3 = (ushort *)((int)puVar9 + 0x12);
      *puVar9 = puVar6;
      puVar3 = param_1;
      puVar5 = param_2;
switchD_01e36590_caseD_36:
      unaff_retaddr = 0x1e36628;
      puVar3 = (ushort *)FUN_01e36366(puVar3,puVar5,param_3,uVar8);
      goto LAB_01e364e8;
    case 0xe0:
    case 0xfe:
    case 1:
    case 0x29:
      goto switchD_01e36590_caseD_e0;
    case 0xe2:
    case 0xc:
      goto switchD_01e36590_caseD_e2;
    case 0xe3:
    case 0xd:
    case 0x51:
      goto switchD_01e36590_caseD_e3;
    case 0xe4:
      goto switchD_01e36590_caseD_e4;
    case 0xe5:
    case 0xf:
      goto switchD_01e36590_caseD_e5;
    case 0xe6:
      goto switchD_01e36590_caseD_e6;
    case 0xe7:
      goto switchD_01e36590_caseD_e7;
    case 0xf0:
      puVar9[-1] = unaff_retaddr;
      puVar9[-2] = param_1;
      param_1 = puVar3;
switchD_01e36590_caseD_b8:
      if (param_1 != (ushort *)0x0) {
switchD_01e36590_caseD_e0:
        if ((uint)*param_1 < (uint)param_1[1]) {
          FUN_01e35e88(param_1,*param_1 + 4);
        }
switchD_01e36590_caseD_8b:
        puVar3 = param_1;
        goto switchD_01e36590_caseD_e3;
      }
      goto LAB_01e3676a;
    case 0xf2:
    case 9:
    case 0x54:
      goto switchD_01e36590_caseD_f2;
    case 0xf5:
      goto switchD_01e36590_caseD_f5;
    case 0xf8:
      goto switchD_01e36590_caseD_f8;
    default:
      if (puVar5 == (ushort *)0x4c) goto switchD_01e36590_caseD_ad;
      if (puVar5 == (ushort *)0x58) {
        puVar3 = (ushort *)puVar9[5];
        puVar9[5] = puVar3 + 2;
        goto switchD_01e36590_caseD_3;
      }
      if (puVar5 == (ushort *)0x63) {
        puVar2 = (undefined4 *)puVar9[5];
        puVar5 = (ushort *)(puVar2 + 1);
        puVar9[5] = puVar5;
        puVar3 = (ushort *)*puVar2;
        goto switchD_01e36590_caseD_de;
      }
      if (puVar5 == (ushort *)0x64) {
        puVar2 = (undefined4 *)puVar9[5];
        puVar9[5] = puVar2 + 1;
        param_3 = (ushort *)*puVar2;
        goto switchD_01e36590_caseD_9b;
      }
      if (puVar5 != (ushort *)0x6c) goto LAB_01e3659c;
      cVar1 = *(char *)((int)puVar3 + 1);
      if (cVar1 == 'x') {
        puVar2 = (undefined4 *)puVar9[5];
        puVar9[5] = puVar2 + 1;
        param_3 = (ushort *)*puVar2;
        puVar9[3] = 0x61;
        goto LAB_01e3664e;
      }
      if (cVar1 == 'l') {
        if ((char)puVar3[1] == 'd') {
          puVar2 = (undefined4 *)puVar9[5];
          puVar9[5] = puVar2 + 2;
          param_3 = (ushort *)*puVar2;
          puVar9[3] = 0x61;
          goto switchD_01e36590_caseD_48;
        }
        goto switchD_01e36590_caseD_85;
      }
      if (cVar1 == 'u') {
        puVar3 = (ushort *)puVar9[5];
        puVar5 = puVar3 + 2;
        goto switchD_01e36590_caseD_4c;
      }
      if (cVar1 != 'd') goto LAB_01e3659c;
      puVar2 = (undefined4 *)puVar9[5];
      puVar9[5] = puVar2 + 1;
      param_3 = (ushort *)*puVar2;
      puVar9[3] = 0x61;
      puVar9[2] = puVar6;
      puVar9[1] = uVar8;
      uVar8 = 10;
      *puVar9 = 1;
      goto LAB_01e3668a;
    }
    puVar9[5] = puVar3 + 2;
    param_3 = *(ushort **)puVar3;
    puVar9[3] = 0x41;
LAB_01e3664e:
    puVar9[2] = puVar6;
    puVar9[1] = uVar8;
switchD_01e36590_caseD_89:
    uVar8 = 0x10;
LAB_01e36686:
    *puVar9 = 0;
LAB_01e3668a:
    unaff_retaddr = 0x1e36692;
    puVar3 = (ushort *)FUN_01e363e6(param_1,param_2,param_3,uVar8);
switchD_01e36590_caseD_b6:
    puVar5 = (ushort *)((int)puVar9 + 0x18);
switchD_01e36590_caseD_7d:
    *(int *)puVar5 = *(int *)puVar5 + 1;
LAB_01e364e8:
    puVar7 = (ushort *)((int)puVar7 + (int)puVar3);
LAB_01e3659c:
    param_3 = (ushort *)(*(int *)((int)puVar9 + 0x18) + 1);
switchD_01e36590_caseD_8:
    *(ushort **)((int)puVar9 + 0x18) = param_3;
switchD_01e36590_caseD_b4:
  } while( true );
}



// ==== FUN_01e366e0 @ 01e366e0 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e366e0(void)

{
  int iVar1;
  
  if (_DAT_00006af4 != 0) {
    while (_DAT_00006af0 = (ushort *)FUN_01e36048(_DAT_00006af4), _DAT_00006af0 != (ushort *)0x0) {
      for (iVar1 = 0;
          (iVar1 < (int)(uint)*_DAT_00006af0 &&
          ((*(char *)((int)_DAT_00006af0 + iVar1 + 4) == '\r' ||
           (*(char *)((int)_DAT_00006af0 + iVar1 + 4) == '\n')))); iVar1 = iVar1 + 1) {
      }
      for (; iVar1 < (int)(uint)*_DAT_00006af0; iVar1 = iVar1 + 1) {
      }
      FUN_01e35d8a();
      _DAT_00006af0 = (ushort *)0x0;
    }
  }
  DAT_00006af8 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== caseD_f0 @ 01e3674e ====

void switchD_01e36590::caseD_f0(ushort *param_1)

{
  int iVar1;
  
  if (param_1 != (ushort *)0x0) {
    if ((uint)*param_1 < (uint)param_1[1]) {
      FUN_01e35e88(param_1,*param_1 + 4);
    }
    FUN_01e35f56(param_1);
  }
  iVar1 = FUN_01e36794();
  if (iVar1 == 0) {
    FUN_01e366e0();
  }
  return;
}



// ==== caseD_49 @ 01e36772 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void switchD_01e36590::caseD_49(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = 0xfc;
  if (param_1 != 0) {
    iVar2 = param_1;
  }
  puVar1 = (undefined2 *)FUN_01e360aa(_DAT_00006af4,iVar2 + 4);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = (short)iVar2;
  }
  return;
}



// ==== FUN_01e36794 @ 01e36794 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e36794(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = func_0x020030ce(0x74e8,0);
  if (_DAT_00006af4 != 0) {
    func_0x0200206c();
    if (DAT_00006af8 == '\0') {
      DAT_00006af8 = '\x01';
      func_0x0200207e();
    }
    else {
      func_0x0200207e();
      uVar2 = 0xfffffff0;
      if (iVar1 == 0) {
        func_0x02002964(0x74e8);
      }
    }
  }
  return uVar2;
}



// ==== FUN_01e367de @ 01e367de ====

void FUN_01e367de(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined8 in_r0_r1;
  char *pcVar5;
  BADSPACEBASE *in_sp;
  undefined4 *puVar6;
  undefined1 local_20 [4];
  undefined4 *puStack_1c;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = (undefined4)((ulonglong)in_r0_r1 >> 0x20);
  puVar6 = (undefined4 *)local_20;
  pcVar5 = (char *)in_r0_r1;
  puStack_1c = &uStack_c;
  uStack_8 = param_1;
  uStack_4 = param_2;
  iVar3 = FUN_01e36794();
  if (iVar3 == 0) {
    while( true ) {
      cVar1 = *pcVar5;
      if ((cVar1 != '\n') && (cVar1 != '\r')) break;
      pcVar5 = pcVar5 + 1;
    }
    if (cVar1 != '\0') {
      FUN_01e364a0(0,pcVar5,*(undefined4 *)((int)puVar6 + 4));
    }
    FUN_01e366e0();
  }
  else {
    puVar4 = (undefined2 *)switchD_01e36590::caseD_49(0x100);
    if (puVar4 != (undefined2 *)0x0) {
      *puVar6 = puVar4 + 2;
      uVar2 = FUN_01e364a0(puVar6,puVar6[1]);
      *puVar4 = uVar2;
      switchD_01e36590::caseD_f0(puVar4);
    }
  }
  return;
}



// ==== FUN_01e36836 @ 01e36836 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e36836(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e36848 @ 01e36848 ====

void FUN_01e36848(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  ushort *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  BADSPACEBASE *in_sp;
  undefined4 **ppuVar6;
  undefined4 *local_24 [2];
  undefined4 uStack_4;
  
  ppuVar6 = local_24;
  if (-1 < param_1) {
    local_24[0] = &uStack_4;
    uStack_4 = param_3;
    iVar2 = FUN_01e36794();
    if (iVar2 == 0) {
      for (; (cVar1 = *param_2, cVar1 == '\n' || (cVar1 == '\r')); param_2 = param_2 + 1) {
      }
      if (cVar1 != '\0') {
        if (2 < param_1) {
          pcVar5 = *(char **)((param_1 + 0x1e1aa58) * 4);
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
        }
        FUN_01e364a0(0,param_2,*ppuVar6);
      }
      FUN_01e366e0();
    }
    else {
      puVar3 = (ushort *)switchD_01e36590::caseD_49(0x100);
      if (puVar3 != (ushort *)0x0) {
        for (iVar2 = 0; (cVar1 = param_2[iVar2], cVar1 == '\n' || (cVar1 == '\r'));
            iVar2 = iVar2 + 1) {
          FUN_01e36836(puVar3);
        }
        if (cVar1 == '\0') {
          FUN_01e35d8a(puVar3);
        }
        else {
          param_2 = param_2 + iVar2;
          if (2 < param_1) {
            for (; iVar2 < 1; iVar2 = iVar2 + 1) {
              FUN_01e36836(puVar3);
            }
            pcVar5 = *(char **)((param_1 + 0x1e1aa58) * 4);
            while (cVar1 = *pcVar5, pcVar5 = pcVar5 + 1, cVar1 != '\0') {
              FUN_01e36836(puVar3);
            }
          }
          ppuVar6[1] = (undefined4 *)((uint)*puVar3 + (int)(puVar3 + 2));
          FUN_01e364a0(ppuVar6 + 1,param_2,*ppuVar6);
          if (2 < param_1) {
            puVar4 = *(undefined1 **)((int)ppuVar6 + 4);
            *(undefined1 **)((int)ppuVar6 + 4) = puVar4 + 1;
            *puVar4 = 0xd;
            puVar4 = *(undefined1 **)((int)ppuVar6 + 4);
            *(undefined1 **)((int)ppuVar6 + 4) = puVar4 + 1;
            *puVar4 = 10;
          }
          *puVar3 = (short)*(undefined4 *)((int)ppuVar6 + 4) - (short)(puVar3 + 2);
          switchD_01e36590::caseD_f0(puVar3);
        }
      }
    }
  }
  return;
}



// ==== FUN_01e36928 @ 01e36928 ====

void FUN_01e36928(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = FUN_01e36794();
  if (iVar3 == 0) {
    for (; (cVar2 = *param_1, cVar2 == '\n' || (cVar2 == '\r')); param_1 = param_1 + 1) {
    }
    iVar3 = 1;
    while (cVar2 != '\0') {
      pcVar1 = param_1 + iVar3;
      iVar3 = iVar3 + 1;
      cVar2 = *pcVar1;
    }
    FUN_01e366e0();
    return;
  }
  iVar3 = func_0x021127c0(param_1);
  iVar3 = switchD_01e36590::caseD_49(iVar3 + 2);
  if (iVar3 == 0) {
    return;
  }
  while( true ) {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
    if (cVar2 == '\0') break;
    FUN_01e36836(iVar3,(int)cVar2);
  }
  switchD_01e36590::caseD_f0(iVar3);
  return;
}



// ==== FUN_01e36974 @ 01e36974 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e36974(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e36986 @ 01e36986 ====

void FUN_01e36986(void)

{
  int iVar1;
  undefined8 in_r0_r1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)((ulonglong)in_r0_r1 >> 0x20);
  iVar1 = FUN_01e36794();
  if (iVar1 == 0) {
    FUN_01e366e0();
  }
  else {
    iVar1 = switchD_01e36590::caseD_49((iVar2 / 0x10) * 2 + iVar2 * 3 + 10);
    if (iVar1 != 0) {
      for (uVar3 = 0; (int)uVar3 < iVar2; uVar3 = uVar3 + 1) {
        if ((uVar3 & 0xf) == 0) {
          FUN_01e36836(iVar1);
        }
        FUN_01e36974(iVar1);
        FUN_01e36974(iVar1);
        FUN_01e36836(iVar1);
      }
      FUN_01e36836(iVar1);
      switchD_01e36590::caseD_f0(iVar1);
      return;
    }
  }
  return;
}



// ==== FUN_01e369ea @ 01e369ea ====

undefined4 FUN_01e369ea(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_01e36794();
  if (iVar1 == 0) {
    FUN_01e366e0();
  }
  else {
    iVar1 = switchD_01e36590::caseD_49(1);
    if (iVar1 != 0) {
      FUN_01e36836((int)(char)param_1);
      switchD_01e36590::caseD_f0(iVar1);
    }
  }
  return param_1;
}



// ==== FUN_01e36a4a @ 01e36a4a ====

void FUN_01e36a4a(undefined4 param_1,undefined4 param_2)

{
  FUN_01e367de(s__s__d_01e1977b,param_1,param_2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== FUN_01e36a5e @ 01e36a5e ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e36a5e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== thunk_EXT_FUN_0200010a @ 01e36a62 ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e36a6a @ 01e36a6a ====

void FUN_01e36a6a(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  *(undefined4 *)((param_1 + 0x2bf00) * 4) = param_3;
  iVar1 = (param_1 & 7) << 2;
  uVar2 = 0xf << iVar1;
  puVar3 = (uint *)((param_1 >> 3 & 0x1f) << 2 | 0x10f100);
  func_0x0200206c();
  *puVar3 = *puVar3 & ~uVar2 | ((param_2 & 7) << 1 | 1) << iVar1;
  func_0x0200207e();
  return;
}



// ==== FUN_01e36ab2 @ 01e36ab2 ====

void FUN_01e36ab2(int *param_1,int param_2,int param_3)

{
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = param_2;
  param_1[2] = param_2;
  param_1[3] = param_2;
  param_1[4] = param_2;
  param_1[1] = param_2 + param_3;
  param_1[7] = param_3;
  param_1[8] = 0;
  return;
}



// ==== FUN_01e36aca @ 01e36aca ====

undefined4 FUN_01e36aca(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    func_0x0200206c();
    if (param_2 <=
        (uint)((int)((ulonglong)*(undefined8 *)(param_1 + 0x108) >> 0x20) -
              (int)*(undefined8 *)(param_1 + 0x108))) {
      uVar2 = *(int *)(param_1 + 4) - *(int *)(param_1 + 0xc);
      if (uVar2 < param_2) {
        uVar1 = func_0x021127a8(uVar2);
        return uVar1;
      }
      uVar1 = func_0x021127a8();
      return uVar1;
    }
    func_0x0200207e();
  }
  return 0;
}



// ==== FUN_01e36b2e @ 01e36b2e ====

undefined4 FUN_01e36b2e(uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar3 = param_1[2];
    if (param_1[1] <= uVar3) {
      uVar3 = *param_1;
      param_1[2] = uVar3;
    }
    if (param_1[6] < 0x14) {
      uVar1 = 0;
      func_0x021127b4(&DAT_00006638,0,0x14);
    }
    else {
      uVar4 = param_1[1] - uVar3;
      if (0x13 < uVar4) {
        uVar4 = 0x14;
      }
      func_0x021127a8(&DAT_00006638,uVar3,uVar4);
      iVar2 = 0x14 - uVar4;
      if (iVar2 == 0) {
        uVar3 = uVar3 + uVar4;
      }
      else {
        func_0x021127a8(&DAT_00006638 + uVar4,*param_1,iVar2);
        uVar3 = *param_1 + iVar2;
      }
      func_0x0200206c();
      param_1[6] = param_1[6] - 0x14;
      param_1[5] = param_1[5] - 0x14;
      param_1[2] = uVar3;
      func_0x0200207e();
      uVar1 = 0x14;
    }
  }
  return uVar1;
}



// ==== FUN_01e36ba2 @ 01e36ba2 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e36ba2(void)

{
  _DAT_00004314 = FUN_01e3d7d0(0x124);
  if (_DAT_00004314 != 0) {
    FUN_01e36ab2(_DAT_00004314 + 0x24,0x100);
    return 0;
  }
  return 0xfffffff4;
}



// ==== FUN_01e36bcc @ 01e36bcc ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x01e36c38: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e36bcc(char *param_1)

{
  int iVar1;
  
  if ((_DAT_00004314 == 0) && (iVar1 = FUN_01e36ba2(), iVar1 != 0)) {
    return;
  }
  if (*param_1 != '\x01') {
    FUN_01e36aca(_DAT_00004314,param_1,0x14);
    if (_DAT_00004318 == 0) {
      return;
    }
    func_0x02003142();
    return;
  }
  func_0x0200206c();
  if (DAT_00004307 != '\0' || DAT_00004308 != '\0') {
    if (param_1[9] != '\x03') {
      if (param_1[9] == '\x01') {
        DAT_00004309 = param_1[10];
        halt_baddata();
      }
      if (DAT_00004309 == param_1[10]) {
        halt_baddata();
      }
    }
    DAT_00004309 = 0xff;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  halt_baddata();
}



// ==== FUN_01e36c5c @ 01e36c5c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e36c5c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _DAT_00004324;
  iVar2 = param_1;
  *(int **)(param_1 + -4) = _DAT_00004324;
  _DAT_00004324 = (int *)iVar2;
  *(undefined1 **)(param_1 + -8) = &DAT_00004320;
  *piVar1 = param_1;
  return;
}



// ==== thunk_EXT_FUN_0200010a @ 01e36cda ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e36f8a @ 01e36f8a ====

void FUN_01e36f8a(void)

{
  func_0x02003624();
  return;
}



// ==== thunk_EXT_FUN_0200010a @ 01e36f92 ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e36f96 @ 01e36f96 ====

void FUN_01e36f96(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 in_r4_r5;
  undefined **ppuVar5;
  BADSPACEBASE *in_sp;
  undefined4 *puVar6;
  undefined1 local_14 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)((ulonglong)in_r4_r5 >> 0x20);
  uStack_10 = (undefined4)in_r4_r5;
  puVar6 = (undefined4 *)local_14;
  ppuVar5 = &PTR_s_app_core_01e19d90;
  do {
    if (*ppuVar5 == (undefined *)0x0) {
LAB_01e36fc4:
      thunk_EXT_FUN_0200010a();
      return;
    }
    iVar4 = func_0x021127b8(param_2);
    if (iVar4 == 0) {
      uVar1 = *(undefined2 *)(ppuVar5 + 2);
      uVar2 = *(undefined2 *)((int)ppuVar5 + 6);
      uVar3 = *(undefined1 *)(ppuVar5 + 1);
      *puVar6 = param_2;
      iVar4 = func_0x0200390e(param_1,uVar3,uVar2,uVar1);
      if (iVar4 == 0) {
        return;
      }
      goto LAB_01e36fc4;
    }
    ppuVar5 = ppuVar5 + 3;
  } while( true );
}



// ==== FUN_01e36fca @ 01e36fca ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e36fca(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  func_0x0200206c();
  iVar1 = 0;
  iVar4 = 0x6664;
  do {
    if (iVar1 == 0) {
      func_0x0200207e();
      iVar4 = FUN_01e3d7d0(0x20);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
LAB_01e3700c:
        *(undefined4 *)(iVar4 + 0xc) = param_1;
        *(uint *)(iVar4 + 8) = param_2;
        *(undefined1 *)(iVar4 + 0x1e) = 0;
        *(uint *)(iVar4 + 0x18) =
             *(uint *)(iVar4 + 0x18) & 0xfc000000 | param_3 & 0xffffff | (param_4 & 1) << 0x19;
        *(uint *)(iVar4 + 0x14) = _DAT_0000415c + (param_3 >> 1);
        pcVar2 = (char *)func_0x020033fc();
        pcVar5 = s_app_core_01e1b3b1;
        if (pcVar2 != (char *)0x0) {
          pcVar5 = pcVar2;
        }
        *(char **)(iVar4 + 0x10) = pcVar5;
        uVar3 = _DAT_000068e4 + 1;
        _DAT_000068e4 = (ushort)uVar3;
        if ((uVar3 & 0xffff) != 0) {
          param_2 = uVar3;
        }
        *(short *)(iVar4 + 0x1c) = (short)param_2;
      }
      return iVar4;
    }
    if (*(char *)(iVar4 + 0x10f) == '\0') {
      *(undefined1 *)(iVar4 + 0x1f) = 1;
      func_0x0200207e();
      goto LAB_01e3700c;
    }
    iVar4 = iVar4 + 0x20;
    iVar1 = iVar1 + 1;
  } while( true );
}



// ==== FUN_01e3706e @ 01e3706e ====

void FUN_01e3706e(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  while (piVar1 = (int *)*piVar1, piVar1 != param_2) {
    if (*(short *)(param_1 + 0x1c) == *(short *)(piVar1 + 7)) {
      *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 1;
      piVar1 = param_2;
    }
  }
  return;
}



// ==== FUN_01e37088 @ 01e37088 ====

void FUN_01e37088(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 4);
  *(int *)(param_2 + 4) = param_1;
  *(int **)(param_1 + -4) = piVar1;
  *(int *)(param_1 + -8) = param_2;
  *piVar1 = param_1;
  return;
}



// ==== FUN_01e37094 @ 01e37094 ====

uint FUN_01e37094(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_01e36fca();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x0200206c();
    FUN_01e3706e(iVar1,&DAT_00004190);
    uVar2 = (uint)*(ushort *)(iVar1 + 0x1c);
    FUN_01e37088(uVar2);
    func_0x0200207e();
  }
  return uVar2;
}



// ==== FUN_01e370ba @ 01e370ba ====

undefined2 FUN_01e370ba(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_01e37094(0,param_1,param_2,0);
  return uVar1;
}



// ==== FUN_01e370ce @ 01e370ce ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e370ce(uint param_1)

{
  undefined4 *puVar1;
  
  func_0x0200206c();
  puVar1 = (undefined4 *)&DAT_00004190;
  do {
    puVar1 = (undefined4 *)*puVar1;
    if (puVar1 == (undefined4 *)&DAT_00004190) {
      halt_baddata();
    }
  } while (*(ushort *)(puVar1 + 7) != param_1);
  puVar1[6] = puVar1[6] | 0x1000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e370f4 @ 01e370f4 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e370f4(uint param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  
  func_0x0200206c();
  puVar2 = (undefined4 *)&DAT_00004198;
  do {
    puVar2 = (undefined4 *)*puVar2;
    if (puVar2 == (undefined4 *)&DAT_00004198) goto LAB_01e3712a;
  } while (*(ushort *)(puVar2 + 7) != param_1);
  func_0x0200207e();
  while (*(char *)((int)puVar2 + 0x10e) != '\0') {
    func_0x02003440(1);
  }
  func_0x0200206c();
  puVar2[6] = puVar2[6] | 0x1000000;
LAB_01e3712a:
  func_0x0200207e();
  pcVar1 = (char *)func_0x020033fc();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = s_app_core_01e1b3b1;
  }
  func_0x02003996(pcVar1,param_1 | 0x300000);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== thunk_FUN_01e370f4 @ 01e37150 ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_01e370f4(uint param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  
  func_0x0200206c();
  puVar2 = (undefined4 *)&DAT_00004198;
  do {
    puVar2 = (undefined4 *)*puVar2;
    if (puVar2 == (undefined4 *)&DAT_00004198) goto LAB_01e3712a;
  } while (*(ushort *)(puVar2 + 7) != param_1);
  func_0x0200207e();
  while (*(char *)((int)puVar2 + 0x10e) != '\0') {
    func_0x02003440(1);
  }
  func_0x0200206c();
  puVar2[6] = puVar2[6] | 0x1000000;
LAB_01e3712a:
  func_0x0200207e();
  pcVar1 = (char *)func_0x020033fc();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = s_app_core_01e1b3b1;
  }
  func_0x02003996(pcVar1,param_1 | 0x300000);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e37152 @ 01e37152 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_01e37152(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined2 uVar6;
  
  func_0x0200206c();
  iVar1 = 0;
  iVar4 = 0x6664;
  do {
    if (iVar1 == 0) {
      func_0x0200207e();
      iVar4 = FUN_01e3d7d0(0x20);
      if (iVar4 == 0) {
        uVar6 = 0;
      }
      else {
LAB_01e37194:
        *(undefined4 *)(iVar4 + 0xc) = param_1;
        *(uint *)(iVar4 + 8) = param_2;
        uVar6 = 0;
        *(undefined1 *)(iVar4 + 0x1e) = 0;
        *(uint *)(iVar4 + 0x18) =
             *(uint *)(iVar4 + 0x18) & 0xfc000000 | param_3 & 0xffffff | (param_4 & 1) << 0x19;
        *(uint *)(iVar4 + 0x14) = _DAT_00004158 + param_3 / 10;
        pcVar2 = (char *)func_0x020033fc();
        pcVar5 = s_app_core_01e1b3b1;
        if (pcVar2 != (char *)0x0) {
          pcVar5 = pcVar2;
        }
        *(char **)(iVar4 + 0x10) = pcVar5;
        uVar3 = _DAT_000068e4 + 1;
        _DAT_000068e4 = (ushort)uVar3;
        if ((uVar3 & 0xffff) != 0) {
          param_2 = uVar3;
        }
        *(short *)(iVar4 + 0x1c) = (short)param_2;
        if (iVar4 != 0) {
          func_0x0200206c();
          FUN_01e3706e(iVar4,&DAT_00004198);
          uVar6 = *(undefined2 *)(iVar4 + 0x1c);
          FUN_01e37088();
          func_0x0200207e();
          func_0x02003142(0x7538);
        }
      }
      return uVar6;
    }
    if (*(char *)(iVar4 + 0x10f) == '\0') {
      *(undefined1 *)(iVar4 + 0x1f) = 1;
      func_0x0200207e();
      goto LAB_01e37194;
    }
    iVar4 = iVar4 + 0x20;
    iVar1 = iVar1 + 1;
  } while( true );
}



// ==== FUN_01e3721e @ 01e3721e ====

void FUN_01e3721e(uint param_1)

{
  if (param_1 < 4) {
    param_1 = 3;
  }
  FUN_01e37152(param_1,1);
  return;
}



// ==== FUN_01e3722c @ 01e3722c ====

void FUN_01e3722c(void)

{
  FUN_01e37094(1);
  return;
}



// ==== thunk_FUN_01e370f4 @ 01e37230 ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_FUN_01e370f4(uint param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  
  func_0x0200206c();
  puVar2 = (undefined4 *)&DAT_00004198;
  do {
    puVar2 = (undefined4 *)*puVar2;
    if (puVar2 == (undefined4 *)&DAT_00004198) goto LAB_01e3712a;
  } while (*(ushort *)(puVar2 + 7) != param_1);
  func_0x0200207e();
  while (*(char *)((int)puVar2 + 0x10e) != '\0') {
    func_0x02003440(1);
  }
  func_0x0200206c();
  puVar2[6] = puVar2[6] | 0x1000000;
LAB_01e3712a:
  func_0x0200207e();
  pcVar1 = (char *)func_0x020033fc();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = s_app_core_01e1b3b1;
  }
  func_0x02003996(pcVar1,param_1 | 0x300000);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e37232 @ 01e37232 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e37232(uint param_1)

{
  undefined4 *puVar1;
  
  func_0x0200206c();
  puVar1 = (undefined4 *)&DAT_00004190;
  do {
    puVar1 = (undefined4 *)*puVar1;
    if (puVar1 == (undefined4 *)&DAT_00004190) {
      halt_baddata();
    }
  } while (*(ushort *)(puVar1 + 7) != param_1);
  puVar1[6] = puVar1[6] & 0xff000000 | 0xf;
  puVar1[5] = _DAT_0000415c + 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e37508 @ 01e37508 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e37508(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  
  func_0x0200206c();
  puVar1 = (undefined4 *)&DAT_00004198;
  do {
    puVar1 = (undefined4 *)*puVar1;
    if (puVar1 == (undefined4 *)&DAT_00004198) goto LAB_01e37542;
  } while (*(ushort *)(puVar1 + 7) != param_1);
  puVar1[6] = param_2 & 0xffffff | (uint)*(byte *)((int)puVar1 + 0x10b) << 0x18;
  puVar1[5] = _DAT_00004158 + param_2 / 10;
LAB_01e37542:
  func_0x0200207e();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e37552 @ 01e37552 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e37552(uint param_1)

{
  undefined4 *puVar1;
  
  func_0x0200206c();
  puVar1 = (undefined4 *)&DAT_00004198;
  do {
    puVar1 = (undefined4 *)*puVar1;
    if (puVar1 == (undefined4 *)&DAT_00004198) goto LAB_01e37584;
  } while (*(ushort *)(puVar1 + 7) != param_1);
  puVar1[5] = _DAT_00004158 + (puVar1[6] & 0xffffff) / 10;
LAB_01e37584:
  func_0x0200207e();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e376f0 @ 01e376f0 ====

undefined4 FUN_01e376f0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  func_0x0200206c();
  CoreSynchronize();
  iVar2 = *param_1 + -1;
  *param_1 = iVar2;
  func_0x0200207e();
  uVar1 = 0;
  if ((iVar2 == 0) && (*(code **)(param_1[2] + 0x1c) != (code *)0x0)) {
    uVar1 = (**(code **)(param_1[2] + 0x1c))(param_1);
  }
  return uVar1;
}



// ==== FUN_01e37716 @ 01e37716 ====

undefined4 FUN_01e37716(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  BADSPACEBASE *in_sp;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 local_18 [4];
  
  puVar4 = (undefined4 *)local_18;
  pcVar3 = FUN_01e35d74;
  while( true ) {
    if ((code *)0x1e35d73 < pcVar3) {
      return 0;
    }
    uVar5 = FUN_01e377d0(*(undefined4 *)pcVar3,param_1);
    param_1 = (undefined4)uVar5;
    if ((int)((ulonglong)uVar5 >> 0x20) == 0) break;
    pcVar3 = pcVar3 + 0xc;
  }
  iVar1 = (**(code **)(*(int *)(pcVar3 + 4) + 8))
                    (param_1,puVar4,param_2,*(code **)(*(int *)(pcVar3 + 4) + 8));
  if (iVar1 != 0) {
    return 0;
  }
  piVar2 = (int *)*puVar4;
  piVar2[2] = *(int *)(pcVar3 + 4);
  func_0x0200206c();
  CoreSynchronize();
  *piVar2 = *piVar2 + 1;
  func_0x0200207e();
  return *puVar4;
}



// ==== FUN_01e3776a @ 01e3776a ====

undefined4 FUN_01e3776a(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 8) + 0x18);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01e37772. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xffffffea;
}



// ==== FUN_01e3778e @ 01e3778e ====

undefined4 FUN_01e3778e(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(int *)(param_1 + 8) + 0x10);
  if (pcVar2 != (code *)0x0) {
    uVar1 = (*pcVar2)(param_3,param_2);
    return uVar1;
  }
  return 0;
}



// ==== FUN_01e377d0 @ 01e377d0 ====

int FUN_01e377d0(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (iVar3 == -1) {
      return 0;
    }
    cVar1 = *(char *)(param_1 + iVar3);
    cVar2 = *(char *)(param_2 + iVar3);
    if (cVar1 == '\0') break;
    if ((cVar2 == '\0') ||
       ((((cVar1 != '*' && (cVar1 != '?')) && (cVar2 != '*')) &&
        ((cVar1 != cVar2 && (cVar2 != '?')))))) goto LAB_01e37804;
    iVar3 = iVar3 + 1;
  }
  if (cVar2 == '\0') {
    return 0;
  }
LAB_01e37804:
  return iVar3 + 1;
}



// ==== FUN_01e3780a @ 01e3780a ====

void FUN_01e3780a(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_LAB_01e393e4;
  if ((0x30 < (param_1 - 1U & 0xffff)) && (0x31 < (param_1 - 0x32U & 0xffff))) {
    if ((param_1 - 0x200U & 0xffff) < 0xbd) {
      ppuVar2 = &PTR_LAB_01e393fc;
    }
    else {
      ppuVar2 = &PTR_FUN_01e393cc;
      while( true ) {
        if ((undefined **)0x1e39413 < ppuVar2) {
          return;
        }
        if (((code *)ppuVar2[1] != (code *)0x0) &&
           (iVar1 = (*(code *)ppuVar2[1])(param_1), iVar1 == 1)) break;
        ppuVar2 = ppuVar2 + 6;
      }
    }
  }
  if ((code *)ppuVar2[3] != (code *)0x0) {
    (*(code *)ppuVar2[3])(param_1,param_2,param_3);
  }
  return;
}



// ==== FUN_01e3786e @ 01e3786e ====

undefined4 FUN_01e3786e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (((*(code **)(param_1 + 4) != (code *)0x0) &&
      (iVar1 = (**(code **)(param_1 + 4))(param_2), iVar1 == 1)) &&
     (*(code **)(param_1 + 8) != (code *)0x0)) {
    uVar2 = (**(code **)(param_1 + 8))(param_2,param_3,param_4);
  }
  return uVar2;
}



// ==== FUN_01e37898 @ 01e37898 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e37898(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  if (param_1 == 0x66) {
    if (param_2 < 6) {
      return 0;
    }
    for (uVar3 = 0; iVar2 = (int)uVar3, iVar2 != 6;
        uVar3 = CONCAT44((int)((ulonglong)uVar3 >> 0x20) + (uint)(*(char *)(iVar2 + 0x6760) == '\0')
                         ,iVar2 + 1)) {
    }
    if ((char)((ulonglong)uVar3 >> 0x20) == '\x06') {
      FUN_01e36848(4,s_<Error>___SYSCFG_key_mac_all_0_01e1974d);
    }
    else {
      uVar1 = FUN_01e05048(0x6580);
      if (uVar1 == ((uint)_DAT_00006586 << 0x18 | (_DAT_00006586 & 0xff00) << 8) >> 0x10) {
        iVar2 = func_0x021127a8(6);
        return iVar2;
      }
    }
  }
  ppuVar5 = &PTR_LAB_01e393e4;
  if (((0x30 < (param_1 - 1U & 0xffff)) && (0x31 < (param_1 - 0x32U & 0xffff))) &&
     (ppuVar5 = &PTR_LAB_01e393fc, 0xbc < (param_1 - 0x200U & 0xffff))) {
    for (ppuVar4 = &PTR_FUN_01e393cc; ppuVar4 < &PTR_DAT_01e39414; ppuVar4 = ppuVar4 + 6) {
      if (((code *)ppuVar4[1] != (code *)0x0) && (iVar2 = (*(code *)ppuVar4[1])(), iVar2 == 1)) {
        iVar2 = FUN_01e3786e(ppuVar4,param_2);
        if (0 < iVar2) {
          return iVar2;
        }
        break;
      }
    }
  }
  iVar2 = FUN_01e3786e(ppuVar5,param_2);
  return iVar2;
}



// ==== FUN_01e37990 @ 01e37990 ====

int FUN_01e37990(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_01e37eb8(&DAT_01e1af2a);
  if (iVar1 == 0) {
    FUN_01e36848(4,s_<Error>___CFG_BIN_open__s_fail_01e1c83d,param_1);
  }
  return iVar1;
}



// ==== FUN_01e379b4 @ 01e379b4 ====

void FUN_01e379b4(int param_1)

{
  if (param_1 != 0) {
    FUN_01e37fcc();
  }
  return;
}



// ==== FUN_01e379be @ 01e379be ====

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_01e379be(undefined4 param_1)

{
  if (DAT_01e1b446 == 0) {
    return param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e379ec @ 01e379ec ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e379ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  BADSPACEBASE *in_sp;
  undefined1 *puVar3;
  undefined1 auStack_1c [8];
  
  puVar3 = auStack_1c;
  iVar1 = FUN_01e379be();
  if (iVar1 != 0) {
    uVar2 = func_0x021127a8(puVar3 + 4,_DAT_000065e4 + *(int *)(param_1 + 4),4);
    return uVar2;
  }
  return 0xff0b;
}



// ==== FUN_01e37a5c @ 01e37a5c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e37a5c(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  short *psVar5;
  BADSPACEBASE *in_sp;
  int *piVar6;
  int iVar7;
  undefined1 auStack_48 [40];
  
  piVar6 = (int *)auStack_48;
  func_0x02003c62(0x65e8);
  iVar2 = FUN_01e37990(s_mnt_sdfile_app_btif_01e1b9e2);
  if (iVar2 == 0) {
    uVar3 = 0xff0a;
  }
  else {
    iVar7 = 7;
    puVar4 = piVar6;
    do {
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    FUN_01e37f98(iVar2);
    _DAT_000065e4 = *(undefined4 *)((int)piVar6 + 0xc);
    FUN_01e379b4(iVar2);
    for (psVar5 = &DAT_01e1b446; *psVar5 != 0; psVar5 = psVar5 + 2) {
      *(short *)((int)piVar6 + 0x20) = *psVar5;
      iVar2 = FUN_01e379ec((undefined1 *)((int)piVar6 + 0x20));
      if ((iVar2 != 0x308) && (iVar2 != 0)) {
        FUN_01e36848(4,s_<Error>___BTIF_check_item__d_err_01e1ceae,*psVar5);
        iVar2 = FUN_01e38052(_DAT_000065e4);
        cVar1 = DAT_00006560;
        uVar3 = 0xcc;
        if (DAT_00006560 != '\x01') {
          uVar3 = 200;
        }
        FUN_01e0732e(uVar3,iVar2);
        if (cVar1 == '\x01') {
          FUN_01e0732e(uVar3,iVar2 + 0x100);
        }
        *piVar6 = iVar2;
        FUN_01e36848(2,s__Info____BTIF__s___0x_x_01e1be15,s___btif_area_erase_01e1b8e6);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



// ==== FUN_01e37b0a @ 01e37b0a ====

undefined4 FUN_01e37b0a(uint param_1)

{
  do {
    if (DAT_01e1b44a == 0) {
      return 0;
    }
  } while (DAT_01e1b44a != param_1);
  return 1;
}



// ==== FUN_01e37b72 @ 01e37b72 ====

undefined4 FUN_01e37b72(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_sp;
  uint *puVar6;
  undefined1 local_38 [12];
  
  puVar6 = (uint *)local_38;
  func_0x020030ce(0x65e8,0xffffffff);
  *(undefined2 *)puVar6 = param_1;
  iVar1 = FUN_01e379ec(puVar6);
  if (iVar1 == -0xf8) {
    *(undefined4 *)((int)puVar6 + 8) = 0;
    FUN_01e379be(puVar6);
    iVar4 = *(int *)((int)puVar6 + 2);
    iVar5 = iVar4 + 4;
    iVar1 = FUN_01e3d7d0(iVar5);
    if (iVar1 == 0) {
      uVar3 = 0xff10;
    }
    else {
      iVar2 = FUN_01e37990(s_mnt_sdfile_app_btif_01e1b9e2);
      if (iVar2 != 0) {
        func_0x021127b4(iVar1,0,iVar5);
        puVar6[2] = (*puVar6 & 0xfff) << 8 | iVar4 << 0x14;
        uVar3 = func_0x021127a8(iVar1,puVar6 + 2,4);
        return uVar3;
      }
      uVar3 = 0xff0a;
      thunk_FUN_01e3d7dc(iVar1);
      FUN_01e379b4(0);
    }
    func_0x02002964(0x65e8);
  }
  else {
    func_0x02002964(0x65e8);
    uVar3 = 0xff09;
  }
  return uVar3;
}



// ==== FUN_01e37d2e @ 01e37d2e ====

undefined * FUN_01e37d2e(uint param_1)

{
  bool bVar1;
  
  bVar1 = true;
  while( true ) {
    if (!bVar1) {
      return (undefined *)0x0;
    }
    if (DAT_01e1aa72 == param_1) break;
    bVar1 = false;
  }
  return &DAT_01e1aa6c;
}



// ==== FUN_01e37d50 @ 01e37d50 ====

undefined4 FUN_01e37d50(uint param_1,int param_2,ushort *param_3)

{
  uint uVar1;
  uint uVar2;
  BADSPACEBASE *in_sp;
  uint *puVar3;
  undefined1 local_14 [4];
  
  puVar3 = (uint *)local_14;
  uVar2 = param_2 + param_1;
  while( true ) {
    func_0x021127a8(puVar3,param_1,4);
    uVar1 = *puVar3 >> 0x14;
    if (800 < uVar1) {
      return 0xff07;
    }
    if ((*puVar3 & 0xfff00) >> 8 == (uint)*param_3) break;
    param_1 = param_1 + uVar1 + 4;
    if (uVar2 <= param_1) {
      return 0xff05;
    }
  }
  uVar2 = FUN_01e05048(param_1 + 4);
  if ((uVar2 & 0xffff00ff) != (*puVar3 & 0xff)) {
    return 0xff03;
  }
  param_3[1] = (ushort)(*puVar3 >> 0x14);
  *(uint *)(param_3 + 2) = param_1 + 4;
  return 0;
}



// ==== FUN_01e37dae @ 01e37dae ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e37dae(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((DAT_000066b0 == '\x01') && (iVar1 = FUN_01e37d50((int)_DAT_000067a4), iVar1 == 0)) {
    return 0;
  }
  uVar2 = FUN_01e37d50((int)_DAT_000066a8);
  return uVar2;
}



// ==== FUN_01e37dd6 @ 01e37dd6 ====

/* WARNING: Control flow encountered bad instruction data */

int FUN_01e37dd6(undefined2 param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_sp;
  undefined4 *puVar3;
  undefined1 local_24 [12];
  
  puVar3 = (undefined4 *)local_24;
  iVar1 = FUN_01e37d2e();
  if (iVar1 == 0) {
    iVar2 = 0xff05;
  }
  else {
    iVar2 = 0xff06;
    if (param_3 < *(byte *)(iVar1 + 4)) {
      iVar2 = 0xff02;
      if (*(ushort *)(iVar1 + 2) <= param_2) {
        *(undefined2 *)puVar3 = param_1;
        iVar2 = FUN_01e37dae(puVar3);
        if (iVar2 == 0) {
          *(undefined1 *)((int)puVar3 + 0xb) = 0;
          FUN_01e37d2e(*puVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  }
  return iVar2;
}



// ==== FUN_01e37e9e @ 01e37e9e ====

undefined4 FUN_01e37e9e(void)

{
  BADSPACEBASE *in_sp;
  undefined4 *puVar1;
  undefined4 local_8;
  
  puVar1 = &local_8;
  local_8 = 0;
  FUN_01e0732e(0x67,&local_8);
  return *puVar1;
}



// ==== thunk_FUN_01e3d7dc @ 01e37eb4 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_01e3d7dc(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(uint *)(param_1 + -4) & 0x5a5a0000) != 0x5a5a0000) {
    FUN_01e36a4a(s_vPortFree_01e19782,0x187);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  piVar8 = (int *)(param_1 + -4);
  *(undefined4 *)(param_1 + -4) = 0x5a5a0000;
  func_0x0200206c();
  CoreSynchronize();
  iVar6 = *(int *)(param_1 + -4);
  _DAT_00004b54 = _DAT_00004b54 + iVar6;
  piVar3 = (int *)&DAT_00012ee8;
  do {
    piVar2 = piVar3;
    piVar3 = (int *)piVar2[1];
  } while (piVar3 < piVar8);
  if ((int *)((int)piVar2 + *piVar2) == piVar8) {
    iVar7 = *piVar2 + iVar6;
    *piVar2 = iVar7;
    piVar5 = piVar8;
    piVar10 = piVar2;
    if ((int *)((uint)piVar8 & 0xffffff80) != (int *)((uint)piVar2 & 0xffffff80)) {
      piVar5 = (int *)((uint)piVar8 & 0xffffff80);
    }
  }
  else {
    iVar7 = iVar6;
    piVar5 = (int *)((uint)(piVar8 + 0x20) & 0xffffff80);
    piVar10 = piVar8;
  }
  if (((uint)piVar5 & 0x7f) != 0) {
    piVar5 = (int *)((uint)((int)piVar5 + 0x7f) & 0xffffff80);
  }
  if (((int *)((int)piVar10 + iVar7) == piVar3) && (piVar3 != _DAT_00004b4c)) {
    iVar9 = *piVar3;
    *piVar10 = iVar7 + iVar9;
    piVar10[1] = piVar3[1];
    puVar4 = (undefined1 *)((uint)(piVar3 + 0x20) & 0xffffff80);
    if (((uint)(iVar9 + (int)piVar3) ^ (uint)piVar3) < 0x80) {
      puVar4 = (undefined1 *)(iVar6 + (int)piVar8);
    }
  }
  else {
    piVar10[1] = (int)piVar3;
    puVar4 = (undefined1 *)(iVar6 + (int)piVar8);
  }
  iVar6 = ((uint)puVar4 & 0xffffff80) - (int)piVar5;
  if (0 < iVar6) {
    uVar1 = -iVar6;
    if ((uVar1 & 0x7f) != 0) {
      FUN_01e36a5e();
    }
    if ((piVar5 != (int *)0x3ff) && (((uint)piVar5 & 0x7f) != 0)) {
      FUN_01e36a5e();
    }
    if ((int)uVar1 < 1) {
      func_0x0200219c(piVar5,iVar6);
    }
    else {
      if ((int)piVar5 < 1) {
        if (piVar5 == (int *)0x0) {
          if (DAT_00012fbc == '\0') {
            piVar5 = (int *)0xf000;
          }
          else {
            piVar5 = (int *)0x20f000;
          }
        }
        else {
          if (piVar5 != (int *)0xffffffff) goto LAB_01e3d8cc;
          piVar5 = (int *)(_DAT_00012fc4 + -0x80);
        }
      }
      func_0x02002094(piVar5,uVar1);
    }
  }
LAB_01e3d8cc:
  if (piVar2 != piVar10) {
    piVar2[1] = (int)piVar10;
  }
  func_0x0200207e();
  return;
}



// ==== FUN_01e37eb8 @ 01e37eb8 ====

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_01e37eb8(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  func_0x0200206c();
  puVar4 = (undefined4 *)&DAT_00004118;
  do {
    do {
      puVar4 = (undefined4 *)*puVar4;
      if (puVar4 == (undefined4 *)&DAT_00004118) {
        func_0x0200207e();
        return 0;
      }
    } while (*(char *)(puVar4 + 0x143) == '\0');
    uVar3 = puVar4[-0xf];
    uVar1 = func_0x021127c0(uVar3);
    iVar2 = func_0x021127b0(uVar3,param_1,uVar1);
  } while (iVar2 != 0);
  func_0x0200207e();
  iVar2 = func_0x020030ce(puVar4 + 3,0);
  if (*(char *)(puVar4 + 0x143) != '\0') {
    if (iVar2 != 0) {
      return 0;
    }
    func_0x021127c0(puVar4[-0xf]);
    if (puVar4 != (undefined4 *)0x28) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  func_0x02002964(puVar4 + 3);
  return 0;
}



// ==== FUN_01e37f98 @ 01e37f98 ====

void FUN_01e37f98(void)

{
  int iVar1;
  undefined8 in_r0_r1;
  int iVar2;
  code *pcVar3;
  
  iVar1 = func_0x020030ce(*(int *)in_r0_r1 + 0x4c);
  iVar2 = *(int *)in_r0_r1;
  if (*(char *)(iVar2 + 0x90c) != '\0') {
    if (iVar1 != 0) {
      return;
    }
    *(undefined1 *)((ulonglong)in_r0_r1 >> 0x20) = 0;
    pcVar3 = *(code **)(*(int *)(iVar2 + 8) + 0x58);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)((int *)in_r0_r1);
      iVar2 = *(int *)in_r0_r1;
    }
  }
  func_0x02002964(iVar2 + 0x4c);
  return;
}



// ==== FUN_01e37fcc @ 01e37fcc ====

int FUN_01e37fcc(int *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = func_0x020030ce(*param_1 + 0x4c);
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x90c) == '\0') {
    func_0x02002964(iVar2 + 0x4c);
    iVar2 = *param_1;
    iVar1 = -0x16;
  }
  pcVar3 = *(code **)(*(int *)(iVar2 + 8) + 0x3c);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  if (iVar1 == 0) {
    func_0x02002964(*param_1 + 0x4c);
  }
  iVar6 = *param_1;
  func_0x0200206c();
  CoreSynchronize();
  iVar2 = *(int *)(iVar6 + 0x48) + -1;
  *(int *)(iVar6 + 0x48) = iVar2;
  func_0x0200207e();
  if (iVar2 == 0) {
    func_0x0200206c();
    piVar5 = (int *)(iVar6 + 8);
    iVar2 = (int)*(undefined8 *)(iVar6 + 0x310);
    piVar4 = (int *)((ulonglong)*(undefined8 *)(iVar6 + 0x310) >> 0x20);
    *(int **)(iVar2 + 4) = piVar4;
    *piVar4 = iVar2;
    *(int *)(iVar6 + 0x40) = iVar6 + 0x40;
    *(int *)(iVar6 + 0x44) = iVar6 + 0x40;
    func_0x0200207e();
    if (*(code **)(*piVar5 + 8) != (code *)0x0) {
      (**(code **)(*piVar5 + 8))();
    }
    thunk_FUN_01e3d7dc(iVar6);
  }
  thunk_FUN_01e3d7dc();
  return iVar1;
}



// ==== FUN_01e38052 @ 01e38052 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e38052(int param_1)

{
  return (param_1 - _DAT_0000664c) + _DAT_00006650;
}



// ==== FUN_01e38126 @ 01e38126 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e38126(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_01e3d914(0x28);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x18) = iVar1;
  }
  *(undefined4 *)(param_1 + 0x1c) = _DAT_00006654;
  *(undefined1 *)(param_1 + 0x29) = 0x61;
  *(undefined1 *)(param_1 + 0x2a) = 0x70;
  *(undefined1 *)(param_1 + 0x2b) = 0x70;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 4) = _DAT_00006658;
  *(undefined1 *)(iVar1 + 0x11) = 0x72;
  *(undefined1 *)(iVar1 + 0x12) = 0x65;
  *(undefined1 *)(iVar1 + 0x13) = 0x73;
  *(undefined1 *)(iVar1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x9d) = 2;
  return 0;
}



// ==== thunk_FUN_01e38186 @ 01e38170 ====

void thunk_FUN_01e38186(char *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((byte)(*param_1 + 0x9fU) < 0x1a) {
      *param_1 = *param_1 + -0x20;
    }
    param_1 = param_1 + 1;
  }
  return;
}



// ==== FUN_01e38186 @ 01e38186 ====

void FUN_01e38186(char *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((byte)(*param_1 + 0x9fU) < 0x1a) {
      *param_1 = *param_1 + -0x20;
    }
    param_1 = param_1 + 1;
  }
  return;
}



// ==== FUN_01e3818a @ 01e3818a ====

char * FUN_01e3818a(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = param_1 + 1;
  if (*param_1 != '/') {
    pcVar3 = param_1;
  }
  iVar1 = FUN_01e18734(pcVar3,0x2f);
  if (iVar1 == 0) {
    iVar1 = func_0x021127c0(pcVar3);
  }
  else {
    iVar1 = iVar1 - (int)pcVar3;
  }
  iVar4 = iVar1;
  if (0xe < iVar1) {
    iVar4 = 0xf;
  }
  func_0x021127a8(param_2,pcVar3,iVar4);
  *(undefined1 *)(param_2 + iVar4) = 0;
  thunk_FUN_01e38186(param_2,iVar4);
  pcVar3 = pcVar3 + iVar1;
  pcVar2 = pcVar3 + 1;
  if (*pcVar3 != '/') {
    pcVar2 = pcVar3;
  }
  return pcVar2;
}



// ==== FUN_01e381da @ 01e381da ====

undefined4 FUN_01e381da(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  BADSPACEBASE *in_sp;
  int iVar9;
  char acStack_36 [17];
  char local_25 [17];
  
  pcVar7 = local_25;
  pcVar8 = acStack_36;
  iVar9 = 0x11;
  pcVar3 = pcVar7;
  do {
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  iVar9 = 0x11;
  pcVar3 = pcVar8;
  do {
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  func_0x021127a8(pcVar7,0x10);
  func_0x021127a8(pcVar8,0x10);
  thunk_FUN_01e38186(pcVar7);
  thunk_FUN_01e38186(pcVar8);
  uVar5 = 0xf0;
  do {
    if ((uVar5 & 0xff) == 0) {
      return 0;
    }
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    if ((uVar5 & 0xff00000000) == 0) {
      cVar2 = *pcVar8;
      if (cVar1 == cVar2) {
        uVar4 = uVar5 & 0xffffffff;
        if (cVar1 == '\0') {
          return 0;
        }
      }
      else {
        uVar4 = uVar5 & 0xffffffff;
        if (cVar2 != '?') {
          if (cVar2 != '*') {
            return 0xffffffff;
          }
          uVar4 = CONCAT44(1,(int)uVar5);
        }
      }
    }
    else {
      uVar6 = 0;
      if (cVar1 != '.') {
        uVar6 = (int)(uVar5 >> 0x20);
      }
      uVar4 = CONCAT44(uVar6,(int)uVar5);
    }
    uVar5 = CONCAT44((int)(uVar4 >> 0x20),(int)uVar4 + 1);
    pcVar8 = pcVar8 + 1;
  } while( true );
}



// ==== FUN_01e38256 @ 01e38256 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e38256(int param_1)

{
  return (param_1 - _DAT_0000664c) + _DAT_00006650;
}



// ==== FUN_01e38266 @ 01e38266 ====

undefined4 FUN_01e38266(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_sp;
  int *piVar5;
  undefined1 local_48 [14];
  short sStack_3a;
  undefined1 auStack_38 [16];
  
  piVar5 = (int *)local_48;
  iVar4 = *(int *)(param_2 + 8);
  iVar3 = 0x20;
  while( true ) {
    while( true ) {
      iVar4 = iVar4 + 0x20;
      if (iVar3 < 1) {
        return 0xff02;
      }
      func_0x021127a8(piVar5,iVar4,0x20);
      iVar1 = FUN_01e05048((uint)local_48 | 2,0x1e);
      if (iVar1 == *piVar5) break;
      iVar3 = iVar3 + -1;
    }
    iVar1 = FUN_01e381da(auStack_38,param_3);
    if (iVar1 == 0) break;
    if (sStack_3a != 0) {
      return 1;
    }
  }
  func_0x021127a8(param_1 + 4,piVar5,0x20);
  if ((*(byte *)(param_1 + 0x100) & 0x11) == 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_2 + 8);
  }
  else {
    uVar2 = FUN_01e38256(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  return 0;
}



// ==== FUN_01e382ee @ 01e382ee ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e382ee(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_sp;
  int *piVar3;
  undefined1 local_3c [8];
  int iStack_34;
  short sStack_2e;
  undefined1 auStack_2c [16];
  
  piVar3 = (int *)local_3c;
  iVar2 = _DAT_00006658;
  while( true ) {
    func_0x021127a8(piVar3,iVar2,0x20);
    iVar1 = FUN_01e05048((uint)local_3c | 2,0x1e);
    if (iVar1 != *piVar3) {
      return 0xff05;
    }
    iVar1 = FUN_01e381da(auStack_2c,param_2);
    if (iVar1 == 0) break;
    iVar2 = iVar2 + iStack_34;
    if (sStack_2e != 0) {
      return 0xff01;
    }
  }
  func_0x021127a8(param_1,piVar3,0x20);
  *(int *)(param_1 + 4) = iVar2;
  return 0;
}



// ==== FUN_01e385d4 @ 01e385d4 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e385d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  int iVar8;
  
  iVar8 = 0;
  if (((param_1 == 0) || (iVar8 = FUN_01e37716(param_5), iVar8 != 0)) &&
     (iVar3 = FUN_01e3d914(0xa0), iVar3 != 0)) {
    *(int *)(iVar3 + 0xc) = iVar8;
    uVar5 = 1;
    *(undefined1 *)(iVar3 + 0x9c) = 1;
    func_0x0200206c();
    CoreSynchronize();
    puVar7 = (undefined8 *)(iVar3 + 0x40);
    *(undefined4 *)(iVar3 + 0x48) = uVar5;
    func_0x0200207e();
    func_0x02003c62(iVar3 + 0x4c);
    for (ppuVar6 = &PTR_s_sdfile_01e3934c; ppuVar6 < &PTR_LAB_01e393b0; ppuVar6 = ppuVar6 + 0x19) {
      iVar4 = func_0x021127b8(*ppuVar6,param_3);
      if ((iVar4 == 0) && (iVar4 = (*(code *)ppuVar6[1])(iVar3,param_4,ppuVar6[1]), iVar4 == 0)) {
        *(undefined ***)(iVar3 + 8) = ppuVar6;
        *(undefined4 *)(iVar3 + 4) = param_2;
        func_0x0200206c();
        puVar2 = (undefined4 *)_DAT_0000411c;
        uVar1 = CONCAT44(_DAT_0000411c,&DAT_00004118);
        _DAT_0000411c = puVar7;
        *puVar7 = uVar1;
        *puVar2 = puVar7;
        func_0x0200207e();
        return iVar3;
      }
    }
    if (iVar8 != 0) {
      FUN_01e376f0(iVar8);
    }
    thunk_FUN_01e3d7dc(iVar3);
  }
  return 0;
}



// ==== FUN_01e39a26 @ 01e39a26 ====

void FUN_01e39a26(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  undefined8 uVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  piVar10 = (int *)piVar1[6];
  piVar15 = (int *)piVar1[5];
  piVar2 = (int *)piVar1[4];
  uVar14 = piVar1[3];
  uVar3 = piVar1[8];
  uVar9 = piVar1[2];
  uVar13 = *(undefined8 *)piVar1;
  uVar3 = uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | (uVar3 & 0xff0000) >> 8 | uVar3 >> 0x18;
  piVar1[8] = uVar3;
  uVar4 = piVar1[9];
  piVar1[9] = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | (uVar4 & 0xff0000) >> 8 | uVar4 >> 0x18;
  uVar4 = piVar1[10];
  piVar1[10] = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | (uVar4 & 0xff0000) >> 8 | uVar4 >> 0x18;
  uVar4 = piVar1[0xb];
  piVar1[0xb] = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | (uVar4 & 0xff0000) >> 8 | uVar4 >> 0x18;
  uVar4 = piVar1[0xc];
  piVar1[0xc] = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | (uVar4 & 0xff0000) >> 8 | uVar4 >> 0x18;
  uVar4 = piVar1[0xd];
  piVar1[0xd] = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | (uVar4 & 0xff0000) >> 8 | uVar4 >> 0x18;
  uVar4 = piVar1[0xe];
  piVar1[0xe] = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | (uVar4 & 0xff0000) >> 8 | uVar4 >> 0x18;
  uVar4 = piVar1[0xf];
  piVar1[0xf] = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | (uVar4 & 0xff0000) >> 8 | uVar4 >> 0x18;
  uVar4 = piVar1[0x10];
  piVar1[0x10] = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | (uVar4 & 0xff0000) >> 8 | uVar4 >> 0x18;
  uVar4 = piVar1[0x11];
  piVar1[0x11] = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | (uVar4 & 0xff0000) >> 8 | uVar4 >> 0x18;
  uVar4 = piVar1[0x12];
  piVar1[0x12] = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | (uVar4 & 0xff0000) >> 8 | uVar4 >> 0x18;
  uVar4 = piVar1[0x13];
  piVar1[0x13] = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | (uVar4 & 0xff0000) >> 8 | uVar4 >> 0x18;
  uVar4 = piVar1[0x14];
  piVar1[0x14] = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | (uVar4 & 0xff0000) >> 8 | uVar4 >> 0x18;
  uVar4 = piVar1[0x15];
  piVar1[0x15] = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | (uVar4 & 0xff0000) >> 8 | uVar4 >> 0x18;
  uVar4 = piVar1[0x16];
  piVar1[0x16] = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | (uVar4 & 0xff0000) >> 8 | uVar4 >> 0x18;
  uVar4 = piVar1[0x17];
  piVar1[0x17] = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | (uVar4 & 0xff0000) >> 8 | uVar4 >> 0x18;
  iVar6 = 0;
  do {
    uVar4 = *(uint *)((int)piVar1 + iVar6 + 0x24);
    uVar8 = *(uint *)((int)piVar1 + iVar6 + 0x58);
    iVar5 = iVar6 + 4;
    *(uint *)((int)piVar1 + iVar6 + 0x60) =
         *(int *)((int)piVar1 + iVar6 + 0x44) + uVar3 +
         (uVar8 >> 10 ^ uVar8 & 0x1fff ^ uVar8 & 0x7fff) +
         (uVar4 >> 3 ^ uVar4 & 0x3fff ^ uVar4 & 0x1ffffff);
    iVar6 = iVar5;
    uVar3 = uVar4;
  } while (iVar5 != 0xc0);
  iVar6 = 0;
  piVar7 = piVar1;
  do {
    piVar16 = piVar15;
    piVar11 = piVar10;
    uVar3 = uVar9;
    piVar15 = piVar2;
    uVar4 = (uint)uVar13;
    uVar9 = (uint)((ulonglong)uVar13 >> 0x20);
    iVar5 = *(int *)(((int)piVar1 + iVar6 + 0x20) * 4) +
            *(int *)((iVar6 + 0x1e39ffc) * 4) +
            ((uint)piVar11 & ~(uint)piVar15 | (uint)piVar16 & (uint)piVar15) +
            ((uint)piVar15 & 0x3ffffff ^ (uint)piVar15 & 0x1fffff ^ (uint)piVar15 & 0x7f);
    iVar12 = (int)piVar7 +
             ((uVar3 | uVar9) & uVar4 | uVar3 & uVar9) +
             (uVar4 & 0x3fffffff ^ uVar4 & 0x7ffff ^ uVar4 & 0x3ff) + iVar5;
    iVar6 = iVar6 + 1;
    piVar2 = (int *)((int)piVar7 + uVar14 + iVar5);
    uVar13 = CONCAT44(uVar4,iVar12);
    piVar7 = piVar11;
    piVar10 = piVar16;
    uVar14 = uVar3;
  } while (iVar6 != 0x40);
  *piVar1 = *piVar1 + iVar12;
  piVar1[1] = piVar1[1] + uVar4;
  piVar1[2] = piVar1[2] + uVar9;
  piVar1[3] = piVar1[3] + uVar3;
  piVar1[4] = piVar1[4] + (int)piVar2;
  piVar1[5] = piVar1[5] + (int)piVar15;
  piVar1[6] = piVar1[6] + (int)piVar16;
  piVar1[7] = piVar1[7] + (int)piVar11;
  return;
}



// ==== FUN_01e39c40 @ 01e39c40 ====

void FUN_01e39c40(void)

{
  uint *puVar1;
  int iVar2;
  undefined8 in_r0_r1;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  BADSPACEBASE *in_sp;
  int *piVar7;
  undefined4 local_38;
  
  piVar7 = &local_38;
  puVar1 = (uint *)in_r0_r1;
  puVar4 = puVar1 + 0x48;
  uVar3 = *puVar4;
  local_38 = (undefined4)((ulonglong)in_r0_r1 >> 0x20);
  iVar2 = 0x38;
  if (0x37 < (int)uVar3) {
    iVar2 = 0x78;
  }
  iVar2 = iVar2 - uVar3;
  lVar6 = *(longlong *)(puVar1 + 0x4081);
  while (0 < iVar2) {
    iVar5 = iVar2;
    if ((int)(0x40 - uVar3) < iVar2) {
      iVar5 = 0x40 - uVar3;
    }
    func_0x021127a8(iVar5);
    uVar3 = iVar5 + *puVar4;
    *puVar4 = uVar3;
    *(ulonglong *)(puVar1 + 0x4009) =
         CONCAT44((int)((ulonglong)*(undefined8 *)(puVar1 + 0x4081) >> 0x20) + (iVar5 >> 0x1f),
                  (int)*(undefined8 *)(puVar1 + 0x4081) + iVar5);
    iVar2 = iVar2 - iVar5;
    if (uVar3 == 0x40) {
      FUN_01e39a26();
      uVar3 = 0;
      *puVar4 = 0;
    }
  }
  puVar1[0x16] = (uint)(lVar6 << 0x1d) >> 0x18;
  uVar3 = (uint)lVar6;
  puVar1[0x17] = uVar3 << 0x1b | (uVar3 << 3 & 0xff00) << 8 | (uVar3 << 3 & 0xff0000) >> 8 |
                 (uVar3 & 0x1fffffff) >> 0x15;
  FUN_01e39a26();
  uVar3 = *puVar1;
  *puVar1 = uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | (uVar3 & 0xff0000) >> 8 | uVar3 >> 0x18;
  uVar3 = puVar1[1];
  puVar1[1] = uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | (uVar3 & 0xff0000) >> 8 | uVar3 >> 0x18;
  uVar3 = puVar1[2];
  puVar1[2] = uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | (uVar3 & 0xff0000) >> 8 | uVar3 >> 0x18;
  uVar3 = puVar1[3];
  puVar1[3] = uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | (uVar3 & 0xff0000) >> 8 | uVar3 >> 0x18;
  uVar3 = puVar1[4];
  puVar1[4] = uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | (uVar3 & 0xff0000) >> 8 | uVar3 >> 0x18;
  uVar3 = puVar1[5];
  puVar1[5] = uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | (uVar3 & 0xff0000) >> 8 | uVar3 >> 0x18;
  uVar3 = puVar1[6];
  puVar1[6] = uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | (uVar3 & 0xff0000) >> 8 | uVar3 >> 0x18;
  uVar3 = puVar1[7];
  puVar1[7] = uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | (uVar3 & 0xff0000) >> 8 | uVar3 >> 0x18;
  if (*piVar7 != 0) {
    func_0x021127a8(0x20);
  }
  return;
}



// ==== FUN_01e3a142 @ 01e3a142 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e3a142(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (0 < (int)param_2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = param_2 * 2 + -1;
  uVar3 = param_2;
  uVar1 = param_2;
  while( true ) {
    if (iVar2 <= (int)uVar1) {
      *(undefined4 *)((param_1 + iVar2) * 4) = 0;
      return;
    }
    uVar3 = uVar3 + 1;
    if ((int)(char)((char)uVar3 - (char)param_2) < (int)param_2) break;
    *(undefined4 *)((param_1 + uVar1) * 4) = 0;
    uVar1 = uVar3 & 0xff;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e3d5b2 @ 01e3d5b2 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e3d5b2(uint param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_1 == 0) {
    uVar1 = 0xba;
    goto LAB_01e3d7c2;
  }
  func_0x0200206c();
  CoreSynchronize();
  puVar4 = _DAT_00004b4c;
  if (_DAT_00004b4c == (uint *)0x0) {
    if (DAT_00012fbc == '\0') {
      uVar1 = 0xf000;
    }
    else {
      uVar1 = 0x20f000;
    }
    puVar2 = (uint *)func_0x02002094(uVar1,0x80);
    iVar3 = func_0x02002094(_DAT_00012fc4 + -0x80,0x80);
    _DAT_00012ee0 = 0;
    puVar4 = (uint *)((int)puVar2 + (((iVar3 - (int)puVar2) + 0xffU & 0xffffff80) - 8) & 0xfffffffc)
    ;
    _DAT_00004b4c = puVar4;
    _DAT_00012ee4 = puVar2;
    *puVar4 = 0;
    puVar4[1] = 0;
    _DAT_00004b50 = (int)puVar4 - (int)puVar2;
    *puVar2 = _DAT_00004b50;
    puVar2[1] = (uint)puVar4;
    _DAT_00004b54 = _DAT_00004b50;
  }
  if ((param_1 & 0x5a5a0000) != 0) goto LAB_01e3d6ea;
  uVar8 = (4 - (param_1 + 4 & 3)) + param_1 + 4;
  if ((uVar8 & 3) != 0) {
    uVar1 = 0xd6;
    goto LAB_01e3d7c2;
  }
  if (0xffff < uVar8) {
    uVar1 = 0xdf;
    goto LAB_01e3d7c2;
  }
  puVar2 = _DAT_00012eec;
  puVar6 = (uint *)&DAT_00012ee8;
  if (uVar8 - 1 < _DAT_00004b54) {
    do {
      puVar9 = puVar6;
      puVar6 = puVar2;
      if (uVar8 <= *puVar6) break;
      puVar2 = (uint *)puVar6[1];
    } while ((uint *)puVar6[1] != (uint *)0x0);
    if (puVar6 == puVar4) goto LAB_01e3d6ea;
    uVar11 = puVar9[1];
    uVar5 = uVar11 + uVar8;
    uVar7 = 0x80 - (uVar5 & 0x7f);
    if (uVar7 < 8) {
      uVar8 = uVar8 + uVar7;
      uVar5 = uVar8 + uVar11;
    }
    uVar10 = uVar11 + 0x80 & 0xffffff80;
    uVar7 = uVar5;
    if ((uVar5 & 0x7f) != 0) {
      uVar7 = uVar5 & 0xffffff80;
      if (uVar7 != (*puVar6 + (int)puVar6 & 0xffffff80)) {
        uVar7 = uVar5 + 0x7f & 0xffffff80;
      }
    }
    uVar7 = uVar7 - uVar10;
    if (0 < (int)uVar7) {
      if ((uVar7 & 0x7f) != 0) {
        FUN_01e36a5e();
      }
      if ((int)uVar10 < 1) {
        if (uVar10 == 0) {
          if (DAT_00012fbc == '\0') {
            uVar10 = 0xf000;
          }
          else {
            uVar10 = 0x20f000;
          }
          goto LAB_01e3d6dc;
        }
      }
      else {
LAB_01e3d6dc:
        iVar3 = func_0x02002094(uVar10,uVar7);
        if (iVar3 != -1) goto LAB_01e3d702;
      }
      thunk_EXT_FUN_0200010a();
    }
LAB_01e3d702:
    puVar9[1] = puVar6[1];
    uVar5 = *puVar6;
    if (7 < uVar5 - uVar8) {
      uVar7 = (int)puVar6 + uVar8;
      if ((uVar7 & 3) != 0) {
        uVar1 = 0x119;
        goto LAB_01e3d7c2;
      }
      if (((uVar7 & 0x7f) == 0) && (uVar7 != (uVar5 + (int)puVar6 & 0xffffff80))) {
        if (uVar7 == 0x3ff) {
          iVar3 = func_0x02002094(_DAT_00012fc4 + -0x80,0x80);
          iVar3 = iVar3 + 0x80;
LAB_01e3d774:
          if (iVar3 != -1) goto LAB_01e3d77c;
        }
        else {
          uVar5 = uVar7;
          if (0 < (int)uVar7) {
LAB_01e3d770:
            iVar3 = func_0x02002094(uVar5,0x80);
            goto LAB_01e3d774;
          }
          if (uVar7 == 0) {
            if (DAT_00012fbc == '\0') {
              uVar5 = 0xf000;
            }
            else {
              uVar5 = 0x20f000;
            }
            goto LAB_01e3d770;
          }
        }
        thunk_EXT_FUN_0200010a();
      }
LAB_01e3d77c:
      *(uint *)((int)puVar6 + uVar8) = *puVar6 - uVar8;
      *puVar6 = uVar8;
      *(uint *)(uVar7 + 4) = puVar9[1];
      puVar9[1] = uVar7;
      uVar5 = *puVar6;
    }
    uVar11 = uVar11 + 4;
    _DAT_00004b54 = _DAT_00004b54 - uVar5;
    if (_DAT_00004b54 < _DAT_00004b50) {
      _DAT_00004b50 = _DAT_00004b54;
    }
    *puVar6 = *puVar6 | 0x5a5a0000;
    func_0x0200207e();
  }
  else {
LAB_01e3d6ea:
    func_0x0200207e();
    uVar11 = 0;
  }
  if ((uVar11 & 3) == 0) {
    return uVar11;
  }
  uVar1 = 0x158;
LAB_01e3d7c2:
  FUN_01e36a4a(s_pvPortMalloc_01e1976e,uVar1);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ==== FUN_01e3d7d0 @ 01e3d7d0 ====

void FUN_01e3d7d0(void)

{
  FUN_01e3d5b2();
  return;
}



// ==== FUN_01e3d7dc @ 01e3d7dc ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e3d7dc(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(uint *)(param_1 + -4) & 0x5a5a0000) != 0x5a5a0000) {
    FUN_01e36a4a(s_vPortFree_01e19782,0x187);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  piVar8 = (int *)(param_1 + -4);
  *(undefined4 *)(param_1 + -4) = 0x5a5a0000;
  func_0x0200206c();
  CoreSynchronize();
  iVar6 = *(int *)(param_1 + -4);
  _DAT_00004b54 = _DAT_00004b54 + iVar6;
  piVar3 = (int *)&DAT_00012ee8;
  do {
    piVar2 = piVar3;
    piVar3 = (int *)piVar2[1];
  } while (piVar3 < piVar8);
  if ((int *)((int)piVar2 + *piVar2) == piVar8) {
    iVar7 = *piVar2 + iVar6;
    *piVar2 = iVar7;
    piVar5 = piVar8;
    piVar10 = piVar2;
    if ((int *)((uint)piVar8 & 0xffffff80) != (int *)((uint)piVar2 & 0xffffff80)) {
      piVar5 = (int *)((uint)piVar8 & 0xffffff80);
    }
  }
  else {
    iVar7 = iVar6;
    piVar5 = (int *)((uint)(piVar8 + 0x20) & 0xffffff80);
    piVar10 = piVar8;
  }
  if (((uint)piVar5 & 0x7f) != 0) {
    piVar5 = (int *)((uint)((int)piVar5 + 0x7f) & 0xffffff80);
  }
  if (((int *)((int)piVar10 + iVar7) == piVar3) && (piVar3 != _DAT_00004b4c)) {
    iVar9 = *piVar3;
    *piVar10 = iVar7 + iVar9;
    piVar10[1] = piVar3[1];
    puVar4 = (undefined1 *)((uint)(piVar3 + 0x20) & 0xffffff80);
    if (((uint)(iVar9 + (int)piVar3) ^ (uint)piVar3) < 0x80) {
      puVar4 = (undefined1 *)(iVar6 + (int)piVar8);
    }
  }
  else {
    piVar10[1] = (int)piVar3;
    puVar4 = (undefined1 *)(iVar6 + (int)piVar8);
  }
  iVar6 = ((uint)puVar4 & 0xffffff80) - (int)piVar5;
  if (0 < iVar6) {
    uVar1 = -iVar6;
    if ((uVar1 & 0x7f) != 0) {
      FUN_01e36a5e();
    }
    if ((piVar5 != (int *)0x3ff) && (((uint)piVar5 & 0x7f) != 0)) {
      FUN_01e36a5e();
    }
    if ((int)uVar1 < 1) {
      func_0x0200219c(piVar5,iVar6);
    }
    else {
      if ((int)piVar5 < 1) {
        if (piVar5 == (int *)0x0) {
          if (DAT_00012fbc == '\0') {
            piVar5 = (int *)0xf000;
          }
          else {
            piVar5 = (int *)0x20f000;
          }
        }
        else {
          if (piVar5 != (int *)0xffffffff) goto LAB_01e3d8cc;
          piVar5 = (int *)(_DAT_00012fc4 + -0x80);
        }
      }
      func_0x02002094(piVar5,uVar1);
    }
  }
LAB_01e3d8cc:
  if (piVar2 != piVar10) {
    piVar2[1] = (int)piVar10;
  }
  func_0x0200207e();
  return;
}



// ==== thunk_FUN_01e3d7dc @ 01e3d912 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_01e3d7dc(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(uint *)(param_1 + -4) & 0x5a5a0000) != 0x5a5a0000) {
    FUN_01e36a4a(s_vPortFree_01e19782,0x187);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  piVar8 = (int *)(param_1 + -4);
  *(undefined4 *)(param_1 + -4) = 0x5a5a0000;
  func_0x0200206c();
  CoreSynchronize();
  iVar6 = *(int *)(param_1 + -4);
  _DAT_00004b54 = _DAT_00004b54 + iVar6;
  piVar3 = (int *)&DAT_00012ee8;
  do {
    piVar2 = piVar3;
    piVar3 = (int *)piVar2[1];
  } while (piVar3 < piVar8);
  if ((int *)((int)piVar2 + *piVar2) == piVar8) {
    iVar7 = *piVar2 + iVar6;
    *piVar2 = iVar7;
    piVar5 = piVar8;
    piVar10 = piVar2;
    if ((int *)((uint)piVar8 & 0xffffff80) != (int *)((uint)piVar2 & 0xffffff80)) {
      piVar5 = (int *)((uint)piVar8 & 0xffffff80);
    }
  }
  else {
    iVar7 = iVar6;
    piVar5 = (int *)((uint)(piVar8 + 0x20) & 0xffffff80);
    piVar10 = piVar8;
  }
  if (((uint)piVar5 & 0x7f) != 0) {
    piVar5 = (int *)((uint)((int)piVar5 + 0x7f) & 0xffffff80);
  }
  if (((int *)((int)piVar10 + iVar7) == piVar3) && (piVar3 != _DAT_00004b4c)) {
    iVar9 = *piVar3;
    *piVar10 = iVar7 + iVar9;
    piVar10[1] = piVar3[1];
    puVar4 = (undefined1 *)((uint)(piVar3 + 0x20) & 0xffffff80);
    if (((uint)(iVar9 + (int)piVar3) ^ (uint)piVar3) < 0x80) {
      puVar4 = (undefined1 *)(iVar6 + (int)piVar8);
    }
  }
  else {
    piVar10[1] = (int)piVar3;
    puVar4 = (undefined1 *)(iVar6 + (int)piVar8);
  }
  iVar6 = ((uint)puVar4 & 0xffffff80) - (int)piVar5;
  if (0 < iVar6) {
    uVar1 = -iVar6;
    if ((uVar1 & 0x7f) != 0) {
      FUN_01e36a5e();
    }
    if ((piVar5 != (int *)0x3ff) && (((uint)piVar5 & 0x7f) != 0)) {
      FUN_01e36a5e();
    }
    if ((int)uVar1 < 1) {
      func_0x0200219c(piVar5,iVar6);
    }
    else {
      if ((int)piVar5 < 1) {
        if (piVar5 == (int *)0x0) {
          if (DAT_00012fbc == '\0') {
            piVar5 = (int *)0xf000;
          }
          else {
            piVar5 = (int *)0x20f000;
          }
        }
        else {
          if (piVar5 != (int *)0xffffffff) goto LAB_01e3d8cc;
          piVar5 = (int *)(_DAT_00012fc4 + -0x80);
        }
      }
      func_0x02002094(piVar5,uVar1);
    }
  }
LAB_01e3d8cc:
  if (piVar2 != piVar10) {
    piVar2[1] = (int)piVar10;
  }
  func_0x0200207e();
  return;
}



// ==== FUN_01e3d914 @ 01e3d914 ====

int FUN_01e3d914(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_01e3d5b2(param_1);
  if (iVar1 != 0) {
    func_0x021127b4(0,param_1);
  }
  return iVar1;
}



// ==== FUN_01e3e23e @ 01e3e23e ====

void FUN_01e3e23e(int param_1)

{
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x120) = 0;
    FUN_01e367de(s_sbc_dec_free_0x_x_01e19be0,param_1);
    thunk_FUN_01e3d7dc(param_1);
  }
  return;
}



// ==== FUN_01e3e2de @ 01e3e2de ====

byte * FUN_01e3e2de(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  if (*param_1 != 0x9c) {
    uVar2 = (*param_1 & 0xf) * 4 + 0xc | 1;
    if ((*param_1 & 0x10) == 0) {
      uVar2 = uVar2 + (uint)CONCAT11(param_1[uVar2 + 2],param_1[uVar2 + 3]) * 4 + 4;
    }
    param_1 = param_1 + uVar2;
    bVar3 = 0;
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      if (bVar1 == 0x9c) {
        return param_1;
      }
      bVar3 = bVar3 + 1;
    } while (bVar3 < 5);
  }
  return param_1;
}



// ==== FUN_01e3e320 @ 01e3e320 ====

int FUN_01e3e320(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  
  *(byte *)(param_1 + 0x123) = *param_2 >> 6;
  bVar1 = *param_2;
  bVar5 = bVar1 >> 2 & 3;
  *(byte *)(param_1 + 0x124) = bVar5;
  iVar6 = 1;
  if ((bVar1 >> 2 & 3) != 0) {
    iVar6 = 2;
  }
  bVar1 = *param_2;
  bVar2 = param_2[1];
  iVar3 = (bVar1 & 1) * 4 + 4;
  cVar4 = (char)((uint)(iVar6 * iVar3) >> 1) + '\x04';
  *(char *)(param_1 + 0x126) = cVar4;
  iVar7 = (bVar1 >> 2 & 0xc) + 4;
  if (bVar5 < 2) {
    iVar6 = (uint)bVar2 * iVar6 * iVar7;
  }
  else {
    iVar6 = iVar3;
    if (bVar5 != 3) {
      iVar6 = 0;
    }
    iVar6 = (uint)bVar2 * iVar7 + iVar6;
  }
  *(char *)(param_1 + 0x126) = (char)(iVar6 + 7U >> 3) + cVar4;
  return iVar3 * iVar7;
}



// ==== FUN_01e3e5d4 @ 01e3e5d4 ====

undefined4 FUN_01e3e5d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if ((*(byte *)(iVar1 + 8) & 5) == 0) {
    thunk_EXT_FUN_0200010a();
    iVar1 = *(int *)(param_1 + 0x24);
  }
  if (*(code **)(iVar1 + 0x14) != (code *)0x0) {
    uVar2 = (**(code **)(iVar1 + 0x14))(param_1);
    return uVar2;
  }
  return 0;
}



// ==== FUN_01e3e636 @ 01e3e636 ====

void FUN_01e3e636(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x24) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x01e3e63a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



// ==== FUN_01e3e656 @ 01e3e656 ====

void FUN_01e3e656(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  
  if ((*(byte *)(*(int *)(param_1 + 0x24) + 8) & 1) == 0) {
    thunk_EXT_FUN_0200010a();
  }
  if ((param_4 != 0x3ff) &&
     (pcVar1 = *(code **)(*(int *)(param_1 + 0x24) + 0x10), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1,param_4,0);
  }
  pcVar1 = *(code **)(*(int *)(param_1 + 0x24) + 0xc);
  (*pcVar1)(param_1,param_2,param_3,pcVar1);
  return;
}



// ==== FUN_01e3e6a6 @ 01e3e6a6 ====

void FUN_01e3e6a6(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_2 = (uint)*(byte *)(param_1 + 0xd);
  }
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 0x24))
                    (param_1,param_2,(code *)**(undefined4 **)(param_1 + 0x24));
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x4d) = 3;
  }
  return;
}



// ==== FUN_01e3e6c0 @ 01e3e6c0 ====

int FUN_01e3e6c0(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  
  if ((*(int *)(param_1 + 0x2c) != 0) &&
     (pcVar2 = *(code **)(*(int *)(param_1 + 0x2c) + 4), pcVar2 != (code *)0x0)) {
    iVar1 = (*pcVar2)(param_1);
    if (iVar1 < param_2) {
      *(undefined1 *)(param_1 + 0x4d) = 3;
    }
    return iVar1;
  }
  return param_2;
}



// ==== FUN_01e3e714 @ 01e3e714 ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_01e3e714(int param_1,undefined2 *param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  
  if (param_1 != 0) {
    puVar4 = param_2;
    for (iVar3 = 0; iVar3 < (param_3 >> 1) / 2; iVar3 = iVar3 + 1) {
      uVar2 = param_2[1];
      uVar1 = param_2[1];
      switch(param_1) {
      case 1:
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
        break;
      case 2:
        *puVar4 = uVar2;
        puVar4 = puVar4 + 1;
        break;
      default:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 4:
        *puVar4 = uVar1;
        puVar4[1] = uVar1;
        goto LAB_01e3e772;
      case 5:
        *puVar4 = uVar2;
        puVar4[1] = uVar2;
LAB_01e3e772:
        puVar4 = puVar4 + 2;
      }
      param_2 = param_2 + 1;
    }
  }
  return;
}



// ==== FUN_01e3ead8 @ 01e3ead8 ====

void FUN_01e3ead8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 2) = param_2;
  return;
}



// ==== FUN_01e3eadc @ 01e3eadc ====

undefined4 * FUN_01e3eadc(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  func_0x0200206c();
  CoreSynchronize();
  if (DAT_00007634 == '\0') {
    func_0x02003c62(0x7638);
    FUN_01e36a6a(0x2d,1,&LAB_01e3eeae);
    DAT_00007634 = '\x01';
  }
  func_0x0200207e();
  iVar3 = 0;
  func_0x020030ce(0x7638,0);
  puVar1 = (undefined4 *)&DAT_0000759c;
  do {
    if (2 < iVar3) {
LAB_01e3eb94:
      func_0x02002964(0x7638);
      return (undefined4 *)0x0;
    }
    puVar4 = puVar1 + -5;
    if (*(char *)((int)puVar1 + -0x13) == '\0') {
      *(undefined1 *)((int)puVar1 + -0x13) = 1;
      if (puVar1 != (undefined4 *)0x14) {
        if (*(char *)((int)param_1 + 5) == '\x01') {
          *(undefined1 *)((int)puVar1 + -0x12) = *(undefined1 *)(param_1 + 1);
          uVar5 = *param_1;
          uVar2 = 3;
          iVar3 = func_0x021127c4(uVar5,&DAT_01e1b034);
          if (iVar3 != 0) {
            uVar2 = 4;
            iVar3 = func_0x021127c4(uVar5,&DAT_01e1b083);
            if (iVar3 != 0) goto LAB_01e3eb90;
          }
          *(undefined1 *)puVar4 = uVar2;
          *puVar1 = 0;
LAB_01e3ebb0:
          *(undefined1 *)((int)puVar1 + -0x11) = 0;
          puVar1[-3] = &DAT_00007634;
          puVar1[-4] = param_1[2];
          puVar1[-2] = param_1[3];
          DAT_00007637 = 0;
          func_0x02002964(0x7638);
          return puVar4;
        }
        iVar3 = func_0x021127c4(*param_1,&DAT_01e1b083,4);
        if (iVar3 == 0) {
          *(undefined1 *)puVar4 = 4;
          goto LAB_01e3ebb0;
        }
LAB_01e3eb90:
        *(undefined1 *)((int)puVar1 + -0x13) = 0;
      }
      goto LAB_01e3eb94;
    }
    puVar1 = puVar1 + 7;
    iVar3 = iVar3 + 1;
  } while( true );
}



// ==== thunk_EXT_FUN_0200010a @ 01e3ebd0 ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== thunk_EXT_FUN_0200010a @ 01e3ef40 ====

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0200010a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e3efa2 @ 01e3efa2 ====

undefined4 FUN_01e3efa2(ushort *param_1)

{
  int iVar1;
  undefined4 uVar2;
  BADSPACEBASE *in_sp;
  undefined4 *puVar3;
  undefined4 local_14;
  
  puVar3 = &local_14;
  uVar2 = 0;
  if ((*param_1 & 0x100) == 0) {
    local_14 = 1;
    iVar1 = (**(code **)(*(int *)(param_1 + 0x6a) + 4))
                      (param_1 + 0x78,param_1 + 0x6c,0,*(code **)(*(int *)(param_1 + 0x6a) + 4));
    if (iVar1 == 0) {
      (**(code **)(*(int *)(param_1 + 0x6a) + 0x30))
                (param_1 + 0x78,0x80,puVar3,*(code **)(*(int *)(param_1 + 0x6a) + 0x30));
      *param_1 = *param_1 | 0x100;
    }
    else {
      FUN_01e36848(4,s_<Error>___AUDIO_G726_g726_dec_op_01e19c2f);
      uVar2 = 0xfffffff2;
    }
  }
  return uVar2;
}



// ==== FUN_01e40be4 @ 01e40be4 ====

void FUN_01e40be4(uint param_1)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  DAT_000130e0 = '\x03';
  if (DAT_000130dc != '\0') {
    puVar2 = (uint *)&DAT_00005ce0;
    cVar1 = '\0';
    iVar3 = 0;
    while ((iVar3 < 4 && (uVar4 = *puVar2, puVar2 = puVar2 + 5, uVar4 < param_1))) {
      cVar1 = cVar1 + '\x01';
      iVar3 = iVar3 + 1;
    }
    DAT_000130e0 = '\x03';
    if (iVar3 != 4) {
      DAT_000130e0 = cVar1;
    }
  }
  return;
}



// ==== FUN_01e40c20 @ 01e40c20 ====

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_01e40c20(uint param_1)

{
  if ((param_1 <= *(uint *)((uint)DAT_000130e0 * 0x14 + 0x5cdc)) &&
     (param_1 <= *(uint *)(&DAT_00005ce0 + (uint)DAT_000130e0 * 0x14))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0xffffffff;
}



// ==== FUN_01e40c60 @ 01e40c60 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e40c60(uint param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  
  uVar3 = 0;
  do {
    if (uVar3 < 3) {
      _DAT_000130bc = 0xffffffff;
      return;
    }
    cVar4 = '\0';
    for (uVar5 = 0; 2 < uVar5; uVar5 = uVar5 + 1) {
      cVar2 = cVar4;
      for (uVar1 = 0; 2 < uVar1; uVar1 = uVar1 + 1) {
        if ((*(uint *)((uVar3 + 0x1e1b710) * 4) /
            (uint)(byte)s________________full_01e1ba0b[uVar5 + 5]) /
            (uint)(byte)s________________full_01e1ba0b[uVar1 + 9] == param_1) {
          _DAT_000130bc = param_1;
          DAT_000130d4 = (char)param_1;
          DAT_000130d8 = cVar2;
          return;
        }
        cVar2 = cVar2 + '\x01';
      }
      cVar4 = cVar4 + '\x04';
    }
    uVar3 = uVar3 + 1;
  } while( true );
}



// ==== FUN_01e40cd6 @ 01e40cd6 ====

uint FUN_01e40cd6(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  for (uVar2 = 0; (uVar1 = uVar2 & 0xff, uVar1 <= param_3 && (param_2 < param_1 / (uVar1 + 1)));
      uVar2 = uVar2 + 1) {
  }
  return uVar1;
}



// ==== FUN_01e40cf2 @ 01e40cf2 ====

void FUN_01e40cf2(void)

{
  FUN_01e40cd6(*(undefined4 *)(&DAT_00005ce0 + (uint)DAT_000130e0 * 0x14),0xff);
  return;
}



// ==== FUN_01e40d0c @ 01e40d0c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e40d0c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  undefined1 extraout_r0;
  undefined1 extraout_r0_00;
  undefined1 extraout_r0_01;
  undefined1 extraout_r0_02;
  undefined1 extraout_r0_03;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  uint uVar2;
  byte bVar4;
  ulonglong uVar3;
  int iVar5;
  
  if (param_2 == 0) {
    func_0x0200010a();
  }
  iVar5 = (uint)DAT_000130e0 * 0x14;
  FUN_01e40cd6((char)param_1,*(undefined4 *)(iVar5 + 0x5cdc),7);
  param_1 = param_1 / (CONCAT22(extraout_var_04,CONCAT11(extraout_var,extraout_r0)) + 1U);
  DAT_000130c8 = (undefined1)(((param_1 / 1000000) * 0x1e) / *(uint *)(iVar5 + 0x5ce8));
  DAT_000130c0 = extraout_r0;
  _DAT_000130e4 = param_1;
  FUN_01e40cd6((char)param_1,0xff);
  _DAT_000130e8 =
       param_1 / (CONCAT22(extraout_var_05,CONCAT11(extraout_var_00,extraout_r0_00)) + 1U);
  uVar3 = (ulonglong)param_1;
  if ((param_1 / param_2 & 0xff) != 0) {
    uVar3 = (ulonglong)CONCAT14((char)(param_1 / param_2) + -1,param_1);
  }
  uVar1 = uVar3 >> 0x20;
  DAT_000130c4 = extraout_r0_00;
  FUN_01e40cf2((char)uVar3);
  if ((uint)(byte)uVar1 <= CONCAT22(extraout_var_06,CONCAT11(extraout_var_01,extraout_r0_01))) {
    uVar3 = CONCAT44(CONCAT22(extraout_var_06,CONCAT11(extraout_var_01,extraout_r0_01)),(int)uVar3);
  }
  bVar4 = (byte)(uVar3 >> 0x20);
  _DAT_000130cc = (ushort)bVar4;
  uVar2 = (uint)uVar3 / (bVar4 + 1);
  _DAT_000130ec = uVar2;
  FUN_01e40cd6((char)uVar2,*(undefined4 *)(iVar5 + 0x5ce4),7);
  uVar2 = uVar2 / (CONCAT22(extraout_var_07,CONCAT11(extraout_var_02,extraout_r0_02)) + 1U);
  DAT_000130d0 = extraout_r0_02;
  _DAT_000130f0 = uVar2;
  FUN_01e40cd6((char)uVar2,*(undefined4 *)(iVar5 + 0x5cec),3);
  _DAT_000130f4 = uVar2 / (CONCAT22(extraout_var_08,CONCAT11(extraout_var_03,extraout_r0_03)) + 1U);
  return;
}



// ==== FUN_01e40df0 @ 01e40df0 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x01e40e1e: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e40e22) */

void FUN_01e40df0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ==== FUN_01e40e30 @ 01e40e30 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e40e30(void)

{
  if (_DAT_000130bc != 0x3ff) {
    _DAT_001e0014 = _DAT_001e0014 & 0xffffffc0 | DAT_000130d4 & 3 | (DAT_000130d8 & 0xf) << 2;
  }
  return;
}



// ==== FUN_01e40e64 @ 01e40e64 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e40e64(void)

{
  _DAT_001e0044 = _DAT_001e0044 | 0x1f000000;
  return;
}



// ==== FUN_01e40e8c @ 01e40e8c ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e40e8c(void)

{
  _DAT_001e0008 = _DAT_001e0008 & 0xffff8fff | (DAT_000130c0 & 0xffffff07) << 0xc;
  func_0x020001a6(DAT_000130c4,DAT_000130c8);
  _DAT_001e0008 =
       _DAT_001e0008 & 0xfffff800 | _DAT_000130cc & 0xff | (DAT_000130d0 & 0xffffff07) << 8;
  return;
}



// ==== FUN_01e40eea @ 01e40eea ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e40eea(void)

{
  int iVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  BADSPACEBASE *in_sp;
  uint *puVar5;
  undefined1 local_20 [4];
  
  puVar5 = (uint *)local_20;
  iVar1 = func_0x021127b8(&DAT_01e1afd8);
  if (iVar1 != 0) {
    return;
  }
  if (DAT_00013104 != '\0') {
    return;
  }
  ppuVar4 = &PTR_FUN_01e40bc4;
  for (ppuVar3 = &PTR_FUN_01e40bc4; ppuVar3 < FUN_01e40be4; ppuVar3 = ppuVar3 + 2) {
    (*(code *)*ppuVar3)(*ppuVar3);
  }
  if (_DAT_000130bc != 0) {
    FUN_01e40be4(192000000);
    _DAT_000130bc = FUN_01e40c20(192000000);
    if (_DAT_000130bc == 0x3ff) {
      iVar1 = 0x24ba;
    }
    else {
      FUN_01e40c60();
      if (_DAT_000130bc != 0x3ff) {
        FUN_01e40d0c(192000000);
        func_0x0200206c();
        CoreSynchronize();
        _DAT_001e000c = _DAT_001e000c & 0xfffffe33 | 0x100;
        FUN_01e40df0();
        FUN_01e40e30();
        FUN_01e40e64();
        FUN_01e40e8c();
        _DAT_001e000c = _DAT_001e000c | 0x1c0;
        func_0x0200207e();
        goto LAB_01e40fae;
      }
      iVar1 = 0x2b73;
    }
    FUN_01e36848(4,&DAT_01e1af10 + iVar1);
  }
LAB_01e40fae:
  for (; ppuVar4 < FUN_01e40be4; ppuVar4 = ppuVar4 + 2) {
    (*(code *)ppuVar4[1])(ppuVar4[1]);
  }
  uVar2 = func_0x02000058(9);
  FUN_01e36848(1,s__Debug____CLOCK____SYS_DVDD____d_01e1cc2f,uVar2 & 0xffffff0f);
  uVar2 = func_0x02000058(6);
  FUN_01e36848(1,s__Debug____CLOCK____VDC13____d_01e1cc52,uVar2 & 0xffffff07);
  FUN_01e36848(1,s__Debug____CLOCK____HSB_CLK____d_01e1ca30,_DAT_000130ec);
  *puVar5 = _DAT_000130e4;
  FUN_01e36848(1,s__Debug____CLOCK____SPI_CLK____d___01e1e263,_DAT_000130e8);
  *puVar5 = (uint)DAT_000130c8;
  FUN_01e36848(1,s__Debug____CLOCK____SFC_CON____08_01e1d85f,_DAT_001f0200);
  DAT_00013104 = 1;
  return;
}



