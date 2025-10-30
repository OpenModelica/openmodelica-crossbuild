/* Jacobians 6 */
#include "Interaction1_model.h"
#include "Interaction1_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
int Interaction1_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Interaction1_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Interaction1_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Interaction1_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Interaction1_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Interaction1_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}

int Interaction1_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  TRACE_PUSH
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  TRACE_POP
  return 1;
}
int Interaction1_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  TRACE_PUSH
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  TRACE_POP
  return 1;
}
int Interaction1_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  TRACE_PUSH
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  TRACE_POP
  return 1;
}
int Interaction1_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  TRACE_PUSH
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  TRACE_POP
  return 1;
}
int Interaction1_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  TRACE_PUSH
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  TRACE_POP
  return 1;
}
int Interaction1_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  TRACE_PUSH
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  TRACE_POP
  return 1;
}


