/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "Interaction1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void Interaction1_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *Interaction1_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"integerTable.combiTimeTable.y[1] > 0.0",
  "integer(floor(integerTable.combiTimeTable.y[1] + 0.5), 0)",
  "floor(integerTable.combiTimeTable.y[1] + 0.5, 1)",
  "integer(ceil(integerTable.combiTimeTable.y[1] - 0.5), 2)",
  "ceil(integerTable.combiTimeTable.y[1] - 0.5, 3)",
  "time >= pre(integerTable.combiTimeTable.nextTimeEvent)",
  "booleanTable.combiTimeTable.y[1] >= booleanTable.realToBoolean.threshold",
  "time >= pre(booleanTable.combiTimeTable.nextTimeEvent)",
  "time >= pre(stop.table.combiTimeTable.nextTimeEvent)",
  "time >= pre(start.table.combiTimeTable.nextTimeEvent)",
  "stop.table.combiTimeTable.y[1] >= stop.table.realToBoolean.threshold",
  "start.table.combiTimeTable.y[1] >= start.table.realToBoolean.threshold",
  "time >= pre(timeTable.nextEvent)"};
  static const int occurEqs0[] = {1,68};
  static const int occurEqs1[] = {1,68};
  static const int occurEqs2[] = {1,68};
  static const int occurEqs3[] = {1,68};
  static const int occurEqs4[] = {1,68};
  static const int occurEqs5[] = {1,63};
  static const int occurEqs6[] = {1,68};
  static const int occurEqs7[] = {1,63};
  static const int occurEqs8[] = {1,69};
  static const int occurEqs9[] = {1,65};
  static const int occurEqs10[] = {1,91};
  static const int occurEqs11[] = {1,83};
  static const int occurEqs12[] = {1,69};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void Interaction1_eqFunction_63(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_64(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_66(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_67(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_70(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_71(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_73(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_74(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_77(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_78(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_79(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_81(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_82(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_87(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_89(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_90(DATA* data, threadData_t *threadData);

int Interaction1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  static void (*const eqFunctions[16])(DATA*, threadData_t*) = {
    Interaction1_eqFunction_63,
    Interaction1_eqFunction_64,
    Interaction1_eqFunction_66,
    Interaction1_eqFunction_67,
    Interaction1_eqFunction_70,
    Interaction1_eqFunction_71,
    Interaction1_eqFunction_73,
    Interaction1_eqFunction_74,
    Interaction1_eqFunction_77,
    Interaction1_eqFunction_78,
    Interaction1_eqFunction_79,
    Interaction1_eqFunction_81,
    Interaction1_eqFunction_82,
    Interaction1_eqFunction_87,
    Interaction1_eqFunction_89,
    Interaction1_eqFunction_90
  };
  
  for (int id = 0; id < 16; id++) {
    eqFunctions[id](data, threadData);
  }
  
  TRACE_POP
  return 0;
}

int Interaction1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;

  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  start_index = current_index;
  tmp1 = 1.0;
  tmp2 = 0.0;
  tmp0 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* integerTable.combiTimeTable.y[1] variable */), 0.0, tmp1, tmp2, data->simulationInfo->storedRelations[0]);
  gout[start_index] = (tmp0) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (floor(floor((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* integerTable.combiTimeTable.y[1] variable */) + 0.5)) != floor(data->simulationInfo->mathEventsValuePre[((modelica_integer) 0)])) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (floor((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* integerTable.combiTimeTable.y[1] variable */) + 0.5) != floor(data->simulationInfo->mathEventsValuePre[((modelica_integer) 1)])) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (floor(ceil((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* integerTable.combiTimeTable.y[1] variable */) - 0.5)) != floor(data->simulationInfo->mathEventsValuePre[((modelica_integer) 2)])) ? 1 : -1;
  current_index++;

  start_index = current_index;
  gout[start_index] = (ceil((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* integerTable.combiTimeTable.y[1] variable */) - 0.5) != ceil(data->simulationInfo->mathEventsValuePre[((modelica_integer) 3)])) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp4 = 1.0;
  tmp5 = 1.0;
  tmp3 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[17] /* integerTable.combiTimeTable.nextTimeEvent DISCRETE */), tmp4, tmp5, data->simulationInfo->storedRelations[1]);
  gout[start_index] = (tmp3) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp7 = 1.0;
  tmp8 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* booleanTable.realToBoolean.threshold PARAM */));
  tmp6 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* booleanTable.combiTimeTable.y[1] variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* booleanTable.realToBoolean.threshold PARAM */), tmp7, tmp8, data->simulationInfo->storedRelations[2]);
  gout[start_index] = (tmp6) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp10 = 1.0;
  tmp11 = 1.0;
  tmp9 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[15] /* booleanTable.combiTimeTable.nextTimeEvent DISCRETE */), tmp10, tmp11, data->simulationInfo->storedRelations[3]);
  gout[start_index] = (tmp9) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp13 = 1.0;
  tmp14 = 1.0;
  tmp12 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[21] /* stop.table.combiTimeTable.nextTimeEvent DISCRETE */), tmp13, tmp14, data->simulationInfo->storedRelations[4]);
  gout[start_index] = (tmp12) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp16 = 1.0;
  tmp17 = 1.0;
  tmp15 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[19] /* start.table.combiTimeTable.nextTimeEvent DISCRETE */), tmp16, tmp17, data->simulationInfo->storedRelations[5]);
  gout[start_index] = (tmp15) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp19 = 1.0;
  tmp20 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* stop.table.realToBoolean.threshold PARAM */));
  tmp18 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* stop.table.combiTimeTable.y[1] variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* stop.table.realToBoolean.threshold PARAM */), tmp19, tmp20, data->simulationInfo->storedRelations[6]);
  gout[start_index] = (tmp18) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp22 = 1.0;
  tmp23 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* start.table.realToBoolean.threshold PARAM */));
  tmp21 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* start.table.combiTimeTable.y[1] variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* start.table.realToBoolean.threshold PARAM */), tmp22, tmp23, data->simulationInfo->storedRelations[7]);
  gout[start_index] = (tmp21) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp25 = 1.0;
  tmp26 = 1.0;
  tmp24 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[25] /* timeTable.nextEvent DISCRETE */), tmp25, tmp26, data->simulationInfo->storedRelations[8]);
  gout[start_index] = (tmp24) ? 1 : -1;
  current_index++;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *Interaction1_relationDescription(int i)
{
  const char *res[] = {"integerTable.combiTimeTable.y[1] > 0.0",
  "time >= pre(integerTable.combiTimeTable.nextTimeEvent)",
  "booleanTable.combiTimeTable.y[1] >= booleanTable.realToBoolean.threshold",
  "time >= pre(booleanTable.combiTimeTable.nextTimeEvent)",
  "time >= pre(stop.table.combiTimeTable.nextTimeEvent)",
  "time >= pre(start.table.combiTimeTable.nextTimeEvent)",
  "stop.table.combiTimeTable.y[1] >= stop.table.realToBoolean.threshold",
  "start.table.combiTimeTable.y[1] >= start.table.realToBoolean.threshold",
  "time >= pre(timeTable.nextEvent)"};
  return res[i];
}

