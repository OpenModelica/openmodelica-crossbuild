/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "Interaction1_model.h"
#include "simulation/solver/events.h"



/* dummy VARINFO and FILEINFO */
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int Interaction1_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH


  TRACE_POP
  return 0;
}

int Interaction1_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH


  TRACE_POP
  return 0;
}

int Interaction1_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH


  TRACE_POP
  return 0;
}

int Interaction1_inputNames(DATA *data, char ** names){
  TRACE_PUSH


  TRACE_POP
  return 0;
}

int Interaction1_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int Interaction1_dataReconciliationInputNames(DATA *data, char ** names){
  TRACE_PUSH


  TRACE_POP
  return 0;
}

int Interaction1_dataReconciliationUnmeasuredVariables(DATA *data, char ** names)
{
  TRACE_PUSH


  TRACE_POP
  return 0;
}

int Interaction1_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH


  TRACE_POP
  return 0;
}

int Interaction1_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH


  TRACE_POP
  return 0;
}

int Interaction1_setb_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH


  TRACE_POP
  return 0;
}


/*
equation index: 63
type: SIMPLE_ASSIGN
$whenCondition9 = time >= pre(integerTable.combiTimeTable.nextTimeEvent)
*/
void Interaction1_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp1 = 1.0;
  tmp2 = 1.0;
  relationhysteresis(data, &tmp0, data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[17] /* integerTable.combiTimeTable.nextTimeEvent DISCRETE */), tmp1, tmp2, 1, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* $whenCondition9 DISCRETE */) = tmp0;
  threadData->lastEquationSolved = 63;
  TRACE_POP
}

/*
equation index: 64
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.timeScaled = time
*/
void Interaction1_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* integerTable.combiTimeTable.timeScaled variable */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 64;
  TRACE_POP
}

/*
equation index: 65
type: WHEN

when {$whenCondition9} then
  integerTable.combiTimeTable.nextTimeEventScaled = Modelica.Blocks.Tables.Internal.getNextTimeEvent(integerTable.combiTimeTable.tableID, integerTable.combiTimeTable.timeScaled);
end when;
*/
void Interaction1_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* $whenCondition9 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[8] /* $whenCondition9 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* integerTable.combiTimeTable.nextTimeEventScaled DISCRETE */) = omc_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData, (data->simulationInfo->extObjs[1]), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* integerTable.combiTimeTable.timeScaled variable */));
  }
  threadData->lastEquationSolved = 65;
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
$cse1 = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(integerTable.combiTimeTable.tableID, 1, integerTable.combiTimeTable.timeScaled, integerTable.combiTimeTable.nextTimeEventScaled, pre(integerTable.combiTimeTable.nextTimeEventScaled))
*/
void Interaction1_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* $cse1 variable */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[1]), ((modelica_integer) 1), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* integerTable.combiTimeTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* integerTable.combiTimeTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[18] /* integerTable.combiTimeTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 66;
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
integerTable.combiTimeTable.y[1] = integerTable.combiTimeTable.p_offset[1] + $cse1
*/
void Interaction1_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* integerTable.combiTimeTable.y[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[42]] /* integerTable.combiTimeTable.p_offset[1] PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* $cse1 variable */);
  threadData->lastEquationSolved = 67;
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
integerTable.y = if integerTable.combiTimeTable.y[1] > 0.0 then integer(floor(integerTable.combiTimeTable.y[1] + 0.5, 1), 0) else integer(ceil(integerTable.combiTimeTable.y[1] - 0.5, 3), 2)
*/
void Interaction1_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  tmp4 = 1.0;
  tmp5 = 0.0;
  relationhysteresis(data, &tmp3, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* integerTable.combiTimeTable.y[1] variable */), 0.0, tmp4, tmp5, 0, Greater, GreaterZC);
  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[0]] /* integerTable.y DISCRETE */) = (tmp3?(_event_integer(((modelica_real)_event_floor((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* integerTable.combiTimeTable.y[1] variable */) + 0.5, ((modelica_integer) 1), data)), ((modelica_integer) 0), data)):(_event_integer(((modelica_real)_event_ceil((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* integerTable.combiTimeTable.y[1] variable */) - 0.5, ((modelica_integer) 3), data)), ((modelica_integer) 2), data)));
  threadData->lastEquationSolved = 68;
  TRACE_POP
}

