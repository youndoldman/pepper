#ifndef APPS_SFDL_HW_V_INP_GEN_HW_H_
#define APPS_SFDL_HW_V_INP_GEN_HW_H_

#include <libv/libv.h>
#include <common/utility.h>
#include <apps_sfdl_gen/fannkuch_v_inp_gen.h>

/*
* Provides the ability for user-defined input creation
*/
class fannkuchVerifierInpGenHw : public InputCreator {
  public:
    fannkuchVerifierInpGenHw(Venezia* v);

    void create_input(mpq_t* input_q, int num_inputs);

  private:
    Venezia* v;
    fannkuchVerifierInpGen compiler_implementation;

};
#endif  // APPS_SFDL_HW_V_INP_GEN_HW_H_
