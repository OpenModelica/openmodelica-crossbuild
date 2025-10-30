/* Initialization */
#include "Interaction1_model.h"
#include "Interaction1_11mix.h"
#include "Interaction1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void Interaction1_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
integerValue.number = 0.0
*/
void Interaction1_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[1]] /* integerValue.number DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 1;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
realValue.number = 0.0
*/
void Interaction1_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* realValue.number variable */) = 0.0;
  threadData->lastEquationSolved = 2;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
booleanValue.active = false
*/
void Interaction1_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[10]] /* booleanValue.active DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 3;
  TRACE_POP
}
extern void Interaction1_eqFunction_95(DATA *data, threadData_t *threadData);


/*
equation index: 5
type: SIMPLE_ASSIGN
$PRE.timeTable.nextEvent = 0.0
*/
void Interaction1_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  (data->simulationInfo->realVarsPre[25] /* timeTable.nextEvent DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 5;
  TRACE_POP
}

/*
equation index: 6
type: ALGORITHM

  timeTable.nextEvent := $START.timeTable.nextEvent;
  timeTable.last := $START.timeTable.last;
  timeTable.nextEventScaled := $START.timeTable.nextEventScaled;
  timeTable.b := $START.timeTable.b;
  timeTable.a := $START.timeTable.a;
  $whenCondition1 := $START.$whenCondition1;
  assert(not (timeTable.table[1,1] > 0.0 or timeTable.table[1,1] < 0.0), "The first point in time has to be set to 0, but is table[1,1] = " + String(timeTable.table[1,1], 6, 0, true));
  $whenCondition1 := time >= $PRE.timeTable.nextEvent;
  (timeTable.a, timeTable.b, timeTable.nextEventScaled, timeTable.last) := Modelica.Blocks.Examples.Interaction1.timeTable.getInterpolationCoefficients(timeTable.table, timeTable.offset, timeTable.startTime, timeTable.timeScaled, timeTable.last, 2.220446049250313e-14, timeTable.shiftTime);
  timeTable.nextEvent := timeTable.nextEventScaled;
*/
void Interaction1_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,64,"The first point in time has to be set to 0, but is table[1,1] = ");
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  static int tmp5 = 0;
  modelica_boolean tmp6;
  real_array tmp7;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* timeTable.nextEvent DISCRETE */) = (data->modelData->realVarsData[25] /* timeTable.nextEvent DISCRETE */).attribute .start;

  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* timeTable.last DISCRETE */) = (data->modelData->integerVarsData[2] /* timeTable.last DISCRETE */).attribute .start;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* timeTable.nextEventScaled DISCRETE */) = (data->modelData->realVarsData[26] /* timeTable.nextEventScaled DISCRETE */).attribute .start;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* timeTable.b DISCRETE */) = (data->modelData->realVarsData[24] /* timeTable.b DISCRETE */).attribute .start;

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* timeTable.a DISCRETE */) = (data->modelData->realVarsData[23] /* timeTable.a DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = (data->modelData->booleanVarsData[0] /* $whenCondition1 DISCRETE */).attribute .start;

  {
    tmp0 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* timeTable.table[1,1] PARAM */),0.0);
    tmp1 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* timeTable.table[1,1] PARAM */),0.0);
    if(!(!(tmp0 || tmp1)))
    {
      tmp3 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* timeTable.table[1,1] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta4 = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        const char* assert_cond = "(not (timeTable.table[1,1] > 0.0 or timeTable.table[1,1] < 0.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1468,7,1468,149,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1468,7,1468,149,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4));
        }
      }
    }
  }

  tmp6 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[25] /* timeTable.nextEvent DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = tmp6;

  real_array_create(&tmp7, ((modelica_real*)&((&data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* timeTable.table[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 2 + (((modelica_integer) 1)-1)])), 2, (_index_t)7, (_index_t)2);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* timeTable.a DISCRETE */) = omc_Modelica_Blocks_Examples_Interaction1_timeTable_getInterpolationCoefficients(threadData, tmp7, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* timeTable.offset PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[122]] /* timeTable.startTime PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* timeTable.timeScaled variable */), (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* timeTable.last DISCRETE */), 2.220446049250313e-14, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[121]] /* timeTable.shiftTime PARAM */) ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* timeTable.b DISCRETE */) ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* timeTable.nextEventScaled DISCRETE */) ,&(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* timeTable.last DISCRETE */));

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* timeTable.nextEvent DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* timeTable.nextEventScaled DISCRETE */);
  threadData->lastEquationSolved = 6;
  TRACE_POP
}
extern void Interaction1_eqFunction_97(DATA *data, threadData_t *threadData);