/*
equation index: 69
type: WHEN

when {$whenCondition9} then
  integerTable.combiTimeTable.nextTimeEvent = if integerTable.combiTimeTable.nextTimeEventScaled < 1e60 then integerTable.combiTimeTable.nextTimeEventScaled else 1e60;
end when;
*/
void Interaction1_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  modelica_boolean tmp6;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[8]] /* $whenCondition9 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[8] /* $whenCondition9 DISCRETE */) /* edge */))
  {
    tmp6 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* integerTable.combiTimeTable.nextTimeEventScaled DISCRETE */),1e60);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* integerTable.combiTimeTable.nextTimeEvent DISCRETE */) = (tmp6?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* integerTable.combiTimeTable.nextTimeEventScaled DISCRETE */):1e60);
  }
  threadData->lastEquationSolved = 69;
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
$whenCondition8 = time >= pre(booleanTable.combiTimeTable.nextTimeEvent)
*/
void Interaction1_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  tmp8 = 1.0;
  tmp9 = 1.0;
  relationhysteresis(data, &tmp7, data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[15] /* booleanTable.combiTimeTable.nextTimeEvent DISCRETE */), tmp8, tmp9, 3, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* $whenCondition8 DISCRETE */) = tmp7;
  threadData->lastEquationSolved = 70;
  TRACE_POP
}

/*
equation index: 71
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.timeScaled = time
*/
void Interaction1_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* booleanTable.combiTimeTable.timeScaled variable */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 71;
  TRACE_POP
}

/*
equation index: 72
type: WHEN

when {$whenCondition8} then
  booleanTable.combiTimeTable.nextTimeEventScaled = Modelica.Blocks.Tables.Internal.getNextTimeEvent(booleanTable.combiTimeTable.tableID, booleanTable.combiTimeTable.timeScaled);
end when;
*/
void Interaction1_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* $whenCondition8 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[7] /* $whenCondition8 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* booleanTable.combiTimeTable.nextTimeEventScaled DISCRETE */) = omc_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData, (data->simulationInfo->extObjs[0]), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* booleanTable.combiTimeTable.timeScaled variable */));
  }
  threadData->lastEquationSolved = 72;
  TRACE_POP
}

/*
equation index: 73
type: SIMPLE_ASSIGN
$cse2 = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(booleanTable.combiTimeTable.tableID, 1, booleanTable.combiTimeTable.timeScaled, booleanTable.combiTimeTable.nextTimeEventScaled, pre(booleanTable.combiTimeTable.nextTimeEventScaled))
*/
void Interaction1_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* $cse2 variable */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[0]), ((modelica_integer) 1), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* booleanTable.combiTimeTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* booleanTable.combiTimeTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[16] /* booleanTable.combiTimeTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 73;
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
booleanTable.combiTimeTable.y[1] = booleanTable.combiTimeTable.p_offset[1] + $cse2
*/
void Interaction1_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* booleanTable.combiTimeTable.y[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[1]] /* booleanTable.combiTimeTable.p_offset[1] PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* $cse2 variable */);
  threadData->lastEquationSolved = 74;
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
booleanTable.y = booleanTable.combiTimeTable.y[1] >= booleanTable.realToBoolean.threshold
*/
void Interaction1_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  modelica_boolean tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  tmp11 = 1.0;
  tmp12 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* booleanTable.realToBoolean.threshold PARAM */));
  relationhysteresis(data, &tmp10, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* booleanTable.combiTimeTable.y[1] variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* booleanTable.realToBoolean.threshold PARAM */), tmp11, tmp12, 2, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[9]] /* booleanTable.y DISCRETE */) = tmp10;
  threadData->lastEquationSolved = 75;
  TRACE_POP
}

/*
equation index: 76
type: WHEN

when {$whenCondition8} then
  booleanTable.combiTimeTable.nextTimeEvent = if booleanTable.combiTimeTable.nextTimeEventScaled < 1e60 then booleanTable.combiTimeTable.nextTimeEventScaled else 1e60;
end when;
*/
void Interaction1_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  modelica_boolean tmp13;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[7]] /* $whenCondition8 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[7] /* $whenCondition8 DISCRETE */) /* edge */))
  {
    tmp13 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* booleanTable.combiTimeTable.nextTimeEventScaled DISCRETE */),1e60);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* booleanTable.combiTimeTable.nextTimeEvent DISCRETE */) = (tmp13?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* booleanTable.combiTimeTable.nextTimeEventScaled DISCRETE */):1e60);
  }
  threadData->lastEquationSolved = 76;
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.timeScaled = time
*/
void Interaction1_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* stop.table.combiTimeTable.timeScaled variable */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 77;
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
start.table.combiTimeTable.timeScaled = time
*/
void Interaction1_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* start.table.combiTimeTable.timeScaled variable */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 78;
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
$whenCondition2 = time >= pre(start.table.combiTimeTable.nextTimeEvent)
*/
void Interaction1_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  modelica_boolean tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  tmp15 = 1.0;
  tmp16 = 1.0;
  relationhysteresis(data, &tmp14, data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[19] /* start.table.combiTimeTable.nextTimeEvent DISCRETE */), tmp15, tmp16, 5, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) = tmp14;
  threadData->lastEquationSolved = 79;
  TRACE_POP
}

