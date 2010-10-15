/* Emacs: this is -*- C -*- code, */
/* generated 2010-10-15T18:36:04+10 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define ENVIRONMENT_LABEL_1_3 12
#define DEBUGGING_LABEL_1_2 11
#define EXECUTE_CACHE_1_6 9
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
procedures_and_processes_substitution_model_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_1_4);
      goto sos_2;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sos_5)
DEFLABEL (sos_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_7)
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_6;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd11.Lng) = ((Wrd13.Lng) + (Wrd15.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_6;
  Rvl = (LONG_TO_FIXNUM (Wrd11.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 5
#define DEBUGGING_LABEL_2_2 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
procedures_and_processes_substitution_model_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_2_4);
      goto sq_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sq_3)
DEFLABEL (sq_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_5)
  if (! ((Wrd8.uLng) == 26))
    goto label_4;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (multiply_with_overflow ((Wrd13.Lng), (Wrd13.Lng), (& (Wrd11.Lng))))
    goto label_4;
  Rvl = (LONG_TO_FIXNUM (Wrd11.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5 3
#define LABEL_6 5
#define LABEL_7 7
#define ENVIRONMENT_LABEL_3 16
#define DEBUGGING_LABEL_2 15
#define PURIFICATION_ROOT 14
#define OBJECT_2 13
#define OBJECT_1 12
#define OBJECT_0 11
#define GLOBAL_EXECUTE_CACHE_4 9
#define FREE_REFERENCES_LABEL_0 8
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
procedures_and_processes_substitution_model_so_793558316781276d (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_5);
      goto label_4;

    case 1:
      current_block = (Rpc - LABEL_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto expression_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_1)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_6])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_5)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_4)
  {
    static const short sections [] =
      {
	0,
	0,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 2)
      goto label_3;
    blocks = (current_block [OBJECT_2]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_5])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_3)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1]);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_4]));

INVOKE_INTERFACE_TARGET_4
}

static const struct liarc_code_S arr_decl_procedures_and_processes_substitution_model_so_793558316781276d [2] =
  {
    { "procedures_and_processes_substitution_model_so_code_1", 3, procedures_and_processes_substitution_model_so_code_1 },
    { "procedures_and_processes_substitution_model_so_code_2", 1, procedures_and_processes_substitution_model_so_code_2 }
  };

int
decl_procedures_and_processes_substitution_model_so_793558316781276d (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_procedures_and_processes_substitution_model_so_793558316781276d);
  return (0);
}

DECLARE_COMPILED_CODE ("procedures-and-processes-substitution-model.so", 3, decl_procedures_and_processes_substitution_model_so_793558316781276d, procedures_and_processes_substitution_model_so_793558316781276d)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_procedures_and_processes_substitution_model_so_data_793558316781276d [222] =
  "\x11\x05\x38\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82\x88\x22\x29\x21"
  "\x9c\x2b\xb8\x99\xbb\x88\xb3\xb0\x2a\xb2\x2a\x99\xb1\x0d\x99\x28"
  "\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x49\x2f\x68\x6f\x6d"
  "\x65\x2f\x6a\x70\x61\x62\x6c\x6f\x62\x72\x2f\x63\x6f\x64\x65\x2f"
  "\x73\x69\x63\x70\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x73\x2d"
  "\x61\x6e\x64\x2d\x70\x72\x6f\x63\x65\x73\x73\x65\x73\x2d\x73\x75"
  "\x62\x73\x74\x69\x74\x75\x74\x69\x6f\x6e\x2d\x6d\x6f\x64\x65\x6c"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x03\x03\x73\x71\x02\x06"
  "\x08\x81\x85\x02\x05\x06\x81\x85\x02\x04\x04\x84\x06\x07\x0d\x02"
  "\x07\x04\x83\x04\x03\x04\x04\x04\x73\x6f\x73\x05\x10\x64\x65\x66"
  "\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80"
  "\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
procedures_and_processes_substitution_model_so_data_793558316781276d (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_procedures_and_processes_substitution_model_so_data_793558316781276d [0]))), (sizeof (prog_procedures_and_processes_substitution_model_so_data_793558316781276d)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("procedures-and-processes-substitution-model.so", procedures_and_processes_substitution_model_so_data_793558316781276d)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("procedures-and-processes-substitution-model.so", "bdb9222dd05821bb")