extern void Interaction1_eqFunction_78(DATA *data, threadData_t *threadData);


/*
equation index: 9
type: SIMPLE_ASSIGN
start.table.combiTimeTable.nextTimeEventScaled = Modelica.Blocks.Tables.Internal.getNextTimeEvent(start.table.combiTimeTable.tableID, start.table.combiTimeTable.timeScaled)
*/
void Interaction1_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* start.table.combiTimeTable.nextTimeEventScaled DISCRETE */) = omc_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData, (data->simulationInfo->extObjs[2]), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* start.table.combiTimeTable.timeScaled variable */));
  threadData->lastEquationSolved = 9;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
start.table.combiTimeTable.nextTimeEvent = if start.table.combiTimeTable.nextTimeEventScaled < 1e60 then start.table.combiTimeTable.nextTimeEventScaled else 1e60
*/
void Interaction1_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  modelica_boolean tmp8;
  tmp8 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* start.table.combiTimeTable.nextTimeEventScaled DISCRETE */),1e60);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* start.table.combiTimeTable.nextTimeEvent DISCRETE */) = (tmp8?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* start.table.combiTimeTable.nextTimeEventScaled DISCRETE */):1e60);
  threadData->lastEquationSolved = 10;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
$PRE.start.table.y = false
*/
void Interaction1_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  (data->simulationInfo->booleanVarsPre[14] /* start.table.y DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 11;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
$PRE.start.table.combiTimeTable.nextTimeEventScaled = 0.0
*/
void Interaction1_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  (data->simulationInfo->realVarsPre[20] /* start.table.combiTimeTable.nextTimeEventScaled DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 12;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
start.table.combiTimeTable.y[1] = start.table.combiTimeTable.p_offset[1] + Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(start.table.combiTimeTable.tableID, 1, start.table.combiTimeTable.timeScaled, start.table.combiTimeTable.nextTimeEventScaled, $PRE.start.table.combiTimeTable.nextTimeEventScaled)
*/
void Interaction1_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* start.table.combiTimeTable.y[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[79]] /* start.table.combiTimeTable.p_offset[1] PARAM */) + omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 1), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* start.table.combiTimeTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* start.table.combiTimeTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[20] /* start.table.combiTimeTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 13;
  TRACE_POP
}
extern void Interaction1_eqFunction_83(DATA *data, threadData_t *threadData);


/*
equation index: 15
type: SIMPLE_ASSIGN
$PRE.start.reset[1] = false
*/
void Interaction1_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  (data->simulationInfo->booleanVarsPre[13] /* start.reset[1] DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 15;
  TRACE_POP
}

/*
equation index: 16
type: ALGORITHM

  $whenCondition7 := $START.$whenCondition7;
  $whenCondition6 := $START.$whenCondition6;
  start.pre_reset[1] := $START.start.pre_reset[1];
  start.pre_reset := $PRE.start.reset;
  $whenCondition6 := start.pre_reset[1];
  $whenCondition7 := start.table.y <> $PRE.start.table.y;
*/
void Interaction1_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  boolean_array tmp9;
  boolean_array tmp10;
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* $whenCondition7 DISCRETE */) = (data->modelData->booleanVarsData[6] /* $whenCondition7 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) = (data->modelData->booleanVarsData[5] /* $whenCondition6 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[12]] /* start.pre_reset[1] DISCRETE */) = (data->modelData->booleanVarsData[12] /* start.pre_reset[1] DISCRETE */).attribute .start;

  boolean_array_create(&tmp9, ((modelica_boolean*)&((&data->simulationInfo->booleanVarsPre[13] /* start.reset[1] DISCRETE */)[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  boolean_array_create(&tmp10, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[12]] /* start.pre_reset[1] DISCRETE */))[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  boolean_array_copy_data(tmp9, tmp10);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[12]] /* start.pre_reset[1] DISCRETE */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* $whenCondition7 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[14]] /* start.table.y DISCRETE */) != !(data->simulationInfo->booleanVarsPre[14] /* start.table.y DISCRETE */));
  threadData->lastEquationSolved = 16;
  TRACE_POP
}
extern void Interaction1_eqFunction_77(DATA *data, threadData_t *threadData);


