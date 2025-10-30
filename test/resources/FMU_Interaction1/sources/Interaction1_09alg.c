/* Algebraic */
#include "Interaction1_model.h"

#ifdef __cplusplus
extern "C" {
#endif

/* forwarded equations */
extern void Interaction1_eqFunction_63(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_64(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_66(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_67(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_68(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_70(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_71(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_73(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_74(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_75(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_77(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_78(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_79(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_81(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_82(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_83(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_84(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_85(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_87(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_89(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_90(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_91(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_92(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_93(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_95(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_96(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_97(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_98(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_99(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_100(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_101(DATA* data, threadData_t *threadData);
extern void Interaction1_eqFunction_102(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[32])(DATA*, threadData_t*) = {
    Interaction1_eqFunction_63,
    Interaction1_eqFunction_64,
    Interaction1_eqFunction_66,
    Interaction1_eqFunction_67,
    Interaction1_eqFunction_68,
    Interaction1_eqFunction_70,
    Interaction1_eqFunction_71,
    Interaction1_eqFunction_73,
    Interaction1_eqFunction_74,
    Interaction1_eqFunction_75,
    Interaction1_eqFunction_77,
    Interaction1_eqFunction_78,
    Interaction1_eqFunction_79,
    Interaction1_eqFunction_81,
    Interaction1_eqFunction_82,
    Interaction1_eqFunction_83,
    Interaction1_eqFunction_84,
    Interaction1_eqFunction_85,
    Interaction1_eqFunction_87,
    Interaction1_eqFunction_89,
    Interaction1_eqFunction_90,
    Interaction1_eqFunction_91,
    Interaction1_eqFunction_92,
    Interaction1_eqFunction_93,
    Interaction1_eqFunction_95,
    Interaction1_eqFunction_96,
    Interaction1_eqFunction_97,
    Interaction1_eqFunction_98,
    Interaction1_eqFunction_99,
    Interaction1_eqFunction_100,
    Interaction1_eqFunction_101,
    Interaction1_eqFunction_102
  };
  
  for (int id = 0; id < 32; id++) {
    eqFunctions[id](data, threadData);
  }
}
/* for continuous time variables */
int Interaction1_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ALGEBRAICS);
#endif
  data->simulationInfo->callStatistics.functionAlgebraics++;

  Interaction1_function_savePreSynchronous(data, threadData);
  
  functionAlg_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ALGEBRAICS);
#endif

  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
