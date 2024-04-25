#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> 
#include <R_ext/Rdynload.h>

extern SEXP collapsedGibbsSampler(void *, void *, void *, void *, void *,
                                  void *, void *, void *, void *, void *,
                                  void *, void *, void *, void *, void *,
                                  void *, void *, void *);
extern SEXP cvb0(void *, void *, void *, void *, void *,
                 void *, void *);
extern SEXP nubbi(void *, void *, void *, void *, void *,
                  void *, void *, void *, void *);
extern SEXP rtm(void *, void *, void *, void *, void *,
                void *, void *, void *, void *, void *);

static const R_CallMethodDef CallEntries[] = {
    {"collapsedGibbsSampler", (DL_FUNC) &collapsedGibbsSampler, 18},
    {"cvb0",                  (DL_FUNC) &cvb0,                   7},
    {"nubbi",                 (DL_FUNC) &nubbi,                  9},
    {"rtm",                   (DL_FUNC) &rtm,                   10},
    {NULL, NULL, 0}
};

void R_init_lda(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}