/*
equation index: 18
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.nextTimeEventScaled = Modelica.Blocks.Tables.Internal.getNextTimeEvent(stop.table.combiTimeTable.tableID, stop.table.combiTimeTable.timeScaled)
*/
void Interaction1_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* stop.table.combiTimeTable.nextTimeEventScaled DISCRETE */) = omc_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData, (data->simulationInfo->extObjs[3]), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* stop.table.combiTimeTable.timeScaled variable */));
  threadData->lastEquationSolved = 18;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.nextTimeEvent = if stop.table.combiTimeTable.nextTimeEventScaled < 1e60 then stop.table.combiTimeTable.nextTimeEventScaled else 1e60
*/
void Interaction1_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  modelica_boolean tmp11;
  tmp11 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* stop.table.combiTimeTable.nextTimeEventScaled DISCRETE */),1e60);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* stop.table.combiTimeTable.nextTimeEvent DISCRETE */) = (tmp11?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* stop.table.combiTimeTable.nextTimeEventScaled DISCRETE */):1e60);
  threadData->lastEquationSolved = 19;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
$PRE.stop.table.y = false
*/
void Interaction1_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  (data->simulationInfo->booleanVarsPre[18] /* stop.table.y DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 20;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
$PRE.stop.table.combiTimeTable.nextTimeEventScaled = 0.0
*/
void Interaction1_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  (data->simulationInfo->realVarsPre[22] /* stop.table.combiTimeTable.nextTimeEventScaled DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 21;
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.y[1] = stop.table.combiTimeTable.p_offset[1] + Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(stop.table.combiTimeTable.tableID, 1, stop.table.combiTimeTable.timeScaled, stop.table.combiTimeTable.nextTimeEventScaled, $PRE.stop.table.combiTimeTable.nextTimeEventScaled)
*/
void Interaction1_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* stop.table.combiTimeTable.y[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* stop.table.combiTimeTable.p_offset[1] PARAM */) + omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[3]), ((modelica_integer) 1), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* stop.table.combiTimeTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* stop.table.combiTimeTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[22] /* stop.table.combiTimeTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 22;
  TRACE_POP
}
extern void Interaction1_eqFunction_91(DATA *data, threadData_t *threadData);


/*
equation index: 24
type: SIMPLE_ASSIGN
$PRE.stop.reset[1] = false
*/
void Interaction1_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  (data->simulationInfo->booleanVarsPre[17] /* stop.reset[1] DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 24;
  TRACE_POP
}

/*
equation index: 25
type: ALGORITHM

  $whenCondition5 := $START.$whenCondition5;
  $whenCondition4 := $START.$whenCondition4;
  stop.pre_reset[1] := $START.stop.pre_reset[1];
  stop.pre_reset := $PRE.stop.reset;
  $whenCondition4 := stop.pre_reset[1];
  $whenCondition5 := stop.table.y <> $PRE.stop.table.y;
*/
void Interaction1_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  boolean_array tmp12;
  boolean_array tmp13;
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* $whenCondition5 DISCRETE */) = (data->modelData->booleanVarsData[4] /* $whenCondition5 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) = (data->modelData->booleanVarsData[3] /* $whenCondition4 DISCRETE */).attribute .start;

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[16]] /* stop.pre_reset[1] DISCRETE */) = (data->modelData->booleanVarsData[16] /* stop.pre_reset[1] DISCRETE */).attribute .start;

  boolean_array_create(&tmp12, ((modelica_boolean*)&((&data->simulationInfo->booleanVarsPre[17] /* stop.reset[1] DISCRETE */)[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  boolean_array_create(&tmp13, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[16]] /* stop.pre_reset[1] DISCRETE */))[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  boolean_array_copy_data(tmp12, tmp13);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[16]] /* stop.pre_reset[1] DISCRETE */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* $whenCondition5 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[18]] /* stop.table.y DISCRETE */) != !(data->simulationInfo->booleanVarsPre[18] /* stop.table.y DISCRETE */));
  threadData->lastEquationSolved = 25;
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
$PRE.start.on = false
*/
void Interaction1_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  (data->simulationInfo->booleanVarsPre[11] /* start.on DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 26;
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
start.on = $PRE.start.on
*/
void Interaction1_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[11]] /* start.on DISCRETE */) = (data->simulationInfo->booleanVarsPre[11] /* start.on DISCRETE */);
  threadData->lastEquationSolved = 27;
  TRACE_POP
}
extern void Interaction1_eqFunction_85(DATA *data, threadData_t *threadData);