int Interaction1_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;

  modelica_boolean tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_boolean tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_boolean tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_boolean tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_boolean tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_boolean tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_boolean tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_boolean tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_boolean tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
  if(evalforZeroCross) {
    start_index = current_index;
    tmp28 = 1.0;
    tmp29 = 0.0;
    tmp27 = GreaterZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* integerTable.combiTimeTable.y[1] variable */), 0.0, tmp28, tmp29, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[start_index] = tmp27;
    current_index++;

    start_index = current_index;
    tmp31 = 1.0;
    tmp32 = 1.0;
    tmp30 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[17] /* integerTable.combiTimeTable.nextTimeEvent DISCRETE */), tmp31, tmp32, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[start_index] = tmp30;
    current_index++;

    start_index = current_index;
    tmp34 = 1.0;
    tmp35 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* booleanTable.realToBoolean.threshold PARAM */));
    tmp33 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* booleanTable.combiTimeTable.y[1] variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* booleanTable.realToBoolean.threshold PARAM */), tmp34, tmp35, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[start_index] = tmp33;
    current_index++;

    start_index = current_index;
    tmp37 = 1.0;
    tmp38 = 1.0;
    tmp36 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[15] /* booleanTable.combiTimeTable.nextTimeEvent DISCRETE */), tmp37, tmp38, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[start_index] = tmp36;
    current_index++;

    start_index = current_index;
    tmp40 = 1.0;
    tmp41 = 1.0;
    tmp39 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[21] /* stop.table.combiTimeTable.nextTimeEvent DISCRETE */), tmp40, tmp41, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[start_index] = tmp39;
    current_index++;

    start_index = current_index;
    tmp43 = 1.0;
    tmp44 = 1.0;
    tmp42 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[19] /* start.table.combiTimeTable.nextTimeEvent DISCRETE */), tmp43, tmp44, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[start_index] = tmp42;
    current_index++;

    start_index = current_index;
    tmp46 = 1.0;
    tmp47 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* stop.table.realToBoolean.threshold PARAM */));
    tmp45 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* stop.table.combiTimeTable.y[1] variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* stop.table.realToBoolean.threshold PARAM */), tmp46, tmp47, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[start_index] = tmp45;
    current_index++;

    start_index = current_index;
    tmp49 = 1.0;
    tmp50 = fabs((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* start.table.realToBoolean.threshold PARAM */));
    tmp48 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* start.table.combiTimeTable.y[1] variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* start.table.realToBoolean.threshold PARAM */), tmp49, tmp50, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[start_index] = tmp48;
    current_index++;

    start_index = current_index;
    tmp52 = 1.0;
    tmp53 = 1.0;
    tmp51 = GreaterEqZC(data->localData[0]->timeValue, (data->simulationInfo->realVarsPre[25] /* timeTable.nextEvent DISCRETE */), tmp52, tmp53, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[start_index] = tmp51;
    current_index++;
  } else {
    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* integerTable.combiTimeTable.y[1] variable */) > 0.0);
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue >= (data->simulationInfo->realVarsPre[17] /* integerTable.combiTimeTable.nextTimeEvent DISCRETE */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* booleanTable.combiTimeTable.y[1] variable */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[29]] /* booleanTable.realToBoolean.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue >= (data->simulationInfo->realVarsPre[15] /* booleanTable.combiTimeTable.nextTimeEvent DISCRETE */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue >= (data->simulationInfo->realVarsPre[21] /* stop.table.combiTimeTable.nextTimeEvent DISCRETE */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue >= (data->simulationInfo->realVarsPre[19] /* start.table.combiTimeTable.nextTimeEvent DISCRETE */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* stop.table.combiTimeTable.y[1] variable */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* stop.table.realToBoolean.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* start.table.combiTimeTable.y[1] variable */) >= (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[93]] /* start.table.realToBoolean.threshold PARAM */));
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = (data->localData[0]->timeValue >= (data->simulationInfo->realVarsPre[25] /* timeTable.nextEvent DISCRETE */));
    current_index++;
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif
