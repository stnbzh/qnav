LRELEASE = $$dirname(QMAKE_QMAKE)/lrelease.exe
LUPDATE  = $$dirname(QMAKE_QMAKE)/lupdate.exe

TSFILES = $${TSDIR}/*.ts

qstm.output         = ${QMAKE_FILE_BASE}.qm
qstm.commands       = $$LRELEASE -idbased ${QMAKE_FILE_NAME}
qstm.input          = TSFILES
qstm.variable_out   = PRE_TARGETDEPS
qstm                = TSFILES
QMAKE_EXTRA_COMPILERS += qstm

TSFILELIST = $$files($$TSFILES)
QMFILES = $$replace(TSFILELIST, "\\.ts", ".qm")

OTHER_FILES += $${TSFILES}
