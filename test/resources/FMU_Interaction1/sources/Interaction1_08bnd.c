/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "Interaction1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

OMC_DISABLE_OPT
int Interaction1_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  infoStreamPrint(OMC_LOG_INIT, 1, "updating min-values");
  if (OMC_ACTIVE_STREAM(OMC_LOG_INIT)) messageClose(OMC_LOG_INIT);

  /* max ******************************************************** */
  infoStreamPrint(OMC_LOG_INIT, 1, "updating max-values");
  if (OMC_ACTIVE_STREAM(OMC_LOG_INIT)) messageClose(OMC_LOG_INIT);

  /* nominal **************************************************** */
  infoStreamPrint(OMC_LOG_INIT, 1, "updating nominal-values");
  if (OMC_ACTIVE_STREAM(OMC_LOG_INIT)) messageClose(OMC_LOG_INIT);

  /* start ****************************************************** */
  infoStreamPrint(OMC_LOG_INIT, 1, "updating primary start-values");
  if (OMC_ACTIVE_STREAM(OMC_LOG_INIT)) messageClose(OMC_LOG_INIT);

  TRACE_POP
  return 0;
}

void Interaction1_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 103
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.table[1,1] = integerTable.table[1,1]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* integerTable.combiTimeTable.table[1,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* integerTable.table[1,1] PARAM */);
  threadData->lastEquationSolved = 103;
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.table[1,2] = integerTable.table[1,2]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* integerTable.combiTimeTable.table[1,2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[65]] /* integerTable.table[1,2] PARAM */);
  threadData->lastEquationSolved = 104;
  TRACE_POP
}

/*
equation index: 105
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.table[2,1] = integerTable.table[2,1]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[51]] /* integerTable.combiTimeTable.table[2,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[66]] /* integerTable.table[2,1] PARAM */);
  threadData->lastEquationSolved = 105;
  TRACE_POP
}

/*
equation index: 106
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.table[2,2] = integerTable.table[2,2]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* integerTable.combiTimeTable.table[2,2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[67]] /* integerTable.table[2,2] PARAM */);
  threadData->lastEquationSolved = 106;
  TRACE_POP
}

/*
equation index: 107
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.table[3,1] = integerTable.table[3,1]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[53]] /* integerTable.combiTimeTable.table[3,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[68]] /* integerTable.table[3,1] PARAM */);
  threadData->lastEquationSolved = 107;
  TRACE_POP
}

/*
equation index: 108
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.table[3,2] = integerTable.table[3,2]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[54]] /* integerTable.combiTimeTable.table[3,2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[69]] /* integerTable.table[3,2] PARAM */);
  threadData->lastEquationSolved = 108;
  TRACE_POP
}

/*
equation index: 109
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.table[4,1] = integerTable.table[4,1]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[55]] /* integerTable.combiTimeTable.table[4,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[70]] /* integerTable.table[4,1] PARAM */);
  threadData->lastEquationSolved = 109;
  TRACE_POP
}

/*
equation index: 110
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.table[4,2] = integerTable.table[4,2]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[56]] /* integerTable.combiTimeTable.table[4,2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[71]] /* integerTable.table[4,2] PARAM */);
  threadData->lastEquationSolved = 110;
  TRACE_POP
}

/*
equation index: 111
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.table[5,1] = integerTable.table[5,1]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[57]] /* integerTable.combiTimeTable.table[5,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[72]] /* integerTable.table[5,1] PARAM */);
  threadData->lastEquationSolved = 111;
  TRACE_POP
}

/*
equation index: 112
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.table[5,2] = integerTable.table[5,2]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[58]] /* integerTable.combiTimeTable.table[5,2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[73]] /* integerTable.table[5,2] PARAM */);
  threadData->lastEquationSolved = 112;
  TRACE_POP
}

/*
equation index: 113
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.table[6,1] = integerTable.table[6,1]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[59]] /* integerTable.combiTimeTable.table[6,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[74]] /* integerTable.table[6,1] PARAM */);
  threadData->lastEquationSolved = 113;
  TRACE_POP
}

/*
equation index: 114
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.table[6,2] = integerTable.table[6,2]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[60]] /* integerTable.combiTimeTable.table[6,2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[75]] /* integerTable.table[6,2] PARAM */);
  threadData->lastEquationSolved = 114;
  TRACE_POP
}

/*
equation index: 115
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.startTime = integerTable.startTime
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* integerTable.combiTimeTable.startTime PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[63]] /* integerTable.startTime PARAM */);
  threadData->lastEquationSolved = 115;
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.shiftTime = integerTable.shiftTime
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* integerTable.combiTimeTable.shiftTime PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[62]] /* integerTable.shiftTime PARAM */);
  threadData->lastEquationSolved = 116;
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.tableID = Modelica.Blocks.Types.ExternalCombiTimeTable.constructor("NoName", "NoName", integerTable.combiTimeTable.table, integerTable.combiTimeTable.startTime, {2}, Modelica.Blocks.Types.Smoothness.ConstantSegments, Modelica.Blocks.Types.Extrapolation.HoldLastPoint, integerTable.combiTimeTable.shiftTime, Modelica.Blocks.Types.TimeEvents.Always, false, integerTable.combiTimeTable.delimiter, integerTable.combiTimeTable.nHeaderLines)
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  real_array tmp0;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* integerTable.combiTimeTable.table[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 2 + (((modelica_integer) 1)-1)])), 2, (_index_t)6, (_index_t)2);
  (data->simulationInfo->extObjs[1]) = omc_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor(threadData, _OMC_LIT10, _OMC_LIT10, tmp0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[44]] /* integerTable.combiTimeTable.startTime PARAM */), _OMC_LIT11, 3, 1, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* integerTable.combiTimeTable.shiftTime PARAM */), 1, 0 /* false */, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[3]] /* integerTable.combiTimeTable.delimiter PARAM */), (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* integerTable.combiTimeTable.nHeaderLines PARAM */));
  threadData->lastEquationSolved = 117;
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[1,1] = booleanTable.table[1]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* booleanTable.combiTimeTable.table[1,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* booleanTable.table[1] PARAM */);
  threadData->lastEquationSolved = 118;
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[1,2] = if booleanTable.startValue then 1.0 else 0.0
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[9]] /* booleanTable.combiTimeTable.table[1,2] PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[4]] /* booleanTable.startValue PARAM */)?1.0:0.0);
  threadData->lastEquationSolved = 119;
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[2,1] = booleanTable.table[1]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* booleanTable.combiTimeTable.table[2,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* booleanTable.table[1] PARAM */);
  threadData->lastEquationSolved = 120;
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[2,2] = if booleanTable.startValue then 0.0 else 1.0
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[11]] /* booleanTable.combiTimeTable.table[2,2] PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[4]] /* booleanTable.startValue PARAM */)?0.0:1.0);
  threadData->lastEquationSolved = 121;
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[3,1] = booleanTable.table[2]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* booleanTable.combiTimeTable.table[3,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[33]] /* booleanTable.table[2] PARAM */);
  threadData->lastEquationSolved = 122;
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[3,2] = if booleanTable.startValue then 1.0 else 0.0
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[13]] /* booleanTable.combiTimeTable.table[3,2] PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[4]] /* booleanTable.startValue PARAM */)?1.0:0.0);
  threadData->lastEquationSolved = 123;
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[4,1] = booleanTable.table[3]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* booleanTable.combiTimeTable.table[4,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[34]] /* booleanTable.table[3] PARAM */);
  threadData->lastEquationSolved = 124;
  TRACE_POP
}

/*
equation index: 125
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[4,2] = if booleanTable.startValue then 0.0 else 1.0
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[15]] /* booleanTable.combiTimeTable.table[4,2] PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[4]] /* booleanTable.startValue PARAM */)?0.0:1.0);
  threadData->lastEquationSolved = 125;
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[5,1] = booleanTable.table[4]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[16]] /* booleanTable.combiTimeTable.table[5,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[35]] /* booleanTable.table[4] PARAM */);
  threadData->lastEquationSolved = 126;
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[5,2] = if booleanTable.startValue then 1.0 else 0.0
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[17]] /* booleanTable.combiTimeTable.table[5,2] PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[4]] /* booleanTable.startValue PARAM */)?1.0:0.0);
  threadData->lastEquationSolved = 127;
  TRACE_POP
}

