#include <memory>
#include <stdexcept>
#include <gtest/gtest.h>

using namespace std;

TEST(creation, invalid)
{
    FAIL();
}

TEST(creation, valid)
{
    EXPECT_NO_THROW(
        auto call = make_unique<Call>();
        call->start();
        call->stop();
    );
}

TEST(register_account, without_pbx)
{
    EXPECT_NO_THROW(
        auto call = make_unique<Call>();
        call->start();
        EXPECT_FALSE(call->registerAccount("", "", "", 0);
        EXPECT_FALSE(call->registerAccount("", "", "", 10);
        EXPECT_FALSE(call->registerAccount("invalid_url", "wrong_user", "wrong_pass", 500);
        call->stop();
    );
}

TEST(register_account, with_pbx)
{
    EXPECT_NO_THROW(
        auto call = make_unique<Call>();
        call->start();
        EXPECT_TRUE(call->registerAccount("sip:701@192.168.0.100", "701", "pass", 1000);
        call->stop();
    );
}

TEST(call, not_existing)
{
    FAIL();
}

TEST(call, existing)
{
    FAIL();
}

TEST(hold, caller)
{
    FAIL();
}

TEST(hold, callee)
{
    FAIL();
}

int main()
{
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
