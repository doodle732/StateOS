#include "test.h"

static unsigned sent = 0;
static unsigned received = 0;

static void proc1()
{
	unsigned event;

 	event = evq_wait(&evq0, &received);          assert_success(event);
 	                                             assert(sent == received);
	        tsk_stop();
}

static void proc2()
{
	unsigned event;

	        sent = rand();
	event = evq_give(&evq0, sent);               assert_success(event);
	        tsk_stop();
}

static void test()
{
	unsigned event;
		                                         assert_stopped(tsk1);
	        tsk_startFrom(tsk1, proc1);
		                                         assert_stopped(tsk2);
	        tsk_startFrom(tsk2, proc2);
	event = tsk_join(tsk2);                      assert_success(event);
	event = tsk_join(tsk1);                      assert_success(event);
}

void test_event_queue_0()
{
	int i;
	TEST_Notify();
	for (i = 0; i < PASS; i++)
		test();
}