/*
equation index: 128
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[6,1] = booleanTable.table[5]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[18]] /* booleanTable.combiTimeTable.table[6,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[36]] /* booleanTable.table[5] PARAM */);
  threadData->lastEquationSolved = 128;
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[6,2] = if booleanTable.startValue then 0.0 else 1.0
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[19]] /* booleanTable.combiTimeTable.table[6,2] PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[4]] /* booleanTable.startValue PARAM */)?0.0:1.0);
  threadData->lastEquationSolved = 129;
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[7,1] = booleanTable.table[6]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[20]] /* booleanTable.combiTimeTable.table[7,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[37]] /* booleanTable.table[6] PARAM */);
  threadData->lastEquationSolved = 130;
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[7,2] = if booleanTable.startValue then 1.0 else 0.0
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[21]] /* booleanTable.combiTimeTable.table[7,2] PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[4]] /* booleanTable.startValue PARAM */)?1.0:0.0);
  threadData->lastEquationSolved = 131;
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[8,1] = booleanTable.table[7]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[22]] /* booleanTable.combiTimeTable.table[8,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[38]] /* booleanTable.table[7] PARAM */);
  threadData->lastEquationSolved = 132;
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[8,2] = if booleanTable.startValue then 0.0 else 1.0
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[23]] /* booleanTable.combiTimeTable.table[8,2] PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[4]] /* booleanTable.startValue PARAM */)?0.0:1.0);
  threadData->lastEquationSolved = 133;
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[9,1] = booleanTable.table[8]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* booleanTable.combiTimeTable.table[9,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* booleanTable.table[8] PARAM */);
  threadData->lastEquationSolved = 134;
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[9,2] = if booleanTable.startValue then 1.0 else 0.0
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* booleanTable.combiTimeTable.table[9,2] PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[4]] /* booleanTable.startValue PARAM */)?1.0:0.0);
  threadData->lastEquationSolved = 135;
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[10,1] = booleanTable.table[9]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* booleanTable.combiTimeTable.table[10,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* booleanTable.table[9] PARAM */);
  threadData->lastEquationSolved = 136;
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.table[10,2] = if booleanTable.startValue then 0.0 else 1.0
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* booleanTable.combiTimeTable.table[10,2] PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[4]] /* booleanTable.startValue PARAM */)?0.0:1.0);
  threadData->lastEquationSolved = 137;
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.startTime = booleanTable.startTime
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* booleanTable.combiTimeTable.startTime PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[31]] /* booleanTable.startTime PARAM */);
  threadData->lastEquationSolved = 138;
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.shiftTime = booleanTable.shiftTime
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* booleanTable.combiTimeTable.shiftTime PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[30]] /* booleanTable.shiftTime PARAM */);
  threadData->lastEquationSolved = 139;
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.tableID = Modelica.Blocks.Types.ExternalCombiTimeTable.constructor("NoName", "NoName", booleanTable.combiTimeTable.table, booleanTable.combiTimeTable.startTime, {2}, Modelica.Blocks.Types.Smoothness.ConstantSegments, Modelica.Blocks.Types.Extrapolation.HoldLastPoint, booleanTable.combiTimeTable.shiftTime, Modelica.Blocks.Types.TimeEvents.Always, false, booleanTable.combiTimeTable.delimiter, booleanTable.combiTimeTable.nHeaderLines)
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  real_array tmp1;
  real_array_create(&tmp1, ((modelica_real*)&((&data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* booleanTable.combiTimeTable.table[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 2 + (((modelica_integer) 1)-1)])), 2, (_index_t)10, (_index_t)2);
  (data->simulationInfo->extObjs[0]) = omc_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor(threadData, _OMC_LIT10, _OMC_LIT10, tmp1, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[3]] /* booleanTable.combiTimeTable.startTime PARAM */), _OMC_LIT11, 3, 1, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[2]] /* booleanTable.combiTimeTable.shiftTime PARAM */), 1, 0 /* false */, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[0]] /* booleanTable.combiTimeTable.delimiter PARAM */), (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[2]] /* booleanTable.combiTimeTable.nHeaderLines PARAM */));
  threadData->lastEquationSolved = 140;
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
start.table.table[1] = start.buttonTimeTable[1]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* start.table.table[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[76]] /* start.buttonTimeTable[1] PARAM */);
  threadData->lastEquationSolved = 141;
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
start.table.combiTimeTable.table[1,1] = start.table.table[1]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* start.table.combiTimeTable.table[1,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* start.table.table[1] PARAM */);
  threadData->lastEquationSolved = 142;
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
start.table.combiTimeTable.table[1,2] = if start.table.startValue then 1.0 else 0.0
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[87]] /* start.table.combiTimeTable.table[1,2] PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[16]] /* start.table.startValue PARAM */)?1.0:0.0);
  threadData->lastEquationSolved = 144;
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
start.table.combiTimeTable.table[2,1] = start.table.table[1]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[88]] /* start.table.combiTimeTable.table[2,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* start.table.table[1] PARAM */);
  threadData->lastEquationSolved = 145;
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
start.table.combiTimeTable.table[2,2] = if start.table.startValue then 0.0 else 1.0
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[89]] /* start.table.combiTimeTable.table[2,2] PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[16]] /* start.table.startValue PARAM */)?0.0:1.0);
  threadData->lastEquationSolved = 146;
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
start.table.table[2] = start.buttonTimeTable[2]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* start.table.table[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[77]] /* start.buttonTimeTable[2] PARAM */);
  threadData->lastEquationSolved = 147;
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
start.table.combiTimeTable.table[3,1] = start.table.table[2]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[90]] /* start.table.combiTimeTable.table[3,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* start.table.table[2] PARAM */);
  threadData->lastEquationSolved = 148;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
start.table.combiTimeTable.table[3,2] = if start.table.startValue then 1.0 else 0.0
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[91]] /* start.table.combiTimeTable.table[3,2] PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[16]] /* start.table.startValue PARAM */)?1.0:0.0);
  threadData->lastEquationSolved = 149;
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
start.table.combiTimeTable.delimiter = ","
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[6]] /* start.table.combiTimeTable.delimiter PARAM */) = _OMC_LIT9;
  threadData->lastEquationSolved = 150;
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
start.table.combiTimeTable.startTime = start.table.startTime
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[81]] /* start.table.combiTimeTable.startTime PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* start.table.startTime PARAM */);
  threadData->lastEquationSolved = 153;
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
start.table.combiTimeTable.shiftTime = start.table.shiftTime
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[80]] /* start.table.combiTimeTable.shiftTime PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[94]] /* start.table.shiftTime PARAM */);
  threadData->lastEquationSolved = 155;
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
start.table.combiTimeTable.tableID = Modelica.Blocks.Types.ExternalCombiTimeTable.constructor("NoName", "NoName", start.table.combiTimeTable.table, start.table.combiTimeTable.startTime, {2}, Modelica.Blocks.Types.Smoothness.ConstantSegments, Modelica.Blocks.Types.Extrapolation.HoldLastPoint, start.table.combiTimeTable.shiftTime, Modelica.Blocks.Types.TimeEvents.Always, false, start.table.combiTimeTable.delimiter, start.table.combiTimeTable.nHeaderLines)
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  real_array tmp2;
  real_array_create(&tmp2, ((modelica_real*)&((&data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* start.table.combiTimeTable.table[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 2 + (((modelica_integer) 1)-1)])), 2, (_index_t)3, (_index_t)2);
  (data->simulationInfo->extObjs[2]) = omc_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor(threadData, _OMC_LIT10, _OMC_LIT10, tmp2, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[81]] /* start.table.combiTimeTable.startTime PARAM */), _OMC_LIT11, 3, 1, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[80]] /* start.table.combiTimeTable.shiftTime PARAM */), 1, 0 /* false */, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[6]] /* start.table.combiTimeTable.delimiter PARAM */), (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[20]] /* start.table.combiTimeTable.nHeaderLines PARAM */));
  threadData->lastEquationSolved = 156;
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
stop.table.table[1] = stop.buttonTimeTable[1]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* stop.table.table[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* stop.buttonTimeTable[1] PARAM */);
  threadData->lastEquationSolved = 157;
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.table[1,1] = stop.table.table[1]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* stop.table.combiTimeTable.table[1,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* stop.table.table[1] PARAM */);
  threadData->lastEquationSolved = 158;
  TRACE_POP
}

/*
equation index: 160
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.table[1,2] = if stop.table.startValue then 1.0 else 0.0
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* stop.table.combiTimeTable.table[1,2] PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[21]] /* stop.table.startValue PARAM */)?1.0:0.0);
  threadData->lastEquationSolved = 160;
  TRACE_POP
}

/*
equation index: 161
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.table[2,1] = stop.table.table[1]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* stop.table.combiTimeTable.table[2,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* stop.table.table[1] PARAM */);
  threadData->lastEquationSolved = 161;
  TRACE_POP
}

/*
equation index: 162
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.table[2,2] = if stop.table.startValue then 0.0 else 1.0
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[111]] /* stop.table.combiTimeTable.table[2,2] PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[21]] /* stop.table.startValue PARAM */)?0.0:1.0);
  threadData->lastEquationSolved = 162;
  TRACE_POP
}

