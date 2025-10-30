#include "omc_simulation_settings.h"
#include "Interaction1_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "Interaction1_includes.h"


DLLDirection
void omc_Modelica_Blocks_Examples_Interaction1_booleanTable_isValidTable(threadData_t *threadData, real_array _table)
{
  modelica_integer _n;
  modelica_integer tmp1;
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_string tmp11;
  modelica_metatype tmpMeta12;
  static int tmp13 = 0;
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = size_of_dimension_base_array(_table, ((modelica_integer) 1));
  _n = tmp1;
  if((_n > ((modelica_integer) 0)))
  {
    tmp14 = ((modelica_integer) 2); tmp15 = 1; tmp16 = _n;
    if(!(((tmp15 > 0) && (tmp14 > tmp16)) || ((tmp15 < 0) && (tmp14 < tmp16))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 2); in_range_integer(_i, tmp14, tmp16); _i += tmp15)
      {
        {
          if(!(real_array_get(_table, 1, _i) > real_array_get(_table, 1, _i - ((modelica_integer) 1))))
          {
            tmp2 = modelica_integer_to_modelica_string(_i - ((modelica_integer) 1), ((modelica_integer) 0), 1 /* true */);
            tmpMeta3 = stringAppend(_OMC_LIT0,tmp2);
            tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT1);
            tmp5 = modelica_real_to_modelica_string(real_array_get(_table, 1, _i - ((modelica_integer) 1)), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
            tmpMeta6 = stringAppend(tmpMeta4,tmp5);
            tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT2);
            tmp8 = modelica_integer_to_modelica_string(_i, ((modelica_integer) 0), 1 /* true */);
            tmpMeta9 = stringAppend(tmpMeta7,tmp8);
            tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT1);
            tmp11 = modelica_real_to_modelica_string(real_array_get(_table, 1, _i), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
            tmpMeta12 = stringAppend(tmpMeta10,tmp11);
            {
              FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2125,13,2128,53,0};
              omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta12));
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_Modelica_Blocks_Examples_Interaction1_booleanTable_isValidTable(threadData_t *threadData, modelica_metatype _table)
{
  omc_Modelica_Blocks_Examples_Interaction1_booleanTable_isValidTable(threadData, *((base_array_t*)_table));
  return;
}

DLLDirection
void omc_Modelica_Blocks_Examples_Interaction1_integerTable_isValidTable(threadData_t *threadData, real_array _table)
{
  modelica_real _t_last;
  modelica_integer _n;
  modelica_integer tmp1;
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_string tmp11;
  modelica_metatype tmpMeta12;
  static int tmp13 = 0;
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  modelica_real tmp17;
  modelica_string tmp18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_string tmp21;
  modelica_metatype tmpMeta22;
  static int tmp23 = 0;
  modelica_integer tmp24;
  modelica_integer tmp25;
  modelica_integer tmp26;
  _tailrecursive: OMC_LABEL_UNUSED
  // _t_last has no default value.
  tmp1 = size_of_dimension_base_array(_table, ((modelica_integer) 1));
  _n = tmp1;
  if((_n > ((modelica_integer) 0)))
  {
    _t_last = real_array_get(_table, 2, ((modelica_integer) 1), ((modelica_integer) 1));

    tmp14 = ((modelica_integer) 2); tmp15 = 1; tmp16 = _n;
    if(!(((tmp15 > 0) && (tmp14 > tmp16)) || ((tmp15 < 0) && (tmp14 < tmp16))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 2); in_range_integer(_i, tmp14, tmp16); _i += tmp15)
      {
        {
          if(!(real_array_get(_table, 2, _i, ((modelica_integer) 1)) > _t_last))
          {
            tmp2 = modelica_integer_to_modelica_string(_i - ((modelica_integer) 1), ((modelica_integer) 0), 1 /* true */);
            tmpMeta3 = stringAppend(_OMC_LIT0,tmp2);
            tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT5);
            tmp5 = modelica_real_to_modelica_string(real_array_get(_table, 2, _i - ((modelica_integer) 1), ((modelica_integer) 1)), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
            tmpMeta6 = stringAppend(tmpMeta4,tmp5);
            tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT6);
            tmp8 = modelica_integer_to_modelica_string(_i, ((modelica_integer) 0), 1 /* true */);
            tmpMeta9 = stringAppend(tmpMeta7,tmp8);
            tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT5);
            tmp11 = modelica_real_to_modelica_string(real_array_get(_table, 2, _i, ((modelica_integer) 1)), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
            tmpMeta12 = stringAppend(tmpMeta10,tmp11);
            {
              FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2392,13,2395,58,0};
              omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta12));
            }
          }
        }
      }
    }

    tmp24 = ((modelica_integer) 1); tmp25 = 1; tmp26 = _n;
    if(!(((tmp25 > 0) && (tmp24 > tmp26)) || ((tmp25 < 0) && (tmp24 < tmp26))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp24, tmp26); _i += tmp25)
      {
        {
          tmp17 = 1.0;
          if (tmp17 == 0.0) {throwStreamPrint(threadData, "Division by zero %s", "div(table[i,2], 1.0)");}
          if(!(real_array_get(_table, 2, _i, ((modelica_integer) 2)) - trunc((real_array_get(_table, 2, _i, ((modelica_integer) 2))) / (tmp17)) == 0.0))
          {
            tmp18 = modelica_integer_to_modelica_string(_i, ((modelica_integer) 0), 1 /* true */);
            tmpMeta19 = stringAppend(_OMC_LIT7,tmp18);
            tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT8);
            tmp21 = modelica_real_to_modelica_string(real_array_get(_table, 2, _i, ((modelica_integer) 2)), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
            tmpMeta22 = stringAppend(tmpMeta20,tmp21);
            {
              FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2400,13,2402,35,0};
              omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta22));
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_Modelica_Blocks_Examples_Interaction1_integerTable_isValidTable(threadData_t *threadData, modelica_metatype _table)
{
  omc_Modelica_Blocks_Examples_Interaction1_integerTable_isValidTable(threadData, *((base_array_t*)_table));
  return;
}

DLLDirection
void omc_Modelica_Blocks_Examples_Interaction1_start_table_isValidTable(threadData_t *threadData, real_array _table)
{
  modelica_integer _n;
  modelica_integer tmp1;
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_string tmp11;
  modelica_metatype tmpMeta12;
  static int tmp13 = 0;
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = size_of_dimension_base_array(_table, ((modelica_integer) 1));
  _n = tmp1;
  if((_n > ((modelica_integer) 0)))
  {
    tmp14 = ((modelica_integer) 2); tmp15 = 1; tmp16 = _n;
    if(!(((tmp15 > 0) && (tmp14 > tmp16)) || ((tmp15 < 0) && (tmp14 < tmp16))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 2); in_range_integer(_i, tmp14, tmp16); _i += tmp15)
      {
        {
          if(!(real_array_get(_table, 1, _i) > real_array_get(_table, 1, _i - ((modelica_integer) 1))))
          {
            tmp2 = modelica_integer_to_modelica_string(_i - ((modelica_integer) 1), ((modelica_integer) 0), 1 /* true */);
            tmpMeta3 = stringAppend(_OMC_LIT0,tmp2);
            tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT1);
            tmp5 = modelica_real_to_modelica_string(real_array_get(_table, 1, _i - ((modelica_integer) 1)), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
            tmpMeta6 = stringAppend(tmpMeta4,tmp5);
            tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT2);
            tmp8 = modelica_integer_to_modelica_string(_i, ((modelica_integer) 0), 1 /* true */);
            tmpMeta9 = stringAppend(tmpMeta7,tmp8);
            tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT1);
            tmp11 = modelica_real_to_modelica_string(real_array_get(_table, 1, _i), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
            tmpMeta12 = stringAppend(tmpMeta10,tmp11);
            {
              FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2125,13,2128,53,0};
              omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta12));
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_Modelica_Blocks_Examples_Interaction1_start_table_isValidTable(threadData_t *threadData, modelica_metatype _table)
{
  omc_Modelica_Blocks_Examples_Interaction1_start_table_isValidTable(threadData, *((base_array_t*)_table));
  return;
}

DLLDirection
void omc_Modelica_Blocks_Examples_Interaction1_stop_table_isValidTable(threadData_t *threadData, real_array _table)
{
  modelica_integer _n;
  modelica_integer tmp1;
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_string tmp11;
  modelica_metatype tmpMeta12;
  static int tmp13 = 0;
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = size_of_dimension_base_array(_table, ((modelica_integer) 1));
  _n = tmp1;
  if((_n > ((modelica_integer) 0)))
  {
    tmp14 = ((modelica_integer) 2); tmp15 = 1; tmp16 = _n;
    if(!(((tmp15 > 0) && (tmp14 > tmp16)) || ((tmp15 < 0) && (tmp14 < tmp16))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 2); in_range_integer(_i, tmp14, tmp16); _i += tmp15)
      {
        {
          if(!(real_array_get(_table, 1, _i) > real_array_get(_table, 1, _i - ((modelica_integer) 1))))
          {
            tmp2 = modelica_integer_to_modelica_string(_i - ((modelica_integer) 1), ((modelica_integer) 0), 1 /* true */);
            tmpMeta3 = stringAppend(_OMC_LIT0,tmp2);
            tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT1);
            tmp5 = modelica_real_to_modelica_string(real_array_get(_table, 1, _i - ((modelica_integer) 1)), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
            tmpMeta6 = stringAppend(tmpMeta4,tmp5);
            tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT2);
            tmp8 = modelica_integer_to_modelica_string(_i, ((modelica_integer) 0), 1 /* true */);
            tmpMeta9 = stringAppend(tmpMeta7,tmp8);
            tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT1);
            tmp11 = modelica_real_to_modelica_string(real_array_get(_table, 1, _i), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
            tmpMeta12 = stringAppend(tmpMeta10,tmp11);
            {
              FILE_INFO info = {"/home/USER/.openmodelica/libraries/Modelica 4.1.0+maint.om/Blocks/Sources.mo",2125,13,2128,53,0};
              omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta12));
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_Modelica_Blocks_Examples_Interaction1_stop_table_isValidTable(threadData_t *threadData, modelica_metatype _table)
{
  omc_Modelica_Blocks_Examples_Interaction1_stop_table_isValidTable(threadData, *((base_array_t*)_table));
  return;
}

DLLDirection
modelica_real omc_Modelica_Blocks_Examples_Interaction1_timeTable_getInterpolationCoefficients(threadData_t *threadData, real_array _table, modelica_real _offset, modelica_real _startTimeScaled, modelica_real _timeScaled, modelica_integer _last, modelica_real _TimeEps, modelica_real _shiftTimeScaled, modelica_real *out_b, modelica_real *out_nextEventScaled, modelica_integer *out_next)
{
  modelica_real _a;
  modelica_real _b;
  modelica_real _nextEventScaled;
  modelica_integer _next;
  modelica_integer _columns;
  modelica_integer _ncol;
  modelica_integer _nrow;
  modelica_integer tmp1;
  modelica_integer _next0;
  modelica_real _tp;
  modelica_real _dt;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _a has no default value.
  // _b has no default value.
  // _nextEventScaled has no default value.
  // _next has no default value.
  _columns = ((modelica_integer) 2);
  _ncol = ((modelica_integer) 2);
  tmp1 = size_of_dimension_base_array(_table, ((modelica_integer) 1));
  _nrow = tmp1;
  // _next0 has no default value.
  // _tp has no default value.
  // _dt has no default value.
  _next = _last;

  _nextEventScaled = _timeScaled - ((_TimeEps) * (fabs(_timeScaled)));

  _tp = _timeScaled + (_TimeEps) * (fabs(_timeScaled));

  if((_tp < _startTimeScaled))
  {
    _nextEventScaled = _startTimeScaled;

    _a = 0.0;

    _b = _offset;
  }
  else
  {
    if((_nrow < ((modelica_integer) 2)))
    {
      _a = 0.0;

      _b = _offset + real_array_get(_table, 2, ((modelica_integer) 1), _columns);
    }
    else
    {
      _tp = _tp - _shiftTimeScaled;

      while(1)
      {
        if(!((_next < _nrow) && (_tp >= real_array_get(_table, 2, _next, ((modelica_integer) 1))))) break;
        _next = _next + ((modelica_integer) 1);
      }

      if((_next < _nrow))
      {
        _nextEventScaled = _shiftTimeScaled + real_array_get(_table, 2, _next, ((modelica_integer) 1));
      }

      if((_next == ((modelica_integer) 1)))
      {
        _next = ((modelica_integer) 2);
      }

      _next0 = _next - ((modelica_integer) 1);

      _dt = real_array_get(_table, 2, _next, ((modelica_integer) 1)) - real_array_get(_table, 2, _next0, ((modelica_integer) 1));

      if((_dt <= (_TimeEps) * (fabs(real_array_get(_table, 2, _next, ((modelica_integer) 1))))))
      {
        _a = 0.0;

        _b = _offset + real_array_get(_table, 2, _next, _columns);
      }
      else
      {
        tmp2 = _dt;
        if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(table[next,columns] - table[next0,columns]) / dt");}
        _a = (real_array_get(_table, 2, _next, _columns) - real_array_get(_table, 2, _next0, _columns)) / tmp2;

        _b = _offset + real_array_get(_table, 2, _next0, _columns) - ((_a) * (real_array_get(_table, 2, _next0, ((modelica_integer) 1))));
      }
    }
  }

  _b = _b - ((_a) * (_shiftTimeScaled));
  _return: OMC_LABEL_UNUSED
  if (out_b) { *out_b = _b; }
  if (out_nextEventScaled) { *out_nextEventScaled = _nextEventScaled; }
  if (out_next) { *out_next = _next; }
  return _a;
}
modelica_metatype boxptr_Modelica_Blocks_Examples_Interaction1_timeTable_getInterpolationCoefficients(threadData_t *threadData, modelica_metatype _table, modelica_metatype _offset, modelica_metatype _startTimeScaled, modelica_metatype _timeScaled, modelica_metatype _last, modelica_metatype _TimeEps, modelica_metatype _shiftTimeScaled, modelica_metatype *out_b, modelica_metatype *out_nextEventScaled, modelica_metatype *out_next)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_integer tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real _b;
  modelica_real _nextEventScaled;
  modelica_integer _next;
  modelica_real _a;
  modelica_metatype out_a;
  tmp1 = mmc_unbox_real(_offset);
  tmp2 = mmc_unbox_real(_startTimeScaled);
  tmp3 = mmc_unbox_real(_timeScaled);
  tmp4 = mmc_unbox_integer(_last);
  tmp5 = mmc_unbox_real(_TimeEps);
  tmp6 = mmc_unbox_real(_shiftTimeScaled);
  _a = omc_Modelica_Blocks_Examples_Interaction1_timeTable_getInterpolationCoefficients(threadData, *((base_array_t*)_table), tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, &_b, &_nextEventScaled, &_next);
  out_a = mmc_mk_rcon(_a);
  if (out_b) { *out_b = mmc_mk_rcon(_b); }
  if (out_nextEventScaled) { *out_nextEventScaled = mmc_mk_rcon(_nextEventScaled); }
  if (out_next) { *out_next = mmc_mk_icon(_next); }
  return out_a;
}

modelica_real omc_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData_t *threadData, modelica_complex _tableID, modelica_real _timeIn)
{
  void * _tableID_ext;
  double _timeIn_ext;
  double _nextTimeEvent_ext;
  modelica_real _nextTimeEvent;
  // _nextTimeEvent has no default value.
  _tableID_ext = (void *)_tableID;
  _timeIn_ext = (double)_timeIn;
  _nextTimeEvent_ext = ModelicaStandardTables_CombiTimeTable_nextTimeEvent(_tableID_ext, _timeIn_ext);
  _nextTimeEvent = (modelica_real)_nextTimeEvent_ext;
  return _nextTimeEvent;
}
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData_t *threadData, modelica_metatype _tableID, modelica_metatype _timeIn)
{
  modelica_real tmp1;
  modelica_real _nextTimeEvent;
  modelica_metatype out_nextTimeEvent;
  tmp1 = mmc_unbox_real(_timeIn);
  _nextTimeEvent = omc_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData, _tableID, tmp1);
  out_nextTimeEvent = mmc_mk_rcon(_nextTimeEvent);
  return out_nextTimeEvent;
}

modelica_real omc_Modelica_Blocks_Tables_Internal_getTimeTableTmax(threadData_t *threadData, modelica_complex _tableID)
{
  void * _tableID_ext;
  double _timeMax_ext;
  modelica_real _timeMax;
  // _timeMax has no default value.
  _tableID_ext = (void *)_tableID;
  _timeMax_ext = ModelicaStandardTables_CombiTimeTable_maximumTime(_tableID_ext);
  _timeMax = (modelica_real)_timeMax_ext;
  return _timeMax;
}
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTimeTableTmax(threadData_t *threadData, modelica_metatype _tableID)
{
  modelica_real _timeMax;
  modelica_metatype out_timeMax;
  _timeMax = omc_Modelica_Blocks_Tables_Internal_getTimeTableTmax(threadData, _tableID);
  out_timeMax = mmc_mk_rcon(_timeMax);
  return out_timeMax;
}

modelica_real omc_Modelica_Blocks_Tables_Internal_getTimeTableTmin(threadData_t *threadData, modelica_complex _tableID)
{
  void * _tableID_ext;
  double _timeMin_ext;
  modelica_real _timeMin;
  // _timeMin has no default value.
  _tableID_ext = (void *)_tableID;
  _timeMin_ext = ModelicaStandardTables_CombiTimeTable_minimumTime(_tableID_ext);
  _timeMin = (modelica_real)_timeMin_ext;
  return _timeMin;
}
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTimeTableTmin(threadData_t *threadData, modelica_metatype _tableID)
{
  modelica_real _timeMin;
  modelica_metatype out_timeMin;
  _timeMin = omc_Modelica_Blocks_Tables_Internal_getTimeTableTmin(threadData, _tableID);
  out_timeMin = mmc_mk_rcon(_timeMin);
  return out_timeMin;
}

modelica_real omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData_t *threadData, modelica_complex _tableID, modelica_integer _icol, modelica_real _timeIn, modelica_real _nextTimeEvent, modelica_real _pre_nextTimeEvent)
{
  void * _tableID_ext;
  int _icol_ext;
  double _timeIn_ext;
  double _nextTimeEvent_ext;
  double _pre_nextTimeEvent_ext;
  double _y_ext;
  modelica_real _y;
  // _y has no default value.
  _tableID_ext = (void *)_tableID;
  _icol_ext = (int)_icol;
  _timeIn_ext = (double)_timeIn;
  _nextTimeEvent_ext = (double)_nextTimeEvent;
  _pre_nextTimeEvent_ext = (double)_pre_nextTimeEvent;
  _y_ext = ModelicaStandardTables_CombiTimeTable_getValue(_tableID_ext, _icol_ext, _timeIn_ext, _nextTimeEvent_ext, _pre_nextTimeEvent_ext);
  _y = (modelica_real)_y_ext;
  return _y;
}
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData_t *threadData, modelica_metatype _tableID, modelica_metatype _icol, modelica_metatype _timeIn, modelica_metatype _nextTimeEvent, modelica_metatype _pre_nextTimeEvent)
{
  modelica_integer tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_integer(_icol);
  tmp2 = mmc_unbox_real(_timeIn);
  tmp3 = mmc_unbox_real(_nextTimeEvent);
  tmp4 = mmc_unbox_real(_pre_nextTimeEvent);
  _y = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer(threadData, _tableID, tmp1, tmp2, tmp3, tmp4);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

modelica_complex omc_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor(threadData_t *threadData, modelica_string _tableName, modelica_string _fileName, real_array _table, modelica_real _startTime, integer_array _columns, modelica_integer _smoothness, modelica_integer _extrapolation, modelica_real _shiftTime, modelica_integer _timeEvents, modelica_boolean _verboseRead, modelica_string _delimiter, modelica_integer _nHeaderLines)
{
  double _startTime_ext;
  integer_array _columns_packed;
  int _smoothness_ext;
  int _extrapolation_ext;
  double _shiftTime_ext;
  int _timeEvents_ext;
  int _verboseRead_ext;
  int _nHeaderLines_ext;
  void *_table_c89;
  void *_columns_c89;
  void * _externalCombiTimeTable_ext;
  modelica_complex _externalCombiTimeTable;
  // _externalCombiTimeTable has no default value.
  _startTime_ext = (double)_startTime;
  pack_alloc_integer_array(&_columns, &_columns_packed);

  _smoothness_ext = (int)_smoothness;
  _extrapolation_ext = (int)_extrapolation;
  _shiftTime_ext = (double)_shiftTime;
  _timeEvents_ext = (int)_timeEvents;
  _verboseRead_ext = (int)_verboseRead;
  _nHeaderLines_ext = (int)_nHeaderLines;_table_c89 = (void*) data_of_real_c89_array(_table);
  _columns_c89 = (void*) data_of_integer_c89_array(_columns_packed);
  _externalCombiTimeTable_ext = ModelicaStandardTables_CombiTimeTable_init3(MMC_STRINGDATA(_fileName), MMC_STRINGDATA(_tableName), (const double*) _table_c89, size_of_dimension_base_array(_table, ((modelica_integer) 1)), size_of_dimension_base_array(_table, ((modelica_integer) 2)), _startTime_ext, (const int*) _columns_c89, size_of_dimension_base_array(_columns, ((modelica_integer) 1)), _smoothness_ext, _extrapolation_ext, _shiftTime_ext, _timeEvents_ext, _verboseRead_ext, MMC_STRINGDATA(_delimiter), _nHeaderLines_ext);
  _externalCombiTimeTable = (modelica_complex)_externalCombiTimeTable_ext;
  return _externalCombiTimeTable;
}
modelica_metatype boxptr_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor(threadData_t *threadData, modelica_metatype _tableName, modelica_metatype _fileName, modelica_metatype _table, modelica_metatype _startTime, modelica_metatype _columns, modelica_metatype _smoothness, modelica_metatype _extrapolation, modelica_metatype _shiftTime, modelica_metatype _timeEvents, modelica_metatype _verboseRead, modelica_metatype _delimiter, modelica_metatype _nHeaderLines)
{
  modelica_real tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_real tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_complex _externalCombiTimeTable;
  tmp1 = mmc_unbox_real(_startTime);
  tmp2 = mmc_unbox_integer(_smoothness);
  tmp3 = mmc_unbox_integer(_extrapolation);
  tmp4 = mmc_unbox_real(_shiftTime);
  tmp5 = mmc_unbox_integer(_timeEvents);
  tmp6 = mmc_unbox_integer(_verboseRead);
  tmp7 = mmc_unbox_integer(_nHeaderLines);
  _externalCombiTimeTable = omc_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor(threadData, _tableName, _fileName, *((base_array_t*)_table), tmp1, *((base_array_t*)_columns), tmp2, tmp3, tmp4, tmp5, tmp6, _delimiter, tmp7);
  /* skip box _externalCombiTimeTable; ExternalObject Modelica.Blocks.Types.ExternalCombiTimeTable */
  return _externalCombiTimeTable;
}

void omc_Modelica_Blocks_Types_ExternalCombiTimeTable_destructor(threadData_t *threadData, modelica_complex _externalCombiTimeTable)
{
  void * _externalCombiTimeTable_ext;
  _externalCombiTimeTable_ext = (void *)_externalCombiTimeTable;
  ModelicaStandardTables_CombiTimeTable_close(_externalCombiTimeTable_ext);
  return;
}
void boxptr_Modelica_Blocks_Types_ExternalCombiTimeTable_destructor(threadData_t *threadData, modelica_metatype _externalCombiTimeTable)
{
  omc_Modelica_Blocks_Types_ExternalCombiTimeTable_destructor(threadData, _externalCombiTimeTable);
  return;
}

#ifdef __cplusplus
}
#endif