/*
equation index: 80
type: WHEN

when {$whenCondition2} then
  start.table.combiTimeTable.nextTimeEventScaled = Modelica.Blocks.Tables.Internal.getNextTimeEvent(start.table.combiTimeTable.tableID, start.table.combiTimeTable.timeScaled);
end when;
*/
void Interaction1_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* start.table.combiTimeTable.nextTimeEventScaled DISCRETE */) = omc_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData, (data->simulationInfo->extObjs[2]), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* start.table.combiTimeTable.timeScaled variable */));
  }
  threadData->lastEquationSolved = 80;
  TRACE_POP
}

/*
equation index: 81
type: SIMPLE_ASSIGN
$cse4 = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(start.table.combiTimeTable.tableID, 1, start.table.combiTimeTable.timeScaled, start.table.combiTimeTable.nextTimeEventScaled, pre(start.table.combiTimeTable.nextTimeEventScaled))
*/
void Interaction1_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* $cse4 variable */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[2]), ((modelica_integer) 1), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* start.table.combiTimeTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* start.table.combiTimeTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[20] /* start.table.combiTimeTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 81;
  TRACE_POP
}

/*
equation index: 82
type: SIMPLE_ASSIGN
start.table.combiTimeTable.y[1] = start.table.combiTimeTable.p_offset[1] + $cse4
*/
void Interaction1_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* start.table.combiTimeTable.y[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[79]] /* start.table.combiTimeTable.p_offset[1] PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* $cse4 variable */);
  threadData->lastEquationSolved = 82;
  TRACE_POP
}

/*
equation index: 83
type: SIMPLE_ASSIGN
start.table.y = start.table.combiTimeTable.y[1] >= start.table.realToBoolean.threshold
*/
void Interaction1_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  modelica_boolean tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  tmp18 = 1.0;
  tmp19 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* start.table.realToBoolean.threshold PARAM */));
  relationhysteresis(data, &tmp17, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* start.table.combiTimeTable.y[1] variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* start.table.realToBoolean.threshold PARAM */), tmp18, tmp19, 7, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[14]] /* start.table.y DISCRETE */) = tmp17;
  threadData->lastEquationSolved = 83;
  TRACE_POP
}

/*
equation index: 84
type: ALGORITHM

  $whenCondition7 := pre($whenCondition7);
  start.on := pre(start.on);
  $whenCondition6 := pre($whenCondition6);
  start.pre_reset[1] := pre(start.pre_reset[1]);
  start.pre_reset := pre(start.reset);
  $whenCondition6 := start.pre_reset[1];
  when $whenCondition6 then
    start.on := false;
  end when;
  $whenCondition7 := start.table.y <> pre(start.table.y);
  when $whenCondition7 then
    start.on := true;
  end when;
*/
void Interaction1_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  boolean_array tmp20;
  boolean_array tmp21;
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* $whenCondition7 DISCRETE */) = (data->simulationInfo->booleanVarsPre[6] /* $whenCondition7 DISCRETE */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[11]] /* start.on DISCRETE */) = (data->simulationInfo->booleanVarsPre[11] /* start.on DISCRETE */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) = (data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[12]] /* start.pre_reset[1] DISCRETE */) = (data->simulationInfo->booleanVarsPre[12] /* start.pre_reset[1] DISCRETE */);

  boolean_array_create(&tmp20, ((modelica_boolean*)&((&(data->simulationInfo->booleanVarsPre[13] /* start.reset[1] DISCRETE */))[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  boolean_array_create(&tmp21, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[12]] /* start.pre_reset[1] DISCRETE */))[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  boolean_array_copy_data(tmp20, tmp21);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[12]] /* start.pre_reset[1] DISCRETE */);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[5]] /* $whenCondition6 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[5] /* $whenCondition6 DISCRETE */) /* edge */))
    {
      (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[11]] /* start.on DISCRETE */) = 0 /* false */;
    }
  }

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* $whenCondition7 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[14]] /* start.table.y DISCRETE */) != !(data->simulationInfo->booleanVarsPre[14] /* start.table.y DISCRETE */));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[6]] /* $whenCondition7 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[6] /* $whenCondition7 DISCRETE */) /* edge */))
    {
      (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[11]] /* start.on DISCRETE */) = 1 /* true */;
    }
  }
  threadData->lastEquationSolved = 84;
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
stop.reset[1] = start.on
*/
void Interaction1_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[17]] /* stop.reset[1] DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[11]] /* start.on DISCRETE */);
  threadData->lastEquationSolved = 85;
  TRACE_POP
}