/*
equation index: 163
type: SIMPLE_ASSIGN
stop.table.table[2] = stop.buttonTimeTable[2]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* stop.table.table[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* stop.buttonTimeTable[2] PARAM */);
  threadData->lastEquationSolved = 163;
  TRACE_POP
}

/*
equation index: 164
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.table[3,1] = stop.table.table[2]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[112]] /* stop.table.combiTimeTable.table[3,1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* stop.table.table[2] PARAM */);
  threadData->lastEquationSolved = 164;
  TRACE_POP
}

/*
equation index: 165
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.table[3,2] = if stop.table.startValue then 1.0 else 0.0
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* stop.table.combiTimeTable.table[3,2] PARAM */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[21]] /* stop.table.startValue PARAM */)?1.0:0.0);
  threadData->lastEquationSolved = 165;
  TRACE_POP
}

/*
equation index: 166
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.delimiter = ","
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[9]] /* stop.table.combiTimeTable.delimiter PARAM */) = _OMC_LIT9;
  threadData->lastEquationSolved = 166;
  TRACE_POP
}

/*
equation index: 169
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.startTime = stop.table.startTime
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* stop.table.combiTimeTable.startTime PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* stop.table.startTime PARAM */);
  threadData->lastEquationSolved = 169;
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.shiftTime = stop.table.shiftTime
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[102]] /* stop.table.combiTimeTable.shiftTime PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* stop.table.shiftTime PARAM */);
  threadData->lastEquationSolved = 171;
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.tableID = Modelica.Blocks.Types.ExternalCombiTimeTable.constructor("NoName", "NoName", stop.table.combiTimeTable.table, stop.table.combiTimeTable.startTime, {2}, Modelica.Blocks.Types.Smoothness.ConstantSegments, Modelica.Blocks.Types.Extrapolation.HoldLastPoint, stop.table.combiTimeTable.shiftTime, Modelica.Blocks.Types.TimeEvents.Always, false, stop.table.combiTimeTable.delimiter, stop.table.combiTimeTable.nHeaderLines)
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  real_array tmp3;
  real_array_create(&tmp3, ((modelica_real*)&((&data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[108]] /* stop.table.combiTimeTable.table[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 2 + (((modelica_integer) 1)-1)])), 2, (_index_t)3, (_index_t)2);
  (data->simulationInfo->extObjs[3]) = omc_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor(threadData, _OMC_LIT10, _OMC_LIT10, tmp3, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[103]] /* stop.table.combiTimeTable.startTime PARAM */), _OMC_LIT11, 3, 1, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[102]] /* stop.table.combiTimeTable.shiftTime PARAM */), 1, 0 /* false */, (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[9]] /* stop.table.combiTimeTable.delimiter PARAM */), (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* stop.table.combiTimeTable.nHeaderLines PARAM */));
  threadData->lastEquationSolved = 172;
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.p_offset[1] = stop.table.combiTimeTable.offset[1]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* stop.table.combiTimeTable.p_offset[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* stop.table.combiTimeTable.offset[1] PARAM */);
  threadData->lastEquationSolved = 178;
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.t_maxScaled = Modelica.Blocks.Tables.Internal.getTimeTableTmax(stop.table.combiTimeTable.tableID)
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* stop.table.combiTimeTable.t_maxScaled PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableTmax(threadData, (data->simulationInfo->extObjs[3]));
  threadData->lastEquationSolved = 179;
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.t_minScaled = Modelica.Blocks.Tables.Internal.getTimeTableTmin(stop.table.combiTimeTable.tableID)
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[107]] /* stop.table.combiTimeTable.t_minScaled PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableTmin(threadData, (data->simulationInfo->extObjs[3]));
  threadData->lastEquationSolved = 180;
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.t_max = stop.table.combiTimeTable.t_maxScaled
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[104]] /* stop.table.combiTimeTable.t_max PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* stop.table.combiTimeTable.t_maxScaled PARAM */);
  threadData->lastEquationSolved = 181;
  TRACE_POP
}

/*
equation index: 182
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.t_min = stop.table.combiTimeTable.t_minScaled
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* stop.table.combiTimeTable.t_min PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[107]] /* stop.table.combiTimeTable.t_minScaled PARAM */);
  threadData->lastEquationSolved = 182;
  TRACE_POP
}

/*
equation index: 190
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.fileName = "NoName"
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[10]] /* stop.table.combiTimeTable.fileName PARAM */) = _OMC_LIT10;
  threadData->lastEquationSolved = 190;
  TRACE_POP
}

/*
equation index: 191
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.tableName = "NoName"
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[11]] /* stop.table.combiTimeTable.tableName PARAM */) = _OMC_LIT10;
  threadData->lastEquationSolved = 191;
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
start.table.combiTimeTable.p_offset[1] = start.table.combiTimeTable.offset[1]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[79]] /* start.table.combiTimeTable.p_offset[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* start.table.combiTimeTable.offset[1] PARAM */);
  threadData->lastEquationSolved = 200;
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
start.table.combiTimeTable.t_maxScaled = Modelica.Blocks.Tables.Internal.getTimeTableTmax(start.table.combiTimeTable.tableID)
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* start.table.combiTimeTable.t_maxScaled PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableTmax(threadData, (data->simulationInfo->extObjs[2]));
  threadData->lastEquationSolved = 201;
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
start.table.combiTimeTable.t_minScaled = Modelica.Blocks.Tables.Internal.getTimeTableTmin(start.table.combiTimeTable.tableID)
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* start.table.combiTimeTable.t_minScaled PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableTmin(threadData, (data->simulationInfo->extObjs[2]));
  threadData->lastEquationSolved = 202;
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
start.table.combiTimeTable.t_max = start.table.combiTimeTable.t_maxScaled
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[82]] /* start.table.combiTimeTable.t_max PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[83]] /* start.table.combiTimeTable.t_maxScaled PARAM */);
  threadData->lastEquationSolved = 203;
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
start.table.combiTimeTable.t_min = start.table.combiTimeTable.t_minScaled
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[84]] /* start.table.combiTimeTable.t_min PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* start.table.combiTimeTable.t_minScaled PARAM */);
  threadData->lastEquationSolved = 204;
  TRACE_POP
}

/*
equation index: 212
type: SIMPLE_ASSIGN
start.table.combiTimeTable.fileName = "NoName"
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[7]] /* start.table.combiTimeTable.fileName PARAM */) = _OMC_LIT10;
  threadData->lastEquationSolved = 212;
  TRACE_POP
}

/*
equation index: 213
type: SIMPLE_ASSIGN
start.table.combiTimeTable.tableName = "NoName"
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  (data->simulationInfo->stringParameter[data->simulationInfo->stringParamsIndex[8]] /* start.table.combiTimeTable.tableName PARAM */) = _OMC_LIT10;
  threadData->lastEquationSolved = 213;
  TRACE_POP
}

/*
equation index: 220
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.p_offset[1] = booleanTable.combiTimeTable.offset[1]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* booleanTable.combiTimeTable.p_offset[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[0]] /* booleanTable.combiTimeTable.offset[1] PARAM */);
  threadData->lastEquationSolved = 220;
  TRACE_POP
}

/*
equation index: 221
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.t_maxScaled = Modelica.Blocks.Tables.Internal.getTimeTableTmax(booleanTable.combiTimeTable.tableID)
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* booleanTable.combiTimeTable.t_maxScaled PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableTmax(threadData, (data->simulationInfo->extObjs[0]));
  threadData->lastEquationSolved = 221;
  TRACE_POP
}

/*
equation index: 222
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.t_minScaled = Modelica.Blocks.Tables.Internal.getTimeTableTmin(booleanTable.combiTimeTable.tableID)
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* booleanTable.combiTimeTable.t_minScaled PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableTmin(threadData, (data->simulationInfo->extObjs[0]));
  threadData->lastEquationSolved = 222;
  TRACE_POP
}

/*
equation index: 223
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.t_max = booleanTable.combiTimeTable.t_maxScaled
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[4]] /* booleanTable.combiTimeTable.t_max PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* booleanTable.combiTimeTable.t_maxScaled PARAM */);
  threadData->lastEquationSolved = 223;
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.t_min = booleanTable.combiTimeTable.t_minScaled
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* booleanTable.combiTimeTable.t_min PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[7]] /* booleanTable.combiTimeTable.t_minScaled PARAM */);
  threadData->lastEquationSolved = 224;
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
timeTable.shiftTime = timeTable.startTime
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[121]] /* timeTable.shiftTime PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[122]] /* timeTable.startTime PARAM */);
  threadData->lastEquationSolved = 233;
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.p_offset[1] = integerTable.combiTimeTable.offset[1]
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* integerTable.combiTimeTable.p_offset[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* integerTable.combiTimeTable.offset[1] PARAM */);
  threadData->lastEquationSolved = 237;
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.t_maxScaled = Modelica.Blocks.Tables.Internal.getTimeTableTmax(integerTable.combiTimeTable.tableID)
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* integerTable.combiTimeTable.t_maxScaled PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableTmax(threadData, (data->simulationInfo->extObjs[1]));
  threadData->lastEquationSolved = 238;
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.t_minScaled = Modelica.Blocks.Tables.Internal.getTimeTableTmin(integerTable.combiTimeTable.tableID)
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* integerTable.combiTimeTable.t_minScaled PARAM */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableTmin(threadData, (data->simulationInfo->extObjs[1]));
  threadData->lastEquationSolved = 239;
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.t_max = integerTable.combiTimeTable.t_maxScaled
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[45]] /* integerTable.combiTimeTable.t_max PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* integerTable.combiTimeTable.t_maxScaled PARAM */);
  threadData->lastEquationSolved = 240;
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.t_min = integerTable.combiTimeTable.t_minScaled
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* integerTable.combiTimeTable.t_min PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[48]] /* integerTable.combiTimeTable.t_minScaled PARAM */);
  threadData->lastEquationSolved = 241;
  TRACE_POP
}
extern void Interaction1_eqFunction_3(DATA *data, threadData_t *threadData);

