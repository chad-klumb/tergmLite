// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// shiftVec
NumericVector shiftVec(NumericVector elv, NumericVector vid);
RcppExport SEXP tergmLite_shiftVec(SEXP elvSEXP, SEXP vidSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type elv(elvSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vid(vidSEXP);
    rcpp_result_gen = Rcpp::wrap(shiftVec(elv, vid));
    return rcpp_result_gen;
END_RCPP
}