// define class name and unique id
#define MODEL_IDENTIFIER Interaction1
#define MODEL_GUID "{e8423ae4-f60a-499d-a4d3-970bf40a172c}"

// include fmu header files, typedefs and macros
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "util/omc_error.h"
#include "Interaction1_functions.h"
#include "simulation/solver/initialization/initialization.h"
#include "simulation/solver/events.h"
#define FMI2_FUNCTION_PREFIX Interaction1_
#include "fmi2Functions.h"
#include "fmi-export/fmu2_model_interface.h"
#include "fmi-export/fmu_read_flags.h"

#ifdef __cplusplus
extern "C" {
#endif

void setStartValues(ModelInstance *comp);
void setDefaultStartValues(ModelInstance *comp);
void eventUpdate(ModelInstance* comp, fmi2EventInfo* eventInfo);
fmi2Real getReal(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setReal(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Real value);
fmi2Integer getInteger(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setInteger(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Integer value);
fmi2Boolean getBoolean(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setBoolean(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Boolean value);
fmi2String getString(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setString(ModelInstance* comp, const fmi2ValueReference vr, fmi2String value);
fmi2Status setExternalFunction(ModelInstance* c, const fmi2ValueReference vr, const void* value);
fmi2ValueReference mapInputReference2InputNumber(const fmi2ValueReference vr);
fmi2ValueReference mapOutputReference2OutputNumber(const fmi2ValueReference vr);
fmi2ValueReference mapOutputReference2RealOutputDerivatives(const fmi2ValueReference vr);
fmi2ValueReference mapInitialUnknownsdependentIndex(const fmi2ValueReference vr);
fmi2ValueReference mapInitialUnknownsIndependentIndex(const fmi2ValueReference vr);

// define model size
#define NUMBER_OF_STATES 0
#define NUMBER_OF_EVENT_INDICATORS 13
#define NUMBER_OF_REALS 171
#define NUMBER_OF_REAL_INPUTS 0
#define NUMBER_OF_INTEGERS 41
#define NUMBER_OF_STRINGS 12
#define NUMBER_OF_BOOLEANS 46
#define NUMBER_OF_EXTERNALFUNCTIONS 0

// define initial state vector as vector of value references
#define STATES {  }
#define STATESDERIVATIVES {  }


// implementation of the Model Exchange functions
extern void Interaction1_setupDataStruc(DATA *data, threadData_t *threadData);
#define fmu2_model_interface_setupDataStruc Interaction1_setupDataStruc
#include "fmi-export/fmu2_model_interface.c.inc"
#include "fmi-export/fmu_read_flags.c.inc"

// Set values for all variables that define a start value
OMC_DISABLE_OPT
void setDefaultStartValues(ModelInstance *comp) {
  comp->fmuData->modelData->realVarsData[0].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[1].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[2].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[3].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[4].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[5].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[6].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[7].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[8].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[9].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[10].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[11].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[12].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[13].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[14].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[15].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[16].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[17].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[18].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[19].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[20].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[21].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[22].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[23].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[24].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[25].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[26].attribute.start = 0.0;
  comp->fmuData->modelData->integerVarsData[0].attribute.start = 0;
  comp->fmuData->modelData->integerVarsData[1].attribute.start = 0;
  comp->fmuData->modelData->integerVarsData[2].attribute.start = 1;
  comp->fmuData->modelData->booleanVarsData[0].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[1].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[2].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[3].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[4].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[5].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[6].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[7].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[8].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[9].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[10].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[11].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[12].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[13].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[14].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[15].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[16].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[17].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[18].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[0].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[1].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[2].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[3].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[4].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[5].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[6].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[7].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[8].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[9].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[10].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[11].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[12].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[13].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[14].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[15].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[16].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[17].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[18].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[19].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[20].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[21].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[22].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[23].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[24].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[25].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[26].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[27].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[28].attribute.start = 1.0;
  comp->fmuData->modelData->realParameterData[29].attribute.start = 0.5;
  comp->fmuData->modelData->realParameterData[30].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[31].attribute.start = -1e60;
  comp->fmuData->modelData->realParameterData[32].attribute.start = 1.0;
  comp->fmuData->modelData->realParameterData[33].attribute.start = 2.0;
  comp->fmuData->modelData->realParameterData[34].attribute.start = 3.0;
  comp->fmuData->modelData->realParameterData[35].attribute.start = 4.0;
  comp->fmuData->modelData->realParameterData[36].attribute.start = 5.0;
  comp->fmuData->modelData->realParameterData[37].attribute.start = 6.0;
  comp->fmuData->modelData->realParameterData[38].attribute.start = 7.0;
  comp->fmuData->modelData->realParameterData[39].attribute.start = 8.0;
  comp->fmuData->modelData->realParameterData[40].attribute.start = 9.0;
  comp->fmuData->modelData->realParameterData[41].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[42].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[43].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[44].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[45].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[46].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[47].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[48].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[49].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[50].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[51].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[52].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[53].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[54].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[55].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[56].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[57].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[58].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[59].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[60].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[61].attribute.start = 1.0;
  comp->fmuData->modelData->realParameterData[62].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[63].attribute.start = -1e60;
  comp->fmuData->modelData->realParameterData[64].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[65].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[66].attribute.start = 1.0;
  comp->fmuData->modelData->realParameterData[67].attribute.start = 2.0;
  comp->fmuData->modelData->realParameterData[68].attribute.start = 2.0;
  comp->fmuData->modelData->realParameterData[69].attribute.start = 4.0;
  comp->fmuData->modelData->realParameterData[70].attribute.start = 3.0;
  comp->fmuData->modelData->realParameterData[71].attribute.start = 6.0;
  comp->fmuData->modelData->realParameterData[72].attribute.start = 4.0;
  comp->fmuData->modelData->realParameterData[73].attribute.start = 4.0;
  comp->fmuData->modelData->realParameterData[74].attribute.start = 6.0;
  comp->fmuData->modelData->realParameterData[75].attribute.start = 2.0;
  comp->fmuData->modelData->realParameterData[76].attribute.start = 1.0;
  comp->fmuData->modelData->realParameterData[77].attribute.start = 3.0;
  comp->fmuData->modelData->realParameterData[78].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[79].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[80].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[81].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[82].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[83].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[84].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[85].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[86].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[87].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[88].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[89].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[90].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[91].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[92].attribute.start = 1.0;
  comp->fmuData->modelData->realParameterData[93].attribute.start = 0.5;
  comp->fmuData->modelData->realParameterData[94].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[95].attribute.start = -1e60;
  comp->fmuData->modelData->realParameterData[96].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[97].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[98].attribute.start = 2.0;
  comp->fmuData->modelData->realParameterData[99].attribute.start = 4.0;
  comp->fmuData->modelData->realParameterData[100].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[101].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[102].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[103].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[104].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[105].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[106].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[107].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[108].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[109].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[110].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[111].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[112].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[113].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[114].attribute.start = 1.0;
  comp->fmuData->modelData->realParameterData[115].attribute.start = 0.5;
  comp->fmuData->modelData->realParameterData[116].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[117].attribute.start = -1e60;
  comp->fmuData->modelData->realParameterData[118].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[119].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[120].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[121].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[122].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[123].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[124].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[125].attribute.start = 1.0;
  comp->fmuData->modelData->realParameterData[126].attribute.start = 2.1;
  comp->fmuData->modelData->realParameterData[127].attribute.start = 2.0;
  comp->fmuData->modelData->realParameterData[128].attribute.start = 4.2;
  comp->fmuData->modelData->realParameterData[129].attribute.start = 3.0;
  comp->fmuData->modelData->realParameterData[130].attribute.start = 6.3;
  comp->fmuData->modelData->realParameterData[131].attribute.start = 4.0;
  comp->fmuData->modelData->realParameterData[132].attribute.start = 4.2;
  comp->fmuData->modelData->realParameterData[133].attribute.start = 6.0;
  comp->fmuData->modelData->realParameterData[134].attribute.start = 2.1;
  comp->fmuData->modelData->realParameterData[135].attribute.start = 6.0;
  comp->fmuData->modelData->realParameterData[136].attribute.start = 2.1;
  comp->fmuData->modelData->realParameterData[137].attribute.start = 1.0;
  comp->fmuData->modelData->integerParameterData[0].attribute.start = 2;
  comp->fmuData->modelData->integerParameterData[1].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[2].attribute.start = 0;
  comp->fmuData->modelData->integerParameterData[3].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[4].attribute.start = 3;
  comp->fmuData->modelData->integerParameterData[5].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[6].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[7].attribute.start = 9;
  comp->fmuData->modelData->integerParameterData[8].attribute.start = 2;
  comp->fmuData->modelData->integerParameterData[9].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[10].attribute.start = 0;
  comp->fmuData->modelData->integerParameterData[11].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[12].attribute.start = 3;
  comp->fmuData->modelData->integerParameterData[13].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[14].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[15].attribute.start = 6;
  comp->fmuData->modelData->integerParameterData[16].attribute.start = 2;
  comp->fmuData->modelData->integerParameterData[17].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[18].attribute.start = 2;
  comp->fmuData->modelData->integerParameterData[19].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[20].attribute.start = 0;
  comp->fmuData->modelData->integerParameterData[21].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[22].attribute.start = 3;
  comp->fmuData->modelData->integerParameterData[23].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[24].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[25].attribute.start = 2;
  comp->fmuData->modelData->integerParameterData[26].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[27].attribute.start = 2;
  comp->fmuData->modelData->integerParameterData[28].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[29].attribute.start = 0;
  comp->fmuData->modelData->integerParameterData[30].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[31].attribute.start = 3;
  comp->fmuData->modelData->integerParameterData[32].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[33].attribute.start = 1;
  comp->fmuData->modelData->integerParameterData[34].attribute.start = 2;
  comp->fmuData->modelData->booleanParameterData[0].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[1].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[2].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[3].attribute.start = 1;
  comp->fmuData->modelData->booleanParameterData[4].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[5].attribute.start = 1;
  comp->fmuData->modelData->booleanParameterData[6].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[7].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[8].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[9].attribute.start = 1;
  comp->fmuData->modelData->booleanParameterData[10].attribute.start = 1;
  comp->fmuData->modelData->booleanParameterData[11].attribute.start = 1;
  comp->fmuData->modelData->booleanParameterData[12].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[13].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[14].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[15].attribute.start = 1;
  comp->fmuData->modelData->booleanParameterData[16].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[17].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[18].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[19].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[20].attribute.start = 1;
  comp->fmuData->modelData->booleanParameterData[21].attribute.start = 0;
  comp->fmuData->modelData->stringParameterData[0].attribute.start = mmc_mk_scon_persist(","); /* TODO: these are not freed currently, see #6161 */
  comp->fmuData->modelData->stringParameterData[1].attribute.start = mmc_mk_scon_persist("NoName"); /* TODO: these are not freed currently, see #6161 */
  comp->fmuData->modelData->stringParameterData[2].attribute.start = mmc_mk_scon_persist("NoName"); /* TODO: these are not freed currently, see #6161 */
  comp->fmuData->modelData->stringParameterData[3].attribute.start = mmc_mk_scon_persist(","); /* TODO: these are not freed currently, see #6161 */
  comp->fmuData->modelData->stringParameterData[4].attribute.start = mmc_mk_scon_persist("NoName"); /* TODO: these are not freed currently, see #6161 */
  comp->fmuData->modelData->stringParameterData[5].attribute.start = mmc_mk_scon_persist("NoName"); /* TODO: these are not freed currently, see #6161 */
  comp->fmuData->modelData->stringParameterData[6].attribute.start = mmc_mk_scon_persist(","); /* TODO: these are not freed currently, see #6161 */
  comp->fmuData->modelData->stringParameterData[7].attribute.start = mmc_mk_scon_persist("NoName"); /* TODO: these are not freed currently, see #6161 */
  comp->fmuData->modelData->stringParameterData[8].attribute.start = mmc_mk_scon_persist("NoName"); /* TODO: these are not freed currently, see #6161 */
  comp->fmuData->modelData->stringParameterData[9].attribute.start = mmc_mk_scon_persist(","); /* TODO: these are not freed currently, see #6161 */
  comp->fmuData->modelData->stringParameterData[10].attribute.start = mmc_mk_scon_persist("NoName"); /* TODO: these are not freed currently, see #6161 */
  comp->fmuData->modelData->stringParameterData[11].attribute.start = mmc_mk_scon_persist("NoName"); /* TODO: these are not freed currently, see #6161 */
}
// Set values for all variables that define a start value
OMC_DISABLE_OPT
void setStartValues(ModelInstance *comp) {
  comp->fmuData->modelData->realVarsData[0].attribute.start =  comp->fmuData->localData[0]->realVars[0];
  comp->fmuData->modelData->realVarsData[1].attribute.start =  comp->fmuData->localData[0]->realVars[1];
  comp->fmuData->modelData->realVarsData[2].attribute.start =  comp->fmuData->localData[0]->realVars[2];
  comp->fmuData->modelData->realVarsData[3].attribute.start =  comp->fmuData->localData[0]->realVars[3];
  comp->fmuData->modelData->realVarsData[4].attribute.start =  comp->fmuData->localData[0]->realVars[4];
  comp->fmuData->modelData->realVarsData[5].attribute.start =  comp->fmuData->localData[0]->realVars[5];
  comp->fmuData->modelData->realVarsData[6].attribute.start =  comp->fmuData->localData[0]->realVars[6];
  comp->fmuData->modelData->realVarsData[7].attribute.start =  comp->fmuData->localData[0]->realVars[7];
  comp->fmuData->modelData->realVarsData[8].attribute.start =  comp->fmuData->localData[0]->realVars[8];
  comp->fmuData->modelData->realVarsData[9].attribute.start =  comp->fmuData->localData[0]->realVars[9];
  comp->fmuData->modelData->realVarsData[10].attribute.start =  comp->fmuData->localData[0]->realVars[10];
  comp->fmuData->modelData->realVarsData[11].attribute.start =  comp->fmuData->localData[0]->realVars[11];
  comp->fmuData->modelData->realVarsData[12].attribute.start =  comp->fmuData->localData[0]->realVars[12];
  comp->fmuData->modelData->realVarsData[13].attribute.start =  comp->fmuData->localData[0]->realVars[13];
  comp->fmuData->modelData->realVarsData[14].attribute.start =  comp->fmuData->localData[0]->realVars[14];
  comp->fmuData->modelData->realVarsData[15].attribute.start =  comp->fmuData->localData[0]->realVars[15];
  comp->fmuData->modelData->realVarsData[16].attribute.start =  comp->fmuData->localData[0]->realVars[16];
  comp->fmuData->modelData->realVarsData[17].attribute.start =  comp->fmuData->localData[0]->realVars[17];
  comp->fmuData->modelData->realVarsData[18].attribute.start =  comp->fmuData->localData[0]->realVars[18];
  comp->fmuData->modelData->realVarsData[19].attribute.start =  comp->fmuData->localData[0]->realVars[19];
  comp->fmuData->modelData->realVarsData[20].attribute.start =  comp->fmuData->localData[0]->realVars[20];
  comp->fmuData->modelData->realVarsData[21].attribute.start =  comp->fmuData->localData[0]->realVars[21];
  comp->fmuData->modelData->realVarsData[22].attribute.start =  comp->fmuData->localData[0]->realVars[22];
  comp->fmuData->modelData->realVarsData[23].attribute.start =  comp->fmuData->localData[0]->realVars[23];
  comp->fmuData->modelData->realVarsData[24].attribute.start =  comp->fmuData->localData[0]->realVars[24];
  comp->fmuData->modelData->realVarsData[25].attribute.start =  comp->fmuData->localData[0]->realVars[25];
  comp->fmuData->modelData->realVarsData[26].attribute.start =  comp->fmuData->localData[0]->realVars[26];
  comp->fmuData->modelData->integerVarsData[0].attribute.start =  comp->fmuData->localData[0]->integerVars[0];
  comp->fmuData->modelData->integerVarsData[1].attribute.start =  comp->fmuData->localData[0]->integerVars[1];
  comp->fmuData->modelData->integerVarsData[2].attribute.start =  comp->fmuData->localData[0]->integerVars[2];
  comp->fmuData->modelData->booleanVarsData[0].attribute.start =  comp->fmuData->localData[0]->booleanVars[0];
  comp->fmuData->modelData->booleanVarsData[1].attribute.start =  comp->fmuData->localData[0]->booleanVars[1];
  comp->fmuData->modelData->booleanVarsData[2].attribute.start =  comp->fmuData->localData[0]->booleanVars[2];
  comp->fmuData->modelData->booleanVarsData[3].attribute.start =  comp->fmuData->localData[0]->booleanVars[3];
  comp->fmuData->modelData->booleanVarsData[4].attribute.start =  comp->fmuData->localData[0]->booleanVars[4];
  comp->fmuData->modelData->booleanVarsData[5].attribute.start =  comp->fmuData->localData[0]->booleanVars[5];
  comp->fmuData->modelData->booleanVarsData[6].attribute.start =  comp->fmuData->localData[0]->booleanVars[6];
  comp->fmuData->modelData->booleanVarsData[7].attribute.start =  comp->fmuData->localData[0]->booleanVars[7];
  comp->fmuData->modelData->booleanVarsData[8].attribute.start =  comp->fmuData->localData[0]->booleanVars[8];
  comp->fmuData->modelData->booleanVarsData[9].attribute.start =  comp->fmuData->localData[0]->booleanVars[9];
  comp->fmuData->modelData->booleanVarsData[10].attribute.start =  comp->fmuData->localData[0]->booleanVars[10];
  comp->fmuData->modelData->booleanVarsData[11].attribute.start =  comp->fmuData->localData[0]->booleanVars[11];
  comp->fmuData->modelData->booleanVarsData[12].attribute.start =  comp->fmuData->localData[0]->booleanVars[12];
  comp->fmuData->modelData->booleanVarsData[13].attribute.start =  comp->fmuData->localData[0]->booleanVars[13];
  comp->fmuData->modelData->booleanVarsData[14].attribute.start =  comp->fmuData->localData[0]->booleanVars[14];
  comp->fmuData->modelData->booleanVarsData[15].attribute.start =  comp->fmuData->localData[0]->booleanVars[15];
  comp->fmuData->modelData->booleanVarsData[16].attribute.start =  comp->fmuData->localData[0]->booleanVars[16];
  comp->fmuData->modelData->booleanVarsData[17].attribute.start =  comp->fmuData->localData[0]->booleanVars[17];
  comp->fmuData->modelData->booleanVarsData[18].attribute.start =  comp->fmuData->localData[0]->booleanVars[18];
  comp->fmuData->modelData->realParameterData[0].attribute.start = comp->fmuData->simulationInfo->realParameter[0];
  comp->fmuData->modelData->realParameterData[1].attribute.start = comp->fmuData->simulationInfo->realParameter[1];
  comp->fmuData->modelData->realParameterData[2].attribute.start = comp->fmuData->simulationInfo->realParameter[2];
  comp->fmuData->modelData->realParameterData[3].attribute.start = comp->fmuData->simulationInfo->realParameter[3];
  comp->fmuData->modelData->realParameterData[4].attribute.start = comp->fmuData->simulationInfo->realParameter[4];
  comp->fmuData->modelData->realParameterData[5].attribute.start = comp->fmuData->simulationInfo->realParameter[5];
  comp->fmuData->modelData->realParameterData[6].attribute.start = comp->fmuData->simulationInfo->realParameter[6];
  comp->fmuData->modelData->realParameterData[7].attribute.start = comp->fmuData->simulationInfo->realParameter[7];
  comp->fmuData->modelData->realParameterData[8].attribute.start = comp->fmuData->simulationInfo->realParameter[8];
  comp->fmuData->modelData->realParameterData[9].attribute.start = comp->fmuData->simulationInfo->realParameter[9];
  comp->fmuData->modelData->realParameterData[10].attribute.start = comp->fmuData->simulationInfo->realParameter[10];
  comp->fmuData->modelData->realParameterData[11].attribute.start = comp->fmuData->simulationInfo->realParameter[11];
  comp->fmuData->modelData->realParameterData[12].attribute.start = comp->fmuData->simulationInfo->realParameter[12];
  comp->fmuData->modelData->realParameterData[13].attribute.start = comp->fmuData->simulationInfo->realParameter[13];
  comp->fmuData->modelData->realParameterData[14].attribute.start = comp->fmuData->simulationInfo->realParameter[14];
  comp->fmuData->modelData->realParameterData[15].attribute.start = comp->fmuData->simulationInfo->realParameter[15];
  comp->fmuData->modelData->realParameterData[16].attribute.start = comp->fmuData->simulationInfo->realParameter[16];
  comp->fmuData->modelData->realParameterData[17].attribute.start = comp->fmuData->simulationInfo->realParameter[17];
  comp->fmuData->modelData->realParameterData[18].attribute.start = comp->fmuData->simulationInfo->realParameter[18];
  comp->fmuData->modelData->realParameterData[19].attribute.start = comp->fmuData->simulationInfo->realParameter[19];
  comp->fmuData->modelData->realParameterData[20].attribute.start = comp->fmuData->simulationInfo->realParameter[20];
  comp->fmuData->modelData->realParameterData[21].attribute.start = comp->fmuData->simulationInfo->realParameter[21];
  comp->fmuData->modelData->realParameterData[22].attribute.start = comp->fmuData->simulationInfo->realParameter[22];
  comp->fmuData->modelData->realParameterData[23].attribute.start = comp->fmuData->simulationInfo->realParameter[23];
  comp->fmuData->modelData->realParameterData[24].attribute.start = comp->fmuData->simulationInfo->realParameter[24];
  comp->fmuData->modelData->realParameterData[25].attribute.start = comp->fmuData->simulationInfo->realParameter[25];
  comp->fmuData->modelData->realParameterData[26].attribute.start = comp->fmuData->simulationInfo->realParameter[26];
  comp->fmuData->modelData->realParameterData[27].attribute.start = comp->fmuData->simulationInfo->realParameter[27];
  comp->fmuData->modelData->realParameterData[28].attribute.start = comp->fmuData->simulationInfo->realParameter[28];
  comp->fmuData->modelData->realParameterData[29].attribute.start = comp->fmuData->simulationInfo->realParameter[29];
  comp->fmuData->modelData->realParameterData[30].attribute.start = comp->fmuData->simulationInfo->realParameter[30];
  comp->fmuData->modelData->realParameterData[31].attribute.start = comp->fmuData->simulationInfo->realParameter[31];
  comp->fmuData->modelData->realParameterData[32].attribute.start = comp->fmuData->simulationInfo->realParameter[32];
  comp->fmuData->modelData->realParameterData[33].attribute.start = comp->fmuData->simulationInfo->realParameter[33];
  comp->fmuData->modelData->realParameterData[34].attribute.start = comp->fmuData->simulationInfo->realParameter[34];
  comp->fmuData->modelData->realParameterData[35].attribute.start = comp->fmuData->simulationInfo->realParameter[35];
  comp->fmuData->modelData->realParameterData[36].attribute.start = comp->fmuData->simulationInfo->realParameter[36];
  comp->fmuData->modelData->realParameterData[37].attribute.start = comp->fmuData->simulationInfo->realParameter[37];
  comp->fmuData->modelData->realParameterData[38].attribute.start = comp->fmuData->simulationInfo->realParameter[38];
  comp->fmuData->modelData->realParameterData[39].attribute.start = comp->fmuData->simulationInfo->realParameter[39];
  comp->fmuData->modelData->realParameterData[40].attribute.start = comp->fmuData->simulationInfo->realParameter[40];
  comp->fmuData->modelData->realParameterData[41].attribute.start = comp->fmuData->simulationInfo->realParameter[41];
  comp->fmuData->modelData->realParameterData[42].attribute.start = comp->fmuData->simulationInfo->realParameter[42];
  comp->fmuData->modelData->realParameterData[43].attribute.start = comp->fmuData->simulationInfo->realParameter[43];
  comp->fmuData->modelData->realParameterData[44].attribute.start = comp->fmuData->simulationInfo->realParameter[44];
  comp->fmuData->modelData->realParameterData[45].attribute.start = comp->fmuData->simulationInfo->realParameter[45];
  comp->fmuData->modelData->realParameterData[46].attribute.start = comp->fmuData->simulationInfo->realParameter[46];
  comp->fmuData->modelData->realParameterData[47].attribute.start = comp->fmuData->simulationInfo->realParameter[47];
  comp->fmuData->modelData->realParameterData[48].attribute.start = comp->fmuData->simulationInfo->realParameter[48];
  comp->fmuData->modelData->realParameterData[49].attribute.start = comp->fmuData->simulationInfo->realParameter[49];
  comp->fmuData->modelData->realParameterData[50].attribute.start = comp->fmuData->simulationInfo->realParameter[50];
  comp->fmuData->modelData->realParameterData[51].attribute.start = comp->fmuData->simulationInfo->realParameter[51];
  comp->fmuData->modelData->realParameterData[52].attribute.start = comp->fmuData->simulationInfo->realParameter[52];
  comp->fmuData->modelData->realParameterData[53].attribute.start = comp->fmuData->simulationInfo->realParameter[53];
  comp->fmuData->modelData->realParameterData[54].attribute.start = comp->fmuData->simulationInfo->realParameter[54];
  comp->fmuData->modelData->realParameterData[55].attribute.start = comp->fmuData->simulationInfo->realParameter[55];
  comp->fmuData->modelData->realParameterData[56].attribute.start = comp->fmuData->simulationInfo->realParameter[56];
  comp->fmuData->modelData->realParameterData[57].attribute.start = comp->fmuData->simulationInfo->realParameter[57];
  comp->fmuData->modelData->realParameterData[58].attribute.start = comp->fmuData->simulationInfo->realParameter[58];
  comp->fmuData->modelData->realParameterData[59].attribute.start = comp->fmuData->simulationInfo->realParameter[59];
  comp->fmuData->modelData->realParameterData[60].attribute.start = comp->fmuData->simulationInfo->realParameter[60];
  comp->fmuData->modelData->realParameterData[61].attribute.start = comp->fmuData->simulationInfo->realParameter[61];
  comp->fmuData->modelData->realParameterData[62].attribute.start = comp->fmuData->simulationInfo->realParameter[62];
  comp->fmuData->modelData->realParameterData[63].attribute.start = comp->fmuData->simulationInfo->realParameter[63];
  comp->fmuData->modelData->realParameterData[64].attribute.start = comp->fmuData->simulationInfo->realParameter[64];
  comp->fmuData->modelData->realParameterData[65].attribute.start = comp->fmuData->simulationInfo->realParameter[65];
  comp->fmuData->modelData->realParameterData[66].attribute.start = comp->fmuData->simulationInfo->realParameter[66];
  comp->fmuData->modelData->realParameterData[67].attribute.start = comp->fmuData->simulationInfo->realParameter[67];
  comp->fmuData->modelData->realParameterData[68].attribute.start = comp->fmuData->simulationInfo->realParameter[68];
  comp->fmuData->modelData->realParameterData[69].attribute.start = comp->fmuData->simulationInfo->realParameter[69];
  comp->fmuData->modelData->realParameterData[70].attribute.start = comp->fmuData->simulationInfo->realParameter[70];
  comp->fmuData->modelData->realParameterData[71].attribute.start = comp->fmuData->simulationInfo->realParameter[71];
  comp->fmuData->modelData->realParameterData[72].attribute.start = comp->fmuData->simulationInfo->realParameter[72];
  comp->fmuData->modelData->realParameterData[73].attribute.start = comp->fmuData->simulationInfo->realParameter[73];
  comp->fmuData->modelData->realParameterData[74].attribute.start = comp->fmuData->simulationInfo->realParameter[74];
  comp->fmuData->modelData->realParameterData[75].attribute.start = comp->fmuData->simulationInfo->realParameter[75];
  comp->fmuData->modelData->realParameterData[76].attribute.start = comp->fmuData->simulationInfo->realParameter[76];
  comp->fmuData->modelData->realParameterData[77].attribute.start = comp->fmuData->simulationInfo->realParameter[77];
  comp->fmuData->modelData->realParameterData[78].attribute.start = comp->fmuData->simulationInfo->realParameter[78];
  comp->fmuData->modelData->realParameterData[79].attribute.start = comp->fmuData->simulationInfo->realParameter[79];
  comp->fmuData->modelData->realParameterData[80].attribute.start = comp->fmuData->simulationInfo->realParameter[80];
  comp->fmuData->modelData->realParameterData[81].attribute.start = comp->fmuData->simulationInfo->realParameter[81];
  comp->fmuData->modelData->realParameterData[82].attribute.start = comp->fmuData->simulationInfo->realParameter[82];
  comp->fmuData->modelData->realParameterData[83].attribute.start = comp->fmuData->simulationInfo->realParameter[83];
  comp->fmuData->modelData->realParameterData[84].attribute.start = comp->fmuData->simulationInfo->realParameter[84];
  comp->fmuData->modelData->realParameterData[85].attribute.start = comp->fmuData->simulationInfo->realParameter[85];
  comp->fmuData->modelData->realParameterData[86].attribute.start = comp->fmuData->simulationInfo->realParameter[86];
  comp->fmuData->modelData->realParameterData[87].attribute.start = comp->fmuData->simulationInfo->realParameter[87];
  comp->fmuData->modelData->realParameterData[88].attribute.start = comp->fmuData->simulationInfo->realParameter[88];
  comp->fmuData->modelData->realParameterData[89].attribute.start = comp->fmuData->simulationInfo->realParameter[89];
  comp->fmuData->modelData->realParameterData[90].attribute.start = comp->fmuData->simulationInfo->realParameter[90];
  comp->fmuData->modelData->realParameterData[91].attribute.start = comp->fmuData->simulationInfo->realParameter[91];
  comp->fmuData->modelData->realParameterData[92].attribute.start = comp->fmuData->simulationInfo->realParameter[92];
  comp->fmuData->modelData->realParameterData[93].attribute.start = comp->fmuData->simulationInfo->realParameter[93];
  comp->fmuData->modelData->realParameterData[94].attribute.start = comp->fmuData->simulationInfo->realParameter[94];
  comp->fmuData->modelData->realParameterData[95].attribute.start = comp->fmuData->simulationInfo->realParameter[95];
  comp->fmuData->modelData->realParameterData[96].attribute.start = comp->fmuData->simulationInfo->realParameter[96];
  comp->fmuData->modelData->realParameterData[97].attribute.start = comp->fmuData->simulationInfo->realParameter[97];
  comp->fmuData->modelData->realParameterData[98].attribute.start = comp->fmuData->simulationInfo->realParameter[98];
  comp->fmuData->modelData->realParameterData[99].attribute.start = comp->fmuData->simulationInfo->realParameter[99];
  comp->fmuData->modelData->realParameterData[100].attribute.start = comp->fmuData->simulationInfo->realParameter[100];
  comp->fmuData->modelData->realParameterData[101].attribute.start = comp->fmuData->simulationInfo->realParameter[101];
  comp->fmuData->modelData->realParameterData[102].attribute.start = comp->fmuData->simulationInfo->realParameter[102];
  comp->fmuData->modelData->realParameterData[103].attribute.start = comp->fmuData->simulationInfo->realParameter[103];
  comp->fmuData->modelData->realParameterData[104].attribute.start = comp->fmuData->simulationInfo->realParameter[104];
  comp->fmuData->modelData->realParameterData[105].attribute.start = comp->fmuData->simulationInfo->realParameter[105];
  comp->fmuData->modelData->realParameterData[106].attribute.start = comp->fmuData->simulationInfo->realParameter[106];
  comp->fmuData->modelData->realParameterData[107].attribute.start = comp->fmuData->simulationInfo->realParameter[107];
  comp->fmuData->modelData->realParameterData[108].attribute.start = comp->fmuData->simulationInfo->realParameter[108];
  comp->fmuData->modelData->realParameterData[109].attribute.start = comp->fmuData->simulationInfo->realParameter[109];
  comp->fmuData->modelData->realParameterData[110].attribute.start = comp->fmuData->simulationInfo->realParameter[110];
  comp->fmuData->modelData->realParameterData[111].attribute.start = comp->fmuData->simulationInfo->realParameter[111];
  comp->fmuData->modelData->realParameterData[112].attribute.start = comp->fmuData->simulationInfo->realParameter[112];
  comp->fmuData->modelData->realParameterData[113].attribute.start = comp->fmuData->simulationInfo->realParameter[113];
  comp->fmuData->modelData->realParameterData[114].attribute.start = comp->fmuData->simulationInfo->realParameter[114];
  comp->fmuData->modelData->realParameterData[115].attribute.start = comp->fmuData->simulationInfo->realParameter[115];
  comp->fmuData->modelData->realParameterData[116].attribute.start = comp->fmuData->simulationInfo->realParameter[116];
  comp->fmuData->modelData->realParameterData[117].attribute.start = comp->fmuData->simulationInfo->realParameter[117];
  comp->fmuData->modelData->realParameterData[118].attribute.start = comp->fmuData->simulationInfo->realParameter[118];
  comp->fmuData->modelData->realParameterData[119].attribute.start = comp->fmuData->simulationInfo->realParameter[119];
  comp->fmuData->modelData->realParameterData[120].attribute.start = comp->fmuData->simulationInfo->realParameter[120];
  comp->fmuData->modelData->realParameterData[121].attribute.start = comp->fmuData->simulationInfo->realParameter[121];
  comp->fmuData->modelData->realParameterData[122].attribute.start = comp->fmuData->simulationInfo->realParameter[122];
  comp->fmuData->modelData->realParameterData[123].attribute.start = comp->fmuData->simulationInfo->realParameter[123];
  comp->fmuData->modelData->realParameterData[124].attribute.start = comp->fmuData->simulationInfo->realParameter[124];
  comp->fmuData->modelData->realParameterData[125].attribute.start = comp->fmuData->simulationInfo->realParameter[125];
  comp->fmuData->modelData->realParameterData[126].attribute.start = comp->fmuData->simulationInfo->realParameter[126];
  comp->fmuData->modelData->realParameterData[127].attribute.start = comp->fmuData->simulationInfo->realParameter[127];
  comp->fmuData->modelData->realParameterData[128].attribute.start = comp->fmuData->simulationInfo->realParameter[128];
  comp->fmuData->modelData->realParameterData[129].attribute.start = comp->fmuData->simulationInfo->realParameter[129];
  comp->fmuData->modelData->realParameterData[130].attribute.start = comp->fmuData->simulationInfo->realParameter[130];
  comp->fmuData->modelData->realParameterData[131].attribute.start = comp->fmuData->simulationInfo->realParameter[131];
  comp->fmuData->modelData->realParameterData[132].attribute.start = comp->fmuData->simulationInfo->realParameter[132];
  comp->fmuData->modelData->realParameterData[133].attribute.start = comp->fmuData->simulationInfo->realParameter[133];
  comp->fmuData->modelData->realParameterData[134].attribute.start = comp->fmuData->simulationInfo->realParameter[134];
  comp->fmuData->modelData->realParameterData[135].attribute.start = comp->fmuData->simulationInfo->realParameter[135];
  comp->fmuData->modelData->realParameterData[136].attribute.start = comp->fmuData->simulationInfo->realParameter[136];
  comp->fmuData->modelData->realParameterData[137].attribute.start = comp->fmuData->simulationInfo->realParameter[137];
  comp->fmuData->modelData->integerParameterData[0].attribute.start = comp->fmuData->simulationInfo->integerParameter[0];
  comp->fmuData->modelData->integerParameterData[1].attribute.start = comp->fmuData->simulationInfo->integerParameter[1];
  comp->fmuData->modelData->integerParameterData[2].attribute.start = comp->fmuData->simulationInfo->integerParameter[2];
  comp->fmuData->modelData->integerParameterData[3].attribute.start = comp->fmuData->simulationInfo->integerParameter[3];
  comp->fmuData->modelData->integerParameterData[4].attribute.start = comp->fmuData->simulationInfo->integerParameter[4];
  comp->fmuData->modelData->integerParameterData[5].attribute.start = comp->fmuData->simulationInfo->integerParameter[5];
  comp->fmuData->modelData->integerParameterData[6].attribute.start = comp->fmuData->simulationInfo->integerParameter[6];
  comp->fmuData->modelData->integerParameterData[7].attribute.start = comp->fmuData->simulationInfo->integerParameter[7];
  comp->fmuData->modelData->integerParameterData[8].attribute.start = comp->fmuData->simulationInfo->integerParameter[8];
  comp->fmuData->modelData->integerParameterData[9].attribute.start = comp->fmuData->simulationInfo->integerParameter[9];
  comp->fmuData->modelData->integerParameterData[10].attribute.start = comp->fmuData->simulationInfo->integerParameter[10];
  comp->fmuData->modelData->integerParameterData[11].attribute.start = comp->fmuData->simulationInfo->integerParameter[11];
  comp->fmuData->modelData->integerParameterData[12].attribute.start = comp->fmuData->simulationInfo->integerParameter[12];
  comp->fmuData->modelData->integerParameterData[13].attribute.start = comp->fmuData->simulationInfo->integerParameter[13];
  comp->fmuData->modelData->integerParameterData[14].attribute.start = comp->fmuData->simulationInfo->integerParameter[14];
  comp->fmuData->modelData->integerParameterData[15].attribute.start = comp->fmuData->simulationInfo->integerParameter[15];
  comp->fmuData->modelData->integerParameterData[16].attribute.start = comp->fmuData->simulationInfo->integerParameter[16];
  comp->fmuData->modelData->integerParameterData[17].attribute.start = comp->fmuData->simulationInfo->integerParameter[17];
  comp->fmuData->modelData->integerParameterData[18].attribute.start = comp->fmuData->simulationInfo->integerParameter[18];
  comp->fmuData->modelData->integerParameterData[19].attribute.start = comp->fmuData->simulationInfo->integerParameter[19];
  comp->fmuData->modelData->integerParameterData[20].attribute.start = comp->fmuData->simulationInfo->integerParameter[20];
  comp->fmuData->modelData->integerParameterData[21].attribute.start = comp->fmuData->simulationInfo->integerParameter[21];
  comp->fmuData->modelData->integerParameterData[22].attribute.start = comp->fmuData->simulationInfo->integerParameter[22];
  comp->fmuData->modelData->integerParameterData[23].attribute.start = comp->fmuData->simulationInfo->integerParameter[23];
  comp->fmuData->modelData->integerParameterData[24].attribute.start = comp->fmuData->simulationInfo->integerParameter[24];
  comp->fmuData->modelData->integerParameterData[25].attribute.start = comp->fmuData->simulationInfo->integerParameter[25];
  comp->fmuData->modelData->integerParameterData[26].attribute.start = comp->fmuData->simulationInfo->integerParameter[26];
  comp->fmuData->modelData->integerParameterData[27].attribute.start = comp->fmuData->simulationInfo->integerParameter[27];
  comp->fmuData->modelData->integerParameterData[28].attribute.start = comp->fmuData->simulationInfo->integerParameter[28];
  comp->fmuData->modelData->integerParameterData[29].attribute.start = comp->fmuData->simulationInfo->integerParameter[29];
  comp->fmuData->modelData->integerParameterData[30].attribute.start = comp->fmuData->simulationInfo->integerParameter[30];
  comp->fmuData->modelData->integerParameterData[31].attribute.start = comp->fmuData->simulationInfo->integerParameter[31];
  comp->fmuData->modelData->integerParameterData[32].attribute.start = comp->fmuData->simulationInfo->integerParameter[32];
  comp->fmuData->modelData->integerParameterData[33].attribute.start = comp->fmuData->simulationInfo->integerParameter[33];
  comp->fmuData->modelData->integerParameterData[34].attribute.start = comp->fmuData->simulationInfo->integerParameter[34];
  comp->fmuData->modelData->booleanParameterData[0].attribute.start = comp->fmuData->simulationInfo->booleanParameter[0];
  comp->fmuData->modelData->booleanParameterData[1].attribute.start = comp->fmuData->simulationInfo->booleanParameter[1];
  comp->fmuData->modelData->booleanParameterData[2].attribute.start = comp->fmuData->simulationInfo->booleanParameter[2];
  comp->fmuData->modelData->booleanParameterData[3].attribute.start = comp->fmuData->simulationInfo->booleanParameter[3];
  comp->fmuData->modelData->booleanParameterData[4].attribute.start = comp->fmuData->simulationInfo->booleanParameter[4];
  comp->fmuData->modelData->booleanParameterData[5].attribute.start = comp->fmuData->simulationInfo->booleanParameter[5];
  comp->fmuData->modelData->booleanParameterData[6].attribute.start = comp->fmuData->simulationInfo->booleanParameter[6];
  comp->fmuData->modelData->booleanParameterData[7].attribute.start = comp->fmuData->simulationInfo->booleanParameter[7];
  comp->fmuData->modelData->booleanParameterData[8].attribute.start = comp->fmuData->simulationInfo->booleanParameter[8];
  comp->fmuData->modelData->booleanParameterData[9].attribute.start = comp->fmuData->simulationInfo->booleanParameter[9];
  comp->fmuData->modelData->booleanParameterData[10].attribute.start = comp->fmuData->simulationInfo->booleanParameter[10];
  comp->fmuData->modelData->booleanParameterData[11].attribute.start = comp->fmuData->simulationInfo->booleanParameter[11];
  comp->fmuData->modelData->booleanParameterData[12].attribute.start = comp->fmuData->simulationInfo->booleanParameter[12];
  comp->fmuData->modelData->booleanParameterData[13].attribute.start = comp->fmuData->simulationInfo->booleanParameter[13];
  comp->fmuData->modelData->booleanParameterData[14].attribute.start = comp->fmuData->simulationInfo->booleanParameter[14];
  comp->fmuData->modelData->booleanParameterData[15].attribute.start = comp->fmuData->simulationInfo->booleanParameter[15];
  comp->fmuData->modelData->booleanParameterData[16].attribute.start = comp->fmuData->simulationInfo->booleanParameter[16];
  comp->fmuData->modelData->booleanParameterData[17].attribute.start = comp->fmuData->simulationInfo->booleanParameter[17];
  comp->fmuData->modelData->booleanParameterData[18].attribute.start = comp->fmuData->simulationInfo->booleanParameter[18];
  comp->fmuData->modelData->booleanParameterData[19].attribute.start = comp->fmuData->simulationInfo->booleanParameter[19];
  comp->fmuData->modelData->booleanParameterData[20].attribute.start = comp->fmuData->simulationInfo->booleanParameter[20];
  comp->fmuData->modelData->booleanParameterData[21].attribute.start = comp->fmuData->simulationInfo->booleanParameter[21];
  comp->fmuData->modelData->stringParameterData[0].attribute.start = comp->fmuData->simulationInfo->stringParameter[0];
  comp->fmuData->modelData->stringParameterData[1].attribute.start = comp->fmuData->simulationInfo->stringParameter[1];
  comp->fmuData->modelData->stringParameterData[2].attribute.start = comp->fmuData->simulationInfo->stringParameter[2];
  comp->fmuData->modelData->stringParameterData[3].attribute.start = comp->fmuData->simulationInfo->stringParameter[3];
  comp->fmuData->modelData->stringParameterData[4].attribute.start = comp->fmuData->simulationInfo->stringParameter[4];
  comp->fmuData->modelData->stringParameterData[5].attribute.start = comp->fmuData->simulationInfo->stringParameter[5];
  comp->fmuData->modelData->stringParameterData[6].attribute.start = comp->fmuData->simulationInfo->stringParameter[6];
  comp->fmuData->modelData->stringParameterData[7].attribute.start = comp->fmuData->simulationInfo->stringParameter[7];
  comp->fmuData->modelData->stringParameterData[8].attribute.start = comp->fmuData->simulationInfo->stringParameter[8];
  comp->fmuData->modelData->stringParameterData[9].attribute.start = comp->fmuData->simulationInfo->stringParameter[9];
  comp->fmuData->modelData->stringParameterData[10].attribute.start = comp->fmuData->simulationInfo->stringParameter[10];
  comp->fmuData->modelData->stringParameterData[11].attribute.start = comp->fmuData->simulationInfo->stringParameter[11];
}

// Used to set the next time event, if any.
void eventUpdate(ModelInstance* comp, fmi2EventInfo* eventInfo) {
}

static const int realAliasIndexes[6] = {
  5, 7, 14, 14, 10, 12
};

fmi2Real getReal(ModelInstance* comp, const fmi2ValueReference vr) {
  if (vr < 27) {
    return comp->fmuData->localData[0]->realVars[vr];
  }
  if (vr < 165) {
    return comp->fmuData->simulationInfo->realParameter[vr-27];
  }
  if (vr < 171) {
    int ix = realAliasIndexes[vr-165];
    return ix>=0 ? getReal(comp, ix) : -getReal(comp, -(ix+1));
  }
  return NAN;
}

fmi2Status setReal(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Real value) {
  // set start value attribute for all variable that has start value, till initialization mode
  if (vr < 27 && (comp->state == model_state_instantiated || comp->state == model_state_initialization_mode)) {
    comp->fmuData->modelData->realVarsData[vr].attribute.start = value;
  }
  if (vr < 27) {
    comp->fmuData->localData[0]->realVars[vr] = value;
    return fmi2OK;
  }
  if (vr < 165) {
    comp->fmuData->simulationInfo->realParameter[vr-27] = value;
    return fmi2OK;
  }
  if (vr < 171) {
    int ix = realAliasIndexes[vr-165];
    return ix >= 0 ? setReal(comp, ix, value) : setReal(comp, -(ix+1), -value);
  }
  return fmi2Error;
}

static const int intAliasIndexes[3] = {
  0, 0, 0
};

fmi2Integer getInteger(ModelInstance* comp, const fmi2ValueReference vr) {
  if (vr < 3) {
    return comp->fmuData->localData[0]->integerVars[vr];
  }
  if (vr < 38) {
    return comp->fmuData->simulationInfo->integerParameter[vr-3];
  }
  if (vr < 41) {
    int ix = intAliasIndexes[vr-38];
    return ix>=0 ? getInteger(comp, ix) : -getInteger(comp, -(ix+1));
  }
  return 0;
}

fmi2Status setInteger(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Integer value) {
  // set start value attribute for all variable that has start value, till initialization mode
  if (vr < 3 && (comp->state == model_state_instantiated || comp->state == model_state_initialization_mode)) {
    comp->fmuData->modelData->integerVarsData[vr].attribute.start = value;
  }
  if (vr < 3) {
    comp->fmuData->localData[0]->integerVars[vr] = value;
    return fmi2OK;
  }
  if (vr < 38) {
    comp->fmuData->simulationInfo->integerParameter[vr-3] = value;
    return fmi2OK;
  }
  if (vr < 41) {
    int ix = intAliasIndexes[vr-38];
    return ix >= 0 ? setInteger(comp, ix, value) : setInteger(comp, -(ix+1), -value);
  }
  return fmi2Error;
}
fmi2Boolean getBoolean(ModelInstance* comp, const fmi2ValueReference vr) {
  switch (vr) {
    case 0 : return comp->fmuData->localData[0]->booleanVars[0]; break;
    case 1 : return comp->fmuData->localData[0]->booleanVars[1]; break;
    case 2 : return comp->fmuData->localData[0]->booleanVars[2]; break;
    case 3 : return comp->fmuData->localData[0]->booleanVars[3]; break;
    case 4 : return comp->fmuData->localData[0]->booleanVars[4]; break;
    case 5 : return comp->fmuData->localData[0]->booleanVars[5]; break;
    case 6 : return comp->fmuData->localData[0]->booleanVars[6]; break;
    case 7 : return comp->fmuData->localData[0]->booleanVars[7]; break;
    case 8 : return comp->fmuData->localData[0]->booleanVars[8]; break;
    case 9 : return comp->fmuData->localData[0]->booleanVars[9]; break;
    case 10 : return comp->fmuData->localData[0]->booleanVars[10]; break;
    case 11 : return comp->fmuData->localData[0]->booleanVars[11]; break;
    case 12 : return comp->fmuData->localData[0]->booleanVars[12]; break;
    case 13 : return comp->fmuData->localData[0]->booleanVars[13]; break;
    case 14 : return comp->fmuData->localData[0]->booleanVars[14]; break;
    case 15 : return comp->fmuData->localData[0]->booleanVars[15]; break;
    case 16 : return comp->fmuData->localData[0]->booleanVars[16]; break;
    case 17 : return comp->fmuData->localData[0]->booleanVars[17]; break;
    case 18 : return comp->fmuData->localData[0]->booleanVars[18]; break;
    case 19 : return comp->fmuData->simulationInfo->booleanParameter[0]; break;
    case 20 : return comp->fmuData->simulationInfo->booleanParameter[1]; break;
    case 21 : return comp->fmuData->simulationInfo->booleanParameter[2]; break;
    case 22 : return comp->fmuData->simulationInfo->booleanParameter[3]; break;
    case 23 : return comp->fmuData->simulationInfo->booleanParameter[4]; break;
    case 24 : return comp->fmuData->simulationInfo->booleanParameter[5]; break;
    case 25 : return comp->fmuData->simulationInfo->booleanParameter[6]; break;
    case 26 : return comp->fmuData->simulationInfo->booleanParameter[7]; break;
    case 27 : return comp->fmuData->simulationInfo->booleanParameter[8]; break;
    case 28 : return comp->fmuData->simulationInfo->booleanParameter[9]; break;
    case 29 : return comp->fmuData->simulationInfo->booleanParameter[10]; break;
    case 30 : return comp->fmuData->simulationInfo->booleanParameter[11]; break;
    case 31 : return comp->fmuData->simulationInfo->booleanParameter[12]; break;
    case 32 : return comp->fmuData->simulationInfo->booleanParameter[13]; break;
    case 33 : return comp->fmuData->simulationInfo->booleanParameter[14]; break;
    case 34 : return comp->fmuData->simulationInfo->booleanParameter[15]; break;
    case 35 : return comp->fmuData->simulationInfo->booleanParameter[16]; break;
    case 36 : return comp->fmuData->simulationInfo->booleanParameter[17]; break;
    case 37 : return comp->fmuData->simulationInfo->booleanParameter[18]; break;
    case 38 : return comp->fmuData->simulationInfo->booleanParameter[19]; break;
    case 39 : return comp->fmuData->simulationInfo->booleanParameter[20]; break;
    case 40 : return comp->fmuData->simulationInfo->booleanParameter[21]; break;
    case 41 : return getBoolean(comp, 9); break;
    case 42 : return getBoolean(comp, 9); break;
    case 43 : return getBoolean(comp, 9); break;
    case 44 : return getBoolean(comp, 14); break;
    case 45 : return getBoolean(comp, 18); break;
    default:
      return fmi2False;
  }
}

fmi2Status setBoolean(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Boolean value) {
  switch (vr) {
    case 0 : comp->fmuData->localData[0]->booleanVars[0] = value; break;
    case 1 : comp->fmuData->localData[0]->booleanVars[1] = value; break;
    case 2 : comp->fmuData->localData[0]->booleanVars[2] = value; break;
    case 3 : comp->fmuData->localData[0]->booleanVars[3] = value; break;
    case 4 : comp->fmuData->localData[0]->booleanVars[4] = value; break;
    case 5 : comp->fmuData->localData[0]->booleanVars[5] = value; break;
    case 6 : comp->fmuData->localData[0]->booleanVars[6] = value; break;
    case 7 : comp->fmuData->localData[0]->booleanVars[7] = value; break;
    case 8 : comp->fmuData->localData[0]->booleanVars[8] = value; break;
    case 9 : comp->fmuData->localData[0]->booleanVars[9] = value; break;
    case 10 : comp->fmuData->localData[0]->booleanVars[10] = value; break;
    case 11 : comp->fmuData->localData[0]->booleanVars[11] = value; break;
    case 12 : comp->fmuData->localData[0]->booleanVars[12] = value; break;
    case 13 : comp->fmuData->localData[0]->booleanVars[13] = value; break;
    case 14 : comp->fmuData->localData[0]->booleanVars[14] = value; break;
    case 15 : comp->fmuData->localData[0]->booleanVars[15] = value; break;
    case 16 : comp->fmuData->localData[0]->booleanVars[16] = value; break;
    case 17 : comp->fmuData->localData[0]->booleanVars[17] = value; break;
    case 18 : comp->fmuData->localData[0]->booleanVars[18] = value; break;
    case 19 : comp->fmuData->simulationInfo->booleanParameter[0] = value; break;
    case 20 : comp->fmuData->simulationInfo->booleanParameter[1] = value; break;
    case 21 : comp->fmuData->simulationInfo->booleanParameter[2] = value; break;
    case 22 : comp->fmuData->simulationInfo->booleanParameter[3] = value; break;
    case 23 : comp->fmuData->simulationInfo->booleanParameter[4] = value; break;
    case 24 : comp->fmuData->simulationInfo->booleanParameter[5] = value; break;
    case 25 : comp->fmuData->simulationInfo->booleanParameter[6] = value; break;
    case 26 : comp->fmuData->simulationInfo->booleanParameter[7] = value; break;
    case 27 : comp->fmuData->simulationInfo->booleanParameter[8] = value; break;
    case 28 : comp->fmuData->simulationInfo->booleanParameter[9] = value; break;
    case 29 : comp->fmuData->simulationInfo->booleanParameter[10] = value; break;
    case 30 : comp->fmuData->simulationInfo->booleanParameter[11] = value; break;
    case 31 : comp->fmuData->simulationInfo->booleanParameter[12] = value; break;
    case 32 : comp->fmuData->simulationInfo->booleanParameter[13] = value; break;
    case 33 : comp->fmuData->simulationInfo->booleanParameter[14] = value; break;
    case 34 : comp->fmuData->simulationInfo->booleanParameter[15] = value; break;
    case 35 : comp->fmuData->simulationInfo->booleanParameter[16] = value; break;
    case 36 : comp->fmuData->simulationInfo->booleanParameter[17] = value; break;
    case 37 : comp->fmuData->simulationInfo->booleanParameter[18] = value; break;
    case 38 : comp->fmuData->simulationInfo->booleanParameter[19] = value; break;
    case 39 : comp->fmuData->simulationInfo->booleanParameter[20] = value; break;
    case 40 : comp->fmuData->simulationInfo->booleanParameter[21] = value; break;
    case 41 : return setBoolean(comp, 9, value); break;
    case 42 : return setBoolean(comp, 9, value); break;
    case 43 : return setBoolean(comp, 9, value); break;
    case 44 : return setBoolean(comp, 14, value); break;
    case 45 : return setBoolean(comp, 18, value); break;
    default:
      return fmi2Error;
  }
  return fmi2OK;
}

fmi2String getString(ModelInstance* comp, const fmi2ValueReference vr) {
  switch (vr) {
    case 0 : return MMC_STRINGDATA(comp->fmuData->simulationInfo->stringParameter[0]); break;
    case 1 : return MMC_STRINGDATA(comp->fmuData->simulationInfo->stringParameter[1]); break;
    case 2 : return MMC_STRINGDATA(comp->fmuData->simulationInfo->stringParameter[2]); break;
    case 3 : return MMC_STRINGDATA(comp->fmuData->simulationInfo->stringParameter[3]); break;
    case 4 : return MMC_STRINGDATA(comp->fmuData->simulationInfo->stringParameter[4]); break;
    case 5 : return MMC_STRINGDATA(comp->fmuData->simulationInfo->stringParameter[5]); break;
    case 6 : return MMC_STRINGDATA(comp->fmuData->simulationInfo->stringParameter[6]); break;
    case 7 : return MMC_STRINGDATA(comp->fmuData->simulationInfo->stringParameter[7]); break;
    case 8 : return MMC_STRINGDATA(comp->fmuData->simulationInfo->stringParameter[8]); break;
    case 9 : return MMC_STRINGDATA(comp->fmuData->simulationInfo->stringParameter[9]); break;
    case 10 : return MMC_STRINGDATA(comp->fmuData->simulationInfo->stringParameter[10]); break;
    case 11 : return MMC_STRINGDATA(comp->fmuData->simulationInfo->stringParameter[11]); break;
    default:
      return "";
  }
}

fmi2Status setString(ModelInstance* comp, const fmi2ValueReference vr, fmi2String value) {
  switch (vr) {
    case 0 : comp->fmuData->simulationInfo->stringParameter[0] = mmc_mk_scon(value); break;
    case 1 : comp->fmuData->simulationInfo->stringParameter[1] = mmc_mk_scon(value); break;
    case 2 : comp->fmuData->simulationInfo->stringParameter[2] = mmc_mk_scon(value); break;
    case 3 : comp->fmuData->simulationInfo->stringParameter[3] = mmc_mk_scon(value); break;
    case 4 : comp->fmuData->simulationInfo->stringParameter[4] = mmc_mk_scon(value); break;
    case 5 : comp->fmuData->simulationInfo->stringParameter[5] = mmc_mk_scon(value); break;
    case 6 : comp->fmuData->simulationInfo->stringParameter[6] = mmc_mk_scon(value); break;
    case 7 : comp->fmuData->simulationInfo->stringParameter[7] = mmc_mk_scon(value); break;
    case 8 : comp->fmuData->simulationInfo->stringParameter[8] = mmc_mk_scon(value); break;
    case 9 : comp->fmuData->simulationInfo->stringParameter[9] = mmc_mk_scon(value); break;
    case 10 : comp->fmuData->simulationInfo->stringParameter[10] = mmc_mk_scon(value); break;
    case 11 : comp->fmuData->simulationInfo->stringParameter[11] = mmc_mk_scon(value); break;
    default:
      return fmi2Error;
  }
  return fmi2OK;
}

fmi2Status setExternalFunction(ModelInstance* c, const fmi2ValueReference vr, const void* value){
  switch (vr) {
    default:
      return fmi2Error;
  }
  return fmi2OK;
}

/* function maps input references to a input index used in partialDerivatives */
fmi2ValueReference mapInputReference2InputNumber(const fmi2ValueReference vr) {
    switch (vr) {
      default:
        return -1;
    }
}
/* function maps output references to a input index used in partialDerivatives */
fmi2ValueReference mapOutputReference2OutputNumber(const fmi2ValueReference vr) {
    switch (vr) {
      default:
        return -1;
    }
}
/* function maps output references to an internal output Real derivatives */
fmi2ValueReference mapOutputReference2RealOutputDerivatives(const fmi2ValueReference vr) {
    switch (vr) {
      default:
        return -1;
    }
}
/* function maps initialUnknowns UnknownVars ValueReferences to an internal partial derivatives index */
fmi2ValueReference mapInitialUnknownsdependentIndex(const fmi2ValueReference vr) {
    switch (vr) {
      case 69: return 0; break;
      case 28: return 1; break;
      case 119: return 2; break;
      case 111: return 3; break;
      case 109: return 4; break;
      case 112: return 5; break;
      case 110: return 6; break;
      case 106: return 7; break;
      case 105: return 8; break;
      case 120: return 9; break;
      case 141: return 10; break;
      case 133: return 11; break;
      case 131: return 12; break;
      case 134: return 13; break;
      case 132: return 14; break;
      case 128: return 15; break;
      case 127: return 16; break;
      case 142: return 17; break;
      case 129: return 18; break;
      case 143: return 19; break;
      case 130: return 20; break;
      case 144: return 21; break;
      case 140: return 22; break;
      case 139: return 23; break;
      case 146: return 24; break;
      case 138: return 25; break;
      case 137: return 26; break;
      case 136: return 27; break;
      case 135: return 28; break;
      case 145: return 29; break;
      case 107: return 30; break;
      case 121: return 31; break;
      case 108: return 32; break;
      case 122: return 33; break;
      case 118: return 34; break;
      case 117: return 35; break;
      case 124: return 36; break;
      case 116: return 37; break;
      case 115: return 38; break;
      case 114: return 39; break;
      case 113: return 40; break;
      case 123: return 41; break;
      case 29: return 42; break;
      case 30: return 43; break;
      case 31: return 44; break;
      case 32: return 45; break;
      case 33: return 46; break;
      case 34: return 47; break;
      case 35: return 48; break;
      case 36: return 49; break;
      case 37: return 50; break;
      case 38: return 51; break;
      case 39: return 52; break;
      case 40: return 53; break;
      case 41: return 54; break;
      case 42: return 55; break;
      case 43: return 56; break;
      case 44: return 57; break;
      case 45: return 58; break;
      case 46: return 59; break;
      case 47: return 60; break;
      case 48: return 61; break;
      case 49: return 62; break;
      case 50: return 63; break;
      case 51: return 64; break;
      case 52: return 65; break;
      case 53: return 66; break;
      case 54: return 67; break;
      case 55: return 68; break;
      case 70: return 69; break;
      case 71: return 70; break;
      case 72: return 71; break;
      case 73: return 72; break;
      case 74: return 73; break;
      case 75: return 74; break;
      case 76: return 75; break;
      case 77: return 76; break;
      case 78: return 77; break;
      case 79: return 78; break;
      case 80: return 79; break;
      case 81: return 80; break;
      case 82: return 81; break;
      case 83: return 82; break;
      case 84: return 83; break;
      case 85: return 84; break;
      case 86: return 85; break;
      case 87: return 86; break;
      case 88: return 87; break;
      case 148: return 88; break;
      case 164: return 89; break;
      default:
        return -1;
    }
}
/* function maps initialUnknowns knownVars ValueReferences to an internal partial derivatives index */
fmi2ValueReference mapInitialUnknownsIndependentIndex(const fmi2ValueReference vr) {
    switch (vr) {
      case 27: return 0; break;
      case 57: return 1; break;
      case 58: return 2; break;
      case 59: return 3; break;
      case 60: return 4; break;
      case 61: return 5; break;
      case 62: return 6; break;
      case 63: return 7; break;
      case 64: return 8; break;
      case 65: return 9; break;
      case 66: return 10; break;
      case 67: return 11; break;
      case 68: return 12; break;
      case 89: return 13; break;
      case 90: return 14; break;
      case 91: return 15; break;
      case 92: return 16; break;
      case 93: return 17; break;
      case 94: return 18; break;
      case 95: return 19; break;
      case 96: return 20; break;
      case 97: return 21; break;
      case 98: return 22; break;
      case 99: return 23; break;
      case 100: return 24; break;
      case 101: return 25; break;
      case 102: return 26; break;
      case 103: return 27; break;
      case 104: return 28; break;
      case 125: return 29; break;
      case 126: return 30; break;
      case 149: return 31; break;
      default:
        return -1;
    }
}

#ifdef __cplusplus
}
#endif