extern void Interaction1_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 253
type: ALGORITHM

  assert(stop.table.combiTimeTable.timeEvents >= Modelica.Blocks.Types.TimeEvents.Always and stop.table.combiTimeTable.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents, "Variable violating min/max constraint: Modelica.Blocks.Types.TimeEvents.Always <= stop.table.combiTimeTable.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents, has value: " + String(stop.table.combiTimeTable.timeEvents, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  static const MMC_DEFSTRINGLIT(tmp6,180,"Variable violating min/max constraint: Modelica.Blocks.Types.TimeEvents.Always <= stop.table.combiTimeTable.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents, has value: ");
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  static int tmp9 = 0;
  if(!tmp9)
  {
    tmp4 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* stop.table.combiTimeTable.timeEvents PARAM */),1);
    tmp5 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* stop.table.combiTimeTable.timeEvents PARAM */),3);
    if(!(tmp4 && tmp5))
    {
      tmp7 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* stop.table.combiTimeTable.timeEvents PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta8 = stringAppend(MMC_REFSTRINGLIT(tmp6),tmp7);
      {
        const char* assert_cond = "(stop.table.combiTimeTable.timeEvents >= Modelica.Blocks.Types.TimeEvents.Always and stop.table.combiTimeTable.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1638,5,1640,131,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta8));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1638,5,1640,131,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta8));
        }
      }
      tmp9 = 1;
    }
  }
  threadData->lastEquationSolved = 253;
  TRACE_POP
}

/*
equation index: 254
type: ALGORITHM

  assert(stop.table.combiTimeTable.timeScale >= 2.220446049250313e-16, "Variable violating min constraint: 2.220446049250313e-16 <= stop.table.combiTimeTable.timeScale, has value: " + String(stop.table.combiTimeTable.timeScale, "g"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  modelica_boolean tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,108,"Variable violating min constraint: 2.220446049250313e-16 <= stop.table.combiTimeTable.timeScale, has value: ");
  modelica_string tmp12;
  modelica_metatype tmpMeta13;
  static int tmp14 = 0;
  if(!tmp14)
  {
    tmp10 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* stop.table.combiTimeTable.timeScale PARAM */),2.220446049250313e-16);
    if(!tmp10)
    {
      tmp12 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* stop.table.combiTimeTable.timeScale PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta13 = stringAppend(MMC_REFSTRINGLIT(tmp11),tmp12);
      {
        const char* assert_cond = "(stop.table.combiTimeTable.timeScale >= 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1627,5,1629,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta13));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1627,5,1629,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta13));
        }
      }
      tmp14 = 1;
    }
  }
  threadData->lastEquationSolved = 254;
  TRACE_POP
}

/*
equation index: 255
type: ALGORITHM

  assert(stop.table.combiTimeTable.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and stop.table.combiTimeTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, "Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= stop.table.combiTimeTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: " + String(stop.table.combiTimeTable.extrapolation, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,199,"Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= stop.table.combiTimeTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: ");
  modelica_string tmp18;
  modelica_metatype tmpMeta19;
  static int tmp20 = 0;
  if(!tmp20)
  {
    tmp15 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* stop.table.combiTimeTable.extrapolation PARAM */),1);
    tmp16 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* stop.table.combiTimeTable.extrapolation PARAM */),4);
    if(!(tmp15 && tmp16))
    {
      tmp18 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* stop.table.combiTimeTable.extrapolation PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta19 = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        const char* assert_cond = "(stop.table.combiTimeTable.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and stop.table.combiTimeTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1624,5,1626,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta19));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1624,5,1626,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta19));
        }
      }
      tmp20 = 1;
    }
  }
  threadData->lastEquationSolved = 255;
  TRACE_POP
}

/*
equation index: 256
type: ALGORITHM

  assert(stop.table.combiTimeTable.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and stop.table.combiTimeTable.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, "Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= stop.table.combiTimeTable.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: " + String(stop.table.combiTimeTable.smoothness, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  static const MMC_DEFSTRINGLIT(tmp23,204,"Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= stop.table.combiTimeTable.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: ");
  modelica_string tmp24;
  modelica_metatype tmpMeta25;
  static int tmp26 = 0;
  if(!tmp26)
  {
    tmp21 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* stop.table.combiTimeTable.smoothness PARAM */),1);
    tmp22 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* stop.table.combiTimeTable.smoothness PARAM */),6);
    if(!(tmp21 && tmp22))
    {
      tmp24 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* stop.table.combiTimeTable.smoothness PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta25 = stringAppend(MMC_REFSTRINGLIT(tmp23),tmp24);
      {
        const char* assert_cond = "(stop.table.combiTimeTable.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and stop.table.combiTimeTable.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1621,5,1623,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta25));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1621,5,1623,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta25));
        }
      }
      tmp26 = 1;
    }
  }
  threadData->lastEquationSolved = 256;
  TRACE_POP
}

/*
equation index: 257
type: ALGORITHM

  assert(stop.table.combiTimeTable.nout >= 1, "Variable violating min constraint: 1 <= stop.table.combiTimeTable.nout, has value: " + String(stop.table.combiTimeTable.nout, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  modelica_boolean tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,83,"Variable violating min constraint: 1 <= stop.table.combiTimeTable.nout, has value: ");
  modelica_string tmp29;
  modelica_metatype tmpMeta30;
  static int tmp31 = 0;
  if(!tmp31)
  {
    tmp27 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* stop.table.combiTimeTable.nout PARAM */),((modelica_integer) 1));
    if(!tmp27)
    {
      tmp29 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* stop.table.combiTimeTable.nout PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta30 = stringAppend(MMC_REFSTRINGLIT(tmp28),tmp29);
      {
        const char* assert_cond = "(stop.table.combiTimeTable.nout >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",313,5,313,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta30));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",313,5,313,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta30));
        }
      }
      tmp31 = 1;
    }
  }
  threadData->lastEquationSolved = 257;
  TRACE_POP
}

/*
equation index: 258
type: ALGORITHM

  assert(stop.table.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and stop.table.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, "Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= stop.table.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: " + String(stop.table.extrapolation, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,184,"Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= stop.table.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: ");
  modelica_string tmp35;
  modelica_metatype tmpMeta36;
  static int tmp37 = 0;
  if(!tmp37)
  {
    tmp32 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* stop.table.extrapolation PARAM */),1);
    tmp33 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* stop.table.extrapolation PARAM */),4);
    if(!(tmp32 && tmp33))
    {
      tmp35 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* stop.table.extrapolation PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta36 = stringAppend(MMC_REFSTRINGLIT(tmp34),tmp35);
      {
        const char* assert_cond = "(stop.table.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and stop.table.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2097,5,2098,113,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta36));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2097,5,2098,113,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta36));
        }
      }
      tmp37 = 1;
    }
  }
  threadData->lastEquationSolved = 258;
  TRACE_POP
}

