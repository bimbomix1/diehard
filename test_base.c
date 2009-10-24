#include "CuTest.h"
#include "dh.h"
#include <stdio.h>


/* TEST CREASCATOLA */

void test_should_fail_with_wrong_parameters(CuTest *tc){

	// int levels[3] = {5,2,3};
	// CuAssertTrue(tc,creacontenitore(2,levels));
	// levels[3] = {5,2,3};
	// CuAssertTrue(tc,creacontenitore(4,levels));
}







/* TEST CUTEST FRAMEWORK */

void test_assert_equal(CuTest *tc) {
    CuAssertIntEquals(tc, 2, 2);
    CuAssertIntNotEquals(tc, 2, 3);
}

void test_assert_Boolean(CuTest *tc) {
	CuAssertTrue(tc,1);
	CuAssertFalse(tc,0);
	CuAssert(tc,"",1); // Assert True con messaggio
	
}

void test_string_compare(CuTest *tc) {
	char* actual = "HELLO WORLD";
    char* expected = "HELLO WORLD";
    CuAssertStrEquals(tc, expected, actual);
}









CuSuite* creacontenitoreSuite() {
    CuSuite* suite = CuSuiteNew();
    SUITE_ADD_TEST(suite, test_should_fail_with_wrong_parameters);
	return suite;
}




CuSuite* cutestSuite() {
    CuSuite* suite = CuSuiteNew();
    SUITE_ADD_TEST(suite, test_assert_equal);
	SUITE_ADD_TEST(suite, test_assert_Boolean);
	SUITE_ADD_TEST(suite, test_string_compare);
	return suite;
}


CuSuite* StrUtilGetSuite();

void RunAllTests(void) {
    CuString *output = CuStringNew();
    CuSuite* suite = CuSuiteNew();
    CuSuiteAddSuite(suite, cutestSuite());
	CuSuiteAddSuite(suite,creacontenitoreSuite());
    CuSuiteRun(suite);
    CuSuiteSummary(suite, output);
    CuSuiteDetails(suite, output);
    printf("%s\n", output->buffer);
}

int main(void) {
    RunAllTests();
}



// 
// #define CuAssertStrEquals(tc,ex,ac)           CuAssertStrEquals_LineMsg((tc),__FILE__,__LINE__,NULL,(ex),(ac))
// #define CuAssertStrEquals_Msg(tc,ms,ex,ac)    CuAssertStrEquals_LineMsg((tc),__FILE__,__LINE__,(ms),(ex),(ac))
// #define CuAssertIntEquals(tc,ex,ac)           CuAssertIntEquals_LineMsg((tc),__FILE__,__LINE__,NULL,(ex),(ac))
// #define CuAssertIntEquals_Msg(tc,ms,ex,ac)    CuAssertIntEquals_LineMsg((tc),__FILE__,__LINE__,(ms),(ex),(ac))
// #define CuAssertDblEquals(tc,ex,ac,dl)        CuAssertDblEquals_LineMsg((tc),__FILE__,__LINE__,NULL,(ex),(ac),(dl))
// #define CuAssertDblEquals_Msg(tc,ms,ex,ac,dl) CuAssertDblEquals_LineMsg((tc),__FILE__,__LINE__,(ms),(ex),(ac),(dl))
// #define CuAssertPtrEquals(tc,ex,ac)           CuAssertPtrEquals_LineMsg((tc),__FILE__,__LINE__,NULL,(ex),(ac))
// #define CuAssertPtrEquals_Msg(tc,ms,ex,ac)    CuAssertPtrEquals_LineMsg((tc),__FILE__,__LINE__,(ms),(ex),(ac))
// 
// #define CuAssertPtrNotNull(tc,p)        CuAssert_Line((tc),__FILE__,__LINE__,"null pointer unexpected",(p != NULL))
// #define CuAssertPtrNotNullMsg(tc,msg,p) CuAssert_Line((tc),__FILE__,__LINE__,(msg),(p != NULL))

