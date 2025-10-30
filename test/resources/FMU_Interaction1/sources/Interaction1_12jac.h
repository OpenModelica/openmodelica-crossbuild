/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;

#if defined(__cplusplus)
extern "C" {
#endif

/* Jacobian Variables */
#define Interaction1_INDEX_JAC_H 0
int Interaction1_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int Interaction1_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define Interaction1_INDEX_JAC_F 1
int Interaction1_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int Interaction1_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define Interaction1_INDEX_JAC_D 2
int Interaction1_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int Interaction1_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define Interaction1_INDEX_JAC_C 3
int Interaction1_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int Interaction1_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define Interaction1_INDEX_JAC_B 4
int Interaction1_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int Interaction1_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define Interaction1_INDEX_JAC_A 5
int Interaction1_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int Interaction1_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);

#if defined(__cplusplus)
}
#endif