/*
equation index: 259
type: ALGORITHM

  assert(start.table.combiTimeTable.timeEvents >= Modelica.Blocks.Types.TimeEvents.Always and start.table.combiTimeTable.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents, "Variable violating min/max constraint: Modelica.Blocks.Types.TimeEvents.Always <= start.table.combiTimeTable.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents, has value: " + String(start.table.combiTimeTable.timeEvents, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,181,"Variable violating min/max constraint: Modelica.Blocks.Types.TimeEvents.Always <= start.table.combiTimeTable.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents, has value: ");
  modelica_string tmp41;
  modelica_metatype tmpMeta42;
  static int tmp43 = 0;
  if(!tmp43)
  {
    tmp38 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[23]] /* start.table.combiTimeTable.timeEvents PARAM */),1);
    tmp39 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[23]] /* start.table.combiTimeTable.timeEvents PARAM */),3);
    if(!(tmp38 && tmp39))
    {
      tmp41 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[23]] /* start.table.combiTimeTable.timeEvents PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta42 = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        const char* assert_cond = "(start.table.combiTimeTable.timeEvents >= Modelica.Blocks.Types.TimeEvents.Always and start.table.combiTimeTable.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1638,5,1640,131,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta42));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1638,5,1640,131,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta42));
        }
      }
      tmp43 = 1;
    }
  }
  threadData->lastEquationSolved = 259;
  TRACE_POP
}

/*
equation index: 260
type: ALGORITHM

  assert(start.table.combiTimeTable.timeScale >= 2.220446049250313e-16, "Variable violating min constraint: 2.220446049250313e-16 <= start.table.combiTimeTable.timeScale, has value: " + String(start.table.combiTimeTable.timeScale, "g"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,109,"Variable violating min constraint: 2.220446049250313e-16 <= start.table.combiTimeTable.timeScale, has value: ");
  modelica_string tmp46;
  modelica_metatype tmpMeta47;
  static int tmp48 = 0;
  if(!tmp48)
  {
    tmp44 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* start.table.combiTimeTable.timeScale PARAM */),2.220446049250313e-16);
    if(!tmp44)
    {
      tmp46 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* start.table.combiTimeTable.timeScale PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta47 = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        const char* assert_cond = "(start.table.combiTimeTable.timeScale >= 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1627,5,1629,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta47));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1627,5,1629,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta47));
        }
      }
      tmp48 = 1;
    }
  }
  threadData->lastEquationSolved = 260;
  TRACE_POP
}

/*
equation index: 261
type: ALGORITHM

  assert(start.table.combiTimeTable.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and start.table.combiTimeTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, "Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= start.table.combiTimeTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: " + String(start.table.combiTimeTable.extrapolation, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  static const MMC_DEFSTRINGLIT(tmp51,200,"Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= start.table.combiTimeTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: ");
  modelica_string tmp52;
  modelica_metatype tmpMeta53;
  static int tmp54 = 0;
  if(!tmp54)
  {
    tmp49 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[19]] /* start.table.combiTimeTable.extrapolation PARAM */),1);
    tmp50 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[19]] /* start.table.combiTimeTable.extrapolation PARAM */),4);
    if(!(tmp49 && tmp50))
    {
      tmp52 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[19]] /* start.table.combiTimeTable.extrapolation PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta53 = stringAppend(MMC_REFSTRINGLIT(tmp51),tmp52);
      {
        const char* assert_cond = "(start.table.combiTimeTable.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and start.table.combiTimeTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1624,5,1626,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta53));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1624,5,1626,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta53));
        }
      }
      tmp54 = 1;
    }
  }
  threadData->lastEquationSolved = 261;
  TRACE_POP
}

/*
equation index: 262
type: ALGORITHM

  assert(start.table.combiTimeTable.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and start.table.combiTimeTable.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, "Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= start.table.combiTimeTable.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: " + String(start.table.combiTimeTable.smoothness, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,205,"Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= start.table.combiTimeTable.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: ");
  modelica_string tmp58;
  modelica_metatype tmpMeta59;
  static int tmp60 = 0;
  if(!tmp60)
  {
    tmp55 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* start.table.combiTimeTable.smoothness PARAM */),1);
    tmp56 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* start.table.combiTimeTable.smoothness PARAM */),6);
    if(!(tmp55 && tmp56))
    {
      tmp58 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* start.table.combiTimeTable.smoothness PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta59 = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      {
        const char* assert_cond = "(start.table.combiTimeTable.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and start.table.combiTimeTable.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1621,5,1623,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta59));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1621,5,1623,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta59));
        }
      }
      tmp60 = 1;
    }
  }
  threadData->lastEquationSolved = 262;
  TRACE_POP
}

/*
equation index: 263
type: ALGORITHM

  assert(start.table.combiTimeTable.nout >= 1, "Variable violating min constraint: 1 <= start.table.combiTimeTable.nout, has value: " + String(start.table.combiTimeTable.nout, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  modelica_boolean tmp61;
  static const MMC_DEFSTRINGLIT(tmp62,84,"Variable violating min constraint: 1 <= start.table.combiTimeTable.nout, has value: ");
  modelica_string tmp63;
  modelica_metatype tmpMeta64;
  static int tmp65 = 0;
  if(!tmp65)
  {
    tmp61 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[21]] /* start.table.combiTimeTable.nout PARAM */),((modelica_integer) 1));
    if(!tmp61)
    {
      tmp63 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[21]] /* start.table.combiTimeTable.nout PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta64 = stringAppend(MMC_REFSTRINGLIT(tmp62),tmp63);
      {
        const char* assert_cond = "(start.table.combiTimeTable.nout >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",313,5,313,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta64));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",313,5,313,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta64));
        }
      }
      tmp65 = 1;
    }
  }
  threadData->lastEquationSolved = 263;
  TRACE_POP
}

/*
equation index: 264
type: ALGORITHM

  assert(start.table.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and start.table.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, "Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= start.table.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: " + String(start.table.extrapolation, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  modelica_boolean tmp66;
  modelica_boolean tmp67;
  static const MMC_DEFSTRINGLIT(tmp68,185,"Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= start.table.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: ");
  modelica_string tmp69;
  modelica_metatype tmpMeta70;
  static int tmp71 = 0;
  if(!tmp71)
  {
    tmp66 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[24]] /* start.table.extrapolation PARAM */),1);
    tmp67 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[24]] /* start.table.extrapolation PARAM */),4);
    if(!(tmp66 && tmp67))
    {
      tmp69 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[24]] /* start.table.extrapolation PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta70 = stringAppend(MMC_REFSTRINGLIT(tmp68),tmp69);
      {
        const char* assert_cond = "(start.table.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and start.table.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2097,5,2098,113,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta70));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2097,5,2098,113,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta70));
        }
      }
      tmp71 = 1;
    }
  }
  threadData->lastEquationSolved = 264;
  TRACE_POP
}

/*
equation index: 265
type: ALGORITHM

  assert(booleanTable.combiTimeTable.timeEvents >= Modelica.Blocks.Types.TimeEvents.Always and booleanTable.combiTimeTable.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents, "Variable violating min/max constraint: Modelica.Blocks.Types.TimeEvents.Always <= booleanTable.combiTimeTable.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents, has value: " + String(booleanTable.combiTimeTable.timeEvents, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  static const MMC_DEFSTRINGLIT(tmp74,182,"Variable violating min/max constraint: Modelica.Blocks.Types.TimeEvents.Always <= booleanTable.combiTimeTable.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents, has value: ");
  modelica_string tmp75;
  modelica_metatype tmpMeta76;
  static int tmp77 = 0;
  if(!tmp77)
  {
    tmp72 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[5]] /* booleanTable.combiTimeTable.timeEvents PARAM */),1);
    tmp73 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[5]] /* booleanTable.combiTimeTable.timeEvents PARAM */),3);
    if(!(tmp72 && tmp73))
    {
      tmp75 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[5]] /* booleanTable.combiTimeTable.timeEvents PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta76 = stringAppend(MMC_REFSTRINGLIT(tmp74),tmp75);
      {
        const char* assert_cond = "(booleanTable.combiTimeTable.timeEvents >= Modelica.Blocks.Types.TimeEvents.Always and booleanTable.combiTimeTable.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1638,5,1640,131,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta76));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1638,5,1640,131,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta76));
        }
      }
      tmp77 = 1;
    }
  }
  threadData->lastEquationSolved = 265;
  TRACE_POP
}

/*
equation index: 266
type: ALGORITHM

  assert(booleanTable.combiTimeTable.timeScale >= 2.220446049250313e-16, "Variable violating min constraint: 2.220446049250313e-16 <= booleanTable.combiTimeTable.timeScale, has value: " + String(booleanTable.combiTimeTable.timeScale, "g"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  modelica_boolean tmp78;
  static const MMC_DEFSTRINGLIT(tmp79,110,"Variable violating min constraint: 2.220446049250313e-16 <= booleanTable.combiTimeTable.timeScale, has value: ");
  modelica_string tmp80;
  modelica_metatype tmpMeta81;
  static int tmp82 = 0;
  if(!tmp82)
  {
    tmp78 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* booleanTable.combiTimeTable.timeScale PARAM */),2.220446049250313e-16);
    if(!tmp78)
    {
      tmp80 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* booleanTable.combiTimeTable.timeScale PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta81 = stringAppend(MMC_REFSTRINGLIT(tmp79),tmp80);
      {
        const char* assert_cond = "(booleanTable.combiTimeTable.timeScale >= 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1627,5,1629,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta81));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1627,5,1629,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta81));
        }
      }
      tmp82 = 1;
    }
  }
  threadData->lastEquationSolved = 266;
  TRACE_POP
}