/*
equation index: 29
type: SIMPLE_ASSIGN
$PRE.stop.on = false
*/
void Interaction1_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  (data->simulationInfo->booleanVarsPre[15] /* stop.on DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 29;
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
stop.on = $PRE.stop.on
*/
void Interaction1_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[15]] /* stop.on DISCRETE */) = (data->simulationInfo->booleanVarsPre[15] /* stop.on DISCRETE */);
  threadData->lastEquationSolved = 30;
  TRACE_POP
}
extern void Interaction1_eqFunction_93(DATA *data, threadData_t *threadData);


/*
equation index: 32
type: SIMPLE_ASSIGN
$PRE.start.table.combiTimeTable.nextTimeEvent = 0.0
*/
void Interaction1_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  (data->simulationInfo->realVarsPre[19] /* start.table.combiTimeTable.nextTimeEvent DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 32;
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
$whenCondition2 = time >= $PRE.start.table.combiTimeTable.nextTimeEvent
*/
void Interaction1_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  modelica_boolean tmp14;
  tmp14 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[19] /* start.table.combiTimeTable.nextTimeEvent DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) = tmp14;
  threadData->lastEquationSolved = 33;
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
$PRE.stop.table.combiTimeTable.nextTimeEvent = 0.0
*/
void Interaction1_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  (data->simulationInfo->realVarsPre[21] /* stop.table.combiTimeTable.nextTimeEvent DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 34;
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
$whenCondition3 = time >= $PRE.stop.table.combiTimeTable.nextTimeEvent
*/
void Interaction1_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  modelica_boolean tmp15;
  tmp15 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[21] /* stop.table.combiTimeTable.nextTimeEvent DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = tmp15;
  threadData->lastEquationSolved = 35;
  TRACE_POP
}
extern void Interaction1_eqFunction_71(DATA *data, threadData_t *threadData);


/*
equation index: 37
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.nextTimeEventScaled = Modelica.Blocks.Tables.Internal.getNextTimeEvent(booleanTable.combiTimeTable.tableID, booleanTable.combiTimeTable.timeScaled)
*/
void Interaction1_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* booleanTable.combiTimeTable.nextTimeEventScaled DISCRETE */) = omc_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData, (data->simulationInfo->extObjs[0]), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* booleanTable.combiTimeTable.timeScaled variable */));
  threadData->lastEquationSolved = 37;
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.nextTimeEvent = if booleanTable.combiTimeTable.nextTimeEventScaled < 1e60 then booleanTable.combiTimeTable.nextTimeEventScaled else 1e60
*/
void Interaction1_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  modelica_boolean tmp16;
  tmp16 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* booleanTable.combiTimeTable.nextTimeEventScaled DISCRETE */),1e60);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* booleanTable.combiTimeTable.nextTimeEvent DISCRETE */) = (tmp16?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* booleanTable.combiTimeTable.nextTimeEventScaled DISCRETE */):1e60);
  threadData->lastEquationSolved = 38;
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
$PRE.booleanTable.combiTimeTable.nextTimeEventScaled = 0.0
*/
void Interaction1_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  (data->simulationInfo->realVarsPre[16] /* booleanTable.combiTimeTable.nextTimeEventScaled DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 39;
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.y[1] = booleanTable.combiTimeTable.p_offset[1] + Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(booleanTable.combiTimeTable.tableID, 1, booleanTable.combiTimeTable.timeScaled, booleanTable.combiTimeTable.nextTimeEventScaled, $PRE.booleanTable.combiTimeTable.nextTimeEventScaled)
*/
void Interaction1_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* booleanTable.combiTimeTable.y[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* booleanTable.combiTimeTable.p_offset[1] PARAM */) + omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[0]), ((modelica_integer) 1), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* booleanTable.combiTimeTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* booleanTable.combiTimeTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[16] /* booleanTable.combiTimeTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 40;
  TRACE_POP
}
extern void Interaction1_eqFunction_75(DATA *data, threadData_t *threadData);


/*
equation index: 42
type: SIMPLE_ASSIGN
$PRE.booleanTable.combiTimeTable.nextTimeEvent = 0.0
*/
void Interaction1_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  (data->simulationInfo->realVarsPre[15] /* booleanTable.combiTimeTable.nextTimeEvent DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 42;
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
$whenCondition8 = time >= $PRE.booleanTable.combiTimeTable.nextTimeEvent
*/
void Interaction1_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  modelica_boolean tmp17;
  tmp17 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[15] /* booleanTable.combiTimeTable.nextTimeEvent DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* $whenCondition8 DISCRETE */) = tmp17;
  threadData->lastEquationSolved = 43;
  TRACE_POP
}
extern void Interaction1_eqFunction_64(DATA *data, threadData_t *threadData);