/*
equation index: 86
type: WHEN

when {$whenCondition2} then
  start.table.combiTimeTable.nextTimeEvent = if start.table.combiTimeTable.nextTimeEventScaled < 1e60 then start.table.combiTimeTable.nextTimeEventScaled else 1e60;
end when;
*/
void Interaction1_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  modelica_boolean tmp22;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[1]] /* $whenCondition2 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[1] /* $whenCondition2 DISCRETE */) /* edge */))
  {
    tmp22 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* start.table.combiTimeTable.nextTimeEventScaled DISCRETE */),1e60);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* start.table.combiTimeTable.nextTimeEvent DISCRETE */) = (tmp22?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* start.table.combiTimeTable.nextTimeEventScaled DISCRETE */):1e60);
  }
  threadData->lastEquationSolved = 86;
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
$whenCondition3 = time >= pre(stop.table.combiTimeTable.nextTimeEvent)
*/
void Interaction1_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  modelica_boolean tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  tmp24 = 1.0;
  tmp25 = 1.0;
  relationhysteresis(data, &tmp23, data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[21] /* stop.table.combiTimeTable.nextTimeEvent DISCRETE */), tmp24, tmp25, 4, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) = tmp23;
  threadData->lastEquationSolved = 87;
  TRACE_POP
}

/*
equation index: 88
type: WHEN

when {$whenCondition3} then
  stop.table.combiTimeTable.nextTimeEventScaled = Modelica.Blocks.Tables.Internal.getNextTimeEvent(stop.table.combiTimeTable.tableID, stop.table.combiTimeTable.timeScaled);
end when;
*/
void Interaction1_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[2] /* $whenCondition3 DISCRETE */) /* edge */))
  {
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* stop.table.combiTimeTable.nextTimeEventScaled DISCRETE */) = omc_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData, (data->simulationInfo->extObjs[3]), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* stop.table.combiTimeTable.timeScaled variable */));
  }
  threadData->lastEquationSolved = 88;
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
$cse3 = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer(stop.table.combiTimeTable.tableID, 1, stop.table.combiTimeTable.timeScaled, stop.table.combiTimeTable.nextTimeEventScaled, pre(stop.table.combiTimeTable.nextTimeEventScaled))
*/
void Interaction1_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* $cse3 variable */) = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, (data->simulationInfo->extObjs[3]), ((modelica_integer) 1), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* stop.table.combiTimeTable.timeScaled variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* stop.table.combiTimeTable.nextTimeEventScaled DISCRETE */), (data->simulationInfo->realVarsPre[22] /* stop.table.combiTimeTable.nextTimeEventScaled DISCRETE */));
  threadData->lastEquationSolved = 89;
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
stop.table.combiTimeTable.y[1] = stop.table.combiTimeTable.p_offset[1] + $cse3
*/
void Interaction1_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* stop.table.combiTimeTable.y[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[101]] /* stop.table.combiTimeTable.p_offset[1] PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* $cse3 variable */);
  threadData->lastEquationSolved = 90;
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
stop.table.y = stop.table.combiTimeTable.y[1] >= stop.table.realToBoolean.threshold
*/
void Interaction1_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  modelica_boolean tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  tmp27 = 1.0;
  tmp28 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* stop.table.realToBoolean.threshold PARAM */));
  relationhysteresis(data, &tmp26, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* stop.table.combiTimeTable.y[1] variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* stop.table.realToBoolean.threshold PARAM */), tmp27, tmp28, 6, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[18]] /* stop.table.y DISCRETE */) = tmp26;
  threadData->lastEquationSolved = 91;
  TRACE_POP
}