/*
equation index: 267
type: ALGORITHM

  assert(booleanTable.combiTimeTable.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and booleanTable.combiTimeTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, "Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= booleanTable.combiTimeTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: " + String(booleanTable.combiTimeTable.extrapolation, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  static const MMC_DEFSTRINGLIT(tmp85,201,"Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= booleanTable.combiTimeTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: ");
  modelica_string tmp86;
  modelica_metatype tmpMeta87;
  static int tmp88 = 0;
  if(!tmp88)
  {
    tmp83 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[1]] /* booleanTable.combiTimeTable.extrapolation PARAM */),1);
    tmp84 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[1]] /* booleanTable.combiTimeTable.extrapolation PARAM */),4);
    if(!(tmp83 && tmp84))
    {
      tmp86 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[1]] /* booleanTable.combiTimeTable.extrapolation PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta87 = stringAppend(MMC_REFSTRINGLIT(tmp85),tmp86);
      {
        const char* assert_cond = "(booleanTable.combiTimeTable.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and booleanTable.combiTimeTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1624,5,1626,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta87));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1624,5,1626,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta87));
        }
      }
      tmp88 = 1;
    }
  }
  threadData->lastEquationSolved = 267;
  TRACE_POP
}

/*
equation index: 268
type: ALGORITHM

  assert(booleanTable.combiTimeTable.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and booleanTable.combiTimeTable.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, "Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= booleanTable.combiTimeTable.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: " + String(booleanTable.combiTimeTable.smoothness, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  static const MMC_DEFSTRINGLIT(tmp91,206,"Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= booleanTable.combiTimeTable.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: ");
  modelica_string tmp92;
  modelica_metatype tmpMeta93;
  static int tmp94 = 0;
  if(!tmp94)
  {
    tmp89 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[4]] /* booleanTable.combiTimeTable.smoothness PARAM */),1);
    tmp90 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[4]] /* booleanTable.combiTimeTable.smoothness PARAM */),6);
    if(!(tmp89 && tmp90))
    {
      tmp92 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[4]] /* booleanTable.combiTimeTable.smoothness PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta93 = stringAppend(MMC_REFSTRINGLIT(tmp91),tmp92);
      {
        const char* assert_cond = "(booleanTable.combiTimeTable.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and booleanTable.combiTimeTable.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1621,5,1623,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta93));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1621,5,1623,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta93));
        }
      }
      tmp94 = 1;
    }
  }
  threadData->lastEquationSolved = 268;
  TRACE_POP
}

/*
equation index: 269
type: ALGORITHM

  assert(booleanTable.combiTimeTable.nout >= 1, "Variable violating min constraint: 1 <= booleanTable.combiTimeTable.nout, has value: " + String(booleanTable.combiTimeTable.nout, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  modelica_boolean tmp95;
  static const MMC_DEFSTRINGLIT(tmp96,85,"Variable violating min constraint: 1 <= booleanTable.combiTimeTable.nout, has value: ");
  modelica_string tmp97;
  modelica_metatype tmpMeta98;
  static int tmp99 = 0;
  if(!tmp99)
  {
    tmp95 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[3]] /* booleanTable.combiTimeTable.nout PARAM */),((modelica_integer) 1));
    if(!tmp95)
    {
      tmp97 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[3]] /* booleanTable.combiTimeTable.nout PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta98 = stringAppend(MMC_REFSTRINGLIT(tmp96),tmp97);
      {
        const char* assert_cond = "(booleanTable.combiTimeTable.nout >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",313,5,313,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta98));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",313,5,313,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta98));
        }
      }
      tmp99 = 1;
    }
  }
  threadData->lastEquationSolved = 269;
  TRACE_POP
}

/*
equation index: 270
type: ALGORITHM

  assert(booleanTable.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and booleanTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, "Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= booleanTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: " + String(booleanTable.extrapolation, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  static const MMC_DEFSTRINGLIT(tmp102,186,"Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= booleanTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: ");
  modelica_string tmp103;
  modelica_metatype tmpMeta104;
  static int tmp105 = 0;
  if(!tmp105)
  {
    tmp100 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* booleanTable.extrapolation PARAM */),1);
    tmp101 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* booleanTable.extrapolation PARAM */),4);
    if(!(tmp100 && tmp101))
    {
      tmp103 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* booleanTable.extrapolation PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta104 = stringAppend(MMC_REFSTRINGLIT(tmp102),tmp103);
      {
        const char* assert_cond = "(booleanTable.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and booleanTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2097,5,2098,113,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta104));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2097,5,2098,113,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta104));
        }
      }
      tmp105 = 1;
    }
  }
  threadData->lastEquationSolved = 270;
  TRACE_POP
}

/*
equation index: 271
type: ALGORITHM

  assert(realValue.significantDigits >= 1, "Variable violating min constraint: 1 <= realValue.significantDigits, has value: " + String(realValue.significantDigits, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  modelica_boolean tmp106;
  static const MMC_DEFSTRINGLIT(tmp107,80,"Variable violating min constraint: 1 <= realValue.significantDigits, has value: ");
  modelica_string tmp108;
  modelica_metatype tmpMeta109;
  static int tmp110 = 0;
  if(!tmp110)
  {
    tmp106 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[16]] /* realValue.significantDigits PARAM */),((modelica_integer) 1));
    if(!tmp106)
    {
      tmp108 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[16]] /* realValue.significantDigits PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta109 = stringAppend(MMC_REFSTRINGLIT(tmp107),tmp108);
      {
        const char* assert_cond = "(realValue.significantDigits >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interaction.mo",16,7,17,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta109));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interaction.mo",16,7,17,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta109));
        }
      }
      tmp110 = 1;
    }
  }
  threadData->lastEquationSolved = 271;
  TRACE_POP
}

/*
equation index: 272
type: ALGORITHM

  assert(timeTable.timeScale >= 2.220446049250313e-16, "Variable violating min constraint: 2.220446049250313e-16 <= timeTable.timeScale, has value: " + String(timeTable.timeScale, "g"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  modelica_boolean tmp111;
  static const MMC_DEFSTRINGLIT(tmp112,92,"Variable violating min constraint: 2.220446049250313e-16 <= timeTable.timeScale, has value: ");
  modelica_string tmp113;
  modelica_metatype tmpMeta114;
  static int tmp115 = 0;
  if(!tmp115)
  {
    tmp111 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* timeTable.timeScale PARAM */),2.220446049250313e-16);
    if(!tmp111)
    {
      tmp113 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* timeTable.timeScale PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta114 = stringAppend(MMC_REFSTRINGLIT(tmp112),tmp113);
      {
        const char* assert_cond = "(timeTable.timeScale >= 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1384,5,1386,33,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta114));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1384,5,1386,33,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta114));
        }
      }
      tmp115 = 1;
    }
  }
  threadData->lastEquationSolved = 272;
  TRACE_POP
}

/*
equation index: 273
type: ALGORITHM

  assert(integerTable.combiTimeTable.timeEvents >= Modelica.Blocks.Types.TimeEvents.Always and integerTable.combiTimeTable.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents, "Variable violating min/max constraint: Modelica.Blocks.Types.TimeEvents.Always <= integerTable.combiTimeTable.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents, has value: " + String(integerTable.combiTimeTable.timeEvents, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  modelica_boolean tmp116;
  modelica_boolean tmp117;
  static const MMC_DEFSTRINGLIT(tmp118,182,"Variable violating min/max constraint: Modelica.Blocks.Types.TimeEvents.Always <= integerTable.combiTimeTable.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents, has value: ");
  modelica_string tmp119;
  modelica_metatype tmpMeta120;
  static int tmp121 = 0;
  if(!tmp121)
  {
    tmp116 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* integerTable.combiTimeTable.timeEvents PARAM */),1);
    tmp117 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* integerTable.combiTimeTable.timeEvents PARAM */),3);
    if(!(tmp116 && tmp117))
    {
      tmp119 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* integerTable.combiTimeTable.timeEvents PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta120 = stringAppend(MMC_REFSTRINGLIT(tmp118),tmp119);
      {
        const char* assert_cond = "(integerTable.combiTimeTable.timeEvents >= Modelica.Blocks.Types.TimeEvents.Always and integerTable.combiTimeTable.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1638,5,1640,131,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta120));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1638,5,1640,131,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta120));
        }
      }
      tmp121 = 1;
    }
  }
  threadData->lastEquationSolved = 273;
  TRACE_POP
}

