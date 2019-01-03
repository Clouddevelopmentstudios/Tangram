// begin ChromeProxy
#include "chrome_proxy/blink/core/tangram_event.h"

namespace blink {

TangramEvent* TangramEvent::Create(const AtomicString& event_type,
                                   const String& channel,
                                   const String& arg1,
                                   const String& arg2) {
  return new TangramEvent(event_type, channel, arg1, arg2);
}

String TangramEvent::channel() {
  return channel_;
}

void TangramEvent::setChannel(const String& channel) {
  channel_ = channel;
}

String TangramEvent::arg1() {
  return arg1_;
}

void TangramEvent::setArg1(const String& arg1) {
  arg1_ = arg1;
}

String TangramEvent::arg2() {
  return arg2_;
}

void TangramEvent::setArg2(const String& arg2) {
  arg2_ = arg2;
}

TangramEvent::TangramEvent() : Event("", Bubbles::kNo, Cancelable::kNo) {

}

TangramEvent::TangramEvent(const AtomicString& event_type, 
                           const String& channel,
                           const String& arg1,
                           const String& arg2) 
  : Event(event_type, Bubbles::kNo, Cancelable::kNo) {
  channel_ = channel;
  arg1_ = arg1;
  arg2_ = arg2;
}

TangramEvent::~TangramEvent() = default;

}  // namespace blink
// end ChromeProxy