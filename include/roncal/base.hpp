/* TODO(MN): Enum for magic number
 * Exception
 * const, noexcept
 * Class diagram. Call model
 */

#pragma once

#include <string>
#include <cstdint>
#include <functional>


namespace ronia::voip
{

    class Call
    {
    public:
        using ID            = std::string;
        using OnIncoming    = std::function<void(const ID& id)>;
        using OnEstablished = std::function<void(const ID& id)>;
        using OnEnded       = std::function<void(const ID& id)>;
        using OnHold        = std::function<void(const ID& id, bool isHeld)>;

        virtual ~Call() = default;

        virtual void start() = 0;
        virtual void stop() = 0;
        virtual void registerAccount(const std::string& uri, 
                                const std::string& username, 
                                const std::string& password, 
                                uint32_t timeoutMS) = 0;

        virtual void makeCall(const std::string& uri, uint32_t timeoutMS = 30'000) = 0;
        virtual void answerCall() = 0;
        virtual void hangupCall() = 0;
        virtual void holdCall() = 0;
        virtual void unholdCall() = 0;

        virtual void setCallReceived(OnIncoming event) = 0;
        virtual void setConnected(OnEstablished event) = 0;
        virtual void setDisconnected(OnEnded event) = 0;
        virtual void setHoldChanged(OnHold event) = 0;

        virtual bool enableMicrophone(bool enable) = 0;
        virtual bool enableSpeaker(bool enable) = 0;
    };

}