/*
equation index: 274
type: ALGORITHM

  assert(integerTable.combiTimeTable.timeScale >= 2.220446049250313e-16, "Variable violating min constraint: 2.220446049250313e-16 <= integerTable.combiTimeTable.timeScale, has value: " + String(integerTable.combiTimeTable.timeScale, "g"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  modelica_boolean tmp122;
  static const MMC_DEFSTRINGLIT(tmp123,110,"Variable violating min constraint: 2.220446049250313e-16 <= integerTable.combiTimeTable.timeScale, has value: ");
  modelica_string tmp124;
  modelica_metatype tmpMeta125;
  static int tmp126 = 0;
  if(!tmp126)
  {
    tmp122 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[61]] /* integerTable.combiTimeTable.timeScale PARAM */),2.220446049250313e-16);
    if(!tmp122)
    {
      tmp124 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[61]] /* integerTable.combiTimeTable.timeScale PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta125 = stringAppend(MMC_REFSTRINGLIT(tmp123),tmp124);
      {
        const char* assert_cond = "(integerTable.combiTimeTable.timeScale >= 2.220446049250313e-16)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1627,5,1629,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta125));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1627,5,1629,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta125));
        }
      }
      tmp126 = 1;
    }
  }
  threadData->lastEquationSolved = 274;
  TRACE_POP
}

/*
equation index: 275
type: ALGORITHM

  assert(integerTable.combiTimeTable.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and integerTable.combiTimeTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, "Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= integerTable.combiTimeTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: " + String(integerTable.combiTimeTable.extrapolation, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  modelica_boolean tmp127;
  modelica_boolean tmp128;
  static const MMC_DEFSTRINGLIT(tmp129,201,"Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= integerTable.combiTimeTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: ");
  modelica_string tmp130;
  modelica_metatype tmpMeta131;
  static int tmp132 = 0;
  if(!tmp132)
  {
    tmp127 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* integerTable.combiTimeTable.extrapolation PARAM */),1);
    tmp128 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* integerTable.combiTimeTable.extrapolation PARAM */),4);
    if(!(tmp127 && tmp128))
    {
      tmp130 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* integerTable.combiTimeTable.extrapolation PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta131 = stringAppend(MMC_REFSTRINGLIT(tmp129),tmp130);
      {
        const char* assert_cond = "(integerTable.combiTimeTable.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and integerTable.combiTimeTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1624,5,1626,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta131));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1624,5,1626,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta131));
        }
      }
      tmp132 = 1;
    }
  }
  threadData->lastEquationSolved = 275;
  TRACE_POP
}

/*
equation index: 276
type: ALGORITHM

  assert(integerTable.combiTimeTable.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and integerTable.combiTimeTable.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, "Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= integerTable.combiTimeTable.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: " + String(integerTable.combiTimeTable.smoothness, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  modelica_boolean tmp133;
  modelica_boolean tmp134;
  static const MMC_DEFSTRINGLIT(tmp135,206,"Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= integerTable.combiTimeTable.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: ");
  modelica_string tmp136;
  modelica_metatype tmpMeta137;
  static int tmp138 = 0;
  if(!tmp138)
  {
    tmp133 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* integerTable.combiTimeTable.smoothness PARAM */),1);
    tmp134 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* integerTable.combiTimeTable.smoothness PARAM */),6);
    if(!(tmp133 && tmp134))
    {
      tmp136 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* integerTable.combiTimeTable.smoothness PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta137 = stringAppend(MMC_REFSTRINGLIT(tmp135),tmp136);
      {
        const char* assert_cond = "(integerTable.combiTimeTable.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and integerTable.combiTimeTable.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1621,5,1623,61,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta137));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1621,5,1623,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta137));
        }
      }
      tmp138 = 1;
    }
  }
  threadData->lastEquationSolved = 276;
  TRACE_POP
}

/*
equation index: 277
type: ALGORITHM

  assert(integerTable.combiTimeTable.nout >= 1, "Variable violating min constraint: 1 <= integerTable.combiTimeTable.nout, has value: " + String(integerTable.combiTimeTable.nout, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  modelica_boolean tmp139;
  static const MMC_DEFSTRINGLIT(tmp140,85,"Variable violating min constraint: 1 <= integerTable.combiTimeTable.nout, has value: ");
  modelica_string tmp141;
  modelica_metatype tmpMeta142;
  static int tmp143 = 0;
  if(!tmp143)
  {
    tmp139 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* integerTable.combiTimeTable.nout PARAM */),((modelica_integer) 1));
    if(!tmp139)
    {
      tmp141 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* integerTable.combiTimeTable.nout PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta142 = stringAppend(MMC_REFSTRINGLIT(tmp140),tmp141);
      {
        const char* assert_cond = "(integerTable.combiTimeTable.nout >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",313,5,313,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta142));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Interfaces.mo",313,5,313,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta142));
        }
      }
      tmp143 = 1;
    }
  }
  threadData->lastEquationSolved = 277;
  TRACE_POP
}

