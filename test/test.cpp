/* TODO(MN): Tests of timeouts. Invalid uri, ...
 */

#include <memory>
#include <stdexcept>
#include <thread>
#include <chrono>
#include <gtest/gtest.h>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;
using namespace std::chrono_literals;


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

// TODO(MN): Use Fixture
static void setup(Call& call)
{
    ASSERT_NO_THROW(
        call->start();
    );
    ASSERT_TRUE(call->registerAccount("sip:701@192.168.0.100", "701", "pass", 1000));
}

TEST(call, not_existing)
{
    constexpr auto TEST_COUNT{3};
    auto call = make_unique<Call>();
    setup(call);

    EXPECT_NO_THROW(
        for (uint8_t index = 0; index < TEST_COUNT; index++) {
            EXCEPT_FALSE(call->makeCall("", 200);
            EXCEPT_FALSE(call->makeCall("invalid_uri", 200);
        }
    );

    EXPECT_NO_THROW(
        call->stop();
    );
}

TEST(call, existing)
{
    constexpr auto TEST_COUNT{3};
    auto call = make_unique<Call>();
    setup(call);

    EXPECT_NO_THROW(
        for (uint8_t index = 0; index < TEST_COUNT; index++) {
            EXCEPT_TRUE(call->makeCall("sip:700@192.168.0.100", 1000);
            sleep_for(1s);
        }
    );

    EXPECT_NO_THROW(
        call->stop();
    );
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