/*
equation index: 92
type: ALGORITHM

  $whenCondition5 := pre($whenCondition5);
  stop.on := pre(stop.on);
  $whenCondition4 := pre($whenCondition4);
  stop.pre_reset[1] := pre(stop.pre_reset[1]);
  stop.pre_reset := pre(stop.reset);
  $whenCondition4 := stop.pre_reset[1];
  when $whenCondition4 then
    stop.on := false;
  end when;
  $whenCondition5 := stop.table.y <> pre(stop.table.y);
  when $whenCondition5 then
    stop.on := true;
  end when;
*/
void Interaction1_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  boolean_array tmp29;
  boolean_array tmp30;
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* $whenCondition5 DISCRETE */) = (data->simulationInfo->booleanVarsPre[4] /* $whenCondition5 DISCRETE */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[15]] /* stop.on DISCRETE */) = (data->simulationInfo->booleanVarsPre[15] /* stop.on DISCRETE */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) = (data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[16]] /* stop.pre_reset[1] DISCRETE */) = (data->simulationInfo->booleanVarsPre[16] /* stop.pre_reset[1] DISCRETE */);

  boolean_array_create(&tmp29, ((modelica_boolean*)&((&(data->simulationInfo->booleanVarsPre[17] /* stop.reset[1] DISCRETE */))[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  boolean_array_create(&tmp30, ((modelica_boolean*)&((&(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[16]] /* stop.pre_reset[1] DISCRETE */))[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  boolean_array_copy_data(tmp29, tmp30);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[16]] /* stop.pre_reset[1] DISCRETE */);

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[3]] /* $whenCondition4 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[3] /* $whenCondition4 DISCRETE */) /* edge */))
    {
      (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[15]] /* stop.on DISCRETE */) = 0 /* false */;
    }
  }

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* $whenCondition5 DISCRETE */) = (!(data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[18]] /* stop.table.y DISCRETE */) != !(data->simulationInfo->booleanVarsPre[18] /* stop.table.y DISCRETE */));

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[4]] /* $whenCondition5 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[4] /* $whenCondition5 DISCRETE */) /* edge */))
    {
      (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[15]] /* stop.on DISCRETE */) = 1 /* true */;
    }
  }
  threadData->lastEquationSolved = 92;
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
start.reset[1] = stop.on
*/
void Interaction1_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[13]] /* start.reset[1] DISCRETE */) = (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[15]] /* stop.on DISCRETE */);
  threadData->lastEquationSolved = 93;
  TRACE_POP
}

/*
equation index: 94
type: WHEN

when {$whenCondition3} then
  stop.table.combiTimeTable.nextTimeEvent = if stop.table.combiTimeTable.nextTimeEventScaled < 1e60 then stop.table.combiTimeTable.nextTimeEventScaled else 1e60;
end when;
*/
void Interaction1_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  modelica_boolean tmp31;
  if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[2]] /* $whenCondition3 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[2] /* $whenCondition3 DISCRETE */) /* edge */))
  {
    tmp31 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* stop.table.combiTimeTable.nextTimeEventScaled DISCRETE */),1e60);
    (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* stop.table.combiTimeTable.nextTimeEvent DISCRETE */) = (tmp31?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* stop.table.combiTimeTable.nextTimeEventScaled DISCRETE */):1e60);
  }
  threadData->lastEquationSolved = 94;
  TRACE_POP
}

/*
equation index: 95
type: SIMPLE_ASSIGN
timeTable.timeScaled = time
*/
void Interaction1_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* timeTable.timeScaled variable */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 95;
  TRACE_POP
}