/*
equation index: 278
type: ALGORITHM

  assert(integerTable.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and integerTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, "Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= integerTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: " + String(integerTable.extrapolation, "d"));
*/
OMC_DISABLE_OPT
static void Interaction1_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  modelica_boolean tmp144;
  modelica_boolean tmp145;
  static const MMC_DEFSTRINGLIT(tmp146,186,"Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= integerTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: ");
  modelica_string tmp147;
  modelica_metatype tmpMeta148;
  static int tmp149 = 0;
  if(!tmp149)
  {
    tmp144 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* integerTable.extrapolation PARAM */),1);
    tmp145 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* integerTable.extrapolation PARAM */),4);
    if(!(tmp144 && tmp145))
    {
      tmp147 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* integerTable.extrapolation PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta148 = stringAppend(MMC_REFSTRINGLIT(tmp146),tmp147);
      {
        const char* assert_cond = "(integerTable.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and integerTable.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2362,5,2363,113,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta148));
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2362,5,2363,113,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta148));
        }
      }
      tmp149 = 1;
    }
  }
  threadData->lastEquationSolved = 278;
  TRACE_POP
}
OMC_DISABLE_OPT
void Interaction1_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  static void (*const eqFunctions[115])(DATA*, threadData_t*) = {
    Interaction1_eqFunction_103,
    Interaction1_eqFunction_104,
    Interaction1_eqFunction_105,
    Interaction1_eqFunction_106,
    Interaction1_eqFunction_107,
    Interaction1_eqFunction_108,
    Interaction1_eqFunction_109,
    Interaction1_eqFunction_110,
    Interaction1_eqFunction_111,
    Interaction1_eqFunction_112,
    Interaction1_eqFunction_113,
    Interaction1_eqFunction_114,
    Interaction1_eqFunction_115,
    Interaction1_eqFunction_116,
    Interaction1_eqFunction_117,
    Interaction1_eqFunction_118,
    Interaction1_eqFunction_119,
    Interaction1_eqFunction_120,
    Interaction1_eqFunction_121,
    Interaction1_eqFunction_122,
    Interaction1_eqFunction_123,
    Interaction1_eqFunction_124,
    Interaction1_eqFunction_125,
    Interaction1_eqFunction_126,
    Interaction1_eqFunction_127,
    Interaction1_eqFunction_128,
    Interaction1_eqFunction_129,
    Interaction1_eqFunction_130,
    Interaction1_eqFunction_131,
    Interaction1_eqFunction_132,
    Interaction1_eqFunction_133,
    Interaction1_eqFunction_134,
    Interaction1_eqFunction_135,
    Interaction1_eqFunction_136,
    Interaction1_eqFunction_137,
    Interaction1_eqFunction_138,
    Interaction1_eqFunction_139,
    Interaction1_eqFunction_140,
    Interaction1_eqFunction_141,
    Interaction1_eqFunction_142,
    Interaction1_eqFunction_144,
    Interaction1_eqFunction_145,
    Interaction1_eqFunction_146,
    Interaction1_eqFunction_147,
    Interaction1_eqFunction_148,
    Interaction1_eqFunction_149,
    Interaction1_eqFunction_150,
    Interaction1_eqFunction_153,
    Interaction1_eqFunction_155,
    Interaction1_eqFunction_156,
    Interaction1_eqFunction_157,
    Interaction1_eqFunction_158,
    Interaction1_eqFunction_160,
    Interaction1_eqFunction_161,
    Interaction1_eqFunction_162,
    Interaction1_eqFunction_163,
    Interaction1_eqFunction_164,
    Interaction1_eqFunction_165,
    Interaction1_eqFunction_166,
    Interaction1_eqFunction_169,
    Interaction1_eqFunction_171,
    Interaction1_eqFunction_172,
    Interaction1_eqFunction_178,
    Interaction1_eqFunction_179,
    Interaction1_eqFunction_180,
    Interaction1_eqFunction_181,
    Interaction1_eqFunction_182,
    Interaction1_eqFunction_190,
    Interaction1_eqFunction_191,
    Interaction1_eqFunction_200,
    Interaction1_eqFunction_201,
    Interaction1_eqFunction_202,
    Interaction1_eqFunction_203,
    Interaction1_eqFunction_204,
    Interaction1_eqFunction_212,
    Interaction1_eqFunction_213,
    Interaction1_eqFunction_220,
    Interaction1_eqFunction_221,
    Interaction1_eqFunction_222,
    Interaction1_eqFunction_223,
    Interaction1_eqFunction_224,
    Interaction1_eqFunction_233,
    Interaction1_eqFunction_237,
    Interaction1_eqFunction_238,
    Interaction1_eqFunction_239,
    Interaction1_eqFunction_240,
    Interaction1_eqFunction_241,
    Interaction1_eqFunction_3,
    Interaction1_eqFunction_2,
    Interaction1_eqFunction_253,
    Interaction1_eqFunction_254,
    Interaction1_eqFunction_255,
    Interaction1_eqFunction_256,
    Interaction1_eqFunction_257,
    Interaction1_eqFunction_258,
    Interaction1_eqFunction_259,
    Interaction1_eqFunction_260,
    Interaction1_eqFunction_261,
    Interaction1_eqFunction_262,
    Interaction1_eqFunction_263,
    Interaction1_eqFunction_264,
    Interaction1_eqFunction_265,
    Interaction1_eqFunction_266,
    Interaction1_eqFunction_267,
    Interaction1_eqFunction_268,
    Interaction1_eqFunction_269,
    Interaction1_eqFunction_270,
    Interaction1_eqFunction_271,
    Interaction1_eqFunction_272,
    Interaction1_eqFunction_273,
    Interaction1_eqFunction_274,
    Interaction1_eqFunction_275,
    Interaction1_eqFunction_276,
    Interaction1_eqFunction_277,
    Interaction1_eqFunction_278
  };

  for (int id = 0; id < 115; id++) {
    eqFunctions[id](data, threadData);
  }
  TRACE_POP
}
OMC_DISABLE_OPT
int Interaction1_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[1]] /* integerValue.number DISCRETE */) = ((modelica_integer) 0);
  data->modelData->integerVarsData[1].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[0]] /* booleanTable.combiTimeTable.columns[1] PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[3]] /* booleanTable.combiTimeTable.nout PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[7]] /* booleanTable.n PARAM */) = ((modelica_integer) 9);
  data->modelData->integerParameterData[7].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* integerTable.combiTimeTable.columns[1] PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* integerTable.combiTimeTable.nout PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[11].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[15]] /* integerTable.n PARAM */) = ((modelica_integer) 6);
  data->modelData->integerParameterData[15].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[17]] /* start.nReset PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[17].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[18]] /* start.table.combiTimeTable.columns[1] PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[18].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[20]] /* start.table.combiTimeTable.nHeaderLines PARAM */) = ((modelica_integer) 0);
  data->modelData->integerParameterData[20].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[21]] /* start.table.combiTimeTable.nout PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[21].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[25]] /* start.table.n PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[25].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[26]] /* stop.nReset PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[26].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[27]] /* stop.table.combiTimeTable.columns[1] PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[27].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* stop.table.combiTimeTable.nHeaderLines PARAM */) = ((modelica_integer) 0);
  data->modelData->integerParameterData[29].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* stop.table.combiTimeTable.nout PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[30].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* stop.table.n PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[34].time_unvarying = 1;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[28]] /* booleanTable.combiTimeTable.timeScale PARAM */) = 1.0;
  data->modelData->realParameterData[28].time_unvarying = 1;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[61]] /* integerTable.combiTimeTable.timeScale PARAM */) = 1.0;
  data->modelData->realParameterData[61].time_unvarying = 1;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[78]] /* start.table.combiTimeTable.offset[1] PARAM */) = 0.0;
  data->modelData->realParameterData[78].time_unvarying = 1;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[92]] /* start.table.combiTimeTable.timeScale PARAM */) = 1.0;
  data->modelData->realParameterData[92].time_unvarying = 1;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* start.table.realToBoolean.threshold PARAM */) = 0.5;
  data->modelData->realParameterData[93].time_unvarying = 1;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[94]] /* start.table.shiftTime PARAM */) = 0.0;
  data->modelData->realParameterData[94].time_unvarying = 1;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* start.table.startTime PARAM */) = -1e60;
  data->modelData->realParameterData[95].time_unvarying = 1;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* stop.table.combiTimeTable.offset[1] PARAM */) = 0.0;
  data->modelData->realParameterData[100].time_unvarying = 1;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* stop.table.combiTimeTable.timeScale PARAM */) = 1.0;
  data->modelData->realParameterData[114].time_unvarying = 1;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* stop.table.realToBoolean.threshold PARAM */) = 0.5;
  data->modelData->realParameterData[115].time_unvarying = 1;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[116]] /* stop.table.shiftTime PARAM */) = 0.0;
  data->modelData->realParameterData[116].time_unvarying = 1;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[117]] /* stop.table.startTime PARAM */) = -1e60;
  data->modelData->realParameterData[117].time_unvarying = 1;
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[137]] /* timeTable.timeScale PARAM */) = 1.0;
  data->modelData->realParameterData[137].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[0]] /* booleanTable.combiTimeTable.isCsvExt PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[0].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[1]] /* booleanTable.combiTimeTable.tableOnFile PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[1].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[2]] /* booleanTable.combiTimeTable.verboseExtrapolation PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[2].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[5]] /* booleanValue.use_activePort PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[5].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[6]] /* integerTable.combiTimeTable.isCsvExt PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[6].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[7]] /* integerTable.combiTimeTable.tableOnFile PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[7].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[8]] /* integerTable.combiTimeTable.verboseExtrapolation PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[8].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[10]] /* integerValue.use_numberPort PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[10].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[11]] /* realValue.use_numberPort PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[11].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[12]] /* start.table.combiTimeTable.isCsvExt PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[12].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[13]] /* start.table.combiTimeTable.tableOnFile PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[13].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[14]] /* start.table.combiTimeTable.verboseExtrapolation PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[14].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[15]] /* start.table.combiTimeTable.verboseRead PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[15].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[16]] /* start.table.startValue PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[16].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[17]] /* stop.table.combiTimeTable.isCsvExt PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[17].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[18]] /* stop.table.combiTimeTable.tableOnFile PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[18].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[19]] /* stop.table.combiTimeTable.verboseExtrapolation PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[19].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[20]] /* stop.table.combiTimeTable.verboseRead PARAM */) = 1 /* true */;
  data->modelData->booleanParameterData[20].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[21]] /* stop.table.startValue PARAM */) = 0 /* false */;
  data->modelData->booleanParameterData[21].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[1]] /* booleanTable.combiTimeTable.extrapolation PARAM */) = 1;
  data->modelData->integerParameterData[1].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[4]] /* booleanTable.combiTimeTable.smoothness PARAM */) = 3;
  data->modelData->integerParameterData[4].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* integerTable.combiTimeTable.extrapolation PARAM */) = 1;
  data->modelData->integerParameterData[9].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[12]] /* integerTable.combiTimeTable.smoothness PARAM */) = 3;
  data->modelData->integerParameterData[12].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[19]] /* start.table.combiTimeTable.extrapolation PARAM */) = 1;
  data->modelData->integerParameterData[19].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[22]] /* start.table.combiTimeTable.smoothness PARAM */) = 3;
  data->modelData->integerParameterData[22].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[23]] /* start.table.combiTimeTable.timeEvents PARAM */) = 1;
  data->modelData->integerParameterData[23].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[24]] /* start.table.extrapolation PARAM */) = 1;
  data->modelData->integerParameterData[24].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* stop.table.combiTimeTable.extrapolation PARAM */) = 1;
  data->modelData->integerParameterData[28].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* stop.table.combiTimeTable.smoothness PARAM */) = 3;
  data->modelData->integerParameterData[31].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[32]] /* stop.table.combiTimeTable.timeEvents PARAM */) = 1;
  data->modelData->integerParameterData[32].time_unvarying = 1;
  (data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* stop.table.extrapolation PARAM */) = 1;
  data->modelData->integerParameterData[33].time_unvarying = 1;
  Interaction1_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif
