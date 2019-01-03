// begin ChromeProxy
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_TANGRAM_EVENT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_TANGRAM_EVENT_H_

#include "third_party/blink/renderer/core/dom/events/Event.h"

namespace blink {

class ScriptState;

class CORE_EXPORT TangramEvent : public Event {
  DEFINE_WRAPPERTYPEINFO();

public:
  static TangramEvent* Create() { return new TangramEvent; }

  static TangramEvent* Create(const AtomicString& event_type,
                              const String& channel,
                              const String& arg1,
                              const String& arg2);

  String channel();
  void setChannel(const String&);
  String arg1();
  void setArg1(const String&);
  String arg2();
  void setArg2(const String&);

  ~TangramEvent() override;

protected:
  TangramEvent();

  TangramEvent(const AtomicString& event_type, 
               const String& channel, 
               const String& arg1, 
               const String& arg2);

private:
  String channel_;
  String arg1_;
  String arg2_;

};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_PROGRESS_EVENT_H_
// end ChromeProxy