/*
equation index: 96
type: ALGORITHM

  timeTable.nextEvent := pre(timeTable.nextEvent);
  timeTable.last := pre(timeTable.last);
  timeTable.nextEventScaled := pre(timeTable.nextEventScaled);
  timeTable.b := pre(timeTable.b);
  timeTable.a := pre(timeTable.a);
  $whenCondition1 := pre($whenCondition1);
  assert(not (timeTable.table[1,1] > 0.0 or timeTable.table[1,1] < 0.0), "The first point in time has to be set to 0, but is table[1,1] = " + String(timeTable.table[1,1], 6, 0, true));
  $whenCondition1 := time >= pre(timeTable.nextEvent);
  when {$whenCondition1, false} then
    (timeTable.a, timeTable.b, timeTable.nextEventScaled, timeTable.last) := Modelica.Blocks.Examples.Interaction1.timeTable.getInterpolationCoefficients(timeTable.table, timeTable.offset, timeTable.startTime, timeTable.timeScaled, timeTable.last, 2.220446049250313e-14, timeTable.shiftTime);
    timeTable.nextEvent := timeTable.nextEventScaled;
  end when;
*/
void Interaction1_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,64,"The first point in time has to be set to 0, but is table[1,1] = ");
  modelica_string tmp35;
  modelica_metatype tmpMeta36;
  static int tmp37 = 0;
  modelica_boolean tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  real_array tmp41;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* timeTable.nextEvent DISCRETE */) = (data->simulationInfo->realVarsPre[25] /* timeTable.nextEvent DISCRETE */);

  (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* timeTable.last DISCRETE */) = (data->simulationInfo->integerVarsPre[2] /* timeTable.last DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* timeTable.nextEventScaled DISCRETE */) = (data->simulationInfo->realVarsPre[26] /* timeTable.nextEventScaled DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* timeTable.b DISCRETE */) = (data->simulationInfo->realVarsPre[24] /* timeTable.b DISCRETE */);

  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* timeTable.a DISCRETE */) = (data->simulationInfo->realVarsPre[23] /* timeTable.a DISCRETE */);

  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = (data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */);

  {
    tmp32 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* timeTable.table[1,1] PARAM */),0.0);
    tmp33 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* timeTable.table[1,1] PARAM */),0.0);
    if(!(!(tmp32 || tmp33)))
    {
      tmp35 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* timeTable.table[1,1] PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta36 = stringAppend(MMC_REFSTRINGLIT(tmp34),tmp35);
      {
        const char* assert_cond = "(not (timeTable.table[1,1] > 0.0 or timeTable.table[1,1] < 0.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1468,7,1468,149,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta36));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",1468,7,1468,149,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta36));
        }
      }
    }
  }

  tmp39 = 1.0;
  tmp40 = 1.0;
  relationhysteresis(data, &tmp38, data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[25] /* timeTable.nextEvent DISCRETE */), tmp39, tmp40, 8, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) = tmp38;

  if(data->simulationInfo->discreteCall == 1)
  {
    if(((data->localData[0]->booleanVars[data->simulationInfo->booleanVarsIndex[0]] /* $whenCondition1 DISCRETE */) && !(data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */) /* edge */))
    {
      real_array_create(&tmp41, ((modelica_real*)&((&data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* timeTable.table[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 2 + (((modelica_integer) 1)-1)])), 2, (_index_t)7, (_index_t)2);
      (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* timeTable.a DISCRETE */) = omc_Modelica_Blocks_Examples_Interaction1_timeTable_getInterpolationCoefficients(threadData, tmp41, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[120]] /* timeTable.offset PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[122]] /* timeTable.startTime PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* timeTable.timeScaled variable */), (data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* timeTable.last DISCRETE */), 2.220446049250313e-14, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[121]] /* timeTable.shiftTime PARAM */) ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* timeTable.b DISCRETE */) ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* timeTable.nextEventScaled DISCRETE */) ,&(data->localData[0]->integerVars[data->simulationInfo->integerVarsIndex[2]] /* timeTable.last DISCRETE */));

      (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* timeTable.nextEvent DISCRETE */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* timeTable.nextEventScaled DISCRETE */);
    }
  }
  threadData->lastEquationSolved = 96;
  TRACE_POP
}

/*
equation index: 97
type: SIMPLE_ASSIGN
timeTable.y = timeTable.a * timeTable.timeScaled + timeTable.b
*/
void Interaction1_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* timeTable.y variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* timeTable.a DISCRETE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* timeTable.timeScaled variable */)) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* timeTable.b DISCRETE */);
  threadData->lastEquationSolved = 97;
  TRACE_POP
}