/*
equation index: 45
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.nextTimeEventScaled = Modelica.Blocks.Tables.Internal.getNextTimeEvent(integerTable.combiTimeTable.tableID, integerTable.combiTimeTable.timeScaled)
*/
void Interaction1_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* integerTable.combiTimeTable.nextTimeEventScaled DISCRETE */) = omc_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData, (data->simulationInfo->extObjs[1]), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* integerTable.combiTimeTable.timeScaled variable */));
  threadData->lastEquationSolved = 45;
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.nextTimeEvent = if integerTable.combiTimeTable.nextTimeEventScaled < 1e60 then integerTable.combiTimeTable.nextTimeEventScaled else 1e60
*/
void Interaction1_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  modelica_boolean tmp18;
  tmp18 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* integerTable.combiTimeTable.nextTimeEventScaled DISCRETE */),1e60);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* integerTable.combiTimeTable.nextTimeEvent DISCRETE */) = (tmp18?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* integerTable.combiTimeTable.nextTimeEventScaled DISCRETE */):1e60);
  threadData->lastEquationSolved = 46;
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
$PRE.integerTable.combiTimeTable.nextTimeEventScaled = 0.0
*/
void Interaction1_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  (data->simulationInfo->realVarsPre[18] /* integerTable.combiTimeTable.nextTimeEventScaled DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 47;
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.y[1] = integerTable.combiTimeTable.p_offset[1] + Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(integerTable.combiTimeTable.tableID, 1, integerTable.combiTimeTable.timeScaled, integerTable.combiTimeTable.nextTimeEventScaled, $PRE.integerTable.combiTimeTable.nextTimeEventScaled)
*/
void Interaction1_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* integerTable.combiTimeTable.y[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* integerTable.combiTimeTable.p_offset[1] PARAM */) + omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 1), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* integerTable.combiTimeTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* integerTable.combiTimeTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[18] /* integerTable.combiTimeTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 48;
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
integerTable.y = if integerTable.combiTimeTable.y[1] > 0.0 then integer(floor(integerTable.combiTimeTable.y[1] + 0.5)) else integer(ceil(integerTable.combiTimeTable.y[1] - 0.5))
*/
void Interaction1_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  modelica_boolean tmp19;
  tmp19 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* integerTable.combiTimeTable.y[1] variable */),0.0);
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* integerTable.y DISCRETE */) = (tmp19?((modelica_integer)floor(floor((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* integerTable.combiTimeTable.y[1] variable */) + 0.5))):((modelica_integer)floor(ceil((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* integerTable.combiTimeTable.y[1] variable */) - 0.5))));
  threadData->lastEquationSolved = 49;
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
$PRE.integerTable.combiTimeTable.nextTimeEvent = 0.0
*/
void Interaction1_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  (data->simulationInfo->realVarsPre[17] /* integerTable.combiTimeTable.nextTimeEvent DISCRETE */) = 0.0;
  threadData->lastEquationSolved = 50;
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
$whenCondition9 = time >= $PRE.integerTable.combiTimeTable.nextTimeEvent
*/
void Interaction1_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  modelica_boolean tmp20;
  tmp20 = GreaterEq(data->localData[0]->timeValue,(data->simulationInfo->realVarsPre[17] /* integerTable.combiTimeTable.nextTimeEvent DISCRETE */));
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* $whenCondition9 DISCRETE */) = tmp20;
  threadData->lastEquationSolved = 51;
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
$PRE.stop.pre_reset[1] = false
*/
void Interaction1_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  (data->simulationInfo->booleanVarsPre[16] /* stop.pre_reset[1] DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 52;
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
$PRE.start.pre_reset[1] = false
*/
void Interaction1_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  (data->simulationInfo->booleanVarsPre[12] /* start.pre_reset[1] DISCRETE */) = 0 /* false */;
  threadData->lastEquationSolved = 53;
  TRACE_POP
}

