# Export decompiled C for all functions.
# @category JieLi
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
import os

outdir = os.environ.get('GH_OUT', 'D:/dev/miswitch/analysis/ghidra_out')
if not os.path.isdir(outdir):
    os.makedirs(outdir)

fm = currentProgram.getFunctionManager()
dec = DecompInterface()
dec.openProgram(currentProgram)
mon = ConsoleTaskMonitor()

count = 0
errors = 0
with open(os.path.join(outdir, 'decomp_all.c'), 'w', encoding='utf-8') as fout:
    for fn in fm.getFunctions(True):
        try:
            res = dec.decompileFunction(fn, 60, mon)
            if res and res.decompileCompleted():
                fout.write('// ==== %s @ %s ====\n' % (fn.getName(), fn.getEntryPoint()))
                fout.write(res.getDecompiledFunction().getC())
                fout.write('\n\n')
                count += 1
            else:
                errors += 1
        except Exception as e:
            errors += 1
    fout.write('// total functions: %d, ok: %d, errors: %d\n' % (fm.getFunctionCount(), count, errors))
print('FUNCTIONS TOTAL', fm.getFunctionCount(), 'DECOMPILED', count, 'ERRORS', errors)