/*
equation index: 102
type: ALGORITHM

  assert(stop.table.extrapolation <> Modelica.Blocks.Types.Extrapolation.LastTwoPoints, "Unsuitable extrapolation setting.");
*/
void Interaction1_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  static const MMC_DEFSTRINGLIT(tmp42,33,"Unsuitable extrapolation setting.");
  static int tmp43 = 0;
  {
    if(!((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* stop.table.extrapolation PARAM */) != 2))
    {
      {
        const char* assert_cond = "(stop.table.extrapolation <> Modelica.Blocks.Types.Extrapolation.LastTwoPoints)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2137,7,2137,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp42)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2137,7,2137,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp42)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 102;
  TRACE_POP
}

/*
equation index: 101
type: ALGORITHM

  assert(start.table.extrapolation <> Modelica.Blocks.Types.Extrapolation.LastTwoPoints, "Unsuitable extrapolation setting.");
*/
void Interaction1_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  static const MMC_DEFSTRINGLIT(tmp44,33,"Unsuitable extrapolation setting.");
  static int tmp45 = 0;
  {
    if(!((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[24]] /* start.table.extrapolation PARAM */) != 2))
    {
      {
        const char* assert_cond = "(start.table.extrapolation <> Modelica.Blocks.Types.Extrapolation.LastTwoPoints)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2137,7,2137,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp44)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2137,7,2137,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp44)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 101;
  TRACE_POP
}

/*
equation index: 100
type: ALGORITHM

  assert(booleanTable.extrapolation <> Modelica.Blocks.Types.Extrapolation.LastTwoPoints, "Unsuitable extrapolation setting.");
*/
void Interaction1_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  static const MMC_DEFSTRINGLIT(tmp46,33,"Unsuitable extrapolation setting.");
  static int tmp47 = 0;
  {
    if(!((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* booleanTable.extrapolation PARAM */) != 2))
    {
      {
        const char* assert_cond = "(booleanTable.extrapolation <> Modelica.Blocks.Types.Extrapolation.LastTwoPoints)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2137,7,2137,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp46)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2137,7,2137,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp46)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 100;
  TRACE_POP
}

/*
equation index: 99
type: ALGORITHM

  assert(integerTable.extrapolation <> Modelica.Blocks.Types.Extrapolation.LastTwoPoints, "Unsuitable extrapolation setting.");
*/
void Interaction1_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  static const MMC_DEFSTRINGLIT(tmp48,33,"Unsuitable extrapolation setting.");
  static int tmp49 = 0;
  {
    if(!((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* integerTable.extrapolation PARAM */) != 2))
    {
      {
        const char* assert_cond = "(integerTable.extrapolation <> Modelica.Blocks.Types.Extrapolation.LastTwoPoints)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2412,7,2412,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp48)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2412,7,2412,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp48)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 99;
  TRACE_POP
}

/*
equation index: 98
type: ALGORITHM

  assert(integerTable.n > 0, "No table values defined.");
*/
void Interaction1_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  modelica_boolean tmp50;
  static const MMC_DEFSTRINGLIT(tmp51,24,"No table values defined.");
  static int tmp52 = 0;
  {
    tmp50 = Greater((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[15]] /* integerTable.n PARAM */),((modelica_integer) 0));
    if(!tmp50)
    {
      {
        const char* assert_cond = "(integerTable.n > 0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2411,7,2411,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp51)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2411,7,2411,48,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp51)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 98;
  TRACE_POP
}

OMC_DISABLE_OPT
int Interaction1_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  Interaction1_functionLocalKnownVars(data, threadData);
  static void (*const eqFunctions[40])(DATA*, threadData_t*) = {
    Interaction1_eqFunction_63,
    Interaction1_eqFunction_64,
    Interaction1_eqFunction_65,
    Interaction1_eqFunction_66,
    Interaction1_eqFunction_67,
    Interaction1_eqFunction_68,
    Interaction1_eqFunction_69,
    Interaction1_eqFunction_70,
    Interaction1_eqFunction_71,
    Interaction1_eqFunction_72,
    Interaction1_eqFunction_73,
    Interaction1_eqFunction_74,
    Interaction1_eqFunction_75,
    Interaction1_eqFunction_76,
    Interaction1_eqFunction_77,
    Interaction1_eqFunction_78,
    Interaction1_eqFunction_79,
    Interaction1_eqFunction_80,
    Interaction1_eqFunction_81,
    Interaction1_eqFunction_82,
    Interaction1_eqFunction_83,
    Interaction1_eqFunction_84,
    Interaction1_eqFunction_85,
    Interaction1_eqFunction_86,
    Interaction1_eqFunction_87,
    Interaction1_eqFunction_88,
    Interaction1_eqFunction_89,
    Interaction1_eqFunction_90,
    Interaction1_eqFunction_91,
    Interaction1_eqFunction_92,
    Interaction1_eqFunction_93,
    Interaction1_eqFunction_94,
    Interaction1_eqFunction_95,
    Interaction1_eqFunction_96,
    Interaction1_eqFunction_97,
    Interaction1_eqFunction_102,
    Interaction1_eqFunction_101,
    Interaction1_eqFunction_100,
    Interaction1_eqFunction_99,
    Interaction1_eqFunction_98
  };

  for (int id = 0; id < 40; id++) {
    eqFunctions[id](data, threadData);
  }
  data->simulationInfo->discreteCall = 0;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int Interaction1_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH


  TRACE_POP
  return 0;
}


int Interaction1_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif


  data->simulationInfo->callStatistics.functionODE++;

  Interaction1_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char **argv, DATA *data, threadData_t *threadData);
extern int _main_OptimizationRuntime(int argc, char **argv, DATA *data, threadData_t *threadData);

#include "Interaction1_12jac.h"
#include "Interaction1_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks Interaction1_callback = {
  NULL,    /* performSimulation */
  NULL,    /* performQSSSimulation */
  NULL,    /* updateContinuousSystem */
  Interaction1_callExternalObjectDestructors,    /* callExternalObjectDestructors */
  NULL,    /* initialNonLinearSystem */
  NULL,    /* initialLinearSystem */
  NULL,    /* initialMixedSystem */
  #if !defined(OMC_NO_STATESELECTION)
  Interaction1_initializeStateSets,
  #else
  NULL,
  #endif    /* initializeStateSets */
  Interaction1_initializeDAEmodeData,
  Interaction1_functionODE,
  Interaction1_functionAlgebraics,
  Interaction1_functionDAE,
  Interaction1_functionLocalKnownVars,
  Interaction1_input_function,
  Interaction1_input_function_init,
  Interaction1_input_function_updateStartValues,
  Interaction1_data_function,
  Interaction1_output_function,
  Interaction1_setc_function,
  Interaction1_setb_function,
  Interaction1_function_storeDelayed,
  Interaction1_function_storeSpatialDistribution,
  Interaction1_function_initSpatialDistribution,
  Interaction1_updateBoundVariableAttributes,
  Interaction1_functionInitialEquations,
  GLOBAL_EQUIDISTANT_HOMOTOPY,
  NULL,
  Interaction1_functionRemovedInitialEquations,
  Interaction1_updateBoundParameters,
  Interaction1_checkForAsserts,
  Interaction1_function_ZeroCrossingsEquations,
  Interaction1_function_ZeroCrossings,
  Interaction1_function_updateRelations,
  Interaction1_zeroCrossingDescription,
  Interaction1_relationDescription,
  Interaction1_function_initSample,
  Interaction1_INDEX_JAC_A,
  Interaction1_INDEX_JAC_B,
  Interaction1_INDEX_JAC_C,
  Interaction1_INDEX_JAC_D,
  Interaction1_INDEX_JAC_F,
  Interaction1_INDEX_JAC_H,
  Interaction1_initialAnalyticJacobianA,
  Interaction1_initialAnalyticJacobianB,
  Interaction1_initialAnalyticJacobianC,
  Interaction1_initialAnalyticJacobianD,
  Interaction1_initialAnalyticJacobianF,
  Interaction1_initialAnalyticJacobianH,
  Interaction1_functionJacA_column,
  Interaction1_functionJacB_column,
  Interaction1_functionJacC_column,
  Interaction1_functionJacD_column,
  Interaction1_functionJacF_column,
  Interaction1_functionJacH_column,
  Interaction1_linear_model_frame,
  Interaction1_linear_model_datarecovery_frame,
  Interaction1_mayer,
  Interaction1_lagrange,
  Interaction1_getInputVarIndicesInOptimization,
  Interaction1_pickUpBoundsForInputsInOptimization,
  Interaction1_setInputData,
  Interaction1_getTimeGrid,
  Interaction1_symbolicInlineSystem,
  Interaction1_function_initSynchronous,
  Interaction1_function_updateSynchronous,
  Interaction1_function_equationsSynchronous,
  Interaction1_inputNames,
  Interaction1_dataReconciliationInputNames,
  Interaction1_dataReconciliationUnmeasuredVariables,
  Interaction1_read_simulation_info,
  Interaction1_read_input_fmu,
  NULL,
  NULL,
  -1,
  NULL,
  NULL,
  -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "/home/USER/.openmodelica/libraries/Complex 4.1.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,60,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Modelica"
#define _OMC_LIT_RESOURCE_1_dir_data "/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,61,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_2_dir_data "/home/USER/.openmodelica/libraries/ModelicaServices 4.1.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,16,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,69,_OMC_LIT_RESOURCE_2_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,6,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir)}};
void Interaction1_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &Interaction1_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "Modelica.Blocks.Examples.Interaction1";
  data->modelData->modelFilePrefix = "Interaction1";
  data->modelData->modelFileName = "package.mo";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks";
  data->modelData->modelGUID = "{e8423ae4-f60a-499d-a4d3-970bf40a172c}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/Interaction1_info.json", data->modelData->resourcesDir);
  data->modelData->runTestsuite = 0;
  data->modelData->nStatesArray = 0;
  data->modelData->nDiscreteReal = 12;
  data->modelData->nVariablesRealArray = 27;
  data->modelData->nVariablesIntegerArray = 3;
  data->modelData->nVariablesBooleanArray = 19;
  data->modelData->nVariablesStringArray = 0;
  data->modelData->nParametersRealArray = 138;
  data->modelData->nParametersIntegerArray = 35;
  data->modelData->nParametersBooleanArray = 22;
  data->modelData->nParametersStringArray = 12;
  data->modelData->nParametersReal = 138;
  data->modelData->nParametersInteger = 35;
  data->modelData->nParametersBoolean = 22;
  data->modelData->nParametersString = 12;
  data->modelData->nAliasRealArray = 6;
  data->modelData->nAliasIntegerArray = 3;
  data->modelData->nAliasBooleanArray = 5;
  data->modelData->nAliasStringArray = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  data->modelData->nZeroCrossings = 13;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 9;
  data->modelData->nMathEvents = 4;
  data->modelData->nExtObjs = 4;
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 11;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 279;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 0;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 6;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  data->modelData->nDelayExpressions = 0;
  data->modelData->nBaseClocks = 0;
  data->modelData->nSpatialDistributions = 0;
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->nSetbVars = 0;
  data->modelData->nRelatedBoundaryConditions = 0;
  data->modelData->linearizationDumpLanguage = OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}