/*
equation index: 62
type: ALGORITHM

  Modelica.Blocks.Examples.Interaction1.integerTable.isValidTable(integerTable.table);
*/
void Interaction1_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  real_array tmp21;
  real_array_create(&tmp21, ((modelica_real*)&((&data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[64]] /* integerTable.table[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 2 + (((modelica_integer) 1)-1)])), 2, (_index_t)6, (_index_t)2);
  omc_Modelica_Blocks_Examples_Interaction1_integerTable_isValidTable(threadData, tmp21);
  threadData->lastEquationSolved = 62;
  TRACE_POP
}

/*
equation index: 61
type: ALGORITHM

  Modelica.Blocks.Examples.Interaction1.booleanTable.isValidTable(booleanTable.table);
*/
void Interaction1_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  real_array tmp22;
  real_array_create(&tmp22, ((modelica_real*)&((&data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* booleanTable.table[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)9);
  omc_Modelica_Blocks_Examples_Interaction1_booleanTable_isValidTable(threadData, tmp22);
  threadData->lastEquationSolved = 61;
  TRACE_POP
}

/*
equation index: 60
type: ALGORITHM

  Modelica.Blocks.Examples.Interaction1.start.table.isValidTable(start.table.table);
*/
void Interaction1_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  real_array tmp23;
  real_array_create(&tmp23, ((modelica_real*)&((&data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[96]] /* start.table.table[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  omc_Modelica_Blocks_Examples_Interaction1_start_table_isValidTable(threadData, tmp23);
  threadData->lastEquationSolved = 60;
  TRACE_POP
}

/*
equation index: 59
type: ALGORITHM

  Modelica.Blocks.Examples.Interaction1.stop.table.isValidTable(stop.table.table);
*/
void Interaction1_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  real_array tmp24;
  real_array_create(&tmp24, ((modelica_real*)&((&data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* stop.table.table[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  omc_Modelica_Blocks_Examples_Interaction1_stop_table_isValidTable(threadData, tmp24);
  threadData->lastEquationSolved = 59;
  TRACE_POP
}

/*
equation index: 58
type: ALGORITHM

  assert(integerTable.n > 0, "No table values defined.");
*/
void Interaction1_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  modelica_boolean tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,24,"No table values defined.");
  static int tmp27 = 0;
  {
    tmp25 = Greater((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[15]] /* integerTable.n PARAM */),((modelica_integer) 0));
    if(!tmp25)
    {
      {
        const char* assert_cond = "(integerTable.n > 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2411,7,2411,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp26)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2411,7,2411,48,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp26)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 58;
  TRACE_POP
}

/*
equation index: 57
type: ALGORITHM

  assert(integerTable.extrapolation <> Modelica.Blocks.Types.Extrapolation.LastTwoPoints, "Unsuitable extrapolation setting.");
*/
void Interaction1_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  static const MMC_DEFSTRINGLIT(tmp28,33,"Unsuitable extrapolation setting.");
  static int tmp29 = 0;
  {
    if(!((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* integerTable.extrapolation PARAM */) != 2))
    {
      {
        const char* assert_cond = "(integerTable.extrapolation <> Modelica.Blocks.Types.Extrapolation.LastTwoPoints)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2412,7,2412,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp28)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2412,7,2412,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp28)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 57;
  TRACE_POP
}

/*
equation index: 56
type: ALGORITHM

  assert(booleanTable.extrapolation <> Modelica.Blocks.Types.Extrapolation.LastTwoPoints, "Unsuitable extrapolation setting.");
*/
void Interaction1_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  static const MMC_DEFSTRINGLIT(tmp30,33,"Unsuitable extrapolation setting.");
  static int tmp31 = 0;
  {
    if(!((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* booleanTable.extrapolation PARAM */) != 2))
    {
      {
        const char* assert_cond = "(booleanTable.extrapolation <> Modelica.Blocks.Types.Extrapolation.LastTwoPoints)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2137,7,2137,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp30)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2137,7,2137,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp30)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 56;
  TRACE_POP
}

/*
equation index: 55
type: ALGORITHM

  assert(start.table.extrapolation <> Modelica.Blocks.Types.Extrapolation.LastTwoPoints, "Unsuitable extrapolation setting.");
*/
void Interaction1_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  static const MMC_DEFSTRINGLIT(tmp32,33,"Unsuitable extrapolation setting.");
  static int tmp33 = 0;
  {
    if(!((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[24]] /* start.table.extrapolation PARAM */) != 2))
    {
      {
        const char* assert_cond = "(start.table.extrapolation <> Modelica.Blocks.Types.Extrapolation.LastTwoPoints)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2137,7,2137,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp32)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2137,7,2137,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp32)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 55;
  TRACE_POP
}

/*
equation index: 54
type: ALGORITHM

  assert(stop.table.extrapolation <> Modelica.Blocks.Types.Extrapolation.LastTwoPoints, "Unsuitable extrapolation setting.");
*/
void Interaction1_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  static const MMC_DEFSTRINGLIT(tmp34,33,"Unsuitable extrapolation setting.");
  static int tmp35 = 0;
  {
    if(!((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* stop.table.extrapolation PARAM */) != 2))
    {
      {
        const char* assert_cond = "(stop.table.extrapolation <> Modelica.Blocks.Types.Extrapolation.LastTwoPoints)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2137,7,2137,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp34)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2137,7,2137,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp34)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 54;
  TRACE_POP
}
OMC_DISABLE_OPT
void Interaction1_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  static void (*const eqFunctions[62])(DATA*, threadData_t*) = {
    Interaction1_eqFunction_1,
    Interaction1_eqFunction_2,
    Interaction1_eqFunction_3,
    Interaction1_eqFunction_95,
    Interaction1_eqFunction_5,
    Interaction1_eqFunction_6,
    Interaction1_eqFunction_97,
    Interaction1_eqFunction_78,
    Interaction1_eqFunction_9,
    Interaction1_eqFunction_10,
    Interaction1_eqFunction_11,
    Interaction1_eqFunction_12,
    Interaction1_eqFunction_13,
    Interaction1_eqFunction_83,
    Interaction1_eqFunction_15,
    Interaction1_eqFunction_16,
    Interaction1_eqFunction_77,
    Interaction1_eqFunction_18,
    Interaction1_eqFunction_19,
    Interaction1_eqFunction_20,
    Interaction1_eqFunction_21,
    Interaction1_eqFunction_22,
    Interaction1_eqFunction_91,
    Interaction1_eqFunction_24,
    Interaction1_eqFunction_25,
    Interaction1_eqFunction_26,
    Interaction1_eqFunction_27,
    Interaction1_eqFunction_85,
    Interaction1_eqFunction_29,
    Interaction1_eqFunction_30,
    Interaction1_eqFunction_93,
    Interaction1_eqFunction_32,
    Interaction1_eqFunction_33,
    Interaction1_eqFunction_34,
    Interaction1_eqFunction_35,
    Interaction1_eqFunction_71,
    Interaction1_eqFunction_37,
    Interaction1_eqFunction_38,
    Interaction1_eqFunction_39,
    Interaction1_eqFunction_40,
    Interaction1_eqFunction_75,
    Interaction1_eqFunction_42,
    Interaction1_eqFunction_43,
    Interaction1_eqFunction_64,
    Interaction1_eqFunction_45,
    Interaction1_eqFunction_46,
    Interaction1_eqFunction_47,
    Interaction1_eqFunction_48,
    Interaction1_eqFunction_49,
    Interaction1_eqFunction_50,
    Interaction1_eqFunction_51,
    Interaction1_eqFunction_52,
    Interaction1_eqFunction_53,
    Interaction1_eqFunction_62,
    Interaction1_eqFunction_61,
    Interaction1_eqFunction_60,
    Interaction1_eqFunction_59,
    Interaction1_eqFunction_58,
    Interaction1_eqFunction_57,
    Interaction1_eqFunction_56,
    Interaction1_eqFunction_55,
    Interaction1_eqFunction_54
  };

  for (int id = 0; id < 62; id++) {
    eqFunctions[id](data, threadData);
  }
  TRACE_POP
}

int Interaction1_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  Interaction1_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;

  TRACE_POP
  return 0;
}

/* No Interaction1_functionInitialEquations_lambda0 function */

int Interaction1_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;


  